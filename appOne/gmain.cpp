#include"libOne.h"
void gmain() {
    window(1000, 1000);
    float rx = 5, ry = 5;
    float bx = 7, by = 7;
    while (notQuit) {
        bx = mathMouseX;
        by = mathMouseY;
        float vx = bx - rx;
        float vy = by - ry;
        float mag = sqrt(vx * vx + vy * vy);
        float nvx = vx / mag; //íÍï”ÅÄéŒï”
        float nvy = vy / mag; //çÇÇ≥ÅÄéŒï”
        rx += nvx * 0.01f;
        ry += nvy * 0.01f;
        clear(200);
        mathAxis(9.1f);
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);

        strokeWeight(20);
        stroke(255, 0, 0);
        mathPoint(rx, ry);
        strokeWeight(20);
        stroke(0, 0, 255);
        mathPoint(bx, by);
        textSize(50);
        //textInfo
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + "," + nvy + ")", 0, 150);
        mag = sqrt(nvx * nvx + nvy * nvy);
        text((let)"nmag:" + mag, 0, 200);

    }
}
