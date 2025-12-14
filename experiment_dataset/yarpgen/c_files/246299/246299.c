/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_0 ? (min(((var_1 ? var_10 : var_1)), ((var_2 ? -973033512 : 18446744073709551606)))) : (~var_9)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((((min(var_5, (arr_0 [i_0 - 1])))) ? (10087759593647792640 == var_10) : (108 | var_7)));
        arr_4 [i_0] = ((((((var_6 ? 15780 : var_8)))) ? (((21105 ? var_3 : var_4))) : (max(((max(var_8, var_8))), (8358984480061758987 / var_1)))));
        arr_5 [i_0] = 370756684;

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_13 &= (((~var_2) ? (((arr_3 [i_0]) ? ((var_10 >> (var_8 - 422346994))) : (65521 | 8358984480061758987))) : var_5));
            var_14 = (max(var_14, (((((var_1 ? var_7 : ((57858 >> (35 - 27))))) & (((((var_7 ? var_9 : (-127 - 1))) <= (((min(var_0, 1))))))))))));
            var_15 = (min(var_15, ((-(var_9 - var_3)))));
            arr_9 [i_1] = (~var_3);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                var_16 = var_3;
                arr_16 [i_2] [i_0] [i_2] = (((((var_3 ? var_10 : var_0))) ? var_10 : (var_7 / 971116746)));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, (var_5 / var_10)));
                            arr_23 [i_2] = (arr_2 [i_4 - 2] [i_4 - 2]);
                            var_18 ^= ((var_7 ? var_4 : (arr_13 [i_5] [i_0 - 1])));
                        }
                    }
                }
            }
            var_19 = (var_10 ^ var_0);
            arr_24 [i_2] = 3;
        }
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_30 [i_6] [i_6] [i_6] = ((~(((arr_17 [i_6 - 3] [i_6 + 4] [i_6 + 4] [i_6 + 4] [i_6 + 4] [i_6 + 1]) ? var_7 : var_2))));
            var_20 = ((-(min(var_8, var_6))));
            var_21 = var_9;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_35 [i_6] = var_1;

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_22 *= 1;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_3;
                            arr_43 [i_6] [i_6] [i_6] = (((49746 - 126) && (arr_17 [i_6 + 1] [i_6 + 2] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_11 - 1])));
                            arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_28 [i_6] [i_11 - 1]);
                        }
                    }
                }
                var_23 ^= (var_1 / var_10);
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_24 = (min(var_24, -var_6));

                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    var_25 = (min(var_25, (var_6 != var_8)));
                    var_26 = (max(var_26, (~var_6)));
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_54 [i_6] [i_6] = ((784025697 ? 10087759593647792613 : 1));
                    arr_55 [i_6] [i_6] [i_6] [i_6] = var_4;

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_58 [i_15] [i_6] [i_15] [i_6] [i_6] [i_6] = ((var_10 ? var_10 : var_1));
                        var_27 = ((68719476735 ? 115 : 0));
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_28 = (var_3 ? var_5 : var_8);
                            arr_65 [i_6] [i_6] [i_6] [i_6] [i_6] = 86;
                            var_29 &= ((var_7 < ((var_9 ? var_5 : 10242))));
                            var_30 = (min(var_30, var_1));
                        }
                    }
                }
            }
            for (int i_18 = 2; i_18 < 13;i_18 += 1)
            {
                var_31 += var_2;

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_32 = (~49745);
                        arr_74 [i_6] = (((arr_25 [i_6]) ? -6788266803619730090 : var_3));
                    }
                    for (int i_21 = 1; i_21 < 11;i_21 += 1)
                    {
                        var_33 = (min(var_33, var_6));
                        var_34 = (min(var_34, (((-(var_8 == var_2))))));
                    }

                    for (int i_22 = 0; i_22 < 0;i_22 += 1)
                    {
                        arr_80 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_66 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2]);
                        arr_81 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_37 [i_18 + 1] [i_18 + 2] [i_18 + 1]) ? var_0 : var_10));
                        var_35 = (max(var_35, var_1));
                    }
                    arr_82 [i_6] [i_6] [i_6] [i_6] = ((var_8 >> (((arr_19 [i_18 + 2]) - 7830057492956691380))));
                    var_36 = ((var_1 ? var_9 : var_1));
                    var_37 = 1;
                }

                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    var_38 *= 3924210612;

                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        var_39 &= (arr_84 [i_18]);
                        var_40 += (((var_6 & var_5) | 24));
                        arr_91 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_34 [i_6]) ? (var_0 | var_2) : ((var_10 ? var_0 : var_8))));
                        arr_92 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((var_1 >> (((var_8 | -653683314) - 3643643390))));
                    }
                    arr_93 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_6;
                    var_41 = (min(var_41, (((var_9 ? ((var_6 ? (arr_87 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_6)) : (!var_2))))));
                }
                arr_94 [i_6] = var_7;

                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    var_42 = (max(var_42, (((~((var_0 ? var_7 : var_4)))))));
                    var_43 = (min(var_43, 2252594304));
                    var_44 = var_3;
                }
            }
            /* LoopNest 2 */
            for (int i_26 = 2; i_26 < 14;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {
                    {

                        for (int i_28 = 0; i_28 < 15;i_28 += 1)
                        {
                            arr_106 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (!var_9);
                            arr_107 [i_26] [i_26] [i_26] [i_6] [i_26] [i_6] = var_9;
                        }
                        var_45 = (((arr_69 [i_6] [i_6] [i_27 - 1] [i_26 - 2]) | var_2));
                        var_46 = ((var_6 ? (!var_2) : var_8));
                    }
                }
            }

            for (int i_29 = 0; i_29 < 1;i_29 += 1)
            {

                for (int i_30 = 0; i_30 < 15;i_30 += 1)
                {
                    var_47 = (max(var_47, ((((var_3 - var_3) == var_9)))));
                    var_48 -= var_5;
                    arr_113 [i_6] [i_6] [i_6] [i_6] [i_6] = 6842041023200016245;
                }
                for (int i_31 = 0; i_31 < 15;i_31 += 1)
                {
                    var_49 = (min(var_49, (((var_5 ? var_2 : var_6)))));
                    arr_117 [i_6] [i_6] [i_6] [i_6] = (-971116769 + 11543);
                    var_50 ^= var_5;

                    for (int i_32 = 2; i_32 < 14;i_32 += 1)
                    {
                        var_51 -= ((var_4 && (arr_2 [i_32 - 2] [i_32 - 2])));
                        var_52 = ((arr_20 [i_6 + 2]) / ((-1 ? var_9 : var_3)));
                        var_53 *= (var_10 % var_9);
                        var_54 = (123 ^ var_2);
                    }
                }
                arr_120 [i_6] [i_6] = (((((arr_97 [i_6]) > var_2)) ? (35251 % var_10) : 47608));
            }
            for (int i_33 = 2; i_33 < 14;i_33 += 1) /* same iter space */
            {
                arr_124 [i_6] [i_6] = (!var_0);

                for (int i_34 = 0; i_34 < 15;i_34 += 1)
                {
                    arr_129 [i_6] [i_6] [i_6] [i_6] [i_6] = (~var_3);

                    for (int i_35 = 0; i_35 < 15;i_35 += 1)
                    {
                        var_55 = ((((var_0 ? (arr_88 [i_34] [i_34] [i_34] [i_34] [i_34]) : var_8)) | var_7));
                        var_56 ^= var_6;
                    }
                    arr_134 [i_6] [i_6] [i_6] [i_6] = (((((13970590695165978155 ? var_7 : 195))) ? ((370756675 ? -653683319 : var_1)) : (arr_108 [i_6] [i_6] [i_33 - 1])));
                    arr_135 [i_6] [i_6] [i_6] [i_6] [i_6] = var_8;
                }
                for (int i_36 = 0; i_36 < 15;i_36 += 1) /* same iter space */
                {
                    arr_140 [i_8] [i_8] [i_8] [i_8] [i_6] [i_6] = (arr_76 [i_33 - 2] [i_33 - 2] [i_6] [i_33 - 2]);
                    arr_141 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_98 [i_8] [i_8] [i_33 - 1] [i_6 + 1] [i_8]) ? var_3 : var_8));
                }
                for (int i_37 = 0; i_37 < 15;i_37 += 1) /* same iter space */
                {

                    for (int i_38 = 1; i_38 < 12;i_38 += 1)
                    {
                        var_57 ^= ((var_0 ? (((var_8 ? 17910 : (arr_109 [i_8] [i_8] [i_8])))) : (var_0 ^ 2305841909702066176)));
                        arr_147 [i_8] [i_6] [i_8] &= var_10;
                    }
                    for (int i_39 = 4; i_39 < 14;i_39 += 1)
                    {
                        var_58 = 32759;
                        var_59 = (((65535 ? 22 : 344869201)));
                        arr_150 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (~var_7);
                        arr_151 [i_6] = (var_2 & (((arr_67 [i_6] [i_6]) ? var_2 : var_2)));
                    }

                    for (int i_40 = 0; i_40 < 15;i_40 += 1)
                    {
                        var_60 = (arr_59 [i_6] [i_6] [i_6] [i_6] [i_6]);
                        var_61 += ((((var_10 >> (var_4 + 551262654)))) ? var_5 : var_2);
                    }
                }
                for (int i_41 = 1; i_41 < 14;i_41 += 1)
                {

                    for (int i_42 = 0; i_42 < 15;i_42 += 1)
                    {
                        var_62 ^= var_3;
                        var_63 += (!18446744073709551615);
                    }
                    for (int i_43 = 0; i_43 < 15;i_43 += 1)
                    {
                        var_64 = var_10;
                        arr_162 [i_6] [i_6] [i_6] = var_2;
                        arr_163 [i_6] [i_6] [i_6] [i_6] = (var_8 == var_3);
                    }
                    arr_164 [i_8] [i_8] [i_8] [i_8] [i_8] |= var_0;
                    arr_165 [i_6] = (var_1 < var_3);
                    arr_166 [i_6] [i_6] = (120 / 13388);

                    for (int i_44 = 2; i_44 < 14;i_44 += 1)
                    {
                        arr_169 [i_41] [i_41] [i_8] [i_41] [i_41] &= (((arr_59 [i_41] [i_41 + 1] [i_41] [i_41 + 1] [i_41]) / var_1));
                        var_65 = (var_4 - var_2);
                    }
                }
                /* LoopNest 2 */
                for (int i_45 = 0; i_45 < 15;i_45 += 1)
                {
                    for (int i_46 = 0; i_46 < 15;i_46 += 1)
                    {
                        {
                            var_66 = (((arr_145 [i_33] [i_33 - 2] [i_33] [i_33 - 2] [i_33]) ? var_7 : -25));
                            arr_175 [i_6] [i_6] [i_6] [i_8] [i_6] [i_6] [i_6] &= ((23 < var_0) ? var_3 : (arr_11 [i_6 + 1] [i_46] [i_33 - 2]));
                        }
                    }
                }
            }
            for (int i_47 = 2; i_47 < 14;i_47 += 1) /* same iter space */
            {
                arr_179 [i_6] [i_6] [i_6] = var_9;
                var_67 ^= (((var_8 / 54892) - var_3));
            }
        }
        arr_180 [i_6] = (min((arr_168 [i_6] [i_6] [i_6] [i_6 + 1] [i_6]), -var_3));
        /* LoopNest 2 */
        for (int i_48 = 0; i_48 < 15;i_48 += 1)
        {
            for (int i_49 = 1; i_49 < 14;i_49 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_50 = 2; i_50 < 14;i_50 += 1)
                    {
                        for (int i_51 = 0; i_51 < 15;i_51 += 1)
                        {
                            {
                                arr_191 [i_51] [i_51] [i_51] [i_6] [i_51] [i_51] = (((((var_1 ? var_3 : var_4))) ? ((((arr_102 [i_50 - 1] [i_50 - 1] [i_50 - 1] [i_50 - 1]) ? var_3 : (arr_132 [i_50 - 1] [i_50 - 1] [i_50 - 1] [i_50 - 1] [i_50 - 1] [i_50 - 1])))) : (((arr_102 [i_50 - 2] [i_50 - 2] [i_50 - 2] [i_50 - 2]) * 196))));
                                var_68 ^= var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_52 = 1; i_52 < 12;i_52 += 1)
                    {
                        for (int i_53 = 1; i_53 < 14;i_53 += 1)
                        {
                            {
                                arr_200 [i_6] [i_6] [i_6] [i_6] [i_6] = (min((max(3924210612, (((var_1 ? 54 : var_0))))), (((~((var_7 ? (arr_109 [i_6] [i_6] [i_6]) : var_3)))))));
                                var_69 = (min(var_69, (~388046611)));
                                var_70 ^= ((((((var_7 ? var_2 : var_4)) % ((var_0 + (arr_45 [i_48]))))) + (var_0 || 145199363)));
                            }
                        }
                    }
                    var_71 *= ((0 | ((var_3 ? (((((arr_126 [i_6] [i_6]) + 2147483647)) >> (((-127 - 1) + 132)))) : 1))));
                }
            }
        }
        arr_201 [i_6] [i_6] = ((((var_2 ? var_4 : var_6)) >= (min((~44835), ((var_9 ? var_2 : var_7))))));

        /* vectorizable */
        for (int i_54 = 0; i_54 < 15;i_54 += 1)
        {
            var_72 += ((var_3 ? var_3 : var_5));
            /* LoopNest 3 */
            for (int i_55 = 0; i_55 < 1;i_55 += 1)
            {
                for (int i_56 = 0; i_56 < 15;i_56 += 1)
                {
                    for (int i_57 = 2; i_57 < 14;i_57 += 1)
                    {
                        {
                            var_73 = (arr_177 [i_6 - 2] [i_54]);
                            arr_214 [i_57] [i_6] [i_6] [i_6] [i_6] = ((arr_104 [i_54] [i_54] [i_6] [i_54] [i_54]) ? var_3 : (var_4 || var_7));
                        }
                    }
                }
            }
        }
        for (int i_58 = 2; i_58 < 11;i_58 += 1)
        {
            var_74 = (min(var_74, ((min(((max(-1, var_5))), (var_1 & var_5))))));
            var_75 ^= ((var_10 || -388046621) ? ((min(0, 3924210612))) : (18446744073709551615 | var_1));
            arr_217 [i_6] [i_6] [i_6] = ((((min(0, 1))) == (~var_2)));
        }
    }
    var_76 = (max(var_76, var_10));
    #pragma endscop
}
