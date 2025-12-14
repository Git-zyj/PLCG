/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_14 = 1;
                arr_8 [i_2] [i_1] [i_2] = (~86);
                var_15 = (max(var_15, 1));
                var_16 = var_2;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1] |= (84 || 1);
                var_17 = -var_7;
            }
            var_18 = var_5;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] [i_0] = (arr_4 [1] [i_4] [1]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [1] [i_5] = -var_10;
                            var_19 = (((!var_2) ? var_4 : var_8));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 ^= 1;
                            var_21 = (min(var_21, (((85 ? (2 + var_4) : var_13)))));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_34 [i_13 + 1] [i_13 + 2] [i_13 + 2]) ? (arr_6 [i_13 + 3] [i_8] [i_9] [i_12]) : var_13)))));
                        var_23 *= var_12;
                        var_24 = ((var_10 ? var_2 : var_1));
                    }
                    var_25 = (max(var_25, 1));
                    arr_40 [1] [1] [1] [i_0] = -var_10;
                }
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    var_26 = var_13;
                    var_27 = ((~((2 ? var_2 : var_5))));
                    var_28 ^= ((-75 ? ((var_1 ? var_5 : var_6)) : (arr_9 [i_14 - 1] [i_14] [i_14 + 1])));
                    arr_44 [i_0] [i_8] [i_9] [i_14] = (41 / var_7);
                    var_29 = var_2;
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_30 = var_8;
                    var_31 -= var_11;
                }
                for (int i_16 = 3; i_16 < 10;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        var_32 = (!var_10);
                        var_33 = (((var_9 * var_11) ? var_12 : var_9));
                        arr_54 [i_16] [i_16 + 1] [i_9] [i_8] [i_16] = (13 || var_11);
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [1] [i_9] [1] [0] |= (((arr_36 [i_16 + 2]) + (arr_33 [11] [1] [i_9] [i_9] [i_9] [i_18] [i_16 - 2])));
                        arr_59 [i_16] [i_8] [i_9] [i_16] = 1;
                        var_34 = (max(var_34, (((var_9 ? var_9 : (((25 < (arr_22 [i_0])))))))));
                        arr_60 [i_0] [i_8] [i_9] [i_16] [9] = ((var_6 << (arr_12 [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_18])));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_35 = (1 || 1);
                        arr_65 [i_0] [3] [i_16] [i_16] [3] = ((-(arr_34 [i_16 - 2] [i_16] [i_19])));
                        var_36 = var_9;
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_68 [i_20] [i_16] [i_0] [0] [i_0] |= arr_20 [i_16 + 1] [i_16] [i_16 - 2];
                        arr_69 [i_9] [i_8] [0] [i_16] [i_20] [i_16] [i_20] = 1;
                        var_37 ^= -var_7;
                    }
                    arr_70 [i_0] [i_8] [1] [i_16] = var_10;
                    var_38 *= ((var_0 ? var_6 : -26));
                }

                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    var_39 = (max(var_39, var_5));

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_40 ^= ((-(arr_30 [i_22] [i_21] [i_9])));
                        var_41 *= (((((var_5 ? var_1 : -123))) ? ((var_11 ? var_4 : var_2)) : var_7));
                        var_42 = 1;
                        var_43 *= var_12;
                    }
                    for (int i_23 = 2; i_23 < 11;i_23 += 1)
                    {
                        arr_82 [0] [i_9] [0] = var_6;
                        var_44 = (var_9 == var_7);
                        var_45 = var_10;
                        var_46 = (min(var_46, var_6));
                    }
                }
                var_47 -= ((var_0 ? (arr_0 [i_0]) : 68));
            }
            var_48 |= var_11;
        }
        var_49 *= (var_6 == var_9);
    }
    /* vectorizable */
    for (int i_24 = 1; i_24 < 21;i_24 += 1)
    {

        for (int i_25 = 1; i_25 < 20;i_25 += 1)
        {
            var_50 = var_13;
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {

                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            arr_98 [i_24] [i_24] = ((62 ? var_0 : var_9));
                            arr_99 [i_24] [i_24] = -12;
                        }

                        for (int i_29 = 1; i_29 < 1;i_29 += 1)
                        {
                            var_51 -= (!0);
                            var_52 = (min(var_52, var_5));
                            var_53 *= var_7;
                            var_54 = ((var_8 * ((82 ? var_1 : var_4))));
                            var_55 = 33;
                        }
                        var_56 *= (1 < -47);
                        var_57 -= var_7;
                    }
                }
            }
        }
        for (int i_30 = 0; i_30 < 1;i_30 += 1)
        {
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 23;i_31 += 1)
            {
                for (int i_32 = 3; i_32 < 22;i_32 += 1)
                {
                    {
                        var_58 *= 50;
                        arr_109 [i_32 - 3] [i_24] [i_24] [i_24] = -38;
                        arr_110 [i_24] [i_31] [i_31] [1] [10] = (((arr_92 [i_24 + 1]) ? var_3 : var_12));

                        for (int i_33 = 0; i_33 < 23;i_33 += 1)
                        {
                            var_59 = (min(var_59, (((88 ? 1 : -1)))));
                            var_60 = (min(var_60, (((var_1 ? var_5 : var_11)))));
                            arr_114 [i_24] [1] [i_24] [1] [i_24] = (var_11 || (1 >= var_2));
                        }
                    }
                }
            }

            for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
            {
                arr_118 [i_24] [i_24] [i_34] = -var_13;

                for (int i_35 = 0; i_35 < 23;i_35 += 1)
                {
                    var_61 *= (((-15 ? 1 : 1)));

                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        arr_123 [i_24 + 2] [i_30] [7] [i_34] [i_24] = -var_0;
                        var_62 = (var_2 > var_11);
                    }
                    for (int i_37 = 0; i_37 < 1;i_37 += 1) /* same iter space */
                    {
                        arr_127 [i_24] [i_30] [i_34] [i_35] [i_37] [18] = (((((var_7 ? var_4 : var_6))) ? var_7 : (arr_103 [i_24])));
                        var_63 = (min(var_63, var_0));
                        var_64 = ((var_13 ^ (arr_111 [i_24 + 2] [i_24])));
                    }
                    for (int i_38 = 0; i_38 < 1;i_38 += 1) /* same iter space */
                    {
                        var_65 = 28;
                        var_66 = ((var_5 ? (arr_97 [i_24 + 1]) : 19));
                    }
                    var_67 = ((-(~var_4)));
                    arr_130 [i_35] [i_24] [i_24] [i_35] = var_8;

                    for (int i_39 = 0; i_39 < 1;i_39 += 1)
                    {
                        var_68 = var_11;
                        var_69 = -64;
                    }
                }
                for (int i_40 = 0; i_40 < 23;i_40 += 1)
                {
                    var_70 = (min(var_70, (((((((arr_126 [i_24] [i_40]) ? var_2 : var_8))) ? -27 : var_13)))));

                    for (int i_41 = 0; i_41 < 23;i_41 += 1)
                    {
                        var_71 = var_10;
                        arr_139 [1] [i_30] [i_34] [i_30] [i_24] = ((var_9 ? 126 : var_12));
                    }
                    for (int i_42 = 0; i_42 < 23;i_42 += 1)
                    {
                        var_72 = ((var_12 ? var_6 : 57));
                        var_73 |= ((var_4 * (var_9 == var_5)));
                        var_74 = var_0;
                        var_75 *= (((arr_137 [1] [i_42] [i_40] [i_24] [i_24 + 2] [i_42] [i_24]) ? 1 : var_1));
                        var_76 = ((-111 ? var_0 : var_9));
                    }
                    for (int i_43 = 0; i_43 < 23;i_43 += 1)
                    {
                        var_77 = (min(var_77, var_11));
                        var_78 = (i_24 % 2 == 0) ? (((var_3 / (arr_115 [i_24] [i_24 + 1] [1] [15])))) : (((var_3 * (arr_115 [i_24] [i_24 + 1] [1] [15]))));
                    }
                    for (int i_44 = 3; i_44 < 22;i_44 += 1)
                    {
                        arr_148 [7] [1] [i_34] [i_34] [i_24] [i_40] [i_44] = (!1);
                        arr_149 [i_24] [i_24] [i_34] [i_24] [i_24] = var_11;
                        arr_150 [4] [i_30] [i_44] [i_40] [i_24] = ((var_11 * ((var_8 ? var_11 : -26))));
                        arr_151 [i_34] [i_24] [i_34] [i_30] [i_24] [i_24] = var_10;
                        var_79 = ((((((arr_135 [1] [0] [i_30]) > var_2))) > (arr_96 [7] [11] [1])));
                    }
                }
                for (int i_45 = 2; i_45 < 21;i_45 += 1)
                {
                    arr_154 [i_45] [i_45] |= 1;
                    var_80 -= -var_5;
                }
                for (int i_46 = 0; i_46 < 1;i_46 += 1)
                {
                    arr_158 [i_24] [20] [i_34] [1] [i_24] [i_30] = (!((((var_11 + 2147483647) << (((var_10 + 84) - 10))))));
                    var_81 = ((~((36 ? var_13 : var_2))));
                    var_82 ^= ((1 ? 1 : (arr_144 [i_24 + 2] [i_30])));
                    arr_159 [i_24] [i_30] [i_30] = (~var_12);

                    for (int i_47 = 0; i_47 < 1;i_47 += 1)
                    {
                        var_83 = (((arr_131 [1] [i_30] [i_34] [i_46] [i_47]) != -19));
                        var_84 &= arr_145 [i_24] [i_24] [i_24] [i_24] [i_24 + 2];
                    }
                    for (int i_48 = 0; i_48 < 23;i_48 += 1)
                    {
                        var_85 = (1 >= 114);
                        var_86 = var_13;
                        var_87 |= -var_13;
                    }
                }
            }
            for (int i_49 = 0; i_49 < 1;i_49 += 1) /* same iter space */
            {
                arr_169 [i_24] [i_30] [i_49] [i_24] = var_12;
                var_88 = var_13;
                arr_170 [i_49] [i_24] [i_24] [1] = var_10;
            }
        }
        for (int i_50 = 0; i_50 < 23;i_50 += 1)
        {
            var_89 = -19;
            var_90 = var_12;
            /* LoopNest 3 */
            for (int i_51 = 0; i_51 < 23;i_51 += 1)
            {
                for (int i_52 = 3; i_52 < 22;i_52 += 1)
                {
                    for (int i_53 = 3; i_53 < 21;i_53 += 1)
                    {
                        {
                            arr_181 [i_24] [i_24] [i_24] [i_24] [15] [i_24] [i_24] = (((-103 + 2147483647) << (arr_116 [i_24 + 2])));
                            var_91 = (max(var_91, var_6));
                            arr_182 [i_24] = ((arr_100 [i_52 - 2] [0]) > 1);
                            var_92 = (1 && var_9);
                            var_93 = ((1 ? var_7 : 1));
                        }
                    }
                }
            }
            var_94 = (max(var_94, 1));
        }
        var_95 ^= (((arr_141 [i_24 + 2] [i_24] [i_24 + 2]) != var_13));
    }
    var_96 = var_5;
    #pragma endscop
}
