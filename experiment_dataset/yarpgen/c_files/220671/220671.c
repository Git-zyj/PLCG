/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (arr_1 [i_0]);
                            arr_9 [i_0] [i_1] [i_1] [0] [i_3 - 1] [i_0] = var_18;
                            var_21 *= ((((((arr_2 [i_0] [i_1]) ? (arr_4 [i_1] [i_2]) : (arr_4 [i_0] [i_1])))) ? (arr_2 [i_1] [i_1]) : ((max(var_11, (arr_8 [i_1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] &= ((!(arr_7 [i_0] [i_0] [i_0] [i_0])));
                            arr_18 [2] [i_1] [i_1] [i_0] = 4187252130;
                            var_22 -= (((((var_16 ? -var_17 : (arr_15 [i_5 - 1] [i_4] [0] [i_1] [i_0] [i_0])))) ? (min((((arr_6 [i_0] [i_1] [i_4]) ? var_4 : var_2)), (arr_11 [i_5 + 2] [i_1] [11]))) : ((min(-287652061, var_16)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_1] [i_6] [i_0] [i_0] = ((+((-(max((arr_0 [i_0]), (arr_23 [i_6] [8] [13] [i_8] [i_8 + 3])))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((140733193388032 ? (arr_23 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8]) : var_18)), var_16));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = ((-140733193388042 ? var_7 : (max(((var_17 ? (arr_4 [2] [8]) : var_18)), (arr_4 [i_0] [1])))));
                            arr_35 [i_0] [i_9] [i_0] = ((-287652061 ? var_15 : (min((arr_7 [i_10] [i_9] [i_1] [i_0]), var_10))));
                            var_24 = (min((arr_26 [i_10] [i_9] [i_9] [i_0] [i_1] [i_0] [i_0]), 287652061));
                            arr_36 [i_0] [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_25 *= (((min(4831315823906634239, (arr_6 [i_0] [0] [i_10])))) ? var_19 : (((arr_7 [i_0] [i_1] [i_9] [6]) ? (arr_20 [i_0] [i_1] [i_9]) : (arr_19 [i_1]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_26 = var_15;
                                arr_48 [i_15] [i_15] [13] [i_11] [i_13] [i_11] [i_11] = (min((max(var_16, (~0))), 287652058));
                                var_27 &= var_14;
                                arr_49 [1] [i_11] [i_13] [i_14] [i_15] = var_9;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                var_28 = (min((arr_50 [i_11 - 1] [i_11]), (arr_50 [i_11 - 3] [i_11])));
                                var_29 = (min((((arr_50 [i_11] [i_11]) ? (arr_50 [14] [i_11]) : (arr_53 [i_11] [i_12] [i_12] [i_17] [i_11 + 2]))), -var_7));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            var_30 &= (arr_41 [13] [i_19] [i_20]);
                            var_31 *= 30;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 1; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 23;i_23 += 1)
                        {
                            {
                                var_32 = var_11;
                                var_33 -= ((var_18 ? (min((((65523 ? (arr_66 [i_12] [22] [i_22] [12]) : var_19))), ((var_19 ? 30 : (arr_46 [i_11]))))) : var_13));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_24 = 4; i_24 < 24;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        for (int i_26 = 2; i_26 < 24;i_26 += 1)
                        {
                            {
                                var_34 = ((max((arr_76 [i_11 + 1] [i_11] [i_25] [i_26 - 1] [i_26] [i_26]), var_4)));
                                arr_80 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] = (arr_59 [1] [i_12] [i_24] [i_11]);
                                arr_81 [i_11] [i_11] [i_24] [i_11] [i_11] [i_26] = -140733193388033;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 12;i_27 += 1)
    {
        for (int i_28 = 1; i_28 < 10;i_28 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_29 = 4; i_29 < 11;i_29 += 1)
                {
                    for (int i_30 = 3; i_30 < 11;i_30 += 1)
                    {
                        {
                            arr_94 [i_28] [i_28 + 2] [i_28 - 1] [i_28] [i_28] [i_30] = ((~(max(287652078, (arr_87 [i_29 - 2] [i_29 + 1] [i_29 - 1])))));
                            arr_95 [i_27] [i_28] [i_28] [i_28] = (((((var_18 ? (arr_15 [i_29 + 1] [i_29 - 3] [i_29 - 2] [i_29 - 1] [i_29 - 1] [i_29]) : (arr_15 [i_29 - 4] [i_29 + 1] [i_29] [i_29 - 2] [i_29 - 1] [i_29])))) ? (arr_31 [i_28] [i_28 + 2] [i_28 - 1]) : var_14));
                            var_35 -= var_11;
                            var_36 = (min(((((min(var_11, var_19))) ? (arr_69 [i_29] [i_30 - 3] [i_27] [22] [i_27] [i_29 - 3]) : (min((arr_43 [i_28] [i_28] [i_27] [i_28 + 1] [i_28] [i_27]), (arr_75 [i_28]))))), ((((((1362158248 ? var_11 : var_0))) ? ((min((arr_33 [i_28] [i_28]), (arr_56 [i_27] [21] [i_27] [i_29 - 4] [i_28] [i_30])))) : var_14)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {
                    for (int i_32 = 2; i_32 < 11;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 12;i_33 += 1)
                        {
                            {
                                var_37 -= (arr_39 [10] [i_28 + 1]);
                                var_38 = (min((((+((var_12 ? (arr_8 [i_28]) : var_5))))), (min(var_6, ((var_7 ? var_14 : 3202198504423784683))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 12;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 12;i_35 += 1)
                    {
                        {
                            arr_109 [i_27] [i_28] [i_35] = (arr_87 [i_27] [i_27] [i_27]);
                            var_39 = (min(5, (~var_15)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
