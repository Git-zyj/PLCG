/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = arr_6 [i_0] [i_2];
                            arr_10 [i_2] [i_2] [i_2] = var_13;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_20 *= (arr_11 [i_1] [i_1] [i_4] [i_5]);
                                var_21 = ((((min((arr_11 [i_1] [i_4 + 1] [i_6] [i_4]), (arr_11 [i_1] [i_4 - 1] [i_4] [i_4])))) ? ((-8888794138750126382 ? 28942 : 0)) : (arr_9 [i_0] [i_4 - 1] [i_5] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_29 [i_11] [i_10] [i_9] [i_8] [i_7] = (max(((((max(3738954271, var_5))) ? (0 > 210) : (arr_11 [i_7] [i_8] [i_9] [i_9]))), 5484));
                                var_22 = var_9;
                                var_23 = (arr_23 [i_7]);
                                var_24 = ((-(max(225, var_18))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_36 [i_7] [i_12] [i_12] [i_12] [i_8] = ((-((+(min((arr_12 [i_8]), 18446744073709551588))))));
                                arr_37 [i_7] [i_8] [i_9] [i_12] [i_13] [i_13] [i_13] = (2602590245255660543 < 0);
                                arr_38 [i_13] [i_12] [i_9] [i_8] [i_7] = (((arr_14 [i_7] [i_13] [i_9] [i_13] [i_13]) * 4));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_46 [i_8] [i_14] [i_9] = (min(25, 0));
                                arr_47 [i_9] [i_15] = (arr_44 [i_14 - 1] [i_14] [i_14 + 1] [i_9] [i_7]);
                                var_25 *= (max((max((arr_34 [i_9] [i_14] [i_9] [i_14] [i_15]), (arr_34 [i_7] [i_8] [i_9] [i_7] [i_15]))), (!-43)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_26 = 225;
                                arr_54 [i_7] [i_9] [i_16] [i_17] [i_17] = ((((arr_53 [i_17] [i_16] [i_16] [i_9] [i_16] [i_7]) ^ 7276255738964235549)));
                                var_27 = (max(var_2, (181523384 ^ 17719)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
