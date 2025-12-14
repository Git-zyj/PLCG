/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_13;
    var_20 = (((((max(var_10, var_4)))) * ((var_8 | ((min(var_18, var_11)))))));
    var_21 = (max((var_17 << var_5), ((min(var_14, var_17)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [1] [i_1] |= var_3;
            var_22 = var_1;
            arr_7 [i_0] [1] [1] = ((var_6 ? ((min(var_18, var_6))) : (((min(var_4, var_13)) ? var_3 : ((var_0 ? var_0 : var_0))))));
            var_23 = (((max(var_3, ((var_17 ? var_2 : var_6))))) || ((((var_4 * var_3) * var_7))));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] [1] = (0 < 0);
            arr_12 [i_2] [i_2] [1] = ((var_16 >= ((max(var_11, var_6)))));
            var_24 = var_9;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_25 = (max(var_14, (max(var_18, var_0))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_24 [i_5] [i_3] [i_5] [i_5 + 1] [i_3] [i_5] = var_18;
                    arr_25 [i_5] [i_3] [i_5] [i_5 + 1] [1] = var_7;
                    arr_26 [1] [i_3] [i_4] [i_3] = var_5;
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = (min(var_26, var_15));
                        var_27 = (var_7 | var_12);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_28 = var_17;
                        var_29 &= ((var_16 ? var_7 : var_1));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_36 [i_3] [i_3] [i_3] [1] [i_9] [i_6] [i_6] = ((var_2 ? var_16 : var_8));
                        var_30 *= var_12;
                        var_31 = (var_16 * var_1);
                        var_32 = var_16;
                        var_33 *= (((var_16 || var_0) & var_16));
                    }
                    var_34 = (min(var_34, ((var_9 <= (var_15 < var_2)))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_35 = var_13;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_36 = (((var_13 * var_8) ? (var_5 <= var_11) : var_1));
                        arr_41 [i_3] [i_3] = var_1;
                        var_37 = (var_9 < var_15);
                        var_38 = (min(var_38, var_2));
                        var_39 = (max(var_39, var_13));
                    }
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_44 [1] [i_3] [i_12] = max(var_2, var_11);
                var_40 = (((min((var_2 || var_16), var_0)) ? (max(var_17, ((var_18 ? var_9 : var_10)))) : (var_6 + var_6)));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_48 [i_0] [i_0] [i_0] [i_3] = var_12;
                var_41 = (max(var_41, ((max((var_14 * var_8), (var_4 == var_6))))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_52 [i_0] [i_3] [i_3] = (max((((((var_17 ? var_3 : var_4))) ? var_4 : var_3)), (var_18 < var_11)));
                var_42 = max(var_1, (((var_10 ? var_14 : var_7))));
                arr_53 [i_3] [i_14] [i_3] [i_0] = ((var_8 >= var_5) == ((var_7 ? var_17 : var_8)));
            }
            arr_54 [0] |= (((max((min(var_6, var_4)), var_6)) ? var_17 : ((max(var_13, (var_8 <= var_5))))));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_58 [i_0] [i_0] [i_0] [i_3] = var_18;
                var_43 = (((min(var_15, var_10))) < var_18);

                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_44 = ((((min(var_3, var_15)))) > ((var_14 ? var_4 : ((max(var_3, var_18))))));
                    arr_63 [i_3] [i_16] = var_5;
                    arr_64 [1] [1] [i_15] [i_3] = (max(((var_5 ? var_12 : var_7)), ((var_18 ? var_13 : var_2))));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                {
                    var_45 = (((min((var_5 == var_10), (max(var_11, var_7)))) ? ((min((min(var_0, var_11)), var_18))) : (min((var_2 ^ var_7), var_18))));

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_46 = ((min((var_3 == var_10), ((var_16 ? var_6 : var_11)))) > ((min(var_2, var_9))));
                        var_47 += (((var_0 - var_18) ? ((max(var_2, var_13))) : (var_17 >> var_17)));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_48 -= ((min(var_5, var_15)));
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((var_1 * var_5) <= ((min(var_9, var_5))));
                    }
                    var_49 = (max(var_4, (var_9 >= var_12)));
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    var_50 = max(var_17, var_0);
                    var_51 = (min(1, ((1 ? 1 : 1))));

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        arr_80 [1] [i_3] [i_3] [i_0] = var_4;
                        arr_81 [i_3] [i_3] [1] [i_3] [1] = ((var_5 ? var_12 : ((var_10 ? var_3 : var_14))));
                    }
                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        arr_86 [i_0] [i_0] [1] [i_3] [i_0] = (var_2 | var_1);
                        arr_87 [i_3] = (var_4 * var_12);
                        arr_88 [i_0] [i_3] [i_3] [1] [0] = 1;
                        var_52 = var_15;
                    }
                }

                /* vectorizable */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_53 = ((var_10 ? var_8 : var_4));
                    var_54 = ((var_16 ? var_14 : var_12));

                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        var_55 += (var_2 >= var_2);
                        var_56 = ((var_8 ? var_9 : ((var_11 ? var_6 : var_13))));
                    }
                }
                for (int i_25 = 1; i_25 < 1;i_25 += 1)
                {
                    var_57 = (min(((var_8 ? (var_18 * var_3) : var_2)), var_17));
                    var_58 = ((var_12 ? (var_3 == var_6) : (0 | 1)));
                    arr_97 [i_3] [i_3] [1] [i_15] [i_15] [i_25] = (((max(1, 1)) ? (var_17 < var_14) : var_15));

                    for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                    {
                        arr_100 [i_3] = max((var_17 && var_16), ((min(var_2, var_5))));
                        arr_101 [1] [1] [i_3] [1] [1] = ((var_5 ? ((max(var_11, var_3))) : ((var_11 ? var_14 : var_15))));
                    }
                    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
                    {
                        var_59 = (((((var_4 * var_10) * var_7)) / ((max(var_6, var_8)))));
                        var_60 = (((var_3 < var_0) ? (var_18 + var_1) : (var_4 << var_6)));
                    }
                    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                    {
                        var_61 = (max((((min(var_9, var_7)))), ((((min(var_10, var_10))) - var_5))));
                        var_62 = ((((max(var_17, var_1)))) >= var_18);
                        arr_106 [i_28] [i_28] [i_28] [i_28] [i_28] [i_3] = (min(var_11, var_14));
                    }
                    arr_107 [i_3] = var_10;
                }
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {

                    for (int i_30 = 0; i_30 < 0;i_30 += 1)
                    {
                        var_63 = var_10;
                        var_64 = min(var_0, ((((max(var_9, var_4))) >= var_8)));
                    }
                    var_65 = var_4;
                    var_66 = (((var_9 << var_0) ? (var_6 != var_16) : (var_18 == var_10)));
                    var_67 = (var_13 == (max(((var_3 ? var_6 : var_4)), var_4)));
                }
            }
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
        {
            var_68 ^= (((((var_13 ? var_4 : var_0))) ? var_17 : var_7));

            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                var_69 = var_12;
                arr_120 [i_31] [1] [0] [i_31] &= (var_14 == var_17);
                var_70 = var_11;
            }
        }
    }
    for (int i_33 = 0; i_33 < 1;i_33 += 1)
    {
        var_71 = ((var_14 ? (var_1 + var_16) : (((min(var_3, var_0))))));
        arr_123 [i_33] = ((((((min(var_0, var_9))) << ((var_6 ? var_9 : var_10)))) | ((var_9 ? (var_17 ^ var_7) : var_5))));
        var_72 = (var_4 + var_18);
    }
    for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
    {
        arr_126 [i_34] [i_34] = min(var_10, var_8);
        var_73 = (1 >> var_9);
        var_74 *= ((var_2 | (var_8 * var_18)));
    }
    for (int i_35 = 0; i_35 < 1;i_35 += 1) /* same iter space */
    {
        arr_129 [1] [i_35] = ((var_17 ? ((min(var_7, (max(var_4, var_9))))) : var_7));

        for (int i_36 = 0; i_36 < 0;i_36 += 1)
        {
            var_75 = ((((min(var_10, var_3))) * (var_0 > var_1)));
            var_76 = (max(var_76, ((max((max(var_9, var_9)), (max(var_0, var_6)))))));

            for (int i_37 = 0; i_37 < 1;i_37 += 1)
            {

                for (int i_38 = 0; i_38 < 1;i_38 += 1)
                {

                    for (int i_39 = 0; i_39 < 1;i_39 += 1)
                    {
                        arr_140 [i_36] [i_36] [i_36] = (min((max((1 ^ 1), var_13)), var_18));
                        var_77 = (min((var_11 == var_18), (min(var_0, (var_11 | var_11)))));
                    }
                    var_78 = (((min(var_1, var_13)) ? (var_18 >> var_14) : ((min((max(var_3, var_7)), var_1)))));
                    arr_141 [i_37] [i_35] = (((var_0 <= var_15) >= (var_2 << var_9)));

                    /* vectorizable */
                    for (int i_40 = 0; i_40 < 0;i_40 += 1)
                    {
                        var_79 = (var_4 - var_8);
                        var_80 = (var_12 << var_15);
                    }
                }
                for (int i_41 = 0; i_41 < 1;i_41 += 1)
                {

                    for (int i_42 = 0; i_42 < 0;i_42 += 1)
                    {
                        arr_151 [i_42] = ((((var_12 ? var_6 : var_0)) * var_5));
                        var_81 = (1 == 1);
                    }
                    /* vectorizable */
                    for (int i_43 = 0; i_43 < 1;i_43 += 1)
                    {
                        var_82 = var_12;
                        var_83 ^= (var_17 - var_16);
                        arr_155 [i_35] = var_8;
                        var_84 = var_14;
                    }
                    arr_156 [i_35] [0] [i_37] [0] = (min((var_5 | var_10), (var_12 || var_14)));
                    var_85 = var_17;
                }
                for (int i_44 = 0; i_44 < 1;i_44 += 1)
                {
                    var_86 = var_9;
                    var_87 = ((var_15 >> ((max(var_2, var_3)))));

                    for (int i_45 = 0; i_45 < 1;i_45 += 1)
                    {
                        arr_165 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] [1] = (((max(var_6, var_6))) > var_17);
                        var_88 = ((max(((var_7 ? var_5 : var_17)), var_6)) >= (var_4 <= var_4));
                        var_89 = var_4;
                    }
                }
                var_90 = (((max(var_0, var_11)) ? ((var_6 ? var_8 : var_15)) : ((var_16 ? var_2 : var_3))));

                for (int i_46 = 0; i_46 < 1;i_46 += 1)
                {
                    var_91 = (max(var_4, var_18));
                    arr_170 [i_46] [i_36] = ((((max(var_6, var_2))) % 1));

                    for (int i_47 = 0; i_47 < 1;i_47 += 1)
                    {
                        arr_173 [i_35] [i_46] [i_47] [i_46] [i_35] = (((var_10 && var_3) ? (var_17 <= var_13) : (var_8 ^ var_13)));
                        var_92 = (max((((min(var_6, var_5)))), (var_7 * var_5)));
                        arr_174 [i_46] = (((var_16 > var_8) ? ((max(var_10, var_18))) : var_17));
                    }
                }
                for (int i_48 = 1; i_48 < 1;i_48 += 1)
                {

                    for (int i_49 = 0; i_49 < 0;i_49 += 1)
                    {
                        var_93 = ((var_0 ? (var_5 < var_9) : ((((min(var_4, var_15))) / var_14))));
                        arr_180 [i_35] [i_36] [1] [i_48] [i_49] = (((max(var_5, var_2)) ? (var_6 >= var_15) : ((min(var_9, var_10)))));
                        var_94 = ((var_5 ? var_3 : var_15));
                    }
                    arr_181 [i_35] [i_48] [i_37] [i_37] = (((var_4 || var_2) * var_0));
                    arr_182 [i_48] [0] [i_48] = var_14;
                }
            }
        }
        for (int i_50 = 1; i_50 < 1;i_50 += 1)
        {

            for (int i_51 = 0; i_51 < 1;i_51 += 1)
            {

                for (int i_52 = 0; i_52 < 1;i_52 += 1)
                {

                    for (int i_53 = 0; i_53 < 1;i_53 += 1)
                    {
                        arr_192 [i_35] [i_50] [i_51] [1] [i_35] = (var_13 == var_18);
                        arr_193 [1] [i_35] [i_51] [1] [i_53] [i_50] [i_35] = (max(var_1, var_14));
                    }
                    for (int i_54 = 0; i_54 < 1;i_54 += 1)
                    {
                        arr_198 [i_35] [1] = var_7;
                        var_95 -= ((((max(var_11, var_11))) & ((max(var_13, var_0)))));
                    }
                    for (int i_55 = 0; i_55 < 1;i_55 += 1)
                    {
                        var_96 = ((((max(var_15, var_18))) | ((var_0 ? var_8 : var_3))));
                        var_97 = (min(var_97, (min((max(var_11, var_1)), (max(var_14, var_12))))));
                        var_98 = ((var_11 * (var_0 == var_13)));
                        var_99 = var_7;
                    }

                    /* vectorizable */
                    for (int i_56 = 0; i_56 < 1;i_56 += 1)
                    {
                        var_100 = var_16;
                        arr_206 [i_35] [i_35] [1] [1] = var_7;
                        var_101 = var_16;
                    }
                    for (int i_57 = 0; i_57 < 1;i_57 += 1)
                    {
                        arr_210 [i_35] [i_57] [i_50] [i_35] [1] [i_35] = (min(var_3, var_3));
                        arr_211 [i_35] [i_35] [i_35] [i_35] [1] [1] [i_57] = ((((max(var_0, var_9))) - var_14));
                    }
                    for (int i_58 = 0; i_58 < 0;i_58 += 1)
                    {
                        arr_214 [i_35] [i_50] [0] [i_58] [1] [1] [i_50] = (min(var_18, var_3));
                        var_102 = max(var_1, ((((min(var_16, var_2))) != ((min(var_5, var_12))))));
                    }
                }
                for (int i_59 = 0; i_59 < 1;i_59 += 1)
                {
                    var_103 += max(var_17, 0);
                    var_104 = (((max(var_6, var_6)) || (min(var_1, var_7))));

                    for (int i_60 = 0; i_60 < 1;i_60 += 1) /* same iter space */
                    {
                        var_105 += (0 <= ((1 << ((min(1, 1))))));
                        var_106 *= ((var_15 ? var_14 : var_16));
                        arr_220 [1] [i_60] = 1;
                    }
                    for (int i_61 = 0; i_61 < 1;i_61 += 1) /* same iter space */
                    {
                        arr_223 [i_50] [i_51] [1] = ((var_10 | (((min(var_6, var_15)) ? var_18 : ((min(var_3, var_15)))))));
                        var_107 = (var_9 || var_5);
                    }
                }
                var_108 |= max((max(var_17, var_2)), (max(1, 1)));
                var_109 = (min(var_109, (((((min(var_12, var_13))) / ((max(var_5, var_8))))))));
                arr_224 [i_35] [i_50] [1] = (var_8 || var_14);
            }

            for (int i_62 = 0; i_62 < 1;i_62 += 1)
            {
                arr_227 [i_62] = (var_17 | var_18);
                arr_228 [i_35] [i_35] [i_35] = ((((((var_16 * var_7) + ((max(var_1, var_8)))))) ? (var_1 + var_10) : ((var_12 * (var_11 / var_6)))));
            }
            for (int i_63 = 1; i_63 < 1;i_63 += 1)
            {

                /* vectorizable */
                for (int i_64 = 0; i_64 < 1;i_64 += 1)
                {
                    arr_235 [i_50] = (var_13 > var_4);

                    for (int i_65 = 0; i_65 < 1;i_65 += 1)
                    {
                        var_110 = (var_13 >= var_16);
                        var_111 = (((var_2 * var_17) ? (var_12 | var_11) : var_12));
                        arr_238 [i_35] [i_50 - 1] [i_63] [i_64] [1] = ((var_3 ? (var_2 || var_18) : (var_10 * var_5)));
                        arr_239 [1] [i_63 - 1] = var_17;
                        var_112 = var_0;
                    }
                    for (int i_66 = 0; i_66 < 0;i_66 += 1)
                    {
                        var_113 = (var_17 * var_13);
                        var_114 = var_2;
                    }
                    var_115 = var_14;
                    var_116 = (var_14 != var_3);
                    arr_243 [1] |= var_0;
                }
                var_117 &= ((var_5 >> ((var_2 ? var_2 : var_16))));
                var_118 = (var_10 * var_5);
            }
        }
    }
    #pragma endscop
}
