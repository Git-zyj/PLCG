/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((var_2 ? var_14 : var_6))) ? ((var_1 ? var_6 : var_6)) : ((var_1 ? var_12 : var_8)))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 = var_8;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_2] [i_0] [i_2] [i_0] = ((~((~(var_1 - var_4)))));
                            var_17 = (max(var_17, var_11));
                            arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((var_7 ? ((var_4 ? var_7 : var_7)) : (((var_8 ? var_15 : var_4)))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (((var_12 ? (((var_3 ? var_1 : var_4))) : ((var_13 ? var_3 : var_2)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_18 = (((var_3 ? var_3 : var_15)));
                            var_19 = var_2;
                            arr_24 [13] [i_1] [i_6] [13] = -6066806364022499943;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_20 = ((48912 ? 46 : 120));

            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_21 = var_2;
                            arr_35 [i_9] [i_8] [i_10] [i_0] [i_8] [i_9] = (~var_10);
                            var_22 *= -var_5;
                            var_23 *= var_12;
                        }
                    }
                }
                arr_36 [i_9] [i_0] [i_8] [i_9] = var_10;
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_40 [i_0] [i_8] [i_0] [i_0] = ((~((var_9 ? var_13 : var_14))));
                var_24 = var_15;
                var_25 = (((var_15 ^ var_1) ? ((var_9 ? (-121 | 19) : 0)) : ((var_2 ? var_10 : var_13))));
            }
        }
        var_26 -= ((+((var_15 ? (var_7 ^ var_12) : (((var_10 ? var_5 : var_8)))))));

        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_27 ^= var_1;
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_28 = ((31290 ? (((((48912 ? 17 : 42691))) ? 65535 : 18446744073709551615)) : var_8));
                            var_29 = var_15;
                        }
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            var_30 *= ((~(((((var_5 ? var_15 : var_6))) ? (~var_12) : var_9))));
            var_31 ^= (((((((var_12 ? var_13 : var_5))) ? var_11 : var_2))) ? (((6 ? 80 : 2))) : ((var_10 ? (((var_13 ? var_8 : var_14))) : ((var_13 ? var_0 : var_14)))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 21;i_19 += 1)
                {
                    {
                        var_32 = ((((((var_13 ? var_11 : var_2)))) ? var_12 : var_6));
                        arr_59 [i_0] [i_0] [i_17] [i_17] [18] [i_17] = var_13;
                        var_33 = var_5;
                        var_34 = ((((var_10 ? var_4 : ((var_3 ? var_4 : var_13)))) ^ var_12));
                    }
                }
            }
            arr_60 [i_17] [6] = ((var_15 ? ((((var_6 ? var_1 : var_9)) ^ (!var_15))) : (((((var_13 ? var_6 : var_9))) ? var_2 : var_9))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    {
                        var_35 -= var_2;
                        var_36 = (~0);
                        var_37 += (((var_4 ? var_7 : var_1)));
                        var_38 |= var_2;
                        arr_67 [i_0] [i_22] [i_21] [i_22] [i_22] = ((var_9 ? var_9 : var_5));
                    }
                }
            }
            var_39 += var_12;
            var_40 -= (var_0 ^ var_0);
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        var_41 = var_14;

        for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
        {

            for (int i_25 = 4; i_25 < 10;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    arr_78 [i_23] [i_23] [i_23] [i_26] [i_23] [i_23] = (var_15 || var_3);
                    arr_79 [i_23] [i_23] [i_25] [i_26] [i_25] [i_25] = var_1;
                    var_42 &= ((var_9 ? var_0 : var_1));
                }
                arr_80 [i_23] [i_23] [i_23] [i_23] = var_7;
            }

            for (int i_27 = 2; i_27 < 12;i_27 += 1)
            {
                var_43 = var_1;
                arr_83 [i_23] [i_23] [i_23] = ((var_11 ? var_13 : (~var_8)));
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 11;i_28 += 1)
                {
                    for (int i_29 = 1; i_29 < 12;i_29 += 1)
                    {
                        {
                            arr_90 [i_23] [8] [8] [i_28 + 2] [i_29 + 1] [i_27] [i_27] = var_0;
                            var_44 = (((!var_6) ? ((var_10 ? var_9 : var_10)) : ((var_15 ? var_5 : var_3))));
                        }
                    }
                }
                arr_91 [i_23] [i_23] [i_27 + 1] = var_7;
            }
            var_45 = ((var_9 ? var_10 : ((var_13 ? var_8 : var_5))));
        }
        for (int i_30 = 0; i_30 < 13;i_30 += 1) /* same iter space */
        {
            var_46 = (((~var_13) ? var_5 : var_9));
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 13;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 13;i_32 += 1)
                {
                    {
                        var_47 |= var_8;
                        arr_102 [i_23] [i_32] [i_32] [i_32] = var_12;
                    }
                }
            }
        }
        arr_103 [i_23] = ((!(var_14 != var_5)));
    }
    var_48 = (min(var_48, (((-(((!(var_7 / var_8)))))))));

    for (int i_33 = 1; i_33 < 14;i_33 += 1)
    {

        for (int i_34 = 0; i_34 < 16;i_34 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_35 = 0; i_35 < 16;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 16;i_36 += 1)
                {
                    {

                        for (int i_37 = 0; i_37 < 16;i_37 += 1)
                        {
                            var_49 *= (((((var_3 ? var_9 : var_13))) ? -var_0 : (((115 >> (35617 - 35605))))));
                            var_50 = var_15;
                        }
                        arr_119 [i_36] = (80 & 18446744073709551598);
                        var_51 -= var_2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_38 = 2; i_38 < 15;i_38 += 1)
            {
                for (int i_39 = 3; i_39 < 15;i_39 += 1)
                {
                    for (int i_40 = 3; i_40 < 15;i_40 += 1)
                    {
                        {
                            arr_128 [i_33] [i_34] = var_15;
                            arr_129 [13] [i_34] [13] [i_39 + 1] [i_40] [i_38] = (!var_11);
                            arr_130 [i_33] [i_34] [i_40] [i_39 - 3] [i_33] [i_39 - 3] = ((-2 ? var_11 : ((~((var_14 ? var_0 : var_8))))));
                            var_52 = ((((((var_2 ? var_14 : var_10)))) ? (((var_1 ? var_10 : var_13))) : var_12));
                        }
                    }
                }
            }
            var_53 = (min(var_53, ((((~var_9) > (var_13 == var_9))))));

            for (int i_41 = 4; i_41 < 15;i_41 += 1)
            {

                for (int i_42 = 0; i_42 < 16;i_42 += 1)
                {

                    for (int i_43 = 0; i_43 < 16;i_43 += 1)
                    {
                        var_54 *= var_3;
                        var_55 = var_3;
                        var_56 = (min(var_56, ((((25564 > -3) ? ((((((var_13 ? var_7 : var_6))) || var_4))) : (((!(var_2 + var_13)))))))));
                    }
                    var_57 ^= var_10;

                    /* vectorizable */
                    for (int i_44 = 1; i_44 < 13;i_44 += 1)
                    {
                        var_58 = (max(var_58, var_8));
                        arr_140 [i_33] [i_34] [13] [i_34] [i_44] [i_34] [i_44 + 3] = (((((var_9 ? var_14 : var_0))) ? ((var_7 ? var_12 : var_10)) : ((var_7 ? var_10 : var_15))));
                        arr_141 [8] [8] [8] [8] [i_44 - 1] [8] [8] = var_4;
                    }
                }
                for (int i_45 = 0; i_45 < 16;i_45 += 1)
                {
                    var_59 = ((-121 ? 8064 : 18446744073709551598));
                    arr_145 [i_33 + 2] [i_33 + 2] [i_45] [i_45] = var_10;
                    arr_146 [11] [4] [11] &= var_3;
                    arr_147 [i_33] [i_33] [10] [i_33] = (((((var_15 ? var_12 : var_10)) < var_12)));
                }
                var_60 = (-106 % 3938295477);
                /* LoopNest 2 */
                for (int i_46 = 0; i_46 < 16;i_46 += 1)
                {
                    for (int i_47 = 1; i_47 < 12;i_47 += 1)
                    {
                        {
                            arr_154 [i_47 - 1] [i_46] [i_46] [i_34] [i_33] = ((~(~var_14)));
                            var_61 = (((((~((var_13 ? var_11 : var_14))))) ? (((((var_9 ? var_8 : var_15))) ? var_10 : var_8)) : ((((((var_8 ? var_3 : var_8))) ? ((var_4 ? var_1 : var_11)) : (~var_15))))));
                        }
                    }
                }
            }
            for (int i_48 = 0; i_48 < 16;i_48 += 1)
            {
                var_62 = (((((var_1 ? var_10 : -var_8))) ? (((!(((46046 >> (-29 + 54))))))) : var_5));
                var_63 |= ((((var_7 ? var_15 : var_10))) ? (var_9 * var_2) : -var_8);
            }
            /* vectorizable */
            for (int i_49 = 0; i_49 < 16;i_49 += 1)
            {
                var_64 = (~var_11);
                /* LoopNest 2 */
                for (int i_50 = 0; i_50 < 16;i_50 += 1)
                {
                    for (int i_51 = 0; i_51 < 16;i_51 += 1)
                    {
                        {
                            var_65 = ((((var_0 ? var_11 : var_15)) - var_11));
                            var_66 = (min(var_66, (var_9 | var_13)));
                            var_67 = var_10;
                            arr_166 [i_49] [i_49] = var_10;
                        }
                    }
                }
                var_68 = -16623;
            }
        }
        /* vectorizable */
        for (int i_52 = 0; i_52 < 16;i_52 += 1) /* same iter space */
        {
            arr_169 [i_33] [i_33] = -var_12;

            for (int i_53 = 1; i_53 < 15;i_53 += 1)
            {
                arr_173 [i_33] [i_33] = 1480125844;
                var_69 = (((((var_6 ? var_6 : var_4))) ? ((var_0 ? var_0 : var_9)) : var_6));
            }
        }
        for (int i_54 = 0; i_54 < 16;i_54 += 1) /* same iter space */
        {

            for (int i_55 = 1; i_55 < 13;i_55 += 1)
            {
                var_70 = (min(var_70, var_1));
                var_71 += (((((var_1 ? var_2 : ((var_15 ? var_0 : var_11))))) ? var_3 : var_6));
            }
            /* vectorizable */
            for (int i_56 = 1; i_56 < 15;i_56 += 1)
            {
                arr_183 [i_33] [i_33] [i_33] [i_33] = ((var_8 ? ((var_7 ? var_13 : var_13)) : var_1));
                var_72 = var_9;
                var_73 = ((var_14 ? var_5 : ((var_3 ? var_9 : var_4))));
            }
            arr_184 [i_33] [i_33] [13] = ((((-var_12 ? ((var_6 >> (var_2 - 1412412944095709215))) : (var_8 & var_3))) >> (var_13 - 50)));
            var_74 += -var_6;
        }
        arr_185 [i_33] = var_13;
        var_75 = (max(var_75, (((((((var_14 ? var_2 : var_12)))) ? -17813124017046315397 : var_9)))));
        var_76 &= ((3728830184 ? 101 : 2814841452));
        var_77 *= var_3;
    }
    var_78 = (((var_4 & ((var_7 ? var_5 : var_7)))));
    #pragma endscop
}
