/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = min(((var_2 ? var_8 : (((-(arr_6 [i_0] [i_1])))))), (arr_5 [i_0 + 3] [i_1] [i_0]));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_12 = (max(var_12, ((~(2357542193 ^ var_4)))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 = 2147483647;
                        var_14 = (max(var_14, ((((((arr_6 [i_0] [i_0]) / var_1)) * (arr_2 [i_0 + 2]))))));
                        var_15 = 22970;
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 4; i_5 < 11;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [0] [i_2] [i_0] = ((((((arr_0 [i_0] [1]) * var_8))) ? var_1 : ((((arr_11 [i_2] [i_5] [i_4] [i_2] [1] [i_0 - 1]) / var_6)))));
                            var_16 = (max(var_16, ((((((var_4 ? var_6 : 103))) || var_9)))));
                        }

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((var_4 ? (var_6 + var_3) : ((103 ? var_5 : var_9))));
                            var_18 |= ((var_4 ? var_5 : (var_5 | var_1)));
                            var_19 = (((arr_15 [i_1] [i_6 - 1] [i_4 + 1] [i_1 - 1] [i_0 - 2]) ? (arr_9 [i_2] [i_2 - 2] [i_4 - 1]) : (!var_5)));
                            var_20 = (max(var_20, (!var_7)));
                            var_21 |= var_5;
                        }
                        var_22 ^= (-(arr_3 [i_0 - 1]));

                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [i_2] [i_7] [i_2 - 2] [i_2 - 2] = (~var_7);
                            arr_28 [2] [i_2 - 1] [i_2 - 1] [i_2] [i_1] [2] |= -var_10;
                            var_23 ^= (((((var_10 + 9223372036854775807) << (((arr_11 [i_0] [i_1 - 1] [3] [i_1 - 1] [i_4] [i_7]) - 1542012211)))) >= var_7));
                            var_24 = (var_8 ? var_9 : (arr_22 [i_2] [i_2]));
                            var_25 = (((arr_15 [i_4] [i_2 + 1] [i_2] [i_1 - 2] [i_7 - 1]) ^ (arr_15 [i_0] [i_2 - 1] [i_2 + 1] [i_1 - 2] [i_7 - 1])));
                        }

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_26 -= ((var_4 ^ var_1) | (arr_13 [i_1 - 2] [i_2 + 1]));
                            var_27 = (min(var_27, (((+(((arr_18 [i_0] [i_2] [6] [i_4] [2] [i_4] [i_2]) | (arr_15 [i_0] [3] [i_2] [i_4] [i_8 - 1]))))))));
                            var_28 ^= -var_0;
                            var_29 = (max(var_29, -var_5));
                            arr_31 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2] = (arr_18 [i_2] [i_8 - 1] [i_2] [i_8] [i_8 - 1] [i_8 - 1] [11]);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, (((((((var_10 + (arr_22 [4] [i_1 - 1]))) + 9223372036854775807)) << (!var_2))))));
                            var_31 = (-(arr_14 [i_1 + 1]));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_32 = (arr_18 [i_0] [i_1 - 2] [i_2] [i_4] [i_10] [i_0] [i_1]);
                            var_33 *= (((arr_17 [i_4] [i_4] [i_2] [i_4] [0] [i_1 + 1] [i_2]) << (var_2 - 2320264688)));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_34 = (var_6 ? var_4 : var_8);
                            var_35 |= ((~(arr_22 [8] [i_4])));
                        }
                    }
                    for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_36 = (((((arr_38 [i_2] [i_1] [i_2] [1] [1] [i_1]) <= var_8)) ? var_8 : (var_8 && var_1)));
                            var_37 = (arr_40 [i_2 - 1] [i_0 + 1] [i_1 - 2] [i_2]);
                            var_38 = ((-var_7 | (49 * var_7)));
                        }
                        var_39 = (((arr_30 [i_0] [3] [i_0 + 2] [i_1 - 2] [i_2] [i_2]) ? var_3 : var_8));
                        arr_44 [i_0] [i_1] [i_2] [i_2] [i_2] [i_12] = ((var_10 ^ (arr_25 [i_0 - 2] [i_2])));
                        var_40 = (min(var_40, (arr_42 [i_0] [i_1] [1] [2] [1])));
                    }
                }
                for (int i_14 = 2; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    var_41 = (((((((var_7 ? var_7 : -29))) / 4294967295)) ^ ((((arr_43 [i_1 - 2] [i_1 - 1] [i_0 - 1] [i_0 + 1]) ? var_3 : var_9)))));

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {

                        /* vectorizable */
                        for (int i_16 = 3; i_16 < 10;i_16 += 1)
                        {
                            arr_53 [i_14 - 1] [i_1] [i_14] [i_14] [i_16] = var_9;
                            var_42 = ((var_2 ? var_2 : var_1));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_43 ^= (--11720967871171825451);
                            var_44 = var_8;
                            var_45 = var_7;
                        }
                        var_46 = var_10;
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        var_47 = (max(var_47, ((~((~(arr_10 [4] [i_14 - 1] [i_0 - 2])))))));
                        var_48 = (min(var_48, ((((((var_1 ? var_7 : var_3))) ? (((var_2 ? ((max((arr_8 [0]), var_7))) : var_9))) : (var_10 + var_9))))));
                    }
                }

                /* vectorizable */
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    var_49 += ((var_8 << (((arr_29 [i_1] [i_1 + 1] [i_1 + 1] [2] [i_1] [i_19] [2]) - 55353))));
                    var_50 = ((var_6 > (!var_0)));
                    var_51 ^= (arr_40 [i_1 - 1] [i_1 + 1] [i_1 - 1] [0]);

                    for (int i_20 = 3; i_20 < 9;i_20 += 1)
                    {
                        arr_67 [i_20] [i_0] [i_1] [2] [i_19] [i_20] = (arr_43 [i_0] [i_0] [i_20 - 3] [i_0]);

                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            var_52 -= (((arr_43 [i_0] [i_0 + 3] [i_1 - 2] [i_19]) ? (arr_4 [i_0 + 1] [i_1 - 2]) : var_1));
                            arr_70 [i_0] [i_20] [i_19] [i_20] [i_21] [6] [i_21] = ((var_5 ? (((var_2 ? var_0 : var_9))) : (var_5 + 26)));
                            var_53 += (((arr_68 [6] [6] [6] [i_1] [i_1]) ? (arr_68 [i_19] [6] [6] [i_1 + 1] [i_1 - 1]) : var_3));
                            arr_71 [i_20] [7] [i_19] [i_1] [i_20] = (arr_0 [i_0] [i_1 + 1]);
                        }
                        for (int i_22 = 3; i_22 < 10;i_22 += 1)
                        {
                            var_54 *= (((arr_62 [i_0] [i_0 - 1] [i_1] [i_20 - 3]) ? var_5 : var_5));
                            var_55 |= (((var_9 & var_5) ? var_0 : var_2));
                            var_56 = (((arr_55 [i_1 - 1] [i_20 - 2] [i_1 - 1] [i_22 - 2] [i_22 + 1]) == var_9));
                        }
                        for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
                        {
                            arr_78 [i_0] [i_20] [i_0] [i_20] [i_0 + 1] [11] = var_1;
                            var_57 ^= (((((-49 ? var_7 : var_0))) ? var_5 : (~15)));
                            var_58 = (min(var_58, var_1));
                        }
                        for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
                        {
                            var_59 = -var_5;
                            var_60 = ((var_7 ? ((-125 ? var_4 : var_2)) : var_9));
                        }
                    }
                    for (int i_25 = 1; i_25 < 10;i_25 += 1)
                    {
                        var_61 = (min(var_61, ((((((var_1 ? -125 : var_1))) ? (arr_23 [2] [i_25 + 1] [i_25 + 1] [2] [i_25 - 1] [0] [i_25]) : var_10)))));
                        arr_85 [10] [1] = ((-(arr_36 [8] [i_0 + 3] [10] [i_0 + 2] [i_0 - 1] [i_25])));
                        var_62 = (((1 & 4294967295) << ((((1 ? (arr_66 [10]) : var_10)) + 1503398924))));
                    }
                }
            }
        }
    }

    for (int i_26 = 0; i_26 < 12;i_26 += 1)
    {
        var_63 |= ((+(((arr_84 [i_26] [7] [i_26] [i_26] [i_26]) ? var_2 : var_4))));
        var_64 = (max(var_64, (((!(((-((1 ? 47494 : -958793180))))))))));

        for (int i_27 = 0; i_27 < 12;i_27 += 1)
        {
            arr_93 [2] [i_27] = (((((arr_16 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]) ? -var_0 : (var_7 % 11720967871171825457))) > (((((((arr_55 [i_26] [i_27] [i_27] [i_27] [i_27]) ? (arr_40 [i_27] [i_27] [5] [i_27]) : var_3))) ? ((-23 ? var_2 : (arr_35 [i_26] [i_27] [9] [6] [i_27]))) : 103)))));
            var_65 = (((((((var_6 ? var_7 : var_10))) ? var_6 : (max(var_5, var_0)))) & (((((min(var_8, 0))) ? -var_6 : (arr_13 [5] [i_27]))))));
            arr_94 [i_27] = (((arr_77 [i_27] [9] [i_27] [i_26] [i_26]) ? ((((!((min(6725776202537726166, var_9))))))) : (((!var_10) * var_2))));
            arr_95 [i_27] [10] = (((min((arr_86 [i_26] [i_27]), var_3)) >= (var_5 % var_3)));
        }
        for (int i_28 = 0; i_28 < 12;i_28 += 1)
        {
            var_66 = ((var_3 & ((((((var_8 ? var_9 : (arr_73 [i_28] [i_28] [i_28] [i_26] [i_28] [i_28])))) >= (min(var_3, var_2)))))));
            var_67 = (min(var_67, var_8));
        }
        var_68 = (((((((min(var_8, -103))) ? (arr_52 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]) : var_5))) ? var_7 : (((arr_59 [i_26] [i_26] [i_26] [i_26]) ? var_10 : (arr_59 [i_26] [i_26] [i_26] [i_26])))));
        var_69 = (min(var_69, (((((var_4 ? (arr_0 [i_26] [i_26]) : (arr_0 [i_26] [i_26])))) ? ((var_9 >> (((arr_0 [i_26] [i_26]) - 1143)))) : ((var_9 ? (arr_0 [i_26] [i_26]) : (arr_0 [i_26] [i_26])))))));
    }

    /* vectorizable */
    for (int i_29 = 0; i_29 < 24;i_29 += 1)
    {
        var_70 = ((var_7 > (arr_100 [i_29])));
        var_71 = -var_10;
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 17;i_30 += 1)
    {
        /* LoopNest 3 */
        for (int i_31 = 3; i_31 < 16;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 17;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 17;i_33 += 1)
                {
                    {
                        var_72 *= (((arr_104 [i_31 + 1]) ? var_9 : (arr_104 [i_31 - 1])));

                        for (int i_34 = 2; i_34 < 15;i_34 += 1)
                        {
                            var_73 = (((arr_111 [i_31 - 3] [i_31 - 3] [i_31 - 1] [i_31] [i_31 - 2]) ? var_7 : (arr_111 [i_31 - 1] [i_31 - 1] [i_31 + 1] [i_31 - 3] [i_31 - 3])));
                            arr_113 [i_30] [i_30] = (var_0 == var_6);
                            var_74 = ((((var_3 ? var_0 : var_9))) ? (((-(arr_107 [i_31] [i_32] [i_33])))) : (arr_104 [5]));
                            arr_114 [i_30] [i_30] [i_30] [i_30] [i_30] = (((arr_99 [i_31] [i_31 - 3]) ? (arr_99 [i_31] [i_31 - 3]) : var_8));
                            var_75 = (min(var_75, (var_6 ^ var_10)));
                        }
                        for (int i_35 = 0; i_35 < 17;i_35 += 1) /* same iter space */
                        {
                            var_76 = (((arr_98 [i_31 - 2] [i_31]) ? (arr_98 [i_31 + 1] [i_31 + 1]) : (arr_98 [i_31 - 3] [i_31 - 3])));
                            var_77 = ((var_7 ? -var_0 : var_6));
                        }
                        for (int i_36 = 0; i_36 < 17;i_36 += 1) /* same iter space */
                        {
                            var_78 = -var_5;
                            var_79 |= (((arr_117 [i_31] [i_31 + 1] [i_31 - 2] [i_31] [i_31 - 2]) && var_6));
                            var_80 = (min(var_80, (((var_5 / (arr_112 [i_30] [i_30] [i_30] [i_31 - 3] [i_33]))))));
                            arr_120 [i_30] [i_30] [i_32] [i_30] [4] = (!0);
                            var_81 = (((arr_115 [i_30] [i_31 - 2] [i_30] [i_30] [5]) % ((var_0 | (arr_100 [i_31])))));
                        }

                        for (int i_37 = 0; i_37 < 17;i_37 += 1)
                        {
                            var_82 = ((~((var_5 ? var_9 : -117))));
                            var_83 = (min(var_83, (((~((var_3 ? (arr_103 [i_31] [i_30]) : var_3)))))));
                            var_84 = 136339441844224;
                            var_85 = ((((((arr_108 [i_30] [16] [16] [i_33] [i_37]) ? 1796 : (arr_100 [i_30])))) ? var_8 : var_4));
                        }
                        var_86 += var_5;
                    }
                }
            }
        }
        var_87 = (min(var_87, 12));
        /* LoopNest 3 */
        for (int i_38 = 1; i_38 < 16;i_38 += 1)
        {
            for (int i_39 = 1; i_39 < 16;i_39 += 1)
            {
                for (int i_40 = 2; i_40 < 15;i_40 += 1)
                {
                    {
                        var_88 = (!var_1);
                        var_89 = 1481071083198665628;
                    }
                }
            }
        }
        var_90 = (((((0 ? 1048927181 : var_0))) ? var_7 : (arr_127 [i_30] [i_30])));
    }
    var_91 = var_6;
    #pragma endscop
}
