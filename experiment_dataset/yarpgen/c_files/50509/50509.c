/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_10, var_8);
    var_17 = 1046;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [16] &= var_5;
        var_18 *= (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] |= ((var_3 / (arr_4 [i_3] [i_1])));
                        var_19 = var_12;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [5] [i_1 + 1] [i_1 + 3] = (((((var_7 ? 28927 : -28933))) * (((arr_12 [i_0] [i_0] [16] [i_4]) * var_3))));
                        var_20 |= ((var_12 ? (-32767 - 1) : (arr_11 [i_1 + 2] [i_1 + 2] [i_1 - 1])));
                        var_21 = (arr_6 [i_0] [i_1 + 4] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [4] [6] [i_0] [4] [i_0] = var_10;
                        var_22 = ((~(arr_18 [i_0])));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [13] [13] [8] [i_0] [4] = var_3;
                            var_23 *= 1391545346;
                        }

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_24 += (((arr_12 [1] [i_5] [i_5] [i_0]) <= (arr_12 [i_2] [i_5] [i_5] [i_5])));
                            var_25 = ((-((((arr_16 [i_0] [i_5] [i_2] [i_0]) <= (arr_4 [i_0] [i_2]))))));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_8] = (((!28940) / var_3));
                            var_26 = var_4;
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_27 *= (((arr_13 [i_0] [i_1 + 3] [i_2] [i_5] [i_9 + 1]) ? var_14 : 27496));
                            arr_34 [i_0] [i_0] [i_2] [i_0] [i_0] = var_14;
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_10] = (arr_17 [i_0] [i_1] [i_0] [2] [i_0]);
                            var_28 += -var_8;
                            var_29 = (((15393162788864 ? (-127 - 1) : 148)) - (arr_0 [i_10 - 1]));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_44 [16] [i_1] [i_0] [i_0] [i_1] = ((~(arr_8 [i_1 + 2])));
                            arr_45 [1] [1] [i_0] [i_0] [11] = var_11;
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_13] [i_0] [i_0] [i_0] [11] [i_0] = 38041;
                            var_30 = var_1;
                        }
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_11] [3] = (~18474);
                        var_31 = 38022;
                    }
                    arr_50 [i_0] [16] [i_0] = (arr_0 [1]);
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_56 [i_0] = ((~(~var_4)));
                                var_32 = ((-(arr_1 [i_15 + 3])));
                                var_33 = (arr_12 [i_0] [i_0] [i_0] [i_14]);
                            }
                        }
                    }
                }
            }
        }
        var_34 = (max(((-1854120820 ? (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 29282)), ((max((arr_18 [i_0]), (arr_18 [i_0]))))));
    }
    for (int i_16 = 3; i_16 < 14;i_16 += 1) /* same iter space */
    {
        arr_59 [16] = 113;
        var_35 &= 32766;
        arr_60 [i_16] [5] &= (min(((min((arr_4 [1] [i_16 + 3]), (((98 <= (arr_42 [i_16] [i_16] [i_16] [i_16] [i_16]))))))), (((arr_33 [i_16] [2]) ? (~var_9) : (arr_24 [i_16] [i_16] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 3] [12])))));
    }
    for (int i_17 = 3; i_17 < 14;i_17 += 1) /* same iter space */
    {
        arr_63 [2] [12] = -385223298;
        arr_64 [3] = (max((!var_4), (min((arr_23 [1] [i_17] [i_17] [i_17]), (min((arr_42 [i_17] [i_17] [8] [i_17] [i_17]), var_2))))));
        var_36 = (max((((var_5 <= (~var_5)))), (((27494 * (arr_32 [i_17] [i_17] [i_17]))))));
    }
    #pragma endscop
}
