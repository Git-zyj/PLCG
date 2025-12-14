/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_3] = var_1;
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 3] [i_3 + 2] [i_4] = var_9;
                            arr_16 [i_2] [i_3] [i_2] [i_1] [i_0] = (355827905 | var_1);
                            var_14 = (17486 - 355827905);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_15 -= (var_1 * 1);
                            var_16 = var_5;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_21 [i_6] [i_2] [i_1 - 1] [i_0] = (-255 || var_5);
                            var_17 = (min(var_17, (2147483647 >= 8191)));
                            var_18 = 4008158706;
                            var_19 = (min(var_19, var_7));
                            var_20 += (var_12 != 3982097836);
                        }
                        arr_22 [i_0 - 3] [i_0 - 3] [i_1] [i_3 + 1] = 33996;
                        var_21 += -0;
                        var_22 = (min(var_22, (((-(min((min(var_12, var_12)), var_4)))))));
                        var_23 = var_5;
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1 - 1] [i_2] [i_7 + 1] = ((2563442744 && (30665 != var_11)));

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_24 = (!255);
                            var_25 = ((((min((var_12 ^ var_5), -var_11))) || (41699 < 0)));
                            arr_30 [i_7] [i_7] [i_2] [i_7 - 3] [i_7] [i_7] = var_4;
                            var_26 = (max((min((max(243, var_11)), (~4126925622))), ((min((max(0, 1)), (!26546044))))));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_27 += (((((min(var_13, var_4))) || -var_3)));
                            var_28 = var_1;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_38 [i_0 + 2] [i_1] [i_0] [i_7] [i_10] = (var_8 >= 23836);
                            var_29 = var_12;
                            var_30 = var_7;
                            var_31 += (min(((var_3 * ((max(23836, 25321))))), (726 / var_2)));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_32 += 110;
                        var_33 += -91;
                        var_34 = ((8 < (~-998316503)));
                        arr_41 [i_0] = var_12;
                        arr_42 [i_0] [i_1] [i_1] [i_2 - 1] [i_11] |= (((-14767 / var_6) | 36464));
                    }
                    var_35 = -1118330674;

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_36 = var_0;
                        var_37 = var_7;
                        var_38 += (var_5 || var_7);

                        for (int i_13 = 4; i_13 < 16;i_13 += 1)
                        {
                            var_39 = ((var_12 ^ (var_10 ^ 13357035637414857947)));
                            arr_51 [i_0 - 3] [i_1] [i_1] [i_12] [i_0 - 3] = (var_0 ^ 25);
                        }
                        arr_52 [i_12] [i_2 + 1] [i_1] [i_0] [i_0] = 18446744073709551615;
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_40 = (~var_2);

                        for (int i_15 = 2; i_15 < 16;i_15 += 1)
                        {
                            var_41 = (((108 + 1) < (var_13 || var_11)));
                            var_42 = (var_13 ^ var_4);
                        }
                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            var_43 = var_9;
                            var_44 = (max(var_44, ((((159 - 64817) < (var_8 != var_5))))));
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_45 += (-19987 > 1496780958);
                            var_46 -= (!719);
                            arr_64 [i_0 - 2] [i_1 + 2] [i_2] [i_14] [i_14] [i_1 + 2] [i_1] = -115;
                            var_47 = (~-80289280);
                        }
                        for (int i_18 = 1; i_18 < 14;i_18 += 1)
                        {
                            var_48 = ((-14767 + (-14767 - 1)));
                            var_49 = (var_7 < -var_0);
                            arr_68 [i_0] [i_0 - 3] [i_2] [i_14 + 1] [i_14] [i_1] = -123;
                        }
                        var_50 = ((-(~var_4)));
                    }
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        arr_72 [i_0 + 2] [i_1 + 2] [i_2] [i_0 + 2] = ((var_12 | (((((1247120775 == 17) > (max(var_9, var_11))))))));
                        var_51 = (max(var_51, -14767));
                    }
                    var_52 = (((((min(((min(32767, var_1))), 4294967272)))) + 3047846537));
                }

                /* vectorizable */
                for (int i_20 = 1; i_20 < 16;i_20 += 1)
                {
                    arr_77 [i_20 - 1] [i_20 - 1] [i_1] [i_0] = (((11058162367480903342 / 11611) + 41711));
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 16;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            {
                                var_53 = (min(var_53, 58720256));
                                var_54 = (((65529 ^ 58720256) * (~var_7)));
                                var_55 = (min(var_55, var_11));
                                arr_83 [i_0] [i_1 + 2] [i_20] [i_20] [i_22] = (1 == var_12);
                            }
                        }
                    }
                    arr_84 [i_0 - 1] [i_1 + 2] [i_20 + 1] [i_20] = var_2;

                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {

                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            var_56 = (min(var_56, ((((var_8 >= 229) ^ var_10)))));
                            var_57 = (max(var_57, (42 / var_10)));
                        }
                        arr_91 [i_20] [i_1] = var_1;
                        var_58 = (min(var_58, ((var_8 * (0 >= 3222779165)))));
                    }
                    for (int i_25 = 0; i_25 < 0;i_25 += 1)
                    {
                        var_59 = (((var_1 / var_11) && 229));
                        var_60 = (88 - var_3);
                    }
                }
                var_61 = 4294967295;
                var_62 = var_5;
                var_63 += (var_8 < 0);
            }
        }
    }
    var_64 = (14766 != (min(((max(4062214364018459678, var_1))), var_10)));
    #pragma endscop
}
