/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0 + 1] [i_0 - 1] = (~5020221393479619510);
        arr_5 [i_0] = ((7593950392084939784 << (-1346 + 1352)));
        arr_6 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_9 [i_1] = 1396;

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_2] = 13426522680229932106;
            arr_13 [i_1] [i_1] [i_1] = ((!(((214 ? var_0 : (arr_10 [i_2]))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_17 [i_3] = (13426522680229932106 ? ((1396 ? (-9223372036854775807 - 1) : 5020221393479619507)) : (arr_7 [i_3]));
        arr_18 [i_3] = 5020221393479619510;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_21 [i_4] [i_4] = -3676136204960604075;
        arr_22 [i_4] = (arr_8 [i_4]);
        arr_23 [i_4] &= ((!(((var_14 ? (arr_8 [i_4]) : -2223)))));
    }
    #pragma endscop
}
