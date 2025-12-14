/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [1] = ((2147483647 | (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = max((((((arr_4 [15]) + 2147483640)))), ((~(((-2147483647 - 1) - (arr_2 [7]))))));
                                var_16 = (~var_8);
                                arr_16 [i_2] [i_4] [i_2] [i_2] [i_2] = 9734311034764021433;
                                var_17 = (max(((max(1, (min((arr_11 [i_4] [i_3] [i_2] [i_1 - 1] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))))), ((~(max(var_4, var_0))))));
                            }
                        }
                    }
                }
                arr_17 [i_1 - 1] [i_0] = (((~(min(1164716451, -4696413782818318890)))));
                arr_18 [i_0 + 2] = (arr_2 [i_1]);
                var_18 = (((((((arr_2 [i_0]) == (arr_12 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))) <= (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))));
            }
        }
    }
    var_19 = (var_6 | -2147483647);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_31 [3] [5] [3] [i_7] [i_7] [i_5] = -2147483647;
                            arr_32 [i_5] [i_5] [i_5] [i_5] = (((((arr_14 [i_8 - 2] [i_6] [i_8] [i_6 + 2] [i_6] [i_6 + 2]) ? (arr_14 [i_8 - 2] [i_6] [7] [i_6 - 2] [7] [i_6]) : (arr_14 [i_8 - 2] [i_6] [i_7] [i_6 + 1] [i_5] [i_7]))) * ((((((arr_1 [i_5]) && (arr_3 [i_5] [i_5])))) >> (((((arr_4 [i_8]) ? (arr_27 [5] [i_5] [i_7]) : (arr_19 [i_7] [i_5]))) - 6206941948390037086))))));
                            arr_33 [i_5] [i_6] [i_6] [1] = (min((((((-1776620306084481173 + 9223372036854775807) >> 0)) ^ ((max(var_6, var_8))))), ((((arr_30 [i_5] [i_8]) || ((min(-2147483637, 4032))))))));
                            var_20 = ((min(var_0, (1667807773 - 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((9110773676009916590 ? ((((arr_21 [i_5] [i_6 + 1]) + (arr_21 [i_5] [i_6 + 3])))) : (max(-var_1, ((((arr_7 [i_10] [i_9] [i_6] [7]) / var_14))))))))));
                            var_22 = (max(var_22, ((((((((((arr_39 [i_6] [2]) ? (arr_12 [i_5] [i_6 + 3] [i_9] [i_10] [i_10]) : var_15))) ? var_15 : (max(var_12, var_3))))) | (max(-79, 9110773676009916606)))))));
                            var_23 = (max((min(5013345788923374326, (((~(arr_21 [i_9] [i_10])))))), var_4));
                            var_24 = (arr_35 [3] [i_5] [i_5] [i_5]);
                        }
                    }
                }
                arr_41 [i_6] [i_5] = var_14;
            }
        }
    }
    #pragma endscop
}
