/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = -7922;
        var_16 = ((((5343890787970341053 ? -12316 : (arr_1 [i_0]))) * (13149301306713670379 == 22996)));
        var_17 += ((var_6 >= (arr_1 [14])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_1 + 1]);
        var_19 = 27885;
    }
    var_20 = var_5;
    #pragma endscop
}
