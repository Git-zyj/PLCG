/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((1 ? var_1 : (var_8 != var_2))), (max(var_1, var_4))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 1941842002;
        var_13 = (-((~(arr_0 [i_0 - 1]))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = var_4;
                    var_14 = arr_10 [i_1] [i_1] [i_3];
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_15 = var_11;
                            arr_22 [i_1] [i_4] = (arr_5 [i_1]);
                        }
                    }
                }
            }
            var_16 = (max(var_16, ((((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1]) ? (arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (min((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]), var_1)))))));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_17 *= ((var_3 | ((max(var_6, 1)))));
            arr_25 [i_8] [i_8] [i_1] = ((-(((arr_5 [i_1]) ? -1941842002 : (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_18 = (max(var_18, var_9));
                            var_19 = (max(var_19, ((((((var_8 ? (((var_1 ? var_7 : -4235027190850857071))) : (min(var_1, (arr_6 [i_10])))))) ? (arr_10 [i_1 + 1] [i_1 + 1] [i_8]) : (max((arr_5 [i_8]), (max(2114407135482528506, (arr_6 [i_10]))))))))));
                        }
                        arr_33 [i_1] = (max(((max(((1941842022 ? 1 : -30391)), 1))), ((max((arr_19 [i_1] [i_1] [i_9] [i_1] [i_10] [i_10]), (arr_21 [3] [3] [i_9] [i_10] [i_8] [i_1]))))));
                        arr_34 [i_8] |= (arr_20 [i_1 + 1] [i_8] [i_9]);
                    }
                }
            }
            var_20 = (min(var_20, var_10));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((!3414368298060712589) ? var_0 : ((((arr_17 [i_1] [i_13] [i_14]) != (((992523576 ? var_8 : (arr_23 [i_12] [i_12] [7]))))))))))));
                            var_22 = (max(var_22, (arr_13 [i_8] [i_12] [i_14])));
                            arr_41 [i_1] [i_8] [i_12] [i_1] [i_13] [i_14] = (-var_11 | 1);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 13;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                arr_52 [i_1] [i_18] [i_1] [i_1] = ((max((!3434684540), (((arr_35 [i_1] [i_15] [i_15] [i_15]) && (arr_27 [i_1] [i_16] [i_17] [i_18]))))) ? var_9 : (arr_44 [i_17] [i_18]));
                                arr_53 [i_1] [i_15] = (((var_2 / ((min(var_5, -3414368298060712590))))));
                                arr_54 [i_17] [i_1] [i_16] [i_17] [i_17] [i_16] = (((arr_46 [i_1]) ? (max(((var_5 ? (arr_18 [7] [i_16 + 2]) : (arr_13 [2] [i_16 + 3] [2]))), var_4)) : (((!(((-(arr_32 [i_1] [2] [2] [i_17 - 3] [i_18])))))))));
                                var_23 = 17840253481376095479;
                            }
                        }
                    }
                    var_24 = (min(var_24, (arr_10 [i_1 - 1] [i_1 - 1] [i_16])));

                    for (int i_19 = 1; i_19 < 12;i_19 += 1)
                    {
                        arr_57 [i_1] [i_15] [i_15] = var_5;
                        var_25 = (arr_46 [i_1]);
                        arr_58 [i_1] [i_15] [i_15] [i_15] [i_16] = (min((((18446744073709551615 ? var_3 : (min((arr_48 [i_19] [i_16] [i_16] [i_15] [i_1] [i_1]), (arr_55 [i_1] [i_15] [i_16] [i_19])))))), var_6));
                    }
                }
            }
        }
    }
    var_26 = ((-15 ? (-9223372036854775807 - 1) : 1));
    var_27 = ((var_0 ? (((var_3 ? 3153931522 : var_2))) : var_8));
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 19;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 22;i_24 += 1)
                        {
                            {
                                var_28 = ((+((+(((arr_62 [i_21] [18] [17]) ? (arr_62 [i_21] [i_21] [i_22]) : (arr_61 [i_20] [i_21])))))));
                                arr_71 [i_21] [i_21] [i_21] [i_20] = (((max((max(var_9, 1)), -var_11)) != (((((arr_66 [i_20] [i_20] [i_20] [i_23] [1]) > (~var_7)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 1; i_25 < 21;i_25 += 1)
                    {
                        for (int i_26 = 1; i_26 < 19;i_26 += 1)
                        {
                            {
                                arr_79 [i_20] [i_20] [i_22] [i_21] [i_22] = (arr_59 [i_21] [i_25]);
                                arr_80 [i_20] [i_21] [i_20] [4] [i_21] = (((((var_3 ? (arr_77 [i_25] [i_25 - 1] [i_25] [i_25 + 1] [i_25] [i_25] [i_25]) : ((var_7 ? 9223372036854775807 : var_5))))) ? (((!(10917858018728255461 <= 1)))) : ((((((-127 - 1) ? var_3 : 1))) ? 52 : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
