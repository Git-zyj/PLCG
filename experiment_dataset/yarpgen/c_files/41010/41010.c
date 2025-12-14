/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = (~var_11);
            var_14 = (((var_5 * var_7) || var_2));
            var_15 = (var_3 || 101);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = ((-(var_6 ^ var_12)));
            var_17 = var_5;
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_18 = var_10;
            var_19 += ((var_2 + (var_5 || var_7)));
        }
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            var_20 = var_5;
            var_21 = (var_4 <= var_11);
        }
        var_22 |= -var_1;
        var_23 = var_7;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 += ((~(126 || 1005869360956498322)));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_25 = var_5;
            var_26 = var_2;
            var_27 = var_3;
        }
        var_28 = (max((var_2 != var_7), var_4));
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_29 = ((!(var_8 && var_7)));

        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_30 = (min((max(var_4, var_1)), ((max(1, 0)))));
            var_31 = (((max((!var_10), var_8)) + var_9));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_32 &= (((var_8 << (var_7 - 1062))));
            var_33 ^= (--1005869360956498319);
            var_34 = (((var_7 ^ var_6) != ((max(var_4, (var_0 || var_2))))));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_35 |= 0;

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_36 = (min((~var_10), var_4));

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_37 = (max((var_2 ^ var_5), (var_12 / var_12)));
                        var_38 -= ((min((max(var_2, var_0)), (var_12 == var_8))) ^ var_6);
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        var_39 += (~var_7);
                        var_40 += ((var_6 || (~var_9)));
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_41 = ((var_6 >> (var_7 == var_8)));
                        var_42 -= var_4;
                        var_43 |= ((var_4 << (var_10 - 1111020946)));
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_44 *= (var_9 / 101);
                        var_45 = (var_7 != var_4);
                    }
                    for (int i_18 = 2; i_18 < 18;i_18 += 1)
                    {
                        var_46 = -var_7;
                        var_47 = (-1 ^ -127);
                    }
                    var_48 = ((var_4 << (var_12 - 8235349435389932304)));
                    var_49 = -var_6;

                    for (int i_19 = 4; i_19 < 20;i_19 += 1)
                    {
                        var_50 = ((!(var_5 ^ var_12)));
                        var_51 = ((var_6 & (var_3 && var_7)));
                        var_52 -= (var_10 || var_3);
                        var_53 = var_1;
                    }
                    var_54 -= (var_3 >= var_3);
                }
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    var_55 = var_5;

                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        var_56 = ((((max(-44, 1591357269))) < (var_1 + var_12)));
                        var_57 ^= var_12;
                        var_58 = ((-(var_7 != var_12)));
                        var_59 = (~-var_8);
                    }
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_60 = var_6;
                        var_61 = (min(((min(var_3, (min(var_12, var_9))))), (max(((max(var_11, var_3))), var_0))));
                        var_62 = ((var_2 % (((var_5 ^ var_10) ^ var_6))));
                        var_63 = var_6;
                        var_64 = (min(1864953060, var_7));
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 4; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        {
                            var_65 = var_5;
                            var_66 = ((992 + (max(17440874712753053296, 1005869360956498319))));
                        }
                    }
                }
                var_67 = (min(var_9, (var_3 != var_8)));
                var_68 = var_1;

                /* vectorizable */
                for (int i_25 = 1; i_25 < 19;i_25 += 1)
                {
                    var_69 = (var_8 < var_9);
                    var_70 = (var_4 + var_4);
                    var_71 ^= var_12;
                    var_72 *= (~0);
                }
            }
            var_73 *= (max(var_10, (var_12 >= var_6)));
            var_74 -= max((min(var_6, var_12)), (var_8 & var_5));
        }
        var_75 = (min(((((~var_8) & var_7))), (max((max(var_0, var_10)), var_9))));
        var_76 = (~var_9);
    }
    for (int i_26 = 1; i_26 < 20;i_26 += 1)
    {
        var_77 |= (((var_5 ^ (max(var_5, var_4)))));
        var_78 = var_11;
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 1;i_27 += 1)
    {
        var_79 = (var_9 > var_9);
        var_80 = var_2;
        var_81 *= (var_10 && var_12);
    }

    for (int i_28 = 0; i_28 < 12;i_28 += 1)
    {

        for (int i_29 = 2; i_29 < 11;i_29 += 1)
        {
            var_82 = var_6;
            var_83 = (var_12 <= (((max(((min(var_1, var_1))), (min(var_9, var_1)))))));
        }

        for (int i_30 = 0; i_30 < 1;i_30 += 1)
        {
            var_84 = ((min(var_1, var_10)));

            for (int i_31 = 1; i_31 < 11;i_31 += 1)
            {
                var_85 = (~(max(((max(var_10, var_4))), var_12)));
                var_86 += (((!var_5) * -var_3));
            }

            /* vectorizable */
            for (int i_32 = 0; i_32 < 12;i_32 += 1)
            {
                var_87 = var_9;
                var_88 *= var_4;
                var_89 = ((~(var_4 % var_4)));
            }
            var_90 = (min((((max(992, -127)))), (min(((var_7 << (var_8 - 1237617326))), ((var_9 << (var_12 - 8235349435389932319)))))));
        }
        for (int i_33 = 0; i_33 < 12;i_33 += 1)
        {
            var_91 = ((var_8 > (var_5 >= var_7)));
            var_92 -= var_0;
            var_93 -= (min((min(var_10, (var_11 + var_12))), ((((var_4 >= var_8) < var_5)))));
            var_94 += (((min((max(var_0, var_1)), var_5)) < var_5));
        }
        /* vectorizable */
        for (int i_34 = 0; i_34 < 1;i_34 += 1)
        {

            for (int i_35 = 0; i_35 < 12;i_35 += 1)
            {
                var_95 = var_0;
                var_96 = (var_9 * -var_3);
                var_97 = -var_0;
                var_98 ^= var_9;
            }
            for (int i_36 = 0; i_36 < 12;i_36 += 1)
            {
                var_99 = (var_1 <= var_0);
                var_100 += var_6;

                for (int i_37 = 0; i_37 < 12;i_37 += 1)
                {
                    var_101 = ((var_8 << (var_0 - 13816171454924978023)));
                    var_102 = var_1;
                }
                for (int i_38 = 0; i_38 < 12;i_38 += 1)
                {
                    var_103 = var_4;
                    var_104 = -var_6;
                    var_105 = ((var_3 || var_0) || var_10);
                }
                for (int i_39 = 0; i_39 < 12;i_39 += 1)
                {
                    var_106 += (0 * 479611359);
                    var_107 = -var_11;
                    var_108 = var_2;
                }
                for (int i_40 = 0; i_40 < 12;i_40 += 1)
                {
                    var_109 = (var_4 || var_2);
                    var_110 = var_12;
                    var_111 = var_9;
                    var_112 = -127;
                    var_113 = (var_2 % var_0);
                }
                var_114 = var_9;
            }
            for (int i_41 = 0; i_41 < 1;i_41 += 1)
            {
                var_115 += var_7;
                var_116 = (var_8 + var_4);
            }
            var_117 = var_9;

            for (int i_42 = 0; i_42 < 1;i_42 += 1)
            {
                var_118 -= (~var_0);
                var_119 += -var_3;
                var_120 -= var_5;
                var_121 -= var_8;
            }
            var_122 = var_5;
            var_123 = -var_6;
        }

        for (int i_43 = 0; i_43 < 12;i_43 += 1)
        {
            var_124 = (max((~120), 67));

            /* vectorizable */
            for (int i_44 = 0; i_44 < 12;i_44 += 1)
            {

                for (int i_45 = 0; i_45 < 1;i_45 += 1)
                {

                    for (int i_46 = 0; i_46 < 1;i_46 += 1)
                    {
                        var_125 = (((~var_8) ^ (var_11 & var_1)));
                        var_126 = (var_10 < var_6);
                        var_127 ^= (var_5 * var_1);
                        var_128 = (var_3 != var_1);
                    }
                    for (int i_47 = 1; i_47 < 1;i_47 += 1) /* same iter space */
                    {
                        var_129 = ((~(~var_12)));
                        var_130 = ((!(((var_10 << (var_7 - 1047))))));
                    }
                    for (int i_48 = 1; i_48 < 1;i_48 += 1) /* same iter space */
                    {
                        var_131 |= (var_7 <= var_12);
                        var_132 = var_0;
                        var_133 = (var_2 ^ var_12);
                        var_134 = (var_7 * var_3);
                    }
                    var_135 = var_7;
                }
                for (int i_49 = 3; i_49 < 9;i_49 += 1)
                {
                    var_136 = (((var_2 == var_6) & var_9));
                    var_137 = ((-var_3 <= (var_0 ^ var_6)));
                }

                for (int i_50 = 3; i_50 < 11;i_50 += 1)
                {
                    var_138 ^= (!var_12);
                    var_139 = var_0;
                }
            }
            for (int i_51 = 1; i_51 < 10;i_51 += 1)
            {
                var_140 = ((-(var_1 % var_2)));
                var_141 &= -var_8;

                /* vectorizable */
                for (int i_52 = 1; i_52 < 10;i_52 += 1)
                {
                    var_142 += (var_7 << var_11);

                    for (int i_53 = 0; i_53 < 12;i_53 += 1)
                    {
                        var_143 = (var_7 < -var_3);
                        var_144 ^= (var_2 > var_6);
                        var_145 = (var_5 <= var_10);
                    }
                }
                /* vectorizable */
                for (int i_54 = 3; i_54 < 9;i_54 += 1)
                {
                    var_146 -= var_5;
                    var_147 = (var_5 & var_9);
                    var_148 = 9223372036854775807;
                }
                /* vectorizable */
                for (int i_55 = 4; i_55 < 10;i_55 += 1)
                {
                    var_149 = 16;
                    var_150 = var_2;
                }
                for (int i_56 = 0; i_56 < 12;i_56 += 1)
                {
                    var_151 = (min(var_2, (max(var_1, (min(var_10, var_12))))));
                    var_152 *= ((-(min(var_7, var_0))));
                }
            }

            for (int i_57 = 1; i_57 < 10;i_57 += 1)
            {
                var_153 = (~var_8);
                var_154 -= (((min(var_4, var_8)) > (var_2 != var_12)));
                var_155 = var_6;
                var_156 = ((var_9 ^ (min(var_5, (max(var_7, var_8))))));
                /* LoopNest 2 */
                for (int i_58 = 1; i_58 < 10;i_58 += 1)
                {
                    for (int i_59 = 0; i_59 < 12;i_59 += 1)
                    {
                        {
                            var_157 &= ((var_10 < (min(-1074528485608536151, -125))));
                            var_158 = (((var_7 << (var_12 >= var_12))));
                            var_159 = ((var_5 < (min(var_10, (~var_9)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_60 = 1; i_60 < 1;i_60 += 1) /* same iter space */
            {
                var_160 = var_0;
                var_161 = (var_9 || var_6);
            }
            /* vectorizable */
            for (int i_61 = 1; i_61 < 1;i_61 += 1) /* same iter space */
            {
                var_162 ^= (((~58366) < var_7));
                var_163 = (var_10 ^ var_4);
            }

            for (int i_62 = 0; i_62 < 12;i_62 += 1)
            {
                var_164 = (1 || 8121541734649359887);
                var_165 = (var_12 || var_9);
                var_166 = (min((var_8 >= var_7), (var_5 ^ var_2)));
            }
            for (int i_63 = 0; i_63 < 12;i_63 += 1)
            {

                for (int i_64 = 0; i_64 < 1;i_64 += 1)
                {
                    var_167 -= (min((((max(-4248983379164765863, 1864953060)) > (min(1, 4248983379164765887)))), 1));
                    var_168 = ((-var_6 & (((min(var_5, var_3))))));
                    var_169 |= var_6;
                }
                var_170 = (min(((max((max(var_1, var_3)), var_7))), ((((min(var_1, var_2))) ^ ((max(var_9, var_11)))))));
            }
            var_171 -= ((8472149356085741784 != 1) << (((var_2 * var_5) + 2783425)));
        }
    }
    var_172 &= var_7;
    #pragma endscop
}
