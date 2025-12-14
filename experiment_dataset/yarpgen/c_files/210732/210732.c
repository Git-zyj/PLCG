/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 += (min(var_3, (max(var_5, var_1))));
                    arr_11 [9] [3] [i_2] [i_2] = (min((((264291694 >= var_7) * var_9)), ((min((var_5 <= var_4), var_2)))));
                }
            }
        }
    }
    var_11 ^= (max(var_4, var_1));

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_12 = (min(var_12, var_7));
                    arr_19 [i_3] [i_3] [i_3 - 2] = ((var_0 & (max(2123035178, var_6))));
                    var_13 = (max(var_13, ((max(2445584778761504472, -119)))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [i_3] [9] [i_3] [i_3] |= (max(((max(var_7, 1121501860331520))), (var_2 ^ var_9)));
                        arr_25 [i_3] [i_4] [i_3] [i_6] = var_7;
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_14 += (var_3 / var_0);
                        arr_29 [i_4] = 10;
                    }
                }
            }
        }
        var_15 = (min(var_15, ((((var_3 && var_8) % (min(var_6, (((var_1 + 2147483647) << (var_8 - 6797529237535135764))))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_16 = var_1;
                    arr_34 [i_3] [i_8] [i_3] = var_9;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_17 ^= (max((var_4 <= var_8), (max(2171932117, var_7))));
                    var_18 = var_9;
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_19 = (min(var_6, ((var_4 - (0 <= 0)))));
        var_20 = var_3;

        for (int i_13 = 3; i_13 < 15;i_13 += 1)
        {
            var_21 = (min(var_21, (((var_3 && ((max((max(-2014609275, 9718)), ((min(9718, 9717)))))))))));
            var_22 |= (min(((var_9 * ((max(var_2, var_2))))), 218));
            var_23 *= ((max(38, var_4)));
            var_24 = 23295;
            var_25 = (max(var_1, (max(449756724, (max(18446744073709551605, var_4))))));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_26 = var_8;
        var_27 -= (3597395297 || var_3);
        var_28 = (max(var_28, var_2));
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
    {
        var_29 -= ((max(16744448, (var_3 != var_6))));
        var_30 = 2171932117;
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
    {
        arr_57 [12] = 3364509390;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                {
                    arr_62 [i_16] [i_16] [i_18] &= (min(((max(-16, -16744449))), ((((3364509385 << (var_9 - 38441))) ^ (((max(var_9, var_9))))))));
                    var_31 = (((((max(var_9, var_0)))) + var_3));
                    var_32 = (min(var_32, (((max(var_1, (-2147483647 - 1)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 18;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                {
                    arr_68 [i_16] = (((max((-16744449 ^ var_7), (34 / 6))) / (var_8 >> var_7)));
                    arr_69 [i_20] [i_20] = (min(((var_2 | (((-32767 - 1) % 2171932100)))), ((min(14725, 55818)))));
                    arr_70 [i_16] [i_16] = 37;
                }
            }
        }
        arr_71 [i_16] [i_16] = (-2147483647 - 1);
    }

    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        var_33 = 2171932097;
        /* LoopNest 3 */
        for (int i_22 = 1; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    {
                        var_34 = (((((((413595888 >= 3364509379) >= var_8)))) + 235));

                        for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
                        {
                            arr_85 [i_25] [2] [i_23] [i_22] [2] [2] = var_1;
                            arr_86 [i_21] [7] [0] [i_24] [i_25] [i_25] [i_25] = ((-1433849833 ^ (max(var_2, 4294967270))));
                            arr_87 [i_21] [i_21] [i_21] = (8646075438425037975 - 0);
                            var_35 += (((max((var_7 % 3597395297), 331716819)) | (((min((max(var_0, var_9)), var_6))))));
                        }
                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 14;i_26 += 1) /* same iter space */
                        {
                            arr_91 [i_21] [i_22] [i_21] [8] [13] = var_4;
                            arr_92 [i_22 + 1] [i_24] [i_23] [i_22 + 1] [i_21] = 18446744073709551593;
                            arr_93 [10] [5] [i_22] [i_23] [i_24] [4] [i_26] = var_2;
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 14;i_27 += 1) /* same iter space */
                        {
                            var_36 = (1433849839 / var_2);
                            var_37 = var_0;
                            var_38 = (max(var_38, (-16744448 != var_1)));
                        }
                        for (int i_28 = 2; i_28 < 12;i_28 += 1)
                        {
                            var_39 = (((-17970 <= 8626) || (var_5 > 930457938)));
                            arr_102 [i_22] [0] [i_22 + 1] [i_22] = var_6;
                            arr_103 [i_21] [i_22] [10] [i_23] [i_24] [1] [i_28] = (max(var_0, var_6));
                            arr_104 [6] [i_23] [i_24] [i_28] = (((var_0 > var_6) ^ -3281089340899222725));
                        }
                        var_40 = var_8;
                    }
                }
            }
        }
        arr_105 [i_21] = (((min(89, var_5)) / ((max(4294967295, 4294967295)))));
    }
    for (int i_29 = 0; i_29 < 11;i_29 += 1)
    {
        arr_109 [i_29] = (max((max((min(var_0, var_4)), (var_6 * var_1))), var_6));

        for (int i_30 = 1; i_30 < 8;i_30 += 1) /* same iter space */
        {
            arr_112 [10] [1] [i_30] = (max(var_2, ((var_4 * (var_7 | var_2)))));

            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 11;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        {
                            var_41 ^= (((((max(var_0, 16744447))) * (var_2 * 2159045796))) | (((((var_7 >= 522) && 131071)))));
                            arr_122 [i_29] [i_30] [i_31] [1] [i_32] [i_31] [i_31] = var_8;
                            arr_123 [i_31] [i_31] = (min(((min(var_7, (min(2171932117, var_0))))), (max(var_2, var_5))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_34 = 3; i_34 < 10;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 11;i_35 += 1)
                    {
                        {
                            arr_132 [i_29] [i_30 + 1] [i_30] [i_31] [i_34] [i_35] |= (((max(1, (var_9 / var_6))) != ((max(885637651236360591, 76)))));
                            var_42 = (max(var_42, (((((((max(var_0, var_1)) + (max(var_1, var_3))))) || var_4)))));
                            arr_133 [i_29] [i_30] [i_31] [i_34] = ((min(var_5, (var_7 != var_4))));
                            arr_134 [7] [i_31] [i_35] = max((((((min(var_6, var_9))) >> 7))), 930457910);
                            arr_135 [i_29] [i_31] [i_35] = (((((var_7 * (var_2 + var_2)))) ^ (max(var_4, var_3))));
                        }
                    }
                }
                var_43 |= (min((((min(var_7, 16863830563463272708)) & 1)), (max(var_5, 0))));
                var_44 = (1 >= 18446744073709551615);
            }
            for (int i_36 = 0; i_36 < 11;i_36 += 1)
            {
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 11;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 11;i_38 += 1)
                    {
                        {
                            arr_144 [i_29] [9] [i_36] [i_37] [i_38] = var_4;
                            arr_145 [1] [i_30] [i_30 + 2] [i_30 + 3] [1] [i_30 + 2] = -1851721062;
                            var_45 -= (((86 / 1140567054518021197) << (((max(930457934, var_4)) - 1028990805))));
                        }
                    }
                }
                arr_146 [i_29] [i_30] [i_29] [i_30] |= ((((max(var_0, 2867623085))) >= (min(var_5, var_8))));
                var_46 += (min((var_0 + 10952), ((((max(var_0, var_7))) - 1))));
            }
            for (int i_39 = 0; i_39 < 11;i_39 += 1)
            {
                var_47 += (max((min(-19, (16744447 != 6582635882078965693))), var_6));
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 11;i_40 += 1)
                {
                    for (int i_41 = 1; i_41 < 7;i_41 += 1)
                    {
                        {
                            var_48 = var_3;
                            arr_157 [i_41] [6] [i_29] [i_29] [i_30] [i_29] = (max(11864108191630585922, (var_7 != var_8)));
                        }
                    }
                }
                arr_158 [i_29] [i_30] [i_29] [6] = (0 + -30);
            }

            for (int i_42 = 0; i_42 < 11;i_42 += 1)
            {
                arr_161 [i_29] = max(((max(-2, 61160))), (min(0, var_8)));
                var_49 = (max(var_49, ((min((var_5 / var_1), var_5)))));
                arr_162 [4] [4] [i_42] = (((max(10745, var_5)) != (max(var_5, var_8))));
            }
            for (int i_43 = 0; i_43 < 11;i_43 += 1)
            {
                arr_167 [4] [i_30] [i_30] = (max(-4260851309542271322, var_2));
                arr_168 [i_29] [3] [0] = (min(((max(var_8, var_0))), (max(var_0, var_7))));
            }
            for (int i_44 = 0; i_44 < 11;i_44 += 1) /* same iter space */
            {

                for (int i_45 = 0; i_45 < 11;i_45 += 1)
                {
                    arr_176 [i_29] = (min((((767319680 <= var_0) >> (var_3 - 30130))), 1735616246));

                    for (int i_46 = 0; i_46 < 11;i_46 += 1)
                    {
                        arr_179 [i_29] = (max(var_1, (((-29 + var_0) << ((((var_2 << (var_0 - 22716))) - 2096234488))))));
                        arr_180 [9] [i_30] [i_44] [i_46] [i_46] = (var_4 / var_7);
                    }
                }
                var_50 = (max(var_50, ((min((var_3 >= 8192), (-9754 % 2147483647))))));

                for (int i_47 = 0; i_47 < 11;i_47 += 1)
                {
                    var_51 = (max(var_51, 90));
                    arr_183 [i_29] [i_30] [i_44] [i_44] = 1;
                }
            }
            for (int i_48 = 0; i_48 < 11;i_48 += 1) /* same iter space */
            {
                arr_187 [i_29] [i_30 + 3] = (var_1 / 1920061269);
                var_52 = (((-30424 / 1156355082) == (var_0 == var_9)));
                arr_188 [i_30] [i_30 + 3] [i_30 + 3] = var_1;
            }
            arr_189 [i_29] [i_30 + 2] = (((min(var_6, 4194303)) <= (17 - 1)));
            arr_190 [i_29] [i_30] = max(((max(var_6, var_3))), ((max(var_2, var_1))));
        }
        for (int i_49 = 1; i_49 < 8;i_49 += 1) /* same iter space */
        {
            arr_194 [i_49] = var_8;

            for (int i_50 = 1; i_50 < 9;i_50 += 1)
            {
                /* LoopNest 2 */
                for (int i_51 = 0; i_51 < 11;i_51 += 1)
                {
                    for (int i_52 = 0; i_52 < 11;i_52 += 1)
                    {
                        {
                            arr_203 [4] [i_49] [i_49] [i_49 + 2] &= var_6;
                            arr_204 [i_29] [i_49] [i_50] [i_49] [i_52] [7] [7] = (min((min(var_5, var_2)), (((((min(var_1, var_1))) | var_4)))));
                            var_53 = (max(var_53, ((max((max(4194306, 11118346112048942351)), var_8)))));
                        }
                    }
                }
                var_54 ^= ((((var_5 >> (var_5 - 14851959714421648199))) >> (((min(var_4, var_2)) - 31934))));
                arr_205 [i_29] [7] [i_50 - 1] = ((var_1 && (((var_4 >> (-19 + 40))))));
                arr_206 [i_50 + 1] [i_29] [i_29] [i_29] = 65535;
                var_55 += ((var_0 | ((min(var_2, 8192)))));
            }
        }
        for (int i_53 = 1; i_53 < 8;i_53 += 1) /* same iter space */
        {
            arr_209 [i_29] [i_53 + 3] = max(((min(8962803994020339985, -824873542))), (min(var_5, -8193)));
            arr_210 [i_29] = ((((var_0 > (min(var_3, var_6))))) / var_0);
        }
        var_56 ^= var_1;
    }
    /* vectorizable */
    for (int i_54 = 0; i_54 < 25;i_54 += 1)
    {
        arr_213 [i_54] = (2635845380 ^ var_3);
        arr_214 [i_54] = var_4;
        arr_215 [1] |= (var_8 < var_0);
    }
    for (int i_55 = 0; i_55 < 17;i_55 += 1)
    {
        var_57 += (min(((min(var_1, var_7))), (max(15692644093452926228, var_4))));
        var_58 = var_5;
        var_59 = (max(((min((min(1, var_8)), 8192))), (min(var_5, var_0))));
    }
    #pragma endscop
}
