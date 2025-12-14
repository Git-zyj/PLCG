/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 *= (~2214399212);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_20 = (max(var_20, (arr_0 [i_3] [4])));
                        var_21 &= ((var_4 ? var_1 : (15177852748620384330 / 14692231706408214179)));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_22 = (arr_9 [i_0]);
                        var_23 *= max(136094355, 0);
                        var_24 *= (arr_12 [i_1] [i_1 + 1] [i_2] [i_2] [i_2] [i_1 + 1]);
                        arr_14 [i_4] [i_2] [i_0] &= (min(17592186044412, (max((arr_4 [6] [i_2] [i_1 + 1]), (arr_6 [i_2] [i_2])))));
                        var_25 = (((((((max(838779858848010863, 627))) ? (arr_8 [2] [i_0] [i_1 + 2] [i_1 + 1]) : 15177852748620384330))) ? (max(var_8, 643546512)) : (((((min(-5, 21))) ? var_15 : var_1)))));
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_26 = (!136094355);
                        arr_18 [i_0] [i_1] [i_1 + 1] = ((!(((var_7 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : 643546532)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] [8] [8] &= (3368136211 & 4294967279);
                                arr_26 [i_0] = (max((min(0, 2101853670)), (((arr_9 [i_0]) ? (min(var_10, (arr_12 [i_0] [6] [i_2] [i_0] [i_0] [1]))) : (32767 && var_9)))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (var_10 ? (((arr_16 [i_0] [i_0] [i_0] [i_0]) ? (((arr_6 [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [9] [i_0]) : 150)) : (arr_17 [i_0] [i_0]))) : (((((3139 ? var_16 : (arr_9 [i_0])))) ? var_3 : 1529866294)));
        arr_27 [4] &= (((~1) ? (arr_16 [10] [0] [i_0] [i_0]) : (((((max(-1132358950, 0)) > 2147483647))))));
        var_28 = arr_11 [0] [i_0] [0] [i_0] [i_0];
    }
    var_29 = (max(2873907758, var_6));
    var_30 *= 190016131;

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_31 = (min(var_31, (arr_28 [i_8])));
        var_32 = (max(var_32, (arr_28 [i_8])));
    }
    #pragma endscop
}
