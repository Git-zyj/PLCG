/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(54, (max((max(3141901676728479965, 54)), ((max(68, var_7)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (-114 ^ 164);
                            var_14 = (min(var_14, 9011214959147771526));
                            var_15 = (((var_12 % -7999419803915009241) ^ 93166374));
                            arr_11 [i_2] [i_2] [i_2] [i_1] [i_0] = 16492674416640;
                            var_16 = 4743129862623798655;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_17 = var_1;
                            var_18 |= var_8;
                            var_19 = var_10;
                        }

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_16 [i_3] [i_6] = var_5;
                            var_20 = var_4;
                            var_21 -= 3225437567163280166;
                            arr_17 [i_6] [i_0] [i_3] [i_2] [i_0] [i_0] = var_12;
                        }
                    }
                }
            }
        }
        var_22 -= (var_9 == (((var_3 << (18446727581035134976 - 18446727581035134961)))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_23 = (var_7 / var_1);
            var_24 &= var_11;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_26 [i_8] = var_3;
            var_25 = var_10;
            arr_27 [i_8] = (var_1 <= var_0);
            var_26 = 117;
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_30 [i_0] &= var_11;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_27 *= var_1;
                        var_28 -= (var_7 | var_5);
                        arr_37 [i_0] [i_9 + 1] [i_10 - 1] [i_0] = 0;
                        var_29 = 16492674416640;
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_30 = (var_1 && var_0);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_31 -= var_4;
                            var_32 -= (var_4 > var_7);
                        }
                    }
                }
                var_33 = (max(var_33, var_2));
                var_34 = var_7;
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    var_35 -= var_12;
                    var_36 = 54;
                }
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    var_37 = var_8;
                    arr_60 [i_0 - 1] [i_0 - 1] [i_12] [i_0 - 1] = var_1;

                    for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                    {
                        var_38 = (min(var_38, (var_3 / 255)));
                        var_39 = var_7;
                        var_40 = (var_9 >= 0);
                    }
                    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        var_41 -= (var_11 == 68);
                        arr_66 [i_0 - 1] [i_12] [i_16] [i_18] [i_12] [i_20] [i_20] = var_3;
                        var_42 = 5442645193475735656;
                    }
                    for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                    {
                        var_43 &= 32;
                        var_44 = (107 <= var_8);
                        var_45 = (var_7 % 4019660698255425114);
                        var_46 = 123;
                        var_47 = (var_5 * var_7);
                    }
                    var_48 = var_10;
                    var_49 = 1328643670;
                }
                for (int i_22 = 1; i_22 < 9;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        arr_77 [i_12] [i_12] = var_10;
                        arr_78 [i_12] [i_12] [i_16] [i_16] [i_16] [i_16] [i_23] = 16492674416640;
                        var_50 = var_6;
                        arr_79 [i_0] [i_12] [i_16] [i_12] [i_23] [i_23] [i_0] = var_5;
                    }
                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        var_51 = var_12;
                        arr_82 [i_0] [i_0] [i_12] [i_22 + 1] [i_0] [i_12] [i_0] = (var_6 - var_9);
                        arr_83 [i_0 - 1] [i_16] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] &= -7922882865641848562;
                    }
                    var_52 = 6756;
                    var_53 = (32818 / var_11);
                }
                var_54 = var_7;
                var_55 = (max(var_55, (var_0 + 0)));

                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {

                    for (int i_26 = 4; i_26 < 9;i_26 += 1)
                    {
                        var_56 = (var_0 || var_7);
                        var_57 = (min(var_57, var_2));
                        var_58 = var_12;
                    }
                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        var_59 = var_0;
                        var_60 = 54;
                    }

                    for (int i_28 = 1; i_28 < 10;i_28 += 1)
                    {
                        arr_93 [i_28 + 2] [i_12] [i_0 - 1] [i_12] [i_0 - 1] = (var_5 % var_2);
                        var_61 = 18446727581035134976;
                        var_62 = (var_5 % var_11);
                    }
                    var_63 = (-5442645193475735657 & 58779);
                    var_64 = 32718;
                }
                for (int i_29 = 0; i_29 < 12;i_29 += 1)
                {
                    arr_97 [i_16] [i_12] [i_16] [i_12] [i_0] = var_2;
                    arr_98 [i_29] [i_29] [i_29] [i_29] [i_0] [i_0 - 1] |= (var_5 / -1772767818078261595);
                }
                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {
                    var_65 = var_11;

                    for (int i_31 = 0; i_31 < 12;i_31 += 1)
                    {
                        var_66 = var_1;
                        var_67 -= 16492674416640;
                    }

                    for (int i_32 = 0; i_32 < 12;i_32 += 1)
                    {
                        var_68 = (-4019660698255425114 | 11430);
                        arr_110 [i_16] [i_16] [i_16] [i_12] [i_16] [i_16] = var_1;
                        var_69 &= var_10;
                        arr_111 [i_12] [i_30] [i_16] [i_12] [i_12] = 9223372036854775807;
                        arr_112 [i_0 - 1] [i_12] [i_12] [i_12] [i_12] [i_32] [i_32] = (-9223372036854775807 - 1);
                    }
                    for (int i_33 = 0; i_33 < 12;i_33 += 1)
                    {
                        var_70 = var_7;
                        var_71 -= var_0;
                    }
                }
                for (int i_34 = 1; i_34 < 1;i_34 += 1)
                {
                    var_72 = (max(var_72, var_9));
                    var_73 ^= var_7;
                    var_74 -= var_0;
                    arr_119 [i_0] [i_12] [i_12] [i_34 - 1] [i_12] [i_12] = (1772767818078261594 / var_6);
                }
            }
            arr_120 [i_12] = (0 | var_3);
            var_75 *= 11711687557593917317;
            var_76 = 9223372036854775807;
        }
        arr_121 [i_0] = 255;
    }
    for (int i_35 = 0; i_35 < 1;i_35 += 1)
    {
        var_77 ^= var_3;
        arr_124 [i_35] [i_35] &= var_4;
    }
    var_78 |= (min(((((max(var_4, 209835415547909795)) >= (var_8 + 43)))), (max(var_10, (54 < 9223372036854775807)))));

    for (int i_36 = 0; i_36 < 16;i_36 += 1)
    {
        var_79 &= (max((var_12 / var_6), (max(var_9, (max(var_2, var_2))))));
        arr_127 [i_36] = (max(-1, (max(var_9, ((max(var_5, 0)))))));
        var_80 -= (max((min(var_1, var_6)), (var_8 * var_7)));
    }
    /* LoopNest 3 */
    for (int i_37 = 0; i_37 < 21;i_37 += 1)
    {
        for (int i_38 = 0; i_38 < 21;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 21;i_39 += 1)
            {
                {
                    var_81 = var_11;
                    arr_138 [i_39] [i_38] [i_37] = (max(((max(var_3, 124))), (var_2 + 2443039681630620199)));
                    var_82 -= 2961682740;
                }
            }
        }
    }
    #pragma endscop
}
