/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -161;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = max(var_1, (max(var_6, var_11)));
        var_15 *= (max(var_2, (~var_11)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 = (max(var_16, (((!(~-var_7))))));
            arr_6 [i_0] [i_0] = (-65516 ^ var_1);
            var_17 = (((var_8 + 2147483647) << (var_7 - 16108)));
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = -var_0;
        var_18 = var_4;
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        var_19 = var_7;
        var_20 = (~var_3);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_21 = (~var_7);
                    arr_18 [i_3] [i_3] [i_4] = (!var_6);
                    arr_19 [i_4] = var_1;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_22 = (var_13 < var_8);

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_4] [1] [i_5] [7] [i_6] [i_6] [15] = (~var_9);
                            var_23 = (var_13 | var_4);
                            var_24 = (~var_9);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_25 = var_4;
                            arr_27 [i_3] [i_3 - 1] [i_4] [13] [i_4] [1] [i_8] = var_0;
                        }
                        var_26 = var_12;
                        arr_28 [i_3] [i_3] [i_5] [i_4] = (~(!var_3));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_3 - 3] [i_4] [i_5] [i_4] = (~var_13);
                        arr_32 [i_4] [13] [i_5] [13] [i_9] [13] = (~-var_1);

                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            arr_35 [i_3 - 1] [10] [10] [i_4] [i_10 + 2] = (~var_8);
                            arr_36 [i_3] [i_4] [i_4] [i_5] [12] [i_9] [18] = (var_0 <= var_7);
                        }
                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            var_27 = (min(var_27, ((((var_2 ? var_1 : var_7))))));
                            var_28 *= (var_13 + var_9);
                            arr_39 [i_4] [i_9] [i_5] [18] [0] [i_4] = ((var_11 ? -var_0 : (!var_3)));
                        }
                        arr_40 [i_3] [i_9] [i_3] [i_4] = 217;
                        var_29 = -var_7;
                    }
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {

                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            arr_47 [i_4] [i_3 + 2] [i_4] [i_4] = ((var_1 << (var_6 <= var_5)));
                            var_30 = -var_12;
                        }
                        for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_31 ^= (~var_1);
                            arr_50 [i_3 - 3] [i_3] [i_4] [9] [i_12] [10] = (var_5 && var_7);
                        }
                        for (int i_15 = 1; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_3] [i_4] [i_5] [16] = -var_3;
                            arr_55 [18] [i_4] [13] [i_4] [18] = (var_12 | var_2);
                            var_32 = var_1;
                        }
                        for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
                        {
                            var_33 = ((-(!var_0)));
                            arr_59 [i_3] [i_3] [i_4 - 1] [i_5] [i_12] [i_4] [17] = var_11;
                        }
                        var_34 = (~var_11);
                        var_35 = -var_11;
                        var_36 ^= var_13;
                    }
                }
            }
        }
    }
    var_37 = var_11;
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 8;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            {

                for (int i_19 = 2; i_19 < 9;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        arr_71 [i_17 + 4] [i_18] [i_17] [i_17 + 3] &= (var_9 / 9);
                        arr_72 [i_19] [8] [i_18] [i_18] [i_19 - 1] [i_20] = (max((!var_11), var_2));
                        arr_73 [i_19] [i_19] [3] [i_19] = ((((!-1) < var_10)));
                        arr_74 [3] [i_18] [i_18] [3] [i_18] [i_19] = (((153 ? 1905765913 : 442712420)));
                        arr_75 [10] [i_19] [i_19] [i_20] = (var_3 || var_7);
                    }

                    for (int i_21 = 1; i_21 < 10;i_21 += 1)
                    {
                        var_38 = var_5;
                        var_39 = ((((!var_7) != var_3)));
                    }
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {

                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            arr_83 [i_17] [i_19] [i_17] [i_19] [i_19] = (min(20031, ((161 >> (((((-2147483647 - 1) - -2147483642)) + 24))))));
                            var_40 = (max(var_40, (min((~var_9), (~2147483647)))));
                            arr_84 [i_19] = (((5151971631288496057 > 161) <= (~-10)));
                            var_41 |= (((42 * (2097151 * 1001417557))));
                        }
                        arr_85 [i_17] [i_18] [i_19] [i_19] [i_18] [5] = ((!(((-((var_9 ? var_2 : var_2)))))));
                        arr_86 [8] [i_18] [i_19] [1] = (1622384911167879054 | 3852254856);
                        arr_87 [i_17 - 1] [i_19] [i_22] = (max((~1), 23979));
                    }
                    for (int i_24 = 4; i_24 < 10;i_24 += 1)
                    {
                        var_42 = var_8;
                        arr_90 [i_19] [i_17] [6] [2] [i_24 - 4] [i_24] = ((max(0, 3468775256)));
                        arr_91 [i_19] = var_5;
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_43 = (min(var_43, (!1797658229)));
                        var_44 = (min(var_44, ((((min(var_12, var_4)) / var_13)))));
                        var_45 = (((((~(~var_2)))) || var_11));
                    }
                    arr_94 [i_19] [9] [i_19] = var_0;
                    arr_95 [i_19] [i_19] = ((~((~(var_11 ^ var_5)))));
                }
                for (int i_26 = 2; i_26 < 9;i_26 += 1)
                {

                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        var_46 = var_3;
                        var_47 = ((-((-var_1 >> (4602678819172646912 <= 1)))));
                        arr_102 [i_17] [i_17] [i_17] [i_17] [i_17] [0] = var_2;
                        arr_103 [i_17] [i_17] = min((min((min(var_7, var_11)), var_11)), (9223372036854775807 && 3823253409));
                        var_48 = (var_1 - var_1);
                    }
                    for (int i_28 = 0; i_28 < 12;i_28 += 1)
                    {
                        var_49 ^= 13844065254536904696;
                        var_50 = ((~(((-127 - 1) & 3713599747))));
                        arr_108 [i_17] = ((var_2 * ((~((min(var_0, var_12)))))));
                    }
                    arr_109 [i_17] [i_18] [10] = (min(94, 0));
                }
                for (int i_29 = 3; i_29 < 11;i_29 += 1)
                {
                    arr_112 [6] [i_29] [i_29] [i_17 + 3] = (min(4602678819172646906, 23969));
                    var_51 = (min((((((var_13 << (var_7 - 16094))) ^ var_2))), (max(var_4, var_5))));
                }
                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {

                    for (int i_31 = 4; i_31 < 11;i_31 += 1)
                    {
                        arr_120 [i_17] [i_18] [i_31] [7] = ((var_12 && ((max(var_0, var_3)))));
                        arr_121 [1] [i_30] [i_31] [i_31] = (~3850392231);
                    }
                    for (int i_32 = 0; i_32 < 12;i_32 += 1) /* same iter space */
                    {
                        var_52 &= ((-((var_7 ? (var_5 | var_10) : (((var_11 ? var_10 : var_8)))))));
                        var_53 = (max((((max(var_3, var_3)))), ((var_10 << (var_1 - 3772661411)))));
                    }
                    for (int i_33 = 0; i_33 < 12;i_33 += 1) /* same iter space */
                    {

                        for (int i_34 = 2; i_34 < 11;i_34 += 1)
                        {
                            arr_128 [i_17] [i_17] = (min(((~(~var_9))), (((~var_9) >> ((((var_3 ? var_5 : var_0)) + 723893940539284868))))));
                            arr_129 [i_18] [i_33] [i_30] [1] [1] = (~-9);
                            arr_130 [i_17] [i_18] [i_30] [i_30] [i_34] = -7295185649275022769;
                            var_54 = ((~(!var_12)));
                        }
                        for (int i_35 = 2; i_35 < 11;i_35 += 1)
                        {
                            var_55 = ((var_5 || ((min((~var_10), (~var_1))))));
                            arr_134 [i_17 + 1] [i_35] [2] [2] [i_35] = (max(var_12, (var_9 & var_6)));
                            var_56 = var_7;
                        }
                        for (int i_36 = 0; i_36 < 12;i_36 += 1)
                        {
                            arr_139 [i_17] [3] [i_17] = min((((var_9 / var_10) % var_13)), var_10);
                            var_57 = (((min((~var_12), var_4)) > var_3));
                        }

                        for (int i_37 = 0; i_37 < 12;i_37 += 1)
                        {
                            arr_143 [i_17] = max((var_1 - var_9), -var_12);
                            arr_144 [i_17 + 3] [i_18] [i_18] [i_30] [i_30] [i_18] = (!-var_1);
                        }
                        for (int i_38 = 0; i_38 < 1;i_38 += 1)
                        {
                            var_58 = (var_9 & var_3);
                            var_59 = ((~(var_12 ^ var_1)));
                        }
                        for (int i_39 = 1; i_39 < 10;i_39 += 1)
                        {
                            var_60 = var_13;
                            var_61 = (((~var_13) && (((~(~var_6))))));
                            arr_151 [5] [i_18] [i_18] [5] [5] = var_2;
                            var_62 = (min(var_62, (((+(((!(((var_10 << (((var_8 + 268336595) - 2)))))))))))));
                        }
                    }
                    var_63 = (((var_6 ? (min(73021490, -1389440694) : var_1))));
                    arr_152 [3] [i_30] = (min((min(var_9, var_7)), ((min((!var_7), (!-1242484057777866295))))));
                    arr_153 [i_30] = (min((~var_7), -var_7));
                }

                for (int i_40 = 0; i_40 < 12;i_40 += 1)
                {

                    for (int i_41 = 2; i_41 < 11;i_41 += 1)
                    {

                        for (int i_42 = 0; i_42 < 12;i_42 += 1) /* same iter space */
                        {
                            arr_163 [i_17] [i_17 + 4] [i_17 + 4] [i_18] [i_40] [5] [0] = ((var_2 & var_5) % (var_2 | var_6));
                            arr_164 [i_17 + 2] [i_18] [4] [i_42] [i_18] [i_40] [i_17] = (min((var_6 ^ var_2), (((var_10 << (var_12 - 4))))));
                            var_64 = ((((!(var_10 || var_0)))));
                            arr_165 [9] [i_18] [10] [i_41] [i_18] = (((!(((431991071 ? 6 : 4221945806))))));
                        }
                        for (int i_43 = 0; i_43 < 12;i_43 += 1) /* same iter space */
                        {
                            arr_170 [i_17] [i_17] [0] = (max((((var_3 + 2147483647) << (((var_9 + 123) - 22)))), (~var_12)));
                            var_65 = -var_2;
                            arr_171 [4] [4] [i_40] [4] [i_41] [i_43] &= (((var_11 <= var_11) != -var_2));
                        }
                        var_66 = (min(-var_2, var_9));

                        for (int i_44 = 0; i_44 < 1;i_44 += 1)
                        {
                            var_67 = (((max((~var_2), (var_5 - var_9))) > 1));
                            arr_176 [i_17] [10] = (((-var_12 * var_4) / var_13));
                        }
                    }
                    var_68 = (!1622384911167879054);
                    arr_177 [5] [i_40] [i_40] = var_12;
                    var_69 = (max(var_69, var_11));
                    var_70 = ((((0 ? -920748256327979071 : -3))));
                }
                /* vectorizable */
                for (int i_45 = 1; i_45 < 11;i_45 += 1)
                {
                    var_71 = (max(var_71, (var_9 - var_11)));
                    arr_182 [5] [i_18] [7] = var_13;

                    for (int i_46 = 0; i_46 < 12;i_46 += 1)
                    {

                        for (int i_47 = 0; i_47 < 1;i_47 += 1)
                        {
                            var_72 = (~var_1);
                            arr_190 [i_18] [i_18] = var_1;
                            arr_191 [i_17 + 4] [i_17] [9] [1] [1] = (var_7 ? var_4 : var_4);
                            var_73 = ((-(!var_10)));
                        }
                        for (int i_48 = 2; i_48 < 8;i_48 += 1)
                        {
                            arr_194 [i_17] [i_18] [i_45] [i_17] [i_48] = (((var_11 ? var_9 : var_10)));
                            arr_195 [i_17] [i_45] [0] [8] [i_45] [6] = -var_6;
                        }
                        for (int i_49 = 3; i_49 < 10;i_49 += 1)
                        {
                            var_74 = ((var_11 * (var_10 > var_11)));
                            var_75 *= 1622384911167879052;
                            var_76 = (var_5 / var_3);
                        }
                        for (int i_50 = 1; i_50 < 11;i_50 += 1)
                        {
                            var_77 = (max(var_77, var_6));
                            arr_202 [i_17] [5] [1] [i_50] &= var_7;
                        }
                        arr_203 [i_17 + 1] [i_17] [i_17] [i_17 + 3] = (~var_6);
                    }
                    var_78 = var_12;
                }
                /* vectorizable */
                for (int i_51 = 1; i_51 < 9;i_51 += 1)
                {
                    arr_207 [i_17] [i_18] [i_18] [i_51] = ((var_10 ? var_1 : (50 & 1215768422624155234)));
                    var_79 = ((!(var_10 & var_11)));
                }
                arr_208 [i_18] = ((((((!(var_9 * var_1))))) & var_9));
            }
        }
    }
    var_80 = ((((max(var_9, var_10)) / var_7)));
    #pragma endscop
}
