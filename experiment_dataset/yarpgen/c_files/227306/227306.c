/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_0 - 1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_2] [19] [i_0] [i_0 - 1] |= 47723;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [18] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] |= ((!(((+(((arr_5 [i_0] [i_0]) - 83)))))));
                                var_17 = (min(var_17, (~-11)));
                                var_18 = ((~(arr_11 [i_3] [i_3])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_19 = (119 * 18446744073709551615);
                    var_20 = (min(var_20, (arr_9 [i_1] [i_1] [i_1])));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_21 = 17813;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((min(((-(arr_16 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1]))), (2717 * 0))))));
                                var_23 += ((-(arr_15 [i_0] [i_0] [i_8])));
                                var_24 = (arr_12 [i_0] [i_0 - 1]);
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_25 *= (arr_18 [i_9] [i_1] [i_0] [i_0]);
                    var_26 = ((17813 - ((-(arr_3 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_27 = (((((-(max(6872111752156420500, 0))))) ? 0 : 9007199254740960));
                                var_28 += (min((max((arr_27 [i_0 + 2]), var_1)), (0 / 9223372036854775807)));
                                var_29 *= ((((max((~0), (arr_29 [i_0] [i_0] [i_0 - 1] [i_10 + 1])))) ? 0 : (arr_30 [i_11] [i_10 + 1] [i_9] [i_1] [i_0])));
                            }
                        }
                    }
                }
                arr_35 [i_0] = ((((!(((16690103790828084470 ? (arr_30 [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_14 [i_0 - 1] [i_0] [i_0] [i_1])))))) ? (((((18446744073709551615 ? (arr_20 [i_0] [i_0] [i_1] [i_1]) : var_9))) ? ((max((arr_4 [i_0] [i_0] [i_0]), 127))) : 113)) : 47723));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_30 = (((max(-2631762766502032774, 47723))) ? (((2032 + (arr_14 [i_0] [14] [i_0] [i_13])))) : (max(((17813 ? 8323467362274141837 : 37838)), var_15)));
                            var_31 = ((-(min(var_1, (((var_12 - (arr_21 [i_0] [i_13] [i_12] [i_1]))))))));
                            arr_40 [i_0 + 1] [i_13] [i_1] [i_12] [i_13] = 30336;
                            arr_41 [i_0] [i_0] [i_0] [i_1] |= (arr_15 [i_0 + 1] [1] [i_12]);
                        }
                    }
                }
            }
        }
    }
    var_32 |= 1;
    #pragma endscop
}
