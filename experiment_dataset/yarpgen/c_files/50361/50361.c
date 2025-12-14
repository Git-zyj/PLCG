/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((arr_1 [i_0 - 1]) ? -32033 : 62))) ? (arr_2 [i_0]) : ((104 ? var_0 : (arr_2 [i_0])))));
                arr_6 [i_0] = (min(((((((1 ? 88 : var_0))) ? ((min(1, 1))) : (!var_13)))), ((var_11 ? (arr_0 [i_0 - 1]) : (arr_4 [i_1 - 2] [i_1 - 1] [i_0 - 1])))));
            }
        }
    }
    var_17 = var_6;

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_18 = (min(var_18, (((((!(((68 ? 1 : 15957038590323324158))))) ? var_13 : ((min(-17697, 47))))))));
        var_19 = (max(var_19, (arr_7 [4])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_20 |= (((13873269131263201424 - var_11) / (((arr_19 [i_6 + 1] [i_2] [i_4] [i_3] [i_6] [i_2 + 2]) ? (arr_19 [i_6 - 1] [i_3] [i_4] [i_5] [i_2] [i_2 + 1]) : 209))));
                                arr_20 [i_2] = (arr_7 [i_2]);
                            }
                        }
                    }
                    var_21 = (max(var_21, 2540123824));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_23 [i_7] = ((~(arr_11 [i_7 - 1] [i_7 - 1] [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, 36821));
                                var_23 = (min((((arr_30 [i_10] [i_7] [i_10]) ^ (arr_19 [i_10 - 3] [i_10 - 2] [i_7 + 3] [i_7 + 3] [i_7] [i_7]))), ((min((arr_30 [i_10] [i_7] [i_10]), (arr_8 [i_10]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_24 -= (min(17676, 4));
                                var_25 -= 18446744073709551615;
                                var_26 = -4147237746;
                                arr_42 [i_13] [i_8] [i_9] [i_12] [i_13] = (((~-17676) ? ((~(arr_35 [i_7] [i_13] [i_9] [i_12] [i_7 + 2]))) : (((var_12 ? (arr_38 [i_12 + 1] [i_12] [i_12] [i_12 - 1] [i_12 - 2] [i_12]) : var_0)))));
                                arr_43 [i_7] [i_13] [i_8] [i_8] [i_9] [i_12] [i_13] = (((-((-4 ? 11092 : 18446744073709551615)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
