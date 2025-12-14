/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? 86 : (max(((max(var_9, var_7))), (var_6 + var_13)))));
    var_19 |= ((-(~var_10)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max((((arr_0 [i_0 + 1]) * (arr_0 [i_0 + 1]))), (arr_0 [i_0 + 1])));
                arr_5 [i_0 + 1] = (((arr_0 [i_0]) > (((~(arr_2 [i_0 + 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] = (~5558586742538829596);
                                var_20 = (((arr_0 [i_0 - 1]) ? ((0 ^ (arr_0 [i_0 + 1]))) : (arr_0 [i_0 - 1])));
                                arr_15 [8] [i_1] [9] [i_3] [i_4 + 2] = (arr_9 [12] [12] [i_2] [i_4]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_20 [7] [7] [i_5] = (((arr_11 [i_0 + 1] [i_0] [i_1] [i_1] [i_5]) ? (((((max((arr_0 [i_5]), (arr_7 [i_0] [i_0] [i_1] [i_5])))) * ((~(arr_0 [7])))))) : (((arr_12 [i_5] [i_5]) * ((((arr_1 [i_0 + 1]) / (arr_16 [14] [i_1] [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_25 [i_0 - 1] [i_1] [i_5] [i_1] = (((arr_13 [i_7] [1] [i_1] [i_0]) % (arr_1 [i_5])));
                                arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [5] [i_0 + 1] [i_7] = max((((arr_17 [i_0 + 1] [i_0] [i_0 - 1]) + (arr_17 [i_0 - 1] [8] [i_0 + 1]))), (((arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_17 [i_0 - 1] [i_0] [i_0 - 1]))));
                                var_21 = (min(var_21, (arr_23 [i_0] [i_1] [i_5] [i_6] [i_7])));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((~((((((arr_1 [i_0]) * 33101))) ? (min((arr_23 [6] [6] [5] [6] [2]), (arr_12 [i_5] [i_1]))) : (max((arr_8 [14] [i_1] [i_1] [14]), -13593))))));
                }
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_22 = (arr_33 [i_8 + 3] [i_0]);
                                var_23 = arr_11 [i_10 + 1] [i_8 + 4] [i_0 - 1] [i_0] [i_0 - 1];
                            }
                        }
                    }
                    arr_35 [i_0] [i_8] = (max(((-(arr_30 [i_0] [i_0] [i_8]))), (((min((arr_19 [i_1] [i_0]), (arr_31 [i_1] [i_1] [i_1] [i_1]))) / 18446744073709551615))));
                }
            }
        }
    }
    #pragma endscop
}
