/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((127 / 220) ? -220 : 536805376));
    var_21 = 8491428586388579646;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_1 [i_0]);
        var_22 -= ((((-(arr_1 [i_0]))) | (((arr_0 [i_0]) / (max(252, (arr_1 [i_0])))))));
        var_23 = ((~(((max((arr_1 [i_0]), 68))))));
        var_24 = (max(var_24, ((max(((((max(8491428586388579647, (arr_0 [i_0])))) ? -74 : (max((arr_0 [i_0]), 524287)))), 4294967275)))));
        var_25 = (max(-3758161920, 236522933));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_26 = ((2147483647 ? 2305561534236983296 : ((((((~(arr_0 [11])))) ? ((~(arr_4 [i_1] [i_1]))) : ((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [2])))))))));
        var_27 = -1409032911;
        var_28 = (max(var_28, ((max(((-((-(arr_1 [i_1]))))), (((((((arr_1 [i_1]) + (arr_3 [1])))) ? (arr_0 [8]) : 4294967295))))))));
        var_29 = ((((arr_3 [i_1]) & (arr_1 [i_1]))));
        var_30 = (~3758161919);
    }
    #pragma endscop
}
