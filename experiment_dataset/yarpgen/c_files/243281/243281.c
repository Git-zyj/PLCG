/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_18 ^= ((arr_1 [i_0 - 2]) / var_2);
        var_19 *= ((~(((arr_1 [i_0]) ? var_17 : (-127 - 1)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 *= ((((max((arr_0 [i_1]), ((((arr_2 [10] [i_1]) - var_17)))))) ? ((((3052104041294951656 ? var_0 : 6)) / -111)) : (((min((arr_3 [i_1]), 61445))))));
        var_21 = (((-((-110 ? 148 : (arr_3 [i_1]))))) / var_2);
        var_22 = (((max(var_14, (~64))) / -116));
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_23 = (((max((min(144, (arr_0 [i_2]))), -22)) > ((min(((-1 ? var_0 : (arr_1 [i_2]))), ((max((arr_1 [i_2]), (arr_5 [i_2])))))))));
        arr_7 [i_2] = (min(var_6, (~14768888007537661495)));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_24 = (min(var_24, (((-(max(var_0, (arr_11 [2]))))))));
        var_25 = (min(var_25, (arr_9 [i_3] [4])));
        var_26 = (arr_10 [i_3]);
        var_27 ^= -112;
    }
    #pragma endscop
}
