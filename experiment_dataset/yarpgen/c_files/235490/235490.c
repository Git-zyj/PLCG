/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 ? (((((((var_0 ? 1 : var_3))) != var_2)))) : (min(-1, var_9))));
    var_11 = -var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (~var_1);
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_5] [i_4] [i_5] [i_3] [i_2] = (arr_13 [9] [9] [i_3] [i_4 + 2] [i_3]);
                            var_13 ^= ((-(var_1 ^ var_2)));
                        }
                        var_14 = (max(var_14, (((var_9 << ((((((!1) != (min(var_5, var_1))))) - 1)))))));
                    }
                }
            }
        }
        arr_18 [i_1] = ((var_6 << (((var_3 + 24204) - 26))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_15 = (min(var_15, (((-var_1 + (((var_8 ? (arr_12 [i_1] [i_6] [i_7 - 1]) : (arr_12 [i_1] [i_6] [i_7 + 1])))))))));
                    arr_23 [i_6] [i_7] [i_7] [i_1] = ((((~(arr_5 [i_1] [10])))) || var_8);
                    var_16 = ((~((((((arr_6 [4] [i_6]) <= var_4)) && (var_1 ^ var_0))))));
                    arr_24 [i_6] = ((max(var_8, (~var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_41 [i_8] [12] = (max((((arr_40 [i_12 + 3] [i_12 - 1] [i_12] [i_12 + 1] [12]) | (arr_40 [i_12 + 3] [i_12 - 1] [i_12] [i_12 + 1] [i_12]))), -var_8));
                                arr_42 [i_8] [4] [i_8] [i_8] [i_8] [i_8] [4] = ((var_5 ? ((((arr_26 [i_12 + 3]) < ((var_2 ? var_5 : var_5))))) : var_4));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 4; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_17 = (max(((246 ? (((var_8 ? 52157 : var_0))) : -16)), (((var_6 ? (arr_51 [i_8] [i_15] [i_13 - 1]) : ((min(var_6, var_5))))))));
                                arr_53 [i_8] [i_8] = 13378;
                                arr_54 [i_8] [i_14] [13] = (i_8 % 2 == 0) ? ((max((((((1 >> (((arr_39 [8] [1] [i_13] [i_8] [i_15]) - 42071))))) ? (((-98 + 2147483647) << (((var_3 + 24178) - 5)))) : (~var_6))), (max((((arr_30 [i_8] [i_9] [i_13] [i_15]) ? 173 : var_3)), var_7))))) : ((max((((((1 >> (((((arr_39 [8] [1] [i_13] [i_8] [i_15]) - 42071)) + 33336))))) ? (((-98 + 2147483647) << (((var_3 + 24178) - 5)))) : (~var_6))), (max((((arr_30 [i_8] [i_9] [i_13] [i_15]) ? 173 : var_3)), var_7)))));
                                arr_55 [i_8] [i_9] [3] [i_14] [i_15] = ((-(((var_7 / var_9) ? (1 | 174) : var_6))));
                            }
                        }
                    }
                }
                var_18 = (((((-(var_5 / 252)))) / (((arr_50 [i_8] [0] [i_8] [i_8]) / ((max(var_5, var_7)))))));
            }
        }
    }
    #pragma endscop
}
