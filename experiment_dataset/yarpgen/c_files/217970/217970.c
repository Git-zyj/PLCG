/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [8] = -var_11;
        arr_3 [i_0] = var_6;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = (~var_3);
            var_14 |= var_4;
            arr_6 [i_1] [i_0] [i_0] = -4;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_15 = ((63 ? 4294967295 : var_7));
            var_16 = var_10;
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_0] [i_3] = ((-(!18446744073709551605)));
            var_17 = -var_0;
            arr_15 [0] [0] = (((((var_0 ? var_10 : var_9))) ? (~var_9) : -23));
            arr_16 [i_0] [i_0] = (((var_8 ? var_12 : var_2)));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_25 [i_4] [i_5] [i_5] [i_6] = (~-6609669386095777739);
                        arr_26 [i_6] [i_4] [3] [i_5] [i_4] [i_0] = -var_12;
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_34 [i_8] = var_0;
                        arr_35 [i_0] [i_7] [i_8] [i_9] = 1;
                        var_18 -= var_8;
                    }
                }
            }

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_19 += var_4;
                var_20 = (~var_0);
            }
        }
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            var_21 = var_10;
            arr_41 [5] = var_10;
            var_22 = (min(var_22, var_2));
            var_23 |= -var_8;
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_24 = ((~(~4241870211)));

        /* vectorizable */
        for (int i_13 = 3; i_13 < 21;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                arr_48 [i_12] [i_12] [i_14] = ((var_7 ? 1 : var_1));
                arr_49 [i_14] = var_3;
                arr_50 [i_14] [i_14] [i_12] = (~var_12);
                var_25 = var_0;
            }
            var_26 = ((var_12 ? var_2 : 1669893550));
        }
    }
    var_27 = (min(var_10, ((-var_12 ? ((var_10 ? var_12 : 7229)) : -var_1))));

    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_28 = (min(var_28, var_11));
        arr_53 [i_15] [i_15] = (~var_11);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_63 [i_17] [i_17] [i_17] = -var_9;
                        var_29 = ((var_4 ? 1 : var_8));
                    }
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        var_30 = -var_0;
                        var_31 = ((2908850597 ? var_3 : (!var_5)));
                    }
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        var_32 = -var_3;
                        arr_70 [4] [i_17] [i_17] [i_16] [6] [i_20] = var_4;
                    }

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        arr_75 [1] [i_16] [i_17] [8] [i_21] = ((!((((-2147483647 - 1) ? var_4 : 1)))));
                        arr_76 [i_16] [i_16] [i_16] [i_16] |= var_10;
                        var_33 = -4294967295;
                        var_34 = var_8;
                    }

                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        arr_79 [6] [i_16] [i_17] [6] [10] [i_17] = (var_0 ? var_0 : var_3);

                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            arr_83 [i_23] [i_17] [i_15] = ((var_11 ? -var_0 : 1));
                            var_35 = ((var_12 ? ((var_1 ? var_4 : 58032)) : (~255)));
                        }
                        for (int i_24 = 0; i_24 < 12;i_24 += 1)
                        {
                            arr_87 [i_17] [i_22] [i_17] [i_17] [i_16] [i_17] = ((var_1 ? var_8 : var_8));
                            arr_88 [i_24] [i_17] [i_17] [i_17] [i_15] = -var_10;
                            var_36 += var_12;
                        }
                        arr_89 [i_17] [i_16] [i_16] [1] [10] [2] = var_2;
                        var_37 = (max(var_37, var_2));
                    }
                    for (int i_25 = 2; i_25 < 11;i_25 += 1)
                    {
                        var_38 = (min(var_38, var_11));
                        var_39 = 2404336567;
                    }
                    var_40 = var_11;

                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        var_41 = (18145767369175542015 ? var_4 : (!var_10));
                        arr_94 [i_17] [i_17] = var_12;
                    }
                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        var_42 ^= ((0 ? -var_1 : var_0));
                        var_43 = -var_1;
                    }
                    for (int i_28 = 0; i_28 < 12;i_28 += 1)
                    {
                        var_44 *= (var_1 ? var_3 : 4074337166);
                        arr_101 [i_17] [i_17] [i_15] = (!1);

                        for (int i_29 = 2; i_29 < 10;i_29 += 1)
                        {
                            arr_105 [i_16] [i_28] [i_17] [i_28] [i_17] [i_16] [i_15] = var_9;
                            var_45 = ((var_10 ? 255 : var_4));
                            arr_106 [i_29] [i_17] [i_16] [i_16] [i_17] [i_15] = ((~((0 ? -47525783 : 4241870211))));
                        }
                        for (int i_30 = 1; i_30 < 10;i_30 += 1)
                        {
                            var_46 = (min(var_46, var_2));
                            arr_109 [1] [1] [i_28] [i_16] [i_17] [6] [i_15] &= 2147483647;
                            arr_110 [i_17] = (var_5 ? var_7 : var_12);
                        }
                        for (int i_31 = 2; i_31 < 11;i_31 += 1)
                        {
                            arr_115 [i_17] = (((~var_2) ? (~var_9) : var_1));
                            arr_116 [i_17] [i_16] [i_16] [i_17] = ((!(((var_11 ? 16817 : (-2147483647 - 1))))));
                            var_47 *= ((var_0 ? var_10 : ((0 ? 1 : 99))));
                        }
                        for (int i_32 = 0; i_32 < 12;i_32 += 1)
                        {
                            arr_119 [i_17] = var_11;
                            var_48 = var_6;
                        }
                    }
                }
            }
        }

        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            arr_122 [i_15] [i_33] [i_33] = (-2147483647 - 1);
            arr_123 [i_15] [i_33] = -0;
            var_49 = (!var_10);
        }
        for (int i_34 = 0; i_34 < 12;i_34 += 1)
        {
            /* LoopNest 2 */
            for (int i_35 = 3; i_35 < 10;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    {
                        var_50 = ((var_1 ? var_11 : 1));
                        var_51 = (max(var_51, (((1 ? var_3 : var_3)))));
                    }
                }
            }
            var_52 = var_3;
            var_53 = (max(var_53, var_12));
        }
        for (int i_37 = 0; i_37 < 12;i_37 += 1)
        {
            var_54 = (max(var_54, (((23 ? (-9223372036854775807 - 1) : 53626)))));
            var_55 = (var_0 ? var_3 : ((var_5 ? 85 : var_10)));

            for (int i_38 = 4; i_38 < 9;i_38 += 1)
            {
                var_56 = var_7;
                var_57 ^= 1;
            }
            for (int i_39 = 0; i_39 < 12;i_39 += 1)
            {
                var_58 = var_6;
                var_59 ^= (!48);
                var_60 = var_6;
            }
            for (int i_40 = 0; i_40 < 12;i_40 += 1)
            {
                var_61 = var_9;
                arr_143 [0] [0] [i_40] |= 1299826530;
                /* LoopNest 2 */
                for (int i_41 = 1; i_41 < 9;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 12;i_42 += 1)
                    {
                        {
                            arr_150 [i_15] [i_15] [i_40] [i_40] = (-(!var_12));
                            var_62 += (var_6 ? 178 : var_12);
                            var_63 += ((-((var_2 ? var_7 : 3))));
                        }
                    }
                }
                arr_151 [i_15] [i_15] [i_40] [i_40] = (~var_4);
            }
        }
    }
    #pragma endscop
}
