/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_3 + 1] [4] |= ((~(!var_1)));
                            var_16 = (min(var_16, ((((((-(arr_5 [i_2 + 1] [13])))) ? ((~((var_8 ? 16380 : var_6)))) : (!16370))))));
                            var_17 = (((((~((32768 ? -28274 : 28292))))) ? ((~((~(arr_7 [i_0] [i_1]))))) : ((var_0 ? (((arr_5 [i_0] [i_0 - 3]) ? 8411441552962682472 : var_1)) : ((var_13 ? 1694675930 : (arr_7 [i_0] [i_1])))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((~((((!(arr_8 [i_3] [i_0] [i_0])))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] |= ((2600291360 ? var_13 : (arr_5 [i_0 - 2] [i_0 + 1])));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((var_13 ? 16380 : (arr_1 [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_18 = ((~(((arr_4 [i_0 - 3]) ? (arr_4 [i_0 - 3]) : var_6))));
                                var_19 = ((~((17767 ? var_4 : var_6))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((2600291351 ? (((arr_0 [i_1]) ? 32754 : 16074262910219609320)) : var_2)))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_21 = ((16369 ? 55 : (arr_16 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 1])));
                    arr_21 [i_0] [11] [i_0] = ((0 ? var_2 : 32768));
                    var_22 = (min(var_22, var_4));
                    arr_22 [i_0] [i_1] [i_1] = (~1);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_23 ^= ((((((arr_20 [i_7] [i_1] [i_0 - 3] [i_0 - 3]) ? 0 : 62))) ? -18 : (arr_7 [i_1] [i_1])));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_24 ^= (~var_12);

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_8] [17] = (((arr_3 [i_0] [i_0 - 1]) ? ((var_0 ? (arr_24 [i_0 - 1] [i_1] [i_0]) : var_9)) : (!28061)));
                            var_25 = (max(var_25, (((-124 ? 0 : (arr_3 [i_0 - 3] [i_0 + 1]))))));
                        }
                        for (int i_10 = 4; i_10 < 16;i_10 += 1)
                        {
                            arr_34 [i_0] = (4294967291 ? 16355 : var_8);
                            var_26 ^= (arr_16 [i_0 - 3] [i_1] [i_10] [i_0 - 3] [i_10 - 1] [i_7] [i_8]);
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_27 = (!var_7);
                            var_28 = (arr_32 [i_0 - 1] [i_0 - 1] [i_0] [8]);
                            var_29 = -0;
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_30 = (~4294967295);
                            var_31 = (((arr_30 [i_0] [i_7] [i_0 - 2] [i_0] [i_0 - 2]) ? (arr_30 [8] [i_12] [i_0 - 2] [i_0 - 3] [i_0]) : (arr_18 [8] [i_0])));
                        }
                        var_32 = (min(var_32, (arr_26 [i_1] [i_0 + 1] [2] [i_1])));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_33 = (arr_24 [i_0 - 2] [i_0] [i_0]);
                        var_34 |= (4619068460505378026 ? ((((!(arr_24 [i_1] [16] [i_1]))))) : var_9);
                    }
                    arr_43 [i_7] [i_0] [i_0] = (~1774748268);
                }
            }
        }
    }
    #pragma endscop
}
