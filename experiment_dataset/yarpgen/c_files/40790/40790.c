/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18089790844076557187;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (!var_7);
        arr_2 [i_0] |= ((!(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((var_10 - var_1) ? ((17 ? -439013696 : 40)) : (((arr_0 [i_0]) ? var_6 : var_11)));
    }
    var_15 = ((((-6400536174646782242 ? (min(var_8, var_9)) : var_0))) ? -821231951 : ((((var_5 ? var_3 : var_12)) / (max(var_5, var_9)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                arr_10 [i_1] = max((min((max(var_10, var_1)), ((((arr_4 [i_1] [i_1]) ? var_11 : var_2))))), (((var_11 ? (arr_0 [i_1]) : (min((arr_8 [i_1] [i_1]), (arr_6 [i_2])))))));
                var_16 = (!((max((max(var_9, -301086461)), ((max((arr_6 [1]), var_8)))))));
                var_17 -= (arr_4 [i_1] [2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_18 = var_6;
                            arr_16 [i_3] [i_3] [i_4 + 1] &= ((var_11 ? (((arr_12 [i_1] [i_2] [i_3] [i_3]) ? var_9 : var_3)) : var_4));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_19 = (min(var_19, (67108863 / 4438457407467202078)));
                            arr_27 [i_5] [i_5] = 482;

                            for (int i_9 = 2; i_9 < 8;i_9 += 1)
                            {
                                var_20 = 0;
                                var_21 = (min(var_21, var_7));
                                arr_31 [i_5] [i_6] [i_6] [i_7] [i_8 + 1] [i_5] = (-var_7 > var_1);
                            }

                            for (int i_10 = 0; i_10 < 10;i_10 += 1)
                            {
                                var_22 += (max((((var_9 | (max(1334746678, (arr_8 [i_5] [i_6])))))), (arr_19 [i_8] [i_8])));
                                var_23 = ((arr_32 [i_8 - 1] [i_8] [i_8 - 4] [i_8] [i_10] [i_8 - 3]) ? (max((((arr_21 [i_10] [i_7] [i_6] [i_5 - 3]) | 3962666586)), ((max((arr_24 [i_10] [i_8] [i_7]), (arr_19 [1] [i_7])))))) : ((((~var_0) * (arr_1 [i_5 - 2])))));
                            }
                        }
                    }
                }
                arr_35 [i_5] [i_6] [i_6] = ((((min((arr_18 [i_5]), ((((arr_20 [i_6] [i_5 - 1] [i_5]) ? -8800 : var_11)))))) ? var_7 : (max(((((arr_15 [i_5] [i_6] [i_5] [i_5]) ? var_0 : 29769))), (((arr_26 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6]) ? (arr_28 [i_5 + 1]) : (arr_22 [i_5] [i_5])))))));
            }
        }
    }
    #pragma endscop
}
