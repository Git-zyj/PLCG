/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (min(var_21, var_17));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = (min(var_22, 1));
                        var_23 = 1;
                        var_24 *= var_4;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_25 = (-46 - var_5);
                        var_26 -= var_13;
                    }
                    var_27 *= ((var_0 >> (((216 - 24569) + 24376))));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_28 = (min(var_28, (206 | 72)));
                    var_29 = -1;
                }
                for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_30 = (min(var_30, var_4));

                    for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_31 = -1;
                        var_32 = var_0;
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_33 = (26 ^ -14);
                        var_34 = 72;
                    }
                }
                for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_29 [i_0] [4] [i_2] [i_0] [i_0] [7] = ((20717 >> (var_16 ^ var_2)));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_35 += (((4265704881375761828 & var_8) | 1049243937));
                        var_36 = (min(var_36, 2147483633));
                    }
                }

                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    var_37 = var_16;
                    var_38 *= (584543749 / var_12);
                    var_39 = -4636688521372496515;
                    var_40 = (max(var_40, var_17));
                }
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_41 = var_18;
                var_42 = ((var_17 == (0 | var_2)));

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_43 = var_18;
                    var_44 += 60914;
                    var_45 += 15;
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_46 = (min(var_46, var_7));
                    var_47 += var_18;
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_48 = (min(var_48, 1));
                    var_49 = (max(var_49, var_14));
                    var_50 = (min(var_50, var_1));
                }

                for (int i_17 = 1; i_17 < 20;i_17 += 1) /* same iter space */
                {
                    var_51 = 25077;

                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_52 = (115 || ((((1 || -72) % -8331391003466813131))));
                        var_53 = (max(var_53, -46));
                        var_54 = ((-1289946364 | (((var_15 && (1056664646 / var_19))))));
                        arr_57 [i_0] [i_17] [i_0] = var_2;
                    }

                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_55 = (min(var_55, (var_18 < var_14)));
                        var_56 = (((var_0 >= -6341370428083265417) > var_8));
                    }
                }
                for (int i_20 = 1; i_20 < 20;i_20 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_21 = 1; i_21 < 19;i_21 += 1)
                    {
                        var_57 = 1;
                        var_58 ^= (0 ^ -115);
                    }
                    /* vectorizable */
                    for (int i_22 = 3; i_22 < 18;i_22 += 1) /* same iter space */
                    {
                        var_59 = var_11;
                        var_60 -= (((15 * 32767) - var_14));
                        var_61 |= var_9;
                    }
                    /* vectorizable */
                    for (int i_23 = 3; i_23 < 18;i_23 += 1) /* same iter space */
                    {
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -90966501;
                        var_62 = (max(var_62, var_4));
                        var_63 = 18584;
                    }
                    var_64 -= var_13;
                }
                for (int i_24 = 1; i_24 < 20;i_24 += 1) /* same iter space */
                {
                    var_65 += ((115 + (((-797893115 - var_11) + 32742))));
                    var_66 *= var_0;
                    var_67 = var_18;
                }
                /* vectorizable */
                for (int i_25 = 1; i_25 < 20;i_25 += 1) /* same iter space */
                {
                    var_68 = 24374;
                    var_69 ^= var_7;
                }
            }
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                var_70 = (max(var_70, (((1825134903446428381 || ((((var_14 + 20139) * var_7))))))));
                var_71 = 6341370428083265417;

                /* vectorizable */
                for (int i_27 = 0; i_27 < 21;i_27 += 1)
                {
                    var_72 = var_14;

                    for (int i_28 = 0; i_28 < 21;i_28 += 1)
                    {
                        var_73 = ((27 / 1879465560) * (var_15 * 24830));
                        var_74 = (((var_17 % var_17) || -125));
                        var_75 &= ((1057316803 << (((-27 + 48) - 21))));
                        var_76 *= (22966 == var_7);
                    }
                    for (int i_29 = 1; i_29 < 1;i_29 += 1)
                    {
                        var_77 = ((var_1 ^ (32630 + 116)));
                        var_78 = var_4;
                        var_79 = (max(var_79, var_2));
                    }
                    arr_85 [i_0] [i_26] [i_1] [i_0] = (var_1 > var_6);
                }
                var_80 = 0;
            }
            var_81 = (((((-1879465584 > 5334177356790686702) ^ -1)) > 2147483647));
        }
        for (int i_30 = 0; i_30 < 21;i_30 += 1) /* same iter space */
        {

            for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
            {
                var_82 = var_1;

                for (int i_32 = 1; i_32 < 20;i_32 += 1)
                {
                    var_83 = (min(var_83, var_19));
                    arr_94 [i_0] [i_30] [i_0] [i_32 + 1] = var_3;
                    var_84 = var_18;

                    /* vectorizable */
                    for (int i_33 = 4; i_33 < 20;i_33 += 1)
                    {
                        var_85 |= 60208;
                        var_86 = (1 && var_14);
                    }
                }
            }
            for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
            {
                var_87 = ((var_18 % (53649 & 9223372036854775807)));
                var_88 = (-92 % var_9);
            }
            var_89 = var_8;
        }
        /* vectorizable */
        for (int i_35 = 0; i_35 < 21;i_35 += 1) /* same iter space */
        {
            arr_101 [i_0] = (var_14 && var_5);
            var_90 = (max(var_90, var_1));
        }

        for (int i_36 = 0; i_36 < 21;i_36 += 1) /* same iter space */
        {
            var_91 = var_17;
            var_92 = var_5;
            var_93 = 1776120355;
            var_94 = 18446744073709551615;
        }
        for (int i_37 = 0; i_37 < 21;i_37 += 1) /* same iter space */
        {
            var_95 = (max(var_95, (60222 & 20711)));
            var_96 = (max(var_96, 74));
            var_97 = var_11;
            var_98 *= (((-99731231 != 511) & ((var_14 << (((-111 ^ var_7) + 49))))));
        }
        for (int i_38 = 0; i_38 < 21;i_38 += 1) /* same iter space */
        {
            var_99 = (max(var_99, (1 || 1092)));
            var_100 = var_12;
            var_101 = ((var_16 >> (11870087290411114941 - 11870087290411114930)));
        }
        var_102 = (((((4219144502984404404 && (1085 + var_0)))) & var_3));
    }
    /* vectorizable */
    for (int i_39 = 1; i_39 < 18;i_39 += 1) /* same iter space */
    {
        var_103 = (35215 - var_6);
        var_104 = var_5;

        for (int i_40 = 2; i_40 < 19;i_40 += 1) /* same iter space */
        {
            var_105 = var_6;
            var_106 += (1349 / 1);
        }
        for (int i_41 = 2; i_41 < 19;i_41 += 1) /* same iter space */
        {
            var_107 = var_6;

            for (int i_42 = 0; i_42 < 1;i_42 += 1)
            {
                var_108 = (max(var_108, (-1093 & var_13)));

                for (int i_43 = 0; i_43 < 20;i_43 += 1)
                {
                    var_109 = 1790644512;
                    var_110 = (((-92 + 2147483647) << (501 - 501)));

                    for (int i_44 = 0; i_44 < 20;i_44 += 1) /* same iter space */
                    {
                        var_111 = var_3;
                        arr_127 [i_39] [i_41] [i_39] [i_43] [i_39] [i_41] = 1;
                        var_112 = (max(var_112, var_15));
                    }
                    for (int i_45 = 0; i_45 < 20;i_45 += 1) /* same iter space */
                    {
                        var_113 = var_12;
                        var_114 = -681356087;
                        var_115 = 1;
                    }
                    var_116 = (-1 + 32767);
                }
                for (int i_46 = 2; i_46 < 17;i_46 += 1) /* same iter space */
                {
                    var_117 *= var_6;

                    for (int i_47 = 1; i_47 < 18;i_47 += 1)
                    {
                        var_118 = (min(var_118, (31 % 1)));
                        arr_137 [i_46] [i_46] [i_46] [i_46 - 1] [i_39] = 141;
                        var_119 = var_5;
                    }
                    for (int i_48 = 0; i_48 < 20;i_48 += 1)
                    {
                        var_120 = var_5;
                        var_121 = ((var_7 - (-26008 - 16515072)));
                        var_122 |= (-92 - 0);
                        var_123 = (min(var_123, var_14));
                        var_124 = ((((1 >> (var_14 - 7552293156313829175))) - (var_6 >= 255)));
                    }
                    var_125 *= ((var_11 & (var_7 - var_0)));

                    for (int i_49 = 3; i_49 < 18;i_49 += 1)
                    {
                        var_126 = ((-1 - (-1451654078 - 1)));
                        var_127 = (min(var_127, var_8));
                    }
                    var_128 = (max(var_128, var_3));
                }
                for (int i_50 = 2; i_50 < 17;i_50 += 1) /* same iter space */
                {
                    var_129 = var_5;
                    var_130 = 8817511644299434080;
                }
            }
            for (int i_51 = 1; i_51 < 18;i_51 += 1) /* same iter space */
            {
                var_131 = (max(var_131, (0 || -3)));
                var_132 = 7633018541380494867;
            }
            for (int i_52 = 1; i_52 < 18;i_52 += 1) /* same iter space */
            {
                var_133 = 4151407973;

                for (int i_53 = 0; i_53 < 20;i_53 += 1) /* same iter space */
                {
                    var_134 -= 9223372036854775807;
                    var_135 *= 127;
                }
                for (int i_54 = 0; i_54 < 20;i_54 += 1) /* same iter space */
                {
                    var_136 |= var_1;
                    arr_153 [i_39 - 1] [i_39] [i_52 + 1] [i_54] = 251;
                }

                for (int i_55 = 0; i_55 < 20;i_55 += 1)
                {
                    var_137 = 140;
                    var_138 *= -7633018541380494886;
                    var_139 = var_18;
                }

                for (int i_56 = 0; i_56 < 20;i_56 += 1)
                {
                    var_140 = var_6;

                    for (int i_57 = 0; i_57 < 1;i_57 += 1)
                    {
                        var_141 = 1;
                        var_142 &= -3617793379879415763;
                        var_143 += var_5;
                        var_144 = 9223372036854775807;
                    }
                    for (int i_58 = 1; i_58 < 18;i_58 += 1)
                    {
                        arr_166 [i_39 + 1] [i_41] &= var_15;
                        var_145 = (var_5 | var_7);
                    }
                }
                for (int i_59 = 1; i_59 < 18;i_59 += 1)
                {
                    var_146 = (max(var_146, var_4));
                    var_147 = (((3301117174 - var_15) + -32759));
                    var_148 = (min(var_148, -26008));
                    var_149 = (max(var_149, var_8));
                }
                for (int i_60 = 0; i_60 < 20;i_60 += 1)
                {

                    for (int i_61 = 3; i_61 < 19;i_61 += 1) /* same iter space */
                    {
                        var_150 -= 106;
                        var_151 = (min(var_151, ((((var_13 == var_7) & var_15)))));
                        var_152 = (min(var_152, var_1));
                    }
                    for (int i_62 = 3; i_62 < 19;i_62 += 1) /* same iter space */
                    {
                        var_153 = ((var_8 - (3600351324 - var_12)));
                        var_154 = -26008;
                    }
                    var_155 -= (var_19 - 85);
                }
                var_156 = 1;
            }
            for (int i_63 = 1; i_63 < 18;i_63 += 1) /* same iter space */
            {
                var_157 |= var_9;
                var_158 -= ((140 ^ (12398641797525778892 > 32767)));
            }
        }
        for (int i_64 = 2; i_64 < 19;i_64 += 1) /* same iter space */
        {
            var_159 = var_18;

            for (int i_65 = 0; i_65 < 1;i_65 += 1)
            {

                for (int i_66 = 1; i_66 < 19;i_66 += 1)
                {

                    for (int i_67 = 0; i_67 < 20;i_67 += 1)
                    {
                        var_160 = ((255 & var_7) >= (var_17 * 1306695949563825978));
                        var_161 = var_19;
                        var_162 &= (15559059849177975507 && 1661122249);
                    }
                    for (int i_68 = 0; i_68 < 20;i_68 += 1) /* same iter space */
                    {
                        var_163 |= 41715;
                        var_164 = (min(var_164, var_17));
                    }
                    for (int i_69 = 0; i_69 < 20;i_69 += 1) /* same iter space */
                    {
                        var_165 -= (-97 == 694615972);
                        arr_194 [i_39] [i_39] [i_65] [i_65] [i_66 + 1] [i_66] [i_69] = 1;
                    }
                    for (int i_70 = 0; i_70 < 20;i_70 += 1) /* same iter space */
                    {
                        arr_198 [i_39] [i_39] [16] [i_39] [i_39] = var_8;
                        var_166 = (min(var_166, var_12));
                        arr_199 [i_39] [i_65] = 96;
                        var_167 = (((-9165028178928456583 - -82) == var_13));
                        var_168 = var_2;
                    }
                    var_169 = -20639;
                    var_170 = var_13;
                    var_171 = var_10;
                }
                arr_200 [i_39] [i_39] [i_39] = (17660222479707159584 ^ var_5);
            }
            var_172 = var_4;
        }
        for (int i_71 = 2; i_71 < 19;i_71 += 1) /* same iter space */
        {
            var_173 = 7646487949224335667;
            var_174 = (-26414 & var_9);
        }
        var_175 = (min(var_175, var_14));

        for (int i_72 = 1; i_72 < 19;i_72 += 1) /* same iter space */
        {
            var_176 = 342087696;
            var_177 = (max(var_177, (((15559059849177975526 / (57570 - 1))))));
            var_178 = var_15;

            for (int i_73 = 2; i_73 < 18;i_73 += 1)
            {
                var_179 = var_18;
                var_180 = var_8;
                var_181 = 12;
            }
            for (int i_74 = 1; i_74 < 18;i_74 += 1) /* same iter space */
            {
                arr_209 [i_39] [i_39] [i_39] = (1542131558 || var_17);
                var_182 += 14;
            }
            for (int i_75 = 1; i_75 < 18;i_75 += 1) /* same iter space */
            {
                arr_214 [i_39] [i_75 + 1] = var_1;
                var_183 = var_0;
            }
            for (int i_76 = 1; i_76 < 18;i_76 += 1) /* same iter space */
            {

                for (int i_77 = 0; i_77 < 20;i_77 += 1)
                {
                    var_184 *= var_14;
                    var_185 += (2147483632 >= -342087701);
                    var_186 |= (((var_8 * var_11) <= var_16));
                }
                for (int i_78 = 2; i_78 < 16;i_78 += 1)
                {

                    for (int i_79 = 0; i_79 < 20;i_79 += 1)
                    {
                        var_187 = var_0;
                        var_188 = (((var_9 - 1008806316530991104) >> (18446744073709551615 - 18446744073709551579)));
                        var_189 -= -22326;
                        var_190 = 1;
                    }

                    for (int i_80 = 0; i_80 < 20;i_80 += 1)
                    {
                        var_191 = 18446744073709551615;
                        var_192 = var_17;
                        var_193 = 155;
                    }
                    for (int i_81 = 0; i_81 < 20;i_81 += 1)
                    {
                        var_194 = (max(var_194, ((((var_18 & var_4) && 0)))));
                        var_195 *= ((var_11 - var_15) <= (51 || 16383));
                        var_196 = (min(var_196, var_19));
                        var_197 *= 33554432;
                        var_198 = 254;
                    }
                }
                var_199 = (max(var_199, var_8));

                for (int i_82 = 3; i_82 < 19;i_82 += 1)
                {
                    var_200 = 16383;
                    var_201 = var_15;
                }
            }
        }
        for (int i_83 = 1; i_83 < 19;i_83 += 1) /* same iter space */
        {

            for (int i_84 = 2; i_84 < 19;i_84 += 1) /* same iter space */
            {
                arr_235 [i_39] [i_83 + 1] [i_39] = -828124724;
                var_202 = var_3;
                var_203 = (((var_11 - 2) - var_3));
            }
            for (int i_85 = 2; i_85 < 19;i_85 += 1) /* same iter space */
            {
                var_204 = 18446744073709551615;

                for (int i_86 = 0; i_86 < 1;i_86 += 1) /* same iter space */
                {
                    var_205 = (min(var_205, -98));
                    arr_240 [i_85] [6] [18] [16] [6] [i_85] |= 156;
                    arr_241 [i_83] [i_83] [i_39] = (100 ^ 966521438846020166);
                    arr_242 [i_83] [i_39] [i_83] [i_83] = var_11;
                }
                for (int i_87 = 0; i_87 < 1;i_87 += 1) /* same iter space */
                {
                    var_206 = var_15;
                    var_207 = (-16499 != 0);
                    var_208 = var_16;
                }
                for (int i_88 = 0; i_88 < 1;i_88 += 1) /* same iter space */
                {

                    for (int i_89 = 0; i_89 < 20;i_89 += 1)
                    {
                        var_209 &= (((-7158 + 2147483647) << (((-1 + 9) - 8))));
                        var_210 = (min(var_210, (9126970226313474116 && 3708504718567765537)));
                        var_211 -= var_14;
                        arr_251 [i_39] [i_39] [i_85] [i_39] [i_88] [i_89] [1] = (((18446744073709551608 >= 46) * 88));
                    }

                    for (int i_90 = 2; i_90 < 17;i_90 += 1)
                    {
                        var_212 = (min(var_212, 111));
                        var_213 = 15433425952483459785;
                        var_214 *= var_17;
                    }
                }
                for (int i_91 = 3; i_91 < 18;i_91 += 1)
                {
                    arr_259 [i_39] [i_83] [i_83] [i_85] |= 103;
                    var_215 = 50294;
                }
            }
            for (int i_92 = 2; i_92 < 19;i_92 += 1) /* same iter space */
            {
                var_216 = 25;
                arr_263 [i_39] [i_83 + 1] [i_83 + 1] [i_39] = 65535;
            }
            var_217 = 323416003796465240;
        }
        for (int i_93 = 1; i_93 < 19;i_93 += 1) /* same iter space */
        {
            var_218 -= (6893915637647969451 || -59);
            var_219 = var_4;
            var_220 = 342087680;
        }
    }
    for (int i_94 = 1; i_94 < 18;i_94 += 1) /* same iter space */
    {
        var_221 = 203;
        var_222 = var_2;
    }
    #pragma endscop
}
