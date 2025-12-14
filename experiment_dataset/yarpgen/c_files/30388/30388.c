/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = ((((!var_15) & (max(var_11, var_2)))));
        arr_3 [i_0 - 1] = (min(((~(~-3762210397449924631))), var_15));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_20 = (max(var_20, (var_15 || var_16)));
                var_21 = ((var_3 ? (((var_2 ? var_0 : 1775159930))) : ((7764207649423676003 ? 1706135880 : var_4))));
                arr_11 [i_0] = var_4;
                var_22 |= var_17;
                var_23 = (min(var_23, (((0 & (4294967295 & -133104573150505549))))));
            }
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    var_24 = ((var_8 << 5) || var_7);
                    arr_18 [19] [i_1 + 2] [i_3 - 2] [i_1 + 2] = (var_9 >= var_17);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_23 [i_3 - 3] [i_3 - 3] [14] [i_3] [i_3] [i_3] = var_15;
                        arr_24 [i_4] [i_0 + 2] [i_0 + 2] = var_2;
                        var_25 = (min(var_25, ((((var_15 || var_7) > var_0)))));
                        var_26 = ((!(((var_0 ? var_2 : var_14)))));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_27 -= 1;
                        var_28 = -var_17;
                        var_29 = ((var_4 ? (var_2 / 1) : (var_10 / var_4)));
                        var_30 = (!var_11);
                        var_31 = ((((1 ? var_15 : var_14))) ? (((var_13 ? var_8 : var_8))) : 1);
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_32 ^= var_2;
                        arr_29 [i_7] &= ((((var_1 ? var_8 : var_2)) << (((var_14 / 4294967295) - 1035854296))));
                        arr_30 [15] [15] [i_3 - 1] [i_3 + 1] [i_3 - 1] = -var_2;
                        arr_31 [i_0] = (var_16 / 1);
                        var_33 = ((var_1 ? 25 : 15360));
                    }
                    var_34 = (min(var_34, (4294967284 / 124)));
                }
                var_35 += (((((var_2 ? var_12 : 0))) ? (var_11 & var_4) : (((var_13 ? var_13 : var_8)))));
                var_36 = ((var_6 ? var_14 : (428563649 | var_1)));

                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        var_37 -= var_6;
                        var_38 = ((-var_4 ? (((var_9 ? var_11 : 4294951936))) : (var_5 / var_16)));
                        var_39 = -133104573150505546;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_40 += var_1;
                        var_41 = ((var_13 / (3202202235 || var_15)));
                    }
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        var_42 = ((1 ? 1 : 133104573150505549));
                        var_43 = (((var_7 | var_11) ? (var_4 | 4294967281) : ((1 ? var_4 : var_8))));
                        var_44 = ((var_6 ? var_3 : var_1));
                        arr_46 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_0 + 1] = ((((var_10 ? 3485697123 : 18446744073709551615))) && var_13);
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_49 [i_0] [4] [i_8] = (((var_16 - var_0) ? var_8 : var_7));
                        var_45 = (-((var_15 ? var_8 : var_4)));
                        arr_50 [i_0] [i_8] [1] = (((~var_2) ? ((var_6 ? var_1 : var_3)) : var_9));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_54 [i_13] [i_8] [i_8] [i_0 + 1] = (var_10 / var_1);
                        var_46 = var_5;
                    }

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_47 = (max(var_47, ((((var_0 > 3335332154) ? (((var_10 << (var_7 - 3260272931)))) : var_14)))));
                        var_48 = var_0;
                    }
                    arr_57 [i_0 + 1] [i_0] [i_0] [i_0] [4] [i_8] = (((var_17 && var_12) || (12 || var_12)));
                    var_49 = var_4;
                }
            }
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    var_50 = ((-5679796048155304267 & 2097151) >= 11);
                    var_51 = -var_16;

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_52 = var_1;
                        var_53 = (((((var_6 ? var_13 : var_5))) ? (((var_5 ? -122 : var_2))) : (var_13 ^ var_3)));
                        var_54 = (max(var_54, (!var_11)));
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_55 -= ((var_7 >= (var_6 || 1789646569)));
                        arr_69 [i_18] = var_9;
                    }
                    for (int i_19 = 4; i_19 < 19;i_19 += 1) /* same iter space */
                    {
                        arr_74 [18] [18] [i_15 + 1] [i_15] [18] [i_15 - 1] [i_15] = (((((var_17 ? 4294967286 : 4294967281))) < var_14));
                        var_56 = (var_2 ^ var_9);
                        var_57 = var_9;
                    }
                    for (int i_20 = 4; i_20 < 19;i_20 += 1) /* same iter space */
                    {
                        arr_78 [i_15] [i_15] [i_20] = var_3;
                        var_58 = (((!var_15) > ((var_13 ? var_11 : var_15))));
                        var_59 -= (((~var_6) ^ (~var_6)));
                        arr_79 [i_0] [i_0] [i_0] [i_20] [i_0] [i_0 + 1] = ((var_12 && var_12) ? ((var_0 ? 4195350734 : var_9)) : var_4);
                        var_60 = (((((var_15 ? var_2 : var_4))) ? var_0 : var_6));
                    }
                }

                for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
                {
                    var_61 |= (((var_14 < var_11) == 4130814966));
                    var_62 = ((var_4 ? var_6 : -var_8));
                    var_63 = ((var_2 || (var_11 && var_15)));
                }
                for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
                {
                    var_64 = (min(var_64, (!var_16)));

                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        var_65 = (16 == 4294967282);
                        var_66 = (min(var_66, ((((var_13 / var_6) || (((var_16 << (var_4 - 4554158365361401565)))))))));
                        arr_86 [i_22] [i_22] [i_15] [9] [6] = (((var_9 || var_13) == (!var_5)));
                        var_67 *= var_6;
                    }
                    for (int i_24 = 3; i_24 < 19;i_24 += 1)
                    {
                        var_68 = ((((var_8 ? var_7 : var_4))) ? var_0 : ((var_12 ? var_14 : var_7)));
                        var_69 = (((var_13 < var_9) || (((-120419036996613215 ? 2278188897 : -95)))));
                        var_70 = (max(var_70, (((-var_13 ? -11 : ((var_12 ? var_13 : var_5)))))));
                    }
                }
            }
            arr_89 [19] = -var_0;
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            arr_92 [i_0] = -7125109129011476572;
            var_71 = (min(var_71, (((var_7 ? (var_0 / var_14) : ((var_17 ? var_4 : var_13)))))));
        }
        for (int i_26 = 2; i_26 < 20;i_26 += 1)
        {
            var_72 = (max((max(((var_9 ? 1 : 3700774571)), (min(4294967295, 69377136)))), ((((var_14 ? var_3 : var_10)) * (min(var_0, 4294967287))))));

            for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 22;i_29 += 1)
                    {
                        {
                            var_73 = (((max((~var_8), (max(9, var_4)))) | (var_7 < var_7)));
                            var_74 = ((~(max((var_2 | var_4), ((max(var_2, var_9)))))));
                            var_75 -= 9223372036854775807;
                        }
                    }
                }
                arr_104 [i_27] [i_26] [16] = (max(2097151, (max(var_17, (max(var_6, var_5))))));
            }
            for (int i_30 = 0; i_30 < 22;i_30 += 1) /* same iter space */
            {
                var_76 = ((!((((-75 * -7) / (var_4 > var_6))))));
                var_77 = (min(var_77, ((min((((var_13 / var_6) ? (~var_15) : (max(var_3, var_6)))), (((var_0 ? var_9 : var_11))))))));
                var_78 -= (((var_16 ^ 2500239439) ? ((max(var_6, var_9))) : var_5));
                arr_108 [i_0] [i_26 - 2] [i_26 - 2] [i_26] = (((((915995144 > (max(var_17, 4225590160))))) == ((min(var_8, 96)))));
            }

            for (int i_31 = 1; i_31 < 20;i_31 += 1)
            {

                for (int i_32 = 0; i_32 < 22;i_32 += 1)
                {
                    var_79 ^= min((((((max(var_3, 4292870145))) || -91))), var_13);
                    var_80 = (min(var_80, var_10));
                }
                for (int i_33 = 1; i_33 < 21;i_33 += 1)
                {
                    var_81 = ((((max(3437434349, var_16))) < ((var_5 ? var_5 : var_6))));
                    var_82 = 1;

                    for (int i_34 = 1; i_34 < 19;i_34 += 1)
                    {
                        var_83 += (min(((max(((var_8 ? var_0 : 2097151)), (max(var_9, 2016717805))))), ((((max(var_4, var_6))) ? var_6 : (min(var_3, var_6))))));
                        var_84 -= ((((0 ^ var_13) ^ 1)) / var_15);
                    }
                    var_85 |= -var_0;
                    var_86 *= (max(var_5, (((-(min(var_3, var_17)))))));
                }

                for (int i_35 = 0; i_35 < 22;i_35 += 1)
                {
                    var_87 = (min(var_87, ((max(((min((min(var_16, var_6)), -27))), ((((var_5 ? var_11 : var_5)) & (min(var_5, var_17)))))))));
                    arr_121 [i_26] = ((max(var_13, var_8)) + ((var_4 ? var_3 : var_12)));
                    var_88 = (((((var_10 ? (var_5 || 9686333140083793045) : (!-3880769548783613691)))) ? var_9 : (min(((min(0, var_8))), (max(4294967295, var_14))))));
                    var_89 = (max(var_89, (((-((-var_5 & ((max(var_13, var_11))))))))));
                }
                for (int i_36 = 0; i_36 < 0;i_36 += 1)
                {
                    var_90 = (max((((var_5 || var_11) ? (max(var_4, var_15)) : (var_4 == var_7))), (((((min(var_6, var_16)) + 9223372036854775807)) << (((((-13 ^ var_15) + 170)) - 61))))));
                    var_91 = (((((var_3 ? (0 / var_6) : ((594192717 ? var_6 : var_10))))) / ((((max(var_7, 127))) * (var_5 / var_11)))));
                }
                for (int i_37 = 4; i_37 < 21;i_37 += 1)
                {
                    arr_128 [i_26] [i_37] [i_26] [i_37] = var_16;
                    var_92 *= ((((((594192725 / var_16) * 4193863378))) & ((((min(var_11, var_0))) ? (var_12 > var_7) : (var_1 ^ var_0)))));
                }
            }
            /* vectorizable */
            for (int i_38 = 0; i_38 < 22;i_38 += 1)
            {
                arr_133 [i_0] [i_26] [1] [i_0 + 2] = (-9223372036854775807 - 1);

                for (int i_39 = 3; i_39 < 21;i_39 += 1)
                {

                    for (int i_40 = 1; i_40 < 21;i_40 += 1)
                    {
                        arr_138 [i_0] [i_0] [i_0] [18] [18] |= ((-((var_16 ? var_3 : 3700774579))));
                        var_93 *= (((9223372036854775807 > 0) >= var_4));
                    }
                    for (int i_41 = 0; i_41 < 22;i_41 += 1)
                    {
                        var_94 *= 1048575;
                        var_95 = (var_0 ? var_10 : 1048575);
                        var_96 = (min(var_96, ((-var_6 ? var_12 : ((var_15 ? var_1 : var_16))))));
                    }
                    arr_143 [13] [i_26] [i_38] [13] = (var_9 < var_4);
                    var_97 = (min(var_97, (!950379958)));
                    var_98 -= var_8;

                    for (int i_42 = 0; i_42 < 22;i_42 += 1)
                    {
                        arr_146 [i_26] [i_26] [15] [i_39] [i_42] = (((var_15 ? var_9 : 101103929)) & var_10);
                        var_99 = (var_0 / var_16);
                        var_100 = ((var_12 < (var_11 / var_0)));
                        arr_147 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_26] [i_39] [i_42] = var_15;
                    }
                    for (int i_43 = 0; i_43 < 22;i_43 += 1)
                    {
                        var_101 = (max(var_101, var_10));
                        var_102 = (max(var_102, var_8));
                    }
                }
                for (int i_44 = 1; i_44 < 21;i_44 += 1)
                {
                    var_103 -= (var_15 < var_6);
                    var_104 -= (var_5 > var_5);
                }
            }
        }
    }
    for (int i_45 = 1; i_45 < 20;i_45 += 1) /* same iter space */
    {
        var_105 *= ((((0 > (((var_11 ? var_15 : var_15))))) && ((4294967295 < (min(-3491483073296196903, var_0))))));
        var_106 = (max((max(8, 950379958)), (max(var_13, ((var_15 ? var_9 : var_7))))));
    }
    for (int i_46 = 1; i_46 < 20;i_46 += 1) /* same iter space */
    {
        var_107 -= (min((max((var_2 & var_0), 76)), ((((max(var_2, var_1))) ? -var_13 : 1611271555))));

        for (int i_47 = 0; i_47 < 22;i_47 += 1)
        {
            arr_163 [i_46 + 2] [i_46 + 2] [2] = max(var_13, (min(((var_0 ? var_13 : var_17)), ((min(var_2, var_10))))));
            /* LoopNest 2 */
            for (int i_48 = 0; i_48 < 22;i_48 += 1)
            {
                for (int i_49 = 1; i_49 < 18;i_49 += 1)
                {
                    {
                        var_108 = var_0;
                        arr_170 [i_48] [i_48] [i_48] [5] [i_48] [i_49 + 4] = (max((max(((var_0 ? var_17 : var_11)), ((max(var_0, -94))))), ((max(4293918737, 93)))));
                        arr_171 [i_47] [18] [i_47] [i_48] = (min((max(((var_15 ? 17341954322549567727 : var_2)), (!11))), ((((1785758925 & var_14) / var_4)))));
                        arr_172 [1] [1] [1] [i_46 - 1] [i_46 - 1] &= (!var_7);
                    }
                }
            }
            var_109 |= (((((((var_13 ? var_6 : var_17)) / ((var_12 ? var_14 : -92))))) < (((min(var_1, var_12)) * (min(11581384154752638016, var_2))))));
        }
        for (int i_50 = 0; i_50 < 22;i_50 += 1)
        {
            arr_177 [i_50] [i_46 + 2] [i_46] = (min((min(1, var_7)), ((((8575360409708361303 ? 2683695740 : var_10)) & var_12))));
            var_110 += var_11;
        }
    }
    var_111 = (max(var_111, ((((((~(min(var_14, var_6))))) ? ((((~var_9) ? (max(var_14, var_10)) : var_8))) : (min((max(-92, var_1)), 0)))))));
    var_112 = 3438581742;
    #pragma endscop
}
