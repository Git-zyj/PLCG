/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_0;
    var_17 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_2 ? var_9 : var_1)) <= var_11));
        arr_4 [i_0] = (~-var_12);

        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            var_18 ^= var_11;
            arr_7 [2] &= (((!var_14) ? ((var_8 ? var_13 : var_10)) : var_12));
            var_19 = ((var_1 ? var_3 : (~var_3)));
        }
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_3] [i_4] [i_4] [i_5] = var_1;
                            var_20 = var_5;
                            var_21 -= ((var_0 ? var_11 : var_1));
                            arr_18 [18] &= (((((var_5 ? var_7 : var_4))) ? var_4 : var_14));
                        }
                    }
                }
            }
            arr_19 [7] |= (((~var_12) ? (var_10 & var_12) : (~var_3)));
        }
        arr_20 [i_0] [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            arr_36 [i_8] = ((var_6 ? ((var_10 ? var_10 : var_7)) : (!var_0)));
                            arr_37 [i_10] [12] [i_8] [i_7] [i_6] = ((var_8 ? var_6 : var_9));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_22 ^= (!var_0);
                            var_23 ^= (var_8 | var_14);
                            arr_41 [i_8] [i_7] = ((!(((var_0 ? var_6 : var_9)))));
                            var_24 = (var_2 + var_5);
                        }
                        var_25 -= ((var_14 ? ((var_11 ? var_9 : var_9)) : (~var_13)));
                        arr_42 [i_6] [i_6] [8] [i_8] = (((var_7 & var_3) ? var_1 : (~var_6)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    arr_51 [i_6] [2] [i_13] |= ((var_12 ? var_3 : var_10));

                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        var_26 = ((var_2 ? var_8 : var_7));
                        var_27 = (((~var_9) < var_1));
                        var_28 |= ((!(((var_2 ? var_6 : var_10)))));
                        var_29 -= (!var_6);
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_30 ^= (-var_14 && var_11);
                        var_31 = (-((var_8 ? var_8 : var_3)));

                        for (int i_16 = 2; i_16 < 13;i_16 += 1)
                        {
                            var_32 = (~var_12);
                            arr_61 [i_12] [i_12 + 1] [i_13] [i_12] [i_15] = var_13;
                            var_33 = (!-var_12);
                            var_34 = var_14;
                        }
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            var_35 = -var_0;
                            var_36 *= (((((var_0 ? var_5 : var_4))) ? ((var_7 ? var_13 : var_12)) : var_14));
                            arr_65 [i_6] [i_12] [i_12] [i_6] [i_17] = (!var_5);
                        }
                        for (int i_18 = 4; i_18 < 13;i_18 += 1)
                        {
                            arr_68 [i_12] = (~var_3);
                            arr_69 [i_6] [11] [i_6] [i_12] [i_6] = var_3;
                        }
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            var_37 = ((~((var_11 ? var_3 : var_10))));
                            var_38 = (var_1 ? var_14 : ((var_11 ? var_8 : var_8)));
                            var_39 ^= (!var_14);
                        }
                        var_40 -= var_14;
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        arr_76 [i_6] [i_12] [9] [i_13] = var_12;
                        var_41 = (!var_0);
                        var_42 -= var_7;
                        arr_77 [i_6] [i_12] [i_6] [i_6] = ((var_7 ? ((var_13 ? var_8 : var_9)) : var_12));
                        var_43 = (!var_14);
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            {
                                arr_84 [i_12] = ((var_12 ? ((var_14 ? var_6 : var_6)) : -var_0));
                                var_44 = (((!var_8) ? ((var_12 ? var_11 : var_6)) : ((var_6 ? var_10 : var_2))));
                                arr_85 [i_6] [i_12] [i_13] [i_21] [i_13] = ((-((var_4 ? var_2 : var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
