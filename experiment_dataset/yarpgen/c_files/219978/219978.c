/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((var_9 > 1) / ((((arr_0 [i_0 + 1]) / (((32512 ? 4294967295 : 0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_12 = max((max((arr_9 [i_4] [i_1 - 1]), (arr_10 [i_0] [i_1] [i_4] [i_3 - 1] [i_4]))), 9);
                                var_13 = ((~(!2)));
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = (arr_2 [i_0]);
                                arr_13 [i_4] = ((((max((!var_11), ((var_10 / (arr_3 [i_0 - 1] [i_0 - 1])))))) ? ((~(arr_8 [i_4 - 3] [i_1 + 3] [i_0 - 1]))) : (arr_3 [i_0] [i_1 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_6, (((!((max(0, var_2))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((!((((((arr_15 [i_5]) ? 1101106737721753205 : 0))) || 9957588395843236194))));
                arr_21 [i_5] = (max((((~(arr_16 [i_6 + 1])))), 24));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {

                            for (int i_9 = 2; i_9 < 18;i_9 += 1)
                            {
                                var_15 = ((~(arr_24 [i_8 - 1] [i_8] [i_8] [i_9 + 1])));
                                var_16 = (~var_2);
                            }
                            for (int i_10 = 3; i_10 < 19;i_10 += 1)
                            {
                                var_17 = (max((((!(arr_17 [i_10 - 3])))), (arr_15 [i_10 + 1])));
                                var_18 = ((((max((arr_22 [i_8] [i_8 + 2] [i_7]), (arr_24 [i_6 - 1] [i_6 - 1] [i_6] [i_6])))) ? (max(-885881001, var_11)) : ((((arr_22 [i_8 - 1] [i_8] [i_8]) - (arr_28 [i_5] [i_6] [i_7] [i_7] [i_7] [i_8] [i_10]))))));
                                arr_30 [i_5] [i_5] [i_5] [i_5] &= ((((((arr_15 [i_8 - 1]) ? (arr_19 [i_10 + 1]) : (arr_16 [i_8 + 2])))) ? ((max(85, (!2099396763)))) : (arr_15 [i_5])));
                            }
                            for (int i_11 = 4; i_11 < 19;i_11 += 1)
                            {
                                var_19 = (max(var_19, (((((((((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) > var_0)) ? (((arr_25 [i_11] [i_8] [i_5]) & var_3)) : (arr_25 [i_5] [i_5] [i_11])))) ? (arr_19 [i_5]) : var_6)))));
                                var_20 = ((((((var_5 > var_11) & ((max((arr_16 [i_7]), (arr_14 [i_7]))))))) ? ((((max(var_8, 2082756175)) / var_9))) : 17815126311008748176));
                            }
                            for (int i_12 = 2; i_12 < 19;i_12 += 1)
                            {
                                var_21 = (max(var_21, var_5));
                                arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = (min((arr_18 [i_5] [i_5]), var_10));
                            }
                            arr_37 [i_5] [i_5] [i_5] [i_5] = (max((max((arr_14 [i_6 + 1]), (arr_29 [i_8] [i_8 + 2] [i_8] [i_6 + 1]))), (max(var_5, (arr_29 [i_8 + 1] [i_8 + 1] [i_6 + 1] [i_6 + 1])))));
                            var_22 = ((~(min((arr_25 [i_6 + 1] [i_8 + 2] [i_8 + 2]), (arr_14 [i_8])))));
                            var_23 = (min(((~(min((-9223372036854775807 - 1), var_11)))), (max((arr_14 [i_7]), (max((arr_32 [i_8 + 1] [i_6 + 2] [i_7] [i_6 + 2] [i_6 + 2] [i_5]), 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
