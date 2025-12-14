/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = ((!(((var_7 ? ((var_14 ? var_1 : var_9)) : var_4)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [14] [4] [4] &= ((-(~var_1)));
                    var_17 = (0 ? 0 : var_0);
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_10 [i_3] [2] [2] [i_0] |= var_8;
                    var_18 = (min(var_18, (((!(((var_14 ? (!var_3) : ((var_13 ? var_11 : var_1))))))))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 *= (((!-198796484) ? (!0) : var_7));
                        var_20 = ((((!(!var_1))) ? ((-135828796 ? 1396714247 : 1)) : var_3));
                        var_21 -= ((((((!var_1) ? ((var_5 ? var_5 : var_6)) : (!var_1)))) ? 0 : ((-((var_4 ? var_6 : var_5))))));
                        var_22 -= var_2;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_23 = var_0;
                        var_24 = (((!var_4) ? var_14 : (!var_14)));
                        arr_16 [i_5] [i_0] [1] [i_0] [i_0] = ((var_7 ? var_7 : ((var_0 ? ((var_0 ? var_0 : var_13)) : var_12))));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_25 = ((((((((var_2 ? var_7 : var_2))) ? (!var_12) : ((-7799371538993214409 ? var_11 : var_11))))) ? var_13 : ((var_4 ? var_11 : var_0))));
                            arr_19 [i_0] [i_1] = (((((var_5 ? var_13 : var_3))) ? (((!(!var_9)))) : ((var_6 ? -var_4 : var_6))));
                            arr_20 [i_0] [i_0] [10] [1] [14] [i_5] [1] = var_12;
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_26 = ((-(!var_7)));
                            var_27 = (!-var_8);
                            var_28 &= var_8;
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_25 [12] [i_0] = var_13;
                            var_29 = var_11;
                            arr_26 [i_8] [i_0] [i_3] [i_0] [13] = ((-var_5 ? ((var_13 ? var_0 : var_2)) : (((var_7 ? var_4 : var_5)))));
                            var_30 = (min(var_30, (((!(((var_1 ? var_6 : var_2))))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_31 = (((var_2 ? var_2 : var_7)));
                        arr_31 [i_0] [i_1] [i_3] [10] [i_9] = ((9055190026757344716 ? ((((!(!var_7))))) : -var_0));
                        arr_32 [i_9] [i_0] [i_0] [i_0] = ((((-198796484 ? 457696306 : 0))) ? (!var_11) : ((var_5 ? var_12 : var_1)));
                        var_32 |= (((2912807603 ? var_11 : (!-457696306))));
                    }
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_36 [i_0] [i_3] [i_0] = -var_7;
                        var_33 = var_13;
                        arr_37 [i_0] [i_0] = var_5;
                    }
                    arr_38 [8] [16] [1] [i_3] &= (((--0) ? ((-4362528537219099976 ? 0 : 2994780249203593961)) : 1));
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_34 = (!9055190026757344715);
                    var_35 ^= ((var_9 ? var_14 : (!var_11)));
                    var_36 = -4522827061319662972;
                }
                /* LoopNest 3 */
                for (int i_12 = 4; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_37 ^= (((((var_3 ? var_10 : var_9))) ? ((var_11 ? var_2 : var_8)) : var_0));
                                var_38 -= ((!((!(!var_2)))));
                                arr_53 [i_0] = var_12;
                            }
                        }
                    }
                }
                arr_54 [i_1] [i_0] = -var_0;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_39 = (((!0) ? var_0 : (!var_7)));
                            arr_61 [i_0] [i_1] [1] [16] |= (!var_13);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 2; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                {
                    arr_72 [22] [i_18] [22] &= var_7;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 22;i_21 += 1)
                        {
                            {
                                arr_77 [i_17] = ((0 ? 134213632 : var_2));
                                arr_78 [i_17 - 1] [i_17] [i_19] [1] [i_20] [i_21] = ((!(((-340754164 ? 0 : 1)))));
                                var_40 = ((2913532907 ? 1 : 135828806));
                            }
                        }
                    }
                    var_41 = (!-var_13);
                    arr_79 [i_17 + 2] [16] [i_18] [22] &= ((-var_14 ? -7265498243570177785 : -198796479));
                }
            }
        }
    }
    #pragma endscop
}
