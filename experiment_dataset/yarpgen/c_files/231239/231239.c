/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((max((arr_7 [i_0 + 2]), 1)) <= (min((arr_7 [i_0 + 1]), -120))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = (arr_10 [i_0] [i_0] [i_3] [i_0]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] [10] = ((1 != (arr_3 [11] [i_2])));
                    var_15 += var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_16 = min(((min(((((arr_18 [i_5]) ? -113 : (arr_6 [i_5] [i_5] [i_6 - 1])))), -var_2))), (min(var_6, 1)));
                var_17 = (((1411356987 ? var_12 : ((min(20784, var_9))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_28 [i_7] [i_7] [i_7] [i_8] [i_7] = (max((1 + var_1), 3903234207440736119));
                            arr_29 [i_7] [i_6] [i_7] = -2147483647;
                            arr_30 [i_7] [i_6] [i_6] [i_6] = ((((max(var_11, (arr_12 [10] [i_7 + 1] [i_7] [9] [1])))) ^ (arr_14 [i_6] [i_6] [i_7] [i_7] [i_5] [i_5])));
                            var_18 = (arr_20 [7]);
                            var_19 = (min(var_19, (((((((min(-305350398, (arr_26 [i_8]))) <= (arr_7 [i_6 - 1])))) < (var_0 > var_10))))));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((var_7 >= (((!(((1 ? (arr_22 [i_9]) : 1)))))))))));
                                var_21 = (-3903234207440736119 ? 1 : 0);
                                var_22 = (min(var_22, ((max((((arr_9 [i_9] [i_10 + 1] [i_9] [i_9] [i_9]) ? (((-(arr_39 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1])))) : (max(8183773736896550841, var_0)))), (min((arr_36 [i_5 + 2] [i_6] [i_10 + 1] [i_10 + 1]), (arr_36 [i_5 - 1] [11] [i_10 + 1] [i_10]))))))));
                                arr_40 [i_5] = (~262550832);
                            }
                        }
                    }
                    arr_41 [14] [i_5] [i_5] [i_5] = var_4;
                }
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 16;i_14 += 1)
                            {
                                arr_49 [i_5] [i_5] [i_12 - 2] [i_13] [i_14] [i_6] [i_13] = (!-8793945538560);
                                arr_50 [i_5] [i_6] [i_6] [i_13] [i_13] [i_14] = (((1 == -25) ? -18446744073709551615 : (!1)));
                                var_23 = (max(var_23, (((-(arr_24 [i_6 - 1]))))));
                                arr_51 [i_5] [i_5] = (0 < -1432295296);
                            }
                            arr_52 [13] = (arr_35 [i_5] [i_13]);
                            var_24 ^= ((~(((var_13 >= 916787402) ? (arr_34 [i_12] [i_12] [i_12] [i_12 + 1]) : var_10))));
                            var_25 = (min(var_25, var_0));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_1, 31333));
    var_27 = var_4;
    #pragma endscop
}
