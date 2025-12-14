/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((max(var_17, (min(var_2, var_4)))));
        var_18 *= (((((!(var_10 - var_4)))) != ((((min(var_15, var_7))) / var_16))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_0] = (var_5 - var_6);
            var_19 = (min(var_19, ((min((max(var_10, var_15)), (var_10 < var_2))))));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_20 += ((var_17 ? (max(var_16, var_4)) : ((var_0 ? (max(var_8, var_9)) : (var_12 ^ var_15)))));
                var_21 = var_14;
            }
            arr_10 [i_1] = (var_10 < var_16);
            var_22 = (max(var_22, (((min(var_9, var_6))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] [i_3] = (max(((max(var_2, var_12))), ((-var_8 ? var_16 : (max(var_8, var_1))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_6] [i_4] [i_6] [i_5] [i_3] = var_11;
                            var_23 &= (max((max(127, 1865026345)), 0));
                            var_24 &= (((((((var_2 ? var_5 : var_0))))) / (((((var_13 ? var_1 : var_6))) ? (var_12 & var_2) : var_13))));
                            var_25 ^= (((var_0 != var_10) > var_4));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_26 = (((((var_2 ? ((var_5 ? var_2 : var_6)) : var_9))) ? (max((min(var_16, var_13)), (((-100 ? 11605 : -515898573))))) : (var_12 > var_16)));
                        var_27 = (max(((max(var_17, ((min(var_10, var_5)))))), (max((var_17 - var_11), ((var_12 ? var_16 : var_12))))));
                    }
                }
            }
            var_28 = max((var_3 && var_0), var_13);
            arr_26 [i_0] [i_3] |= var_7;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] [i_0] = (var_2 & var_14);

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_29 = (min(var_29, (((var_5 ? var_3 : var_8)))));
                arr_36 [i_9] |= var_5;
                var_30 = (var_4 % var_1);
                var_31 = ((218 ? 1963284402 : 211));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_41 [i_0] [i_9] = var_0;
                var_32 &= ((var_8 ? var_10 : var_5));
            }
            arr_42 [i_9] &= (var_6 | var_3);
            var_33 -= (var_17 & var_4);
        }
        arr_43 [i_0] [i_0] = (min(0, 63));
        var_34 = (max(var_34, (((var_14 ^ ((var_9 ? var_2 : var_16)))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_35 = ((var_5 ? var_16 : var_11));
        arr_46 [i_12] = (var_3 > var_6);
        var_36 = (max(var_36, (((var_15 ? var_11 : var_3)))));
    }
    for (int i_13 = 1; i_13 < 20;i_13 += 1)
    {
        var_37 = (max(var_37, ((max(((var_14 ? var_12 : var_8)), (!var_4))))));

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_54 [i_13] [i_14] = (min((var_11 / var_17), ((((~var_3) ? ((max(var_1, var_7))) : var_8)))));
            arr_55 [i_13] = (((((var_14 | var_2) ? var_1 : (var_7 && var_14))) / var_11));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {

            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                var_38 = (max(var_38, var_7));

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_39 = var_17;
                    var_40 |= ((var_0 << (var_10 & var_14)));

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_41 = ((var_7 ? ((var_14 ? var_0 : var_0)) : var_14));
                        var_42 = (max(var_42, var_17));
                        var_43 = ((var_17 ? (((var_15 ? var_13 : var_0))) : 15553406136698513092));
                        arr_65 [i_13 + 2] [i_16] [i_13 + 2] [i_13] [4] = (var_0 != var_3);
                    }
                    for (int i_19 = 2; i_19 < 22;i_19 += 1)
                    {
                        var_44 = var_10;
                        var_45 = (var_6 && var_14);
                    }
                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {
                        var_46 += var_2;
                        arr_71 [i_15] [i_16] [i_15] = var_12;
                        var_47 = var_9;
                    }
                    var_48 |= -var_16;
                    var_49 = (min(var_49, ((((var_3 & var_11) != var_8)))));
                }
            }
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                arr_74 [i_13] [i_13] [i_13] = ((var_17 ? var_6 : var_4));

                for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
                {
                    var_50 = (((var_3 ? var_8 : var_16)));
                    arr_78 [i_21] = var_0;
                    var_51 = (max(var_51, (!var_1)));
                }
                for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
                {

                    for (int i_24 = 2; i_24 < 22;i_24 += 1)
                    {
                        var_52 ^= var_6;
                        var_53 = (min(var_53, (var_12 || var_8)));
                    }
                    for (int i_25 = 2; i_25 < 21;i_25 += 1)
                    {
                        var_54 = (var_7 - 0);
                        arr_86 [i_13 + 2] [i_15] [i_15] [i_23] [i_23] [i_25 + 1] &= ((var_10 ? var_17 : var_13));
                        var_55 = (max(var_55, (var_12 / var_16)));
                        arr_87 [i_15] [i_21] [i_15] [i_25] = (9223372036854775807 & -1560719264267481518);
                        var_56 = (var_0 || var_13);
                    }

                    for (int i_26 = 0; i_26 < 23;i_26 += 1) /* same iter space */
                    {
                        arr_90 [i_21] = var_4;
                        arr_91 [i_15] [i_21] [i_23] [i_26] = ((var_12 ? var_17 : var_10));
                        arr_92 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (((var_13 / var_4) ? var_4 : -var_3));
                        var_57 = ((var_13 >> (var_5 - 232)));
                    }
                    for (int i_27 = 0; i_27 < 23;i_27 += 1) /* same iter space */
                    {
                        var_58 = ((var_16 ? var_7 : var_4));
                        var_59 = (((var_7 * var_9) << (var_13 - 86)));
                        var_60 = (min(var_60, ((1456 ? var_12 : var_8))));
                    }
                    var_61 = var_11;
                }
                for (int i_28 = 0; i_28 < 23;i_28 += 1) /* same iter space */
                {

                    for (int i_29 = 1; i_29 < 21;i_29 += 1)
                    {
                        var_62 += var_13;
                        var_63 = -var_6;
                        var_64 = (max(var_64, (~var_13)));
                    }
                    var_65 = var_15;
                    arr_100 [i_28] [i_15] [i_21] [i_28] = ((var_5 ? var_0 : ((var_4 ? var_14 : var_17))));
                    var_66 = var_4;
                }
                var_67 += var_11;
            }
            for (int i_30 = 4; i_30 < 21;i_30 += 1)
            {
                var_68 = (((var_1 || var_17) <= var_1));
                var_69 = ((var_10 ? var_14 : var_9));
            }

            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 23;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        {
                            arr_112 [i_32] [i_15] [i_31] [i_31] [i_33] = (((var_3 ? var_15 : var_0)));
                            var_70 = (((!var_12) ? var_6 : var_15));
                        }
                    }
                }
                arr_113 [i_31] [i_31] [i_31] = ((var_7 ? var_1 : var_6));
            }
        }
        /* LoopNest 2 */
        for (int i_34 = 1; i_34 < 22;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 23;i_35 += 1)
            {
                {

                    for (int i_36 = 0; i_36 < 23;i_36 += 1)
                    {
                        arr_120 [i_13] [i_13] [i_34] [i_35] [i_35] [i_13] = ((-((var_7 ? var_8 : var_9))));
                        var_71 = (max(var_71, ((((max(var_16, (var_10 | var_0))) | (((((var_4 ? var_3 : var_5))))))))));
                    }
                    for (int i_37 = 0; i_37 < 23;i_37 += 1)
                    {
                        arr_123 [i_13] [i_34 - 1] [i_37] = -var_16;
                        var_72 = var_0;
                    }
                    /* vectorizable */
                    for (int i_38 = 0; i_38 < 23;i_38 += 1) /* same iter space */
                    {
                        arr_126 [i_38] [i_35] [i_13] [i_13] = ((var_1 || (var_9 && var_4)));
                        arr_127 [i_38] [i_38] [i_13] [i_38] = (((var_4 ? var_0 : var_6)));
                    }
                    /* vectorizable */
                    for (int i_39 = 0; i_39 < 23;i_39 += 1) /* same iter space */
                    {
                        arr_131 [4] [i_35] [i_35] = (var_3 >= var_10);
                        arr_132 [i_13] [i_13] [i_13] [i_13] = (((((var_11 ? var_4 : var_7))) + (~var_11)));
                    }
                    var_73 -= var_7;
                    arr_133 [i_13 - 1] [i_35] = max((var_12 < var_3), ((var_16 ? var_10 : var_6)));
                }
            }
        }
    }
    var_74 = var_12;
    var_75 = (152 * 0);
    #pragma endscop
}
