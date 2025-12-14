/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 += ((!(((arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_3 - 4] [i_3 - 1] [i_4]) > (arr_10 [i_3 - 4] [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_3 - 1] [i_4])))));
                                var_18 = (min((max((((-(arr_3 [i_3])))), (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 - 3]))), ((5377368525005767222 ? 2149414154612531025 : ((5377368525005767222 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 16297329919097020590))))));
                                var_19 = arr_8 [i_0] [i_2] [i_3 - 2] [i_3 - 2];
                                var_20 = (max(var_20, (((~((-var_7 ? 5377368525005767215 : (((-32767 - 1) ? var_0 : (arr_2 [i_0] [i_0]))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 ^= (((((min((arr_6 [i_7] [i_5 + 3] [i_5 + 2] [i_6 + 1]), (min((arr_4 [i_7]), var_10)))) + 9223372036854775807)) >> ((((((arr_16 [i_6] [i_1] [i_1] [i_6] [i_1] [i_7]) && var_9)) && (((0 ? (arr_16 [i_0] [i_1] [i_5 + 3] [i_1] [i_5 + 3] [i_0]) : (arr_7 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_22 = (((var_4 + 2147483647) << (((var_6 + 3424184725443467600) - 24))));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_23 |= (arr_23 [i_0] [i_0] [i_0] [3]);
                                var_24 = (max((min(((((arr_24 [i_9] [i_1]) * (arr_20 [0] [i_1])))), var_5)), (arr_21 [i_9] [i_8] [i_0])));
                                var_25 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_0] [i_1] [i_0] = ((((arr_17 [i_0] [i_1] [i_0] [i_1] [i_10]) ? ((~(arr_18 [i_8] [i_9] [i_0] [i_0] [i_1] [i_0]))) : (max((arr_26 [i_0] [i_9]), 3)))));
                            }
                        }
                    }
                    arr_28 [1] [2] [i_0] [i_8] = ((-(arr_1 [0] [i_8])));
                }
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    var_26 *= (arr_23 [i_0] [i_0] [i_1] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 = (arr_16 [i_0] [i_1] [i_0] [i_11 - 2] [i_0] [i_13]);
                                var_28 = ((((var_12 ? (arr_35 [i_0]) : (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) << 39)))) * ((max((((arr_5 [i_12]) ? (arr_34 [i_13] [i_12] [i_11 - 1] [i_1] [i_1] [i_0]) : (arr_0 [i_0] [i_0]))), 5377368525005767238)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 &= (!var_1);
    #pragma endscop
}
