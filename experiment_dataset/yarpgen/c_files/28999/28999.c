/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_2 | (~var_4)))) ? ((var_9 ? var_3 : -var_2)) : ((var_7 ? var_6 : ((var_8 ? var_6 : var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!786);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] = (var_7 && var_9);
            arr_6 [i_1] = (((((var_1 ? var_8 : var_5))) ? ((var_8 ? var_4 : var_5)) : (~var_8)));
            arr_7 [i_1] [i_1] = ((!(!var_3)));
            arr_8 [i_1] [i_0] [i_1] = ((var_5 ? ((var_2 ? var_0 : var_5)) : ((var_9 ? var_0 : var_5))));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_4] = ((((((786 ? 986067966600399932 : 782)))) ? var_3 : -var_9));
                        var_12 = (max(var_12, (((-var_7 ? ((max(var_8, var_2))) : 17460676107109151683)))));
                        var_13 = (!0);
                    }
                }
            }
            arr_20 [i_2] = ((var_5 ? (((var_2 ? var_7 : var_7))) : (min((~var_3), var_10))));

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_14 -= ((+(((var_9 + var_5) ? var_5 : ((var_10 ? var_2 : var_3))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_15 = ((var_10 ? var_6 : -var_7));
                    var_16 = -var_7;
                    var_17 *= ((~(~var_4)));
                    arr_26 [i_2] [2] [2] [i_2] = var_5;
                    var_18 = ((986067966600399948 ? -14260 : -122));
                }
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_19 = ((~((~((var_2 ? var_0 : var_3))))));
                arr_30 [i_2] [i_2] &= ((((-((17460676107109151702 ? 2147483647 : 17460676107109151711))))) ? (((((58227 ? 17460676107109151702 : 5537))) ? 191 : 2)) : 3);

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_20 = (min(var_20, var_0));
                    var_21 = (((var_4 ? var_10 : var_1)));
                    arr_33 [i_2] [0] [i_8] [2] [2] [i_8] = (((var_8 & var_7) ? ((var_10 ? var_3 : var_6)) : (!782)));
                }
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_22 = (max(var_22, ((((~var_0) ? var_6 : var_5)))));

                for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    var_23 *= ((!((((((var_0 ? var_2 : var_5))) ? var_10 : var_9)))));
                    var_24 = (max(var_24, 17460676107109151684));
                    arr_39 [i_2] = ((((var_3 ? var_0 : var_0)) == ((var_9 >> (var_5 - 194)))));
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_25 &= (((var_2 ? var_2 : var_7)));
                    arr_43 [9] [i_12] [i_12] = ((!((min(((-14137 ? -223834027 : 255)), ((var_7 ? var_9 : var_3)))))));
                    var_26 -= ((~((var_10 ? (!var_1) : ((min(var_4, var_2)))))));
                }
                for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    arr_48 [2] [2] = ((((((((var_8 ? var_2 : var_9))) ? (((var_3 ? var_7 : var_3))) : ((var_3 ? var_8 : var_10))))) ? ((-var_2 ? -var_9 : ((var_10 << (var_6 - 111))))) : ((-var_9 ? var_10 : var_9))));
                    var_27 = (((((var_6 ? var_2 : ((var_2 ? var_6 : var_3))))) ? (max(var_4, ((var_9 ? var_10 : var_8)))) : var_0));
                    var_28 = ((~(~255)));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    var_29 -= ((var_8 ? var_2 : var_1));

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_30 = ((~((2147483633 ? 224 : 8126511475291278600))));
                        var_31 = var_8;
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_32 -= ((var_0 ? var_5 : (~var_4)));
                        var_33 -= ((var_7 ? (!var_4) : ((var_3 ? var_6 : var_8))));
                        arr_56 [i_16] [i_2] [i_10] [i_2] [i_2] &= (252 && 255);
                    }
                    var_34 -= ((!(((var_1 ? var_5 : var_5)))));
                    arr_57 [i_2] [i_3] [i_10] [i_14 - 1] = (!var_7);
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_62 [i_2] [i_3] [i_10] [i_17] [i_3] = (!var_3);
                            var_35 -= ((!((((-32767 - 1) ? 2147483647 : 32767)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_19 = 2; i_19 < 14;i_19 += 1)
            {

                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    var_36 = ((-var_2 ? ((var_10 ? var_4 : var_8)) : (!var_3)));
                    var_37 = ((var_6 ? var_3 : ((var_9 ? var_5 : var_4))));
                }

                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    var_38 = ((-17898 ? 240 : 255));
                    var_39 = (((((var_3 ? var_3 : var_10))) ? (~var_3) : -var_0));
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 15;i_24 += 1)
                    {
                        {
                            var_40 = (max((var_0 | 110769531), ((-var_9 ? var_4 : (!var_6)))));
                            var_41 -= (((((var_7 ? (var_6 & var_4) : ((var_4 ? var_2 : var_7))))) ? var_1 : var_3));
                        }
                    }
                }
            }
        }
        for (int i_25 = 4; i_25 < 15;i_25 += 1) /* same iter space */
        {
            arr_87 [i_2] [i_2] [13] &= (((((-((max(var_9, var_0)))))) ? (((var_7 ? (~var_7) : (!var_4)))) : ((-((var_5 ? var_6 : var_10))))));

            for (int i_26 = 1; i_26 < 14;i_26 += 1)
            {

                for (int i_27 = 0; i_27 < 16;i_27 += 1)
                {
                    arr_93 [9] [i_27] = (max((((var_8 ? var_4 : var_4))), (max(var_3, var_0))));
                    arr_94 [i_26 - 1] [i_25] [i_26 - 1] [i_26] &= -0;
                    arr_95 [15] [i_27] [i_26] [i_26] = ((-var_1 == (((((var_10 ? var_5 : var_10))) ? (var_6 | var_4) : ((var_1 ? var_6 : var_1))))));
                }
                for (int i_28 = 1; i_28 < 14;i_28 += 1)
                {

                    /* vectorizable */
                    for (int i_29 = 0; i_29 < 16;i_29 += 1)
                    {
                        var_42 = ((var_1 ? var_2 : -var_4));
                        var_43 &= (!var_5);
                    }
                    for (int i_30 = 0; i_30 < 16;i_30 += 1)
                    {
                        var_44 = ((-2 ? (+-13) : (((!(var_1 & var_3))))));
                        var_45 = ((var_0 ? (var_6 | var_10) : ((var_7 ? var_1 : (((min(var_2, var_8))))))));
                        var_46 = (((var_4 ? ((var_5 ? var_2 : var_2)) : var_4)));
                    }
                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 16;i_31 += 1)
                    {
                        arr_110 [i_28] [i_25] [10] [i_28] [10] = var_1;
                        arr_111 [i_28] [i_25 - 1] [i_25 - 1] [i_28] [i_25 - 1] = (!var_10);
                    }
                    for (int i_32 = 3; i_32 < 13;i_32 += 1)
                    {
                        var_47 = ((!(var_8 < var_6)));
                        arr_114 [i_25] [i_25] &= ((!(((-((var_8 ? var_5 : var_9)))))));
                        var_48 = (min(var_48, (((((((var_1 ? var_1 : var_0)))) ? var_2 : (((!var_9) ? (((var_3 ? var_8 : var_8))) : -var_1)))))));
                        var_49 = ((-(((~-1691588411) ? (((255 << (4294967286 - 4294967273)))) : 986067966600399913))));
                    }
                    var_50 = (max(var_50, (((!((((var_1 ? var_8 : var_4)))))))));
                    arr_115 [i_28] [13] [i_25 + 1] [i_28] = (-((var_2 ? (!var_6) : var_10)));
                    var_51 = (min(var_51, ((((((var_3 ? (((var_4 ? var_4 : var_9))) : var_1))) ? (~31247) : ((((var_8 ? var_8 : var_6)))))))));
                }
                var_52 = (max(var_52, (((!(((~((var_2 ? var_7 : var_2))))))))));
                var_53 -= 1;
            }
            for (int i_33 = 4; i_33 < 14;i_33 += 1)
            {
                var_54 -= ((((((((var_8 ? var_6 : var_8))) ? (~var_4) : var_1))) ? (~-var_2) : (((var_10 || (((var_6 ? var_0 : var_4))))))));
                arr_118 [i_2] [5] [i_33 - 2] [i_2] = (((((-var_9 ? (!var_9) : var_6))) ? (max((var_7 * var_3), ((var_3 ? var_3 : var_10)))) : -var_3));

                for (int i_34 = 1; i_34 < 14;i_34 += 1)
                {
                    var_55 -= ((((((((var_3 ? var_5 : var_9))) ? ((var_7 ? var_9 : var_10)) : (((var_9 ? var_3 : var_6)))))) ? ((var_1 ? var_8 : ((max(var_8, var_4))))) : ((((var_1 ? var_4 : var_0)) * (!var_2)))));
                    arr_121 [i_2] [10] [9] [i_34] [15] = (((((var_7 ? var_8 : var_6))) ? (~var_0) : (((var_6 % var_6) ? (var_10 - var_4) : (((max(var_4, var_6))))))));
                }
                for (int i_35 = 0; i_35 < 16;i_35 += 1)
                {

                    for (int i_36 = 0; i_36 < 16;i_36 += 1)
                    {
                        var_56 -= var_5;
                        var_57 = ((65532 ? (((((var_6 ? var_6 : var_8))) ? ((var_5 ? var_10 : var_0)) : (((var_1 ? var_9 : var_7))))) : (((max(var_3, var_4))))));
                        arr_127 [i_2] [i_25 - 2] [i_33 - 4] [i_35] [i_36] = (((((((max(var_2, var_9))) ? ((var_2 ? var_9 : var_3)) : (!var_7)))) ? var_4 : (((!(((var_7 ? var_5 : var_5))))))));
                    }
                    for (int i_37 = 3; i_37 < 15;i_37 += 1)
                    {
                        var_58 = var_7;
                        var_59 = (min(var_59, (~247)));
                        var_60 = ((-(((!var_5) ? ((var_4 ? var_9 : var_0)) : (var_8 == var_9)))));
                    }
                    var_61 = (~var_0);
                }
                for (int i_38 = 3; i_38 < 15;i_38 += 1)
                {
                    var_62 = (((var_7 / var_8) ? (((var_6 ? var_0 : var_5))) : var_10));
                    var_63 = ((((!(~var_3))) ? (~var_5) : ((((((var_6 ? var_2 : var_2)) == ((var_5 ? var_5 : var_5))))))));
                    var_64 = (max(var_64, ((((!var_0) << (-var_1 - 1062663328595242774))))));
                }
                for (int i_39 = 0; i_39 < 16;i_39 += 1)
                {
                    var_65 = ((((((var_8 ? var_5 : var_5))) ? var_9 : ((var_8 ? var_6 : var_9)))));
                    var_66 = ((!(~936141390)));
                }

                /* vectorizable */
                for (int i_40 = 0; i_40 < 16;i_40 += 1)
                {
                    arr_140 [2] [2] [2] [6] = var_7;
                    arr_141 [i_40] [13] [i_25 - 2] [i_25] [i_25 - 2] [i_2] = ((~(!34288)));

                    for (int i_41 = 0; i_41 < 16;i_41 += 1)
                    {
                        var_67 = (((((var_4 ? var_8 : var_7))) ? var_5 : var_9));
                        var_68 -= var_1;
                    }
                    for (int i_42 = 0; i_42 < 16;i_42 += 1)
                    {
                        arr_147 [i_2] [i_25] [14] [i_40] [i_42] = (((21 ? 5223490767714199114 : -54595010)));
                        arr_148 [8] [i_25] [i_42] [i_40] [9] [i_40] = (var_6 == var_0);
                    }
                    var_69 = (min(var_69, (((-(var_2 ^ var_0))))));
                }
            }
            for (int i_43 = 4; i_43 < 13;i_43 += 1)
            {
                var_70 = (((~var_1) ? ((var_2 ? ((var_10 ? var_7 : var_2)) : -var_3)) : -var_8));
                arr_151 [i_2] [i_43 - 1] = (~1);
            }
            var_71 -= ((((max((!var_0), var_5))) ? ((-((var_1 ? var_6 : var_3)))) : ((var_4 ? var_6 : var_1))));
        }
        for (int i_44 = 0; i_44 < 1;i_44 += 1)
        {

            for (int i_45 = 0; i_45 < 16;i_45 += 1)
            {
                arr_157 [i_2] [i_44] [i_2] = ((var_10 ? ((var_5 ? var_0 : (!var_8))) : (((var_10 ? var_0 : var_9)))));
                var_72 = (max(var_72, (((-((((max(65512, 1564811036326980874))) ? var_7 : (min(var_7, var_2)))))))));
            }
            var_73 = (max(var_73, var_1));
        }
        var_74 = var_7;
    }

    for (int i_46 = 0; i_46 < 25;i_46 += 1)
    {

        /* vectorizable */
        for (int i_47 = 4; i_47 < 22;i_47 += 1) /* same iter space */
        {
            arr_163 [i_47] = ((-var_1 ? (((var_2 ? var_9 : var_8))) : var_7));

            for (int i_48 = 0; i_48 < 1;i_48 += 1)
            {
                var_75 -= ((var_0 ? var_6 : var_5));
                var_76 = (((var_10 ? var_3 : var_8)));
            }
            arr_166 [i_47] [i_46] [i_47] = ((var_0 ? var_9 : var_4));
        }
        for (int i_49 = 4; i_49 < 22;i_49 += 1) /* same iter space */
        {
            var_77 -= (var_10 > var_10);
            var_78 = ((-((var_0 ? var_9 : var_8))));
            var_79 = ((var_10 ? (((var_8 ? var_3 : var_6))) : var_10));

            /* vectorizable */
            for (int i_50 = 0; i_50 < 25;i_50 += 1)
            {
                var_80 = ((var_2 ? var_0 : var_7));
                arr_171 [i_50] [i_49] [i_46] = -var_2;
            }
            for (int i_51 = 1; i_51 < 24;i_51 += 1)
            {
                /* LoopNest 2 */
                for (int i_52 = 0; i_52 < 1;i_52 += 1)
                {
                    for (int i_53 = 0; i_53 < 25;i_53 += 1)
                    {
                        {
                            var_81 = ((~(((!(!var_6))))));
                            var_82 = (min(var_82, ((((((~((var_8 ? var_2 : var_6))))) ? (max(57575, 3854583713)) : var_4)))));
                        }
                    }
                }
                var_83 = (((((var_10 ? var_4 : var_2))) ? ((var_4 ? var_9 : var_5)) : (((~var_8) ? (~339187030) : ((var_10 ? var_2 : var_8))))));
            }
            for (int i_54 = 1; i_54 < 24;i_54 += 1)
            {
                var_84 *= ((+(((!var_9) ? ((var_9 ? var_10 : var_6)) : -var_9))));
                var_85 = ((-((~((-1 ? 65518 : 5652377363003376186))))));
                /* LoopNest 2 */
                for (int i_55 = 3; i_55 < 23;i_55 += 1)
                {
                    for (int i_56 = 0; i_56 < 25;i_56 += 1)
                    {
                        {
                            var_86 = ((~((((max(var_10, var_7))) ? ((var_0 ? var_6 : var_1)) : (~var_8)))));
                            var_87 = var_10;
                            var_88 = (((!34291) ? ((var_7 ? var_2 : var_9)) : (((((4566 ? 17460676107109151691 : (-9223372036854775807 - 1)))) ? ((40061 ? 7 : -10949)) : -var_6))));
                        }
                    }
                }
                var_89 = (min(var_89, ((max((((!(((var_6 ? var_4 : var_5)))))), (((((var_0 ? var_5 : var_9))) ? var_2 : (~86))))))));
                var_90 = (((~15641462967954474070) ? (~var_1) : ((max(((var_3 ? var_8 : var_6)), -var_5)))));
            }
            var_91 -= ((-((min(var_3, var_0)))));
        }
        for (int i_57 = 4; i_57 < 22;i_57 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_58 = 1; i_58 < 21;i_58 += 1)
            {
                for (int i_59 = 0; i_59 < 25;i_59 += 1)
                {
                    {
                        arr_195 [i_46] [i_57] [i_58] [i_59] = var_2;
                        var_92 = (max(var_92, (((((((var_5 ? var_1 : var_6)) ? ((var_0 ? var_6 : var_4)) : (!var_1))))))));
                        var_93 = (~var_3);
                    }
                }
            }
            arr_196 [i_57] [i_46] = var_6;
        }
        for (int i_60 = 4; i_60 < 22;i_60 += 1) /* same iter space */
        {
            var_94 = (max((((var_8 ? var_4 : var_8))), -255));
            arr_199 [17] [i_60 + 3] [i_60 - 2] = (~(max((var_1 < var_10), (var_3 + var_3))));
            var_95 &= ((((((((var_7 ? var_4 : var_8))) ? -var_9 : ((var_7 ? var_1 : var_7))))) ? (((((max(var_7, var_7))) ? var_3 : var_4))) : (((((var_10 ? var_0 : var_0))) ? ((var_8 ? var_1 : var_3)) : -var_5))));
            var_96 = ((var_9 ? (((((var_0 ? var_10 : var_4))) ? var_0 : ((var_2 ? var_5 : var_10)))) : 42484));
            arr_200 [i_46] = ((~var_8) ? var_8 : var_10);
        }
        /* LoopNest 2 */
        for (int i_61 = 1; i_61 < 24;i_61 += 1)
        {
            for (int i_62 = 0; i_62 < 25;i_62 += 1)
            {
                {
                    var_97 = (max(var_97, (((((((var_5 ? var_9 : var_2)))) ? -var_0 : ((-var_10 ? (((var_4 ? var_8 : var_8))) : (var_9 | var_1))))))));
                    /* LoopNest 2 */
                    for (int i_63 = 3; i_63 < 24;i_63 += 1)
                    {
                        for (int i_64 = 0; i_64 < 1;i_64 += 1)
                        {
                            {
                                arr_211 [i_46] [20] [15] [i_61] [20] [20] = (((!var_7) ? (((((var_8 ? var_8 : var_0))) ? -var_2 : ((var_10 ? var_1 : var_1)))) : ((((!(~var_5)))))));
                                var_98 = (((((max(var_2, var_1)) ? (((var_0 ? var_9 : var_9))) : var_7))));
                            }
                        }
                    }
                    arr_212 [i_61] [i_61] [i_62] = (((((var_9 ? ((var_1 ? var_3 : var_7)) : (~var_5)))) ? ((min((var_9 | var_2), (~var_4)))) : (((((255 ? 6971 : 98))) ? ((-59 ? 3071704538631341910 : 1)) : 4321085460000506939))));
                    var_99 = (min(var_99, (((((((((var_3 ? var_2 : var_9))) ? ((min(var_5, var_4))) : ((var_4 ? var_9 : var_5))))) ? (~2226171700) : (((65532 ? 32750 : 220481361))))))));
                }
            }
        }
        var_100 = (!var_3);
        /* LoopNest 2 */
        for (int i_65 = 2; i_65 < 24;i_65 += 1)
        {
            for (int i_66 = 3; i_66 < 23;i_66 += 1)
            {
                {
                    arr_217 [i_66] [17] [i_65 - 1] [i_66] = ((((!(!var_5))) ? ((((!(~var_10))))) : ((68 ? 5832241179065596712 : 42459))));
                    var_101 = ((((((~var_9) ? -var_6 : ((var_10 << (var_1 - 17384080745114308841)))))) ? (~var_8) : (~var_5)));
                    arr_218 [i_66] = (((((~(~var_9)))) ? (((~var_7) >> ((((var_9 << (((var_8 + 66) - 26)))) - 158090)))) : (((var_9 ? ((18446744073709551615 ? 7347 : -92)) : (~var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
