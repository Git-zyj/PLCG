/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((~(~var_5)));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (max((max(var_13, var_1)), var_11));
            arr_7 [i_0] [i_0] = var_11;
            arr_8 [2] [i_0] [2] &= ((var_3 == (var_11 / var_8)));
            arr_9 [i_0] = (!var_11);
        }
        arr_10 [0] |= ((((max(1, -62))) | -6932));
        var_17 = (min(var_17, (-1 - var_14)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 -= (var_13 / var_14);
            arr_16 [i_2] [i_3] [i_3] = var_3;
            var_19 = var_7;
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_25 [i_4] [i_6] [i_5] [i_4] [i_4] = -var_4;
                        var_20 = (max(var_20, var_14));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_7] [i_7] [i_4] [i_7] [i_7] = (var_8 == var_16);
                            var_21 = (min(var_21, (((var_15 + var_7) / var_7))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_22 ^= var_0;
                            var_23 = var_0;
                            arr_32 [i_6] [i_4] [i_6] [i_6] [i_6] [i_6] = (var_4 * var_9);
                        }
                    }
                }
            }
            var_24 = var_8;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_25 = var_8;
                        var_26 &= var_14;
                    }
                }
            }
            var_27 = (((var_5 == 4) * (var_0 != -840865135)));
        }
        arr_37 [i_2] = (~-1);

        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            arr_40 [i_2] = var_0;
            arr_41 [i_11] [i_2] = var_16;
        }
    }
    var_28 += var_9;

    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_45 [i_12] [i_12] = var_11;
        arr_46 [i_12] = (min(-var_7, var_3));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 24;i_15 += 1)
            {
                {
                    var_29 |= var_11;
                    var_30 = var_0;
                    var_31 = (min(var_31, (((var_4 == (var_4 ^ var_3))))));

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        arr_60 [i_13] [i_14] [i_13] [i_16] = (1 != 2);

                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            var_32 ^= (min((var_3 * var_15), (var_10 - var_4)));
                            var_33 = (min(var_33, var_6));
                        }
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            var_34 = (max(var_34, var_14));
                            var_35 = (((!16) ^ var_4));
                        }
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            arr_69 [i_13] [i_13] [i_14] [i_15] [i_15] [i_16] [i_19] = 167324647925277879;
                            arr_70 [i_19] [i_16] [i_15] [i_14] [i_13] &= ((-(var_10 / var_15)));
                        }
                    }
                    for (int i_20 = 4; i_20 < 23;i_20 += 1)
                    {
                        var_36 -= var_0;
                        arr_75 [i_20] [i_15] [i_14] [i_20] = var_10;
                        arr_76 [i_13] [i_20] [i_15] [i_20] = (!var_3);
                    }
                }
            }
        }
        var_37 ^= (-30 ^ var_6);
        arr_77 [i_13] = ((max(var_1, var_12)));
        arr_78 [i_13] = var_14;
        arr_79 [i_13] = (var_2 && var_16);
    }
    for (int i_21 = 0; i_21 < 12;i_21 += 1)
    {
        arr_83 [i_21] = var_9;
        var_38 = var_6;

        for (int i_22 = 2; i_22 < 11;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    {
                        var_39 |= var_9;
                        arr_92 [i_23] [i_21] [i_23] = var_13;
                    }
                }
            }
            arr_93 [4] |= var_2;
        }
        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            var_40 = ((min(var_0, var_1)));

            for (int i_26 = 3; i_26 < 9;i_26 += 1)
            {
                var_41 = ((var_5 ^ (var_4 & var_4)));
                arr_99 [i_25] [i_21] = (((1 & 958233181) ^ (((max(215, 1))))));

                for (int i_27 = 0; i_27 < 12;i_27 += 1)
                {
                    arr_103 [i_21] = var_1;
                    var_42 = var_9;
                    var_43 ^= var_10;
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 12;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {
                        {
                            var_44 = (30325 ^ var_11);
                            arr_108 [i_21] [i_25] [i_21] [i_28] [i_29] [i_26] = var_2;
                        }
                    }
                }
            }
            for (int i_30 = 0; i_30 < 12;i_30 += 1)
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {
                    for (int i_32 = 1; i_32 < 1;i_32 += 1)
                    {
                        {
                            var_45 = var_0;
                            var_46 = var_2;
                        }
                    }
                }

                for (int i_33 = 2; i_33 < 9;i_33 += 1) /* same iter space */
                {
                    var_47 = var_11;
                    var_48 = var_13;
                    var_49 = var_8;
                }
                for (int i_34 = 2; i_34 < 9;i_34 += 1) /* same iter space */
                {
                    arr_124 [i_34] [i_30] [i_21] [i_21] [i_21] [i_21] = var_0;

                    for (int i_35 = 2; i_35 < 11;i_35 += 1)
                    {
                        var_50 *= var_13;
                        arr_129 [i_21] [i_25] [i_30] [i_21] [i_35] [i_21] [i_30] = (var_4 ^ var_12);
                        arr_130 [i_21] [i_25] [i_21] [i_34] [i_35] [i_35] [i_30] = var_10;
                        var_51 = (!-1);
                    }
                    for (int i_36 = 1; i_36 < 10;i_36 += 1)
                    {
                        arr_134 [i_36] [i_21] [i_30] [i_21] [i_21] = (min(28072, var_3));
                        var_52 = ((~(~var_1)));
                        arr_135 [i_21] [i_25] = (!var_8);
                    }
                    for (int i_37 = 2; i_37 < 9;i_37 += 1)
                    {
                        arr_138 [i_21] [i_25] [i_21] [i_34] [i_34] = (~var_1);
                        var_53 ^= var_0;
                    }
                    arr_139 [i_21] [i_30] [i_21] = (min((!var_0), var_0));
                }
                for (int i_38 = 2; i_38 < 9;i_38 += 1) /* same iter space */
                {
                    var_54 = var_10;
                    var_55 *= var_11;
                    var_56 = (~var_7);
                }
            }
            arr_143 [i_21] [i_21] [i_25] = (1 / var_6);
        }
        var_57 += var_13;
    }
    #pragma endscop
}
