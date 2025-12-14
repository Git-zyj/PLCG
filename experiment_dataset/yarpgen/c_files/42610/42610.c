/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = 3350;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_22 = ((!(((~(max(9380140281068352086, (arr_0 [i_0]))))))));
        var_23 = (max(var_23, ((~(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_24 = ((((((arr_1 [15] [15]) ? (arr_1 [i_1] [i_2]) : (arr_4 [i_1])))) ? ((min(var_15, var_0))) : (var_8 == var_5)));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [16] [1] = (var_9 * var_4);
                            var_25 = (var_16 == var_12);
                            var_26 = (((arr_11 [16] [i_2] [i_3 + 2] [i_4]) ? var_17 : (var_3 ^ var_7)));
                        }
                    }
                }
                var_27 = (arr_9 [11] [i_3 - 2] [0] [5] [i_3 + 2] [i_2]);
            }
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            arr_20 [i_1] [i_1] = (arr_7 [11] [4] [i_1] [i_1]);

            /* vectorizable */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                var_28 = (var_16 ? var_2 : var_19);
                var_29 = var_17;
            }
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                var_30 = (min(var_30, ((max(var_18, (min((arr_14 [i_8 - 3] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 + 2] [i_6]), var_0)))))));

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_31 [i_8] [i_8] = (((arr_11 [i_1] [i_1] [i_8] [4]) ? ((min((!var_18), -var_13))) : ((11187196339231654842 ? ((min(var_12, var_7))) : var_0))));
                    arr_32 [i_1] [i_8] [i_1] [i_1] = (max((max(var_9, var_14)), -var_4));
                    arr_33 [i_9] [i_8] [i_6 - 1] [i_8] [i_1] = (((max((arr_1 [i_1] [i_8 - 2]), ((min(var_12, var_19))))) / (min((max((arr_22 [i_9] [i_6 + 1] [i_6 + 1] [i_1]), var_14)), ((max(var_11, var_1)))))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        var_31 = (((((var_15 ? var_3 : var_1))) ? (var_18 < var_18) : ((var_2 ? 7259547734477896784 : 11187196339231654849))));
                        var_32 *= (((var_14 ? 11187196339231654831 : var_17)));
                        var_33 = ((var_3 ? var_2 : var_17));
                    }
                    arr_41 [i_8] = ((!((min((max(var_16, var_2)), (var_13 && var_8))))));
                    arr_42 [i_10] [i_8] [i_8] [i_1] = (max((((arr_5 [5] [i_6 - 2] [i_6]) ? var_16 : (arr_13 [i_1] [i_1] [i_1]))), (!-var_6)));

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_34 = ((var_17 ? var_1 : var_18));
                        arr_45 [i_1] [i_8] = ((var_5 ? var_15 : var_7));
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] [16] [13] [9] [i_8] = (((!var_19) ? ((max(var_17, var_12))) : ((var_4 / (arr_2 [i_6 + 2])))));
                        var_35 = (max(var_35, (((((var_18 > var_16) != ((-(arr_47 [17])))))))));
                        arr_49 [i_8] = (((((max(var_16, 11187196339231654831)) - var_8)) - ((11187196339231654831 ? var_8 : -var_6))));
                    }
                }
                var_36 += (((((arr_29 [i_8 + 1] [i_8 - 1] [i_8] [7] [i_6 + 1]) && var_14)) || (((var_0 || var_6) && (((var_7 ? var_4 : var_12)))))));
            }
        }
        var_37 = (max((((arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (var_18 % var_7) : (max(var_6, (arr_4 [i_1]))))), (((((max(var_19, var_1))) ? 492735144891793418 : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        arr_50 [2] [5] = ((-((var_13 ? var_11 : ((var_14 ? var_11 : var_2))))));
        var_38 = (min(var_1, var_7));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            arr_56 [2] [i_14] = -var_2;
            arr_57 [i_14] [i_15] [i_14] = ((var_13 > (((!(arr_12 [i_15] [i_14] [15] [15]))))));
        }

        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            arr_61 [i_14] [i_16] [4] |= (arr_46 [9] [i_16]);

            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                arr_64 [12] [12] [i_14] = (((arr_25 [i_16]) / ((var_6 ? var_8 : var_9))));
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_39 = (var_3 & var_15);
                            var_40 = (var_16 / var_18);
                        }
                    }
                }
                var_41 *= var_13;
                arr_71 [i_14] [i_14] [i_17] [16] = ((((var_3 ? var_19 : var_4)) > var_4));
                arr_72 [i_14] [i_14] = (11861934073655799693 * 1);
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {
                arr_76 [i_14] [i_16] [i_14] = var_6;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            var_42 = (max(var_42, var_13));
                            var_43 ^= (((arr_15 [i_21 + 1] [i_21 + 1] [i_20] [3] [12]) || var_3));
                        }
                    }
                }
                arr_84 [i_14] [i_14] [i_14] = (((var_16 >= var_9) >> (var_19 - 28861)));
                arr_85 [i_14] [15] [3] [i_14] = ((((var_11 ? var_15 : var_14)) * (((((arr_52 [i_14]) > var_10))))));
            }
            for (int i_23 = 0; i_23 < 20;i_23 += 1)
            {
                arr_88 [i_14] [i_14] = (((((var_13 ? var_5 : var_1))) < (var_6 * var_8)));
                arr_89 [i_14] [i_16] = (var_0 | var_1);

                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {

                    for (int i_25 = 2; i_25 < 18;i_25 += 1)
                    {
                        arr_94 [i_14] [4] [i_23] [i_23] [i_23] |= var_3;
                        arr_95 [i_14] [i_14] [i_16] = ((!(arr_23 [i_25 - 1])));
                    }
                    var_44 *= ((((var_3 ? var_4 : var_14)) ^ var_7));
                    arr_96 [i_24] [i_23] [i_14] [i_14] [3] [11] = (((arr_9 [i_24] [i_24] [i_23] [i_23] [i_16] [i_14]) && (var_17 | var_14)));
                    arr_97 [i_14] [i_14] [i_14] [i_14] = (1 < -22);
                }
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    arr_102 [i_14] [i_14] [1] [i_26] = (((var_9 > var_12) / var_6));
                    var_45 += (~var_2);
                    var_46 = var_9;
                    arr_103 [1] [i_16] [i_23] [i_14] [5] = ((var_8 - (((var_17 ? var_13 : var_5)))));
                }
                for (int i_27 = 0; i_27 < 20;i_27 += 1)
                {
                    var_47 = (((!var_13) | (((var_14 || (arr_36 [i_14]))))));
                    var_48 = var_17;
                }
                var_49 = ((var_18 | (arr_9 [19] [i_16] [i_14] [i_23] [i_16] [i_23])));
                arr_106 [i_14] [i_14] [1] = var_16;
            }
            arr_107 [i_14] [i_14] = ((var_11 ? (arr_30 [i_14]) : var_1));
            var_50 = var_2;
            var_51 += (arr_98 [6] [4] [4] [14]);
        }
        for (int i_28 = 0; i_28 < 20;i_28 += 1)
        {
            var_52 = (((arr_30 [i_14]) ? var_17 : var_13));
            arr_112 [i_14] [i_14] = ((-((var_14 >> (var_15 - 57)))));

            for (int i_29 = 1; i_29 < 19;i_29 += 1)
            {
                var_53 *= (var_9 || var_7);
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 20;i_31 += 1)
                    {
                        {
                            arr_119 [i_14] [1] [i_29] [i_29] [i_28] [1] [i_14] = (((var_10 - var_7) ? var_11 : var_17));
                            arr_120 [i_14] [i_28] [i_29] [i_30] [i_30] [13] [i_14] = (1 / 7259547734477896785);
                            arr_121 [i_14] [5] = 3056935090;
                            arr_122 [i_31] [i_14] [10] [14] [i_14] [i_14] [i_14] = ((var_9 % ((var_0 ? var_6 : var_19))));
                        }
                    }
                }

                for (int i_32 = 0; i_32 < 20;i_32 += 1)
                {
                    var_54 = (min(var_54, (((var_18 ? (arr_73 [i_14] [i_29 + 1]) : var_11)))));

                    for (int i_33 = 3; i_33 < 18;i_33 += 1) /* same iter space */
                    {
                        arr_128 [4] [i_32] [i_14] [4] [i_14] = ((~(0 > 2074266118)));
                        arr_129 [1] [8] [i_29 - 1] [i_29 - 1] [13] [i_14] = (var_9 <= var_9);
                    }
                    for (int i_34 = 3; i_34 < 18;i_34 += 1) /* same iter space */
                    {
                        arr_133 [i_14] = (((-1935851411 < var_11) > ((var_4 ? var_9 : (arr_29 [4] [i_32] [i_29] [i_28] [i_14])))));
                        var_55 = (!var_13);
                    }
                    for (int i_35 = 0; i_35 < 20;i_35 += 1)
                    {
                        var_56 = (max(var_56, ((((var_3 == var_8) ? var_10 : (var_5 * var_17))))));
                        arr_136 [i_14] [i_14] [3] [i_14] [i_14] = ((var_4 || (((var_10 ? -644377090763594662 : var_8)))));
                    }
                }
                for (int i_36 = 4; i_36 < 19;i_36 += 1)
                {
                    arr_139 [i_14] [i_14] [i_14] [i_14] = (var_3 % var_7);
                    var_57 = (min(var_57, (((!(arr_22 [i_14] [i_28] [i_29 - 1] [i_29 + 1]))))));
                }
                arr_140 [i_14] [i_14] [i_29 + 1] = (arr_53 [7]);
                var_58 = (((arr_108 [i_29 + 1]) > ((((var_3 + 2147483647) >> (var_14 - 5975898905878097036))))));
            }
            /* LoopNest 2 */
            for (int i_37 = 1; i_37 < 17;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 20;i_38 += 1)
                {
                    {
                        arr_146 [i_14] [11] [i_38] [i_38] = ((arr_26 [i_37 + 1] [i_37 + 1] [i_37] [i_38]) | var_8);
                        var_59 = (((0 * 1) | var_13));
                    }
                }
            }
        }

        for (int i_39 = 0; i_39 < 20;i_39 += 1)
        {
            var_60 = (var_14 <= var_16);
            /* LoopNest 3 */
            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                for (int i_41 = 4; i_41 < 16;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 20;i_42 += 1)
                    {
                        {
                            arr_156 [i_14] [i_39] [3] [i_14] [i_42] = var_1;
                            arr_157 [i_14] [i_39] [i_14] = (i_14 % 2 == zero) ? ((((var_12 >> (((arr_147 [i_14] [i_14] [i_14]) - 303370553)))) * ((((arr_150 [i_39] [i_39] [i_42]) < var_0))))) : ((((var_12 >> (((((arr_147 [i_14] [i_14] [i_14]) - 303370553)) - 3454357148)))) * ((((arr_150 [i_39] [i_39] [i_42]) < var_0)))));
                            arr_158 [i_14] [i_14] [i_40] [i_40] [i_41 + 4] [i_14] [i_14] = -var_7;
                        }
                    }
                }
            }
        }
        for (int i_43 = 0; i_43 < 20;i_43 += 1)
        {
            arr_161 [i_14] [i_43] [i_14] = (var_1 & var_13);
            var_61 = var_14;
        }
    }
    var_62 = var_15;

    /* vectorizable */
    for (int i_44 = 0; i_44 < 1;i_44 += 1)
    {

        for (int i_45 = 1; i_45 < 15;i_45 += 1)
        {
            var_63 = (var_11 >= var_17);
            var_64 = (min(var_64, (((var_12 ? (35184372088832 != 1) : (var_0 & var_3))))));
            /* LoopNest 3 */
            for (int i_46 = 0; i_46 < 19;i_46 += 1)
            {
                for (int i_47 = 3; i_47 < 16;i_47 += 1)
                {
                    for (int i_48 = 0; i_48 < 19;i_48 += 1)
                    {
                        {
                            var_65 += -var_15;
                            arr_178 [8] [i_47] [i_48] [i_45 - 1] [i_44] = ((var_8 + (arr_5 [i_47 + 2] [12] [i_47])));
                        }
                    }
                }
            }
            var_66 = 1073740800;
            var_67 -= (arr_54 [1] [1] [12]);
        }
        /* LoopNest 2 */
        for (int i_49 = 0; i_49 < 19;i_49 += 1)
        {
            for (int i_50 = 2; i_50 < 17;i_50 += 1)
            {
                {
                    arr_184 [i_44] [i_49] [18] = (11187196339231654832 - var_18);
                    var_68 += (53414232826361380 != -1);
                    /* LoopNest 2 */
                    for (int i_51 = 0; i_51 < 19;i_51 += 1)
                    {
                        for (int i_52 = 0; i_52 < 19;i_52 += 1)
                        {
                            {
                                arr_190 [i_52] [9] [i_50] [7] [i_52] [9] = ((((var_15 << (var_5 - 40))) | var_10));
                                var_69 = (((arr_58 [i_44] [12]) || (var_19 != var_18)));
                            }
                        }
                    }
                    arr_191 [17] [17] [17] = var_12;
                }
            }
        }
        arr_192 [i_44] = (var_5 % var_0);
        /* LoopNest 3 */
        for (int i_53 = 0; i_53 < 19;i_53 += 1)
        {
            for (int i_54 = 0; i_54 < 19;i_54 += 1)
            {
                for (int i_55 = 0; i_55 < 19;i_55 += 1)
                {
                    {
                        arr_201 [i_44] [8] [i_44] [i_44] = ((!(arr_170 [i_44] [i_53] [i_54])));
                        arr_202 [i_44] [i_44] [11] [i_44] [i_44] |= ((-(arr_182 [14] [15] [14] [10])));
                    }
                }
            }
        }
        arr_203 [3] = (((((var_4 ? (arr_138 [i_44] [15] [2]) : var_10))) ? var_10 : var_9));
    }
    /* vectorizable */
    for (int i_56 = 4; i_56 < 14;i_56 += 1)
    {

        for (int i_57 = 4; i_57 < 12;i_57 += 1)
        {
            var_70 = (((var_2 & var_0) / ((var_4 ? (arr_151 [i_56] [9] [18] [9]) : var_0))));
            arr_208 [0] = (((arr_124 [16] [16] [14] [6]) >= var_13));
        }
        for (int i_58 = 0; i_58 < 1;i_58 += 1)
        {
            var_71 ^= (((arr_55 [i_56 - 2] [i_56 - 3]) ? (var_8 > var_9) : var_10));
            arr_211 [i_58] [i_58] [i_58] = (arr_166 [5]);
            arr_212 [i_56] [i_58] = 1091838128;
            var_72 = (min(var_72, var_5));
            var_73 = (min(var_73, (((-4294967295 ? (arr_179 [i_58] [i_56]) : var_3)))));
        }
        var_74 = (min(var_74, var_17));
    }
    #pragma endscop
}
