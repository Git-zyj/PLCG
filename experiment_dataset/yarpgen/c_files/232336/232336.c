/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = var_12;
        arr_3 [i_0] [12] = (9343 - 687372360);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 &= (((arr_2 [i_1] [i_1]) ? var_10 : ((var_1 ? var_11 : 4323455642275676160))));
        arr_7 [5] [i_1] = (((arr_4 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_4 [i_1] [i_1])));
    }
    var_17 = (((min(6733, 6733))));
    var_18 = (6736 || 6730);
    var_19 &= (min(4028329604, 68));
    #pragma endscop
}
