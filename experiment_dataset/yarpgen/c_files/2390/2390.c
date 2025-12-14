/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (max(var_17, 11154));
        var_18 = (max(var_18, var_9));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1 - 2] [i_1 - 2] [9] = var_6;
                        var_19 = (((arr_10 [i_0] [i_2 - 1] [i_1 - 3] [i_3]) / (((arr_10 [i_0] [i_2 + 1] [i_1 - 3] [i_0]) ? (arr_10 [i_0] [i_2 - 1] [i_1 + 1] [i_3]) : (arr_10 [i_0] [i_2 - 1] [i_1 + 1] [i_0])))));
                        var_20 = (max(var_20, 16247316564483968147));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_21 = (min(var_21, (arr_14 [i_4 + 1])));
        arr_16 [i_4] = (((arr_13 [i_4 - 3]) & (arr_13 [i_4 - 3])));
    }
    var_22 = var_4;

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_23 = (arr_4 [4]);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_25 [i_5] [i_5] [i_6] [i_7] = (arr_0 [i_5]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_24 = (min(var_24, var_8));
                            var_25 -= (arr_19 [i_7]);
                        }
                    }
                }
            }
            var_26 = (max(var_26, (arr_11 [i_5] [i_6] [i_6])));
        }
    }
    for (int i_10 = 1; i_10 < 8;i_10 += 1)
    {
        var_27 = (arr_23 [i_10] [1] [i_10]);
        var_28 = var_2;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_42 [i_10] [i_10] [i_10 + 1] [i_11] [i_10] [i_13] = -6023655728419028516;
                        arr_43 [i_10] [i_10] [i_12] [i_11] [i_10] [i_10] = var_11;
                        var_29 = (((((var_8 ? 32167 : (arr_2 [i_10 - 1])))) ? (arr_34 [i_12]) : 1));
                        var_30 = var_13;
                    }
                }
            }
        }
        var_31 = (min(var_31, ((((((arr_22 [2] [i_10]) + 2147483647)) >> (((((arr_33 [6]) ? (arr_26 [i_10 + 1]) : (arr_33 [0]))) - 41412)))))));
    }
    for (int i_14 = 2; i_14 < 21;i_14 += 1)
    {
        arr_47 [i_14] = (arr_44 [i_14] [i_14]);
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                var_32 = var_4;
                                var_33 = ((((4407539845878775919 ? var_0 : (arr_50 [i_14] [i_14] [i_16] [i_18])))) ? (arr_46 [i_15 + 1]) : var_8);
                            }
                        }
                    }

                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        arr_60 [i_14] [i_15] [i_15 - 1] [i_14] [15] = (((0 || 1) % var_1));
                        var_34 -= arr_50 [19] [i_15 + 3] [i_15 + 3] [1];
                    }
                    for (int i_20 = 3; i_20 < 20;i_20 += 1) /* same iter space */
                    {

                        for (int i_21 = 2; i_21 < 22;i_21 += 1)
                        {
                            arr_67 [i_14 + 3] [i_15] [i_16] [i_20] [i_14] = var_0;
                            var_35 = (max(var_35, -2660));
                            var_36 -= (arr_51 [i_15 + 2] [i_15 + 1] [i_15]);
                        }
                        var_37 = (max(var_37, (((((((arr_62 [i_15 + 2] [i_20 + 2]) ? (arr_62 [i_15 + 2] [i_20 - 3]) : (arr_62 [i_15 + 2] [i_20 + 2])))) ? var_11 : (arr_62 [i_15 + 3] [i_20 + 3]))))));
                        var_38 = (arr_56 [i_14] [i_14] [i_14] [i_14] [i_14]);

                        for (int i_22 = 1; i_22 < 22;i_22 += 1) /* same iter space */
                        {
                            var_39 = var_15;
                            var_40 -= var_15;
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 22;i_23 += 1) /* same iter space */
                        {
                            var_41 = (arr_45 [i_23 - 1]);
                            var_42 = (max(var_42, (arr_58 [20])));
                            arr_73 [i_14] = ((var_6 ? -125 : ((var_14 ? var_3 : 248))));
                            arr_74 [i_14] [i_15 + 2] [i_16] [i_20] [i_14] = (((arr_72 [i_15] [i_14] [i_14 + 2] [i_20] [i_23 + 2]) ? (arr_65 [i_14] [i_14] [i_23 - 1] [i_14 - 1] [i_23 - 1] [i_23]) : 2199427509225583474));
                        }
                        /* vectorizable */
                        for (int i_24 = 1; i_24 < 22;i_24 += 1) /* same iter space */
                        {
                            var_43 += (arr_59 [i_14] [i_16] [i_20]);
                            var_44 = ((arr_48 [i_14 + 2] [i_14 - 2]) ? (arr_76 [i_14 - 1] [1] [i_15 - 1]) : (arr_76 [i_14 + 2] [i_14] [i_15 + 2]));
                            var_45 = (arr_55 [i_14] [i_14] [i_14] [10] [i_14]);
                            arr_77 [i_14] [i_14] [19] [i_20 - 1] [i_24] = (((-30045318 > (arr_75 [i_14 + 3] [i_15] [i_16] [i_24 - 1] [i_24] [i_16] [i_14]))) && var_12);
                            var_46 -= 16247316564483968147;
                        }
                    }
                    for (int i_25 = 3; i_25 < 20;i_25 += 1) /* same iter space */
                    {
                        var_47 = var_10;

                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            var_48 = var_12;
                            var_49 -= 0;
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
                        {
                            var_50 += (arr_54 [22] [i_25] [i_16] [i_15 + 2] [22]);
                            var_51 = (min(var_51, (arr_59 [1] [i_14 + 2] [i_14 - 2])));
                        }
                        for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                        {
                            var_52 = (max(var_52, (arr_70 [i_14] [19])));
                            arr_89 [i_14] [i_14] [i_15] [i_16] [1] [i_25] [i_28] = (arr_59 [i_14 + 2] [i_14 + 1] [i_15 + 1]);
                            arr_90 [i_14] [i_15] [i_14] [i_25] [i_25] [i_28] = 19705;
                        }
                        var_53 = (arr_78 [i_16] [i_16] [i_15]);
                        var_54 = (max(var_54, ((((((var_1 ? (((((arr_65 [2] [10] [i_16] [i_16] [6] [i_25]) == 1)))) : ((18446744073709551613 * (arr_65 [14] [22] [i_15] [i_16] [i_25] [1])))))) ? (arr_88 [i_14 + 1] [i_15 + 1] [i_16] [i_25] [i_16] [i_16]) : var_0)))));
                    }
                    arr_91 [i_14] [i_15] [i_16] [21] = 1938525284;
                }
            }
        }
        arr_92 [i_14] [i_14] = ((((arr_54 [i_14] [i_14 - 1] [8] [8] [i_14]) ? -30045318 : var_15)) & (arr_78 [i_14] [i_14 + 3] [i_14 + 2]));
    }
    #pragma endscop
}
