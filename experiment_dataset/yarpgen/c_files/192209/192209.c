/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_10));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_14 += ((((((arr_5 [i_1 - 4] [i_1 - 4]) ? (arr_5 [i_1 - 2] [12]) : var_9))) ? (((var_8 ? var_3 : (arr_2 [i_1 - 3])))) : (arr_3 [7])));
                arr_7 [i_0 - 1] = (arr_5 [i_1] [i_0 + 1]);
                arr_8 [11] = ((((max((arr_5 [i_0 + 1] [i_1]), (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1])))) ? (min(var_10, var_9)) : (((var_8 ? (arr_0 [i_0 + 1] [i_1]) : var_11)))));
                arr_9 [i_0] [i_0] [8] = (max(0, 215));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_15 ^= (1758233223 + 3029526098);
        var_16 = var_3;
        var_17 = ((((min((arr_11 [i_2]), var_6))) ? (((var_2 ? (arr_11 [i_2]) : var_1))) : (((arr_11 [i_2]) ? (arr_10 [i_2] [i_2]) : var_10))));
    }
    #pragma endscop
}
