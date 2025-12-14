/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 -= (arr_2 [4]);
        arr_3 [2] = ((var_5 ? var_1 : -61));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (+-61);
                    var_19 = (min((arr_2 [i_2 - 1]), var_11));
                    var_20 = (max(var_20, (((var_14 ? 61 : (((((arr_6 [i_0] [i_0] [i_1 + 2]) ? (arr_5 [i_0] [i_1] [i_2 + 2]) : var_0)))))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = ((((!219) ? (arr_7 [i_2 + 2] [i_1 + 3] [i_0] [10]) : (-27542 & -73))));
                        arr_15 [2] [i_1] [i_1] [i_3] [i_3] = var_10;
                        var_22 = (((((((!134) ? ((var_13 ? var_8 : 61)) : var_0)) + 2147483647)) >> (var_7 + 10966)));
                    }
                }
            }
        }
        var_23 = var_2;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_24 ^= var_15;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_25 = (((((max(var_5, 134)))) && var_14));
                    var_26 = var_16;
                }
            }
        }
        var_27 ^= 13;
        var_28 = ((((114 | ((var_9 ? 134 : var_4)))) | var_4));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        var_29 *= ((-var_14 ? (((var_2 == (arr_23 [i_7] [i_7] [i_7])))) : var_7));
        var_30 = ((~(arr_25 [i_7] [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    arr_32 [i_8] [i_8 - 2] = -4157;
                    arr_33 [i_7 + 1] [i_8] [i_8] [i_8] = (((var_4 + 104) < var_14));
                    var_31 = (max(var_31, var_4));
                    var_32 = arr_23 [i_9] [i_8] [6];
                }
            }
        }
    }
    #pragma endscop
}
