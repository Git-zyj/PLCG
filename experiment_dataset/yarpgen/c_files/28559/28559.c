/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((!64009) ? (arr_0 [i_0]) : (arr_1 [7] [i_0]));
        arr_2 [15] = ((68652367872 ? ((-68652367872 ? (((-2147483647 - 1) ? 17931 : 1201186302)) : (-127 - 1))) : -950509689));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_3 [6]) ? (arr_3 [15]) : -2044347993));
        var_16 = (arr_4 [0]);
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
    }
    var_17 = var_2;
    var_18 &= var_14;
    #pragma endscop
}
