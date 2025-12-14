/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((!(((max(var_0, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] = ((~(((arr_10 [i_3] [i_0] [i_2] [i_2] [i_0 + 1]) ^ (-127 - 1)))));
                            var_16 = (max((((!(arr_7 [i_0 + 1] [i_3] [i_2] [i_3])))), var_2));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_17 = (((-(arr_10 [i_4] [i_0] [i_0 + 1] [i_0] [i_4]))) != ((max(-25, (arr_10 [i_4] [i_0] [i_0 + 1] [i_0] [i_4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 *= arr_18 [i_0 + 1];
                                arr_24 [i_0] [i_0] [i_4] [i_4] = ((!(arr_22 [i_6] [i_5] [i_4] [i_5 - 1] [i_4] [i_0 + 1] [i_0])));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_10 [i_4] [i_5] [i_4] [i_1] [i_4]);
                                arr_26 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] = ((((-(arr_2 [i_5 + 1]))) >= 18446744073709551601));
                            }
                        }
                    }
                    var_19 = (arr_16 [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_33 [i_7] |= ((274877841408 ? (((arr_21 [i_0] [i_1] [i_7] [i_8] [i_7 - 1] [i_0 + 1]) * (arr_21 [i_0] [i_1] [i_1] [i_7] [i_7 - 4] [i_0 + 1]))) : (arr_13 [i_0] [i_0 + 1] [i_8])));
                                arr_34 [i_0] [i_1] [i_1] [i_4] [i_7] [i_8] = ((((min((arr_1 [i_0 - 1] [i_7 - 2]), (arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])))) ? (arr_7 [i_7 - 1] [i_1] [i_0] [i_0 - 1]) : (!42)));
                            }
                        }
                    }
                }
                arr_35 [i_0] [i_1] = ((((((2147483647 - (arr_31 [i_0] [i_0] [i_0] [i_1] [i_1])))) ? (var_8 || var_8) : (~629803159))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_46 [i_9] [i_9] [i_9] [i_10] [i_11] [i_12] = (((((arr_27 [i_9] [i_10] [i_11] [i_9] [i_10] [i_9]) > (arr_31 [i_9] [i_10] [i_10] [i_11] [i_12]))) ? (arr_3 [i_9] [i_11]) : (((arr_30 [i_11 - 1]) ? (arr_30 [i_11 + 2]) : (arr_30 [i_11 + 1])))));
                            arr_47 [i_9] [i_10] [i_9] [i_12] = (((((var_5 & (arr_15 [i_11 + 1] [i_11] [i_10])))) && (arr_36 [i_11 + 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_53 [i_9] [i_9] [i_10] [i_10] [i_13] [i_14] = (((((((arr_21 [i_9] [i_10] [i_10] [i_13] [i_13] [i_14]) ? var_3 : 1152921504606322688))) ? (((arr_50 [i_9] [i_13]) ? (arr_4 [i_9] [i_10] [i_13]) : (arr_29 [i_14] [i_13] [i_13] [i_10] [i_9] [i_9]))) : (arr_32 [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13]))) <= (arr_38 [i_10] [i_14]));
                            var_20 = (max(var_20, ((((arr_38 [i_14] [i_10]) ? (arr_17 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_14] [i_14]) : 0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
