/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += (7240390169855548582 ? (min(-7240390169855548582, 2737890388)) : 7240390169855548570);
        var_15 |= ((var_0 ? 7240390169855548582 : 7240390169855548595));
    }
    var_16 = (-7240390169855548583 > -1);
    #pragma endscop
}
