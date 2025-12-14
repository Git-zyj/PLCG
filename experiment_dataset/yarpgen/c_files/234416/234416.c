/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((((arr_0 [i_0]) ^ (arr_0 [i_0]))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_12 = 0;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_13 |= (min((arr_1 [i_4]), 0));
                            var_14 = (max(var_14, ((!((max(var_1, 134086656)))))));
                            var_15 = ((44 ? var_7 : ((~(arr_5 [i_4] [i_3] [i_2 + 1] [i_0])))));
                            var_16 = ((-((~(-32767 - 1)))));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_17 = var_10;
                var_18 = ((!(((((var_10 && (arr_0 [i_5]))) ? (((((-32767 - 1) || var_6)))) : ((-16 ? 3290613508613114775 : var_0)))))));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_19 = var_7;

                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_20 = var_6;
                        var_21 = -7182796199208302759;
                        var_22 = (min((((!(arr_12 [i_7 - 3])))), var_0));
                        var_23 = ((!(arr_18 [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_24 = ((-((-(arr_20 [13] [13] [i_1 - 1] [i_6] [i_8])))));
                        var_25 = (max(var_25, var_4));
                        var_26 = var_7;
                    }

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_27 = ((!(((var_6 ^ (arr_20 [i_1 + 1] [i_1 + 1] [i_9 - 1] [i_1 + 1] [14]))))));
                        var_28 = ((!(~122)));
                        var_29 -= var_0;
                        var_30 = (((!var_1) ? (arr_4 [i_1 - 1]) : var_5));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_31 = (((arr_6 [i_0] [i_1 + 1] [i_1 + 1]) % (var_3 - 0)));
                        var_32 = (((((-7151 ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_4))) ? (max(1, (arr_3 [i_1 - 1] [i_1 - 1]))) : 1366669937));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_33 = (arr_3 [i_0] [i_5]);
                        var_34 = (~0);
                        var_35 = (0 ? 0 : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                        var_36 -= 0;
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_37 = -1;

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_38 = (arr_19 [i_12] [i_12]);
                        var_39 = (arr_14 [i_1] [i_1]);
                    }
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_40 = var_10;
                    var_41 = (max(var_41, var_3));

                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        var_42 |= ((((var_9 / ((((-32767 - 1) / var_8))))) * (((var_2 ? (arr_2 [i_1 + 1] [i_15 - 1]) : (arr_2 [i_1 - 1] [i_15 + 1]))))));
                        var_43 = 32767;
                        var_44 = (min(var_9, ((max(var_5, (arr_17 [i_15] [i_1] [18] [i_1] [i_0]))))));
                    }
                }
                var_45 = -0;
            }
        }
        /* vectorizable */
        for (int i_16 = 2; i_16 < 18;i_16 += 1)
        {
            var_46 = var_8;
            var_47 = var_0;
        }
        for (int i_17 = 1; i_17 < 20;i_17 += 1)
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 19;i_20 += 1)
                    {
                        {
                            var_48 = ((-(var_2 ^ -var_2)));
                            var_49 = 7150;
                            var_50 = var_4;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 21;i_23 += 1) /* same iter space */
                        {
                            var_51 = (max(var_51, (((~(~3744794061))))));
                            var_52 = (((!var_4) ? -7151 : (min(2780630908, var_7))));
                            var_53 = (min(var_1, (arr_6 [i_0] [i_17 - 1] [i_21])));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 21;i_24 += 1) /* same iter space */
                        {
                            var_54 = (~-11011);
                            var_55 = (((((arr_17 [i_17 + 1] [i_21] [i_17 - 1] [i_17 - 1] [i_17 - 1]) + 2147483647)) >> -var_7));
                        }
                        for (int i_25 = 0; i_25 < 21;i_25 += 1) /* same iter space */
                        {
                            var_56 = (max((min(var_5, 3744794061)), 1));
                            var_57 = (min(var_57, -2718704780526934872));
                        }

                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 21;i_26 += 1)
                        {
                            var_58 = var_8;
                            var_59 = (!0);
                            var_60 = ((~((var_5 & (arr_25 [i_0] [i_0] [18] [i_21] [18] [i_22] [i_26])))));
                            var_61 = (arr_61 [i_0] [i_17 + 1] [i_21] [i_21] [1]);
                        }
                    }
                }
            }
        }
        for (int i_27 = 0; i_27 < 21;i_27 += 1)
        {
            var_62 ^= ((-((var_1 | (arr_64 [8] [i_27] [i_27] [i_0] [i_0] [8] [8])))));
            var_63 = (max(((~(arr_15 [i_0] [i_27]))), -var_8));
            var_64 = 0;

            for (int i_28 = 2; i_28 < 18;i_28 += 1)
            {
                var_65 = (max(var_65, -71));

                for (int i_29 = 2; i_29 < 19;i_29 += 1)
                {

                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        var_66 = (var_7 < (max((arr_51 [i_0] [i_27] [i_28] [i_29 + 1]), var_4)));
                        var_67 |= var_1;
                        var_68 = (max(((((((var_7 ? var_1 : 32767))) || (arr_64 [i_27] [i_0] [i_27] [i_28] [i_28] [i_29] [i_29])))), 0));
                    }
                    for (int i_31 = 1; i_31 < 20;i_31 += 1)
                    {
                        var_69 = max((((((min((-32767 - 1), (-127 - 1)))) || ((!(-127 - 1)))))), (-32767 - 1));
                        var_70 = (var_2 / var_10);
                        var_71 = arr_4 [i_29];
                        var_72 = (max(var_72, -0));
                    }

                    for (int i_32 = 0; i_32 < 21;i_32 += 1)
                    {
                        var_73 = (max((arr_40 [i_27] [i_28] [i_27]), 0));
                        var_74 |= (max(1, ((-4078 ? (arr_77 [i_29 - 2] [i_28 + 1] [i_28 - 1] [i_28 + 2] [i_28 - 2]) : (arr_77 [i_29 + 1] [i_28 - 2] [i_28 - 1] [i_28 + 3] [i_28 + 3])))));
                        var_75 = 181;
                    }
                    for (int i_33 = 3; i_33 < 19;i_33 += 1)
                    {
                        var_76 = var_1;
                        var_77 = 4294967295;
                    }
                }
                for (int i_34 = 0; i_34 < 21;i_34 += 1)
                {
                    var_78 = var_3;

                    for (int i_35 = 0; i_35 < 21;i_35 += 1)
                    {
                        var_79 = var_0;
                        var_80 = ((~(arr_14 [0] [i_27])));
                        var_81 = (max(var_81, var_6));
                        var_82 = var_2;
                    }

                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_83 = 3153427754;
                        var_84 = (-32767 - 1);
                    }

                    for (int i_37 = 0; i_37 < 21;i_37 += 1)
                    {
                        var_85 = (min(var_85, var_0));
                        var_86 = (!-var_10);
                    }
                    /* vectorizable */
                    for (int i_38 = 1; i_38 < 20;i_38 += 1)
                    {
                        var_87 = -16384;
                        var_88 = var_7;
                        var_89 = (((arr_29 [i_0] [i_0] [i_28 - 2] [i_0]) ? (arr_21 [i_0] [i_27] [i_28 + 3] [i_34] [i_27]) : (arr_44 [20] [i_27] [20])));
                    }
                    for (int i_39 = 4; i_39 < 20;i_39 += 1)
                    {
                        var_90 = (((~var_1) ? -1527797583 : (((-32767 - 1) ^ var_2))));
                        var_91 = (max(var_91, (arr_36 [15] [0] [i_34] [i_34])));
                    }
                }
            }
            /* vectorizable */
            for (int i_40 = 0; i_40 < 21;i_40 += 1)
            {
                var_92 = var_4;
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 21;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 21;i_42 += 1)
                    {
                        {
                            var_93 = (((((var_4 ? var_4 : var_1))) || var_4));
                            var_94 = var_6;
                            var_95 *= ((104 ? (arr_32 [i_0] [i_27] [i_40] [i_41] [i_42]) : (arr_60 [i_0] [i_27] [i_40] [2] [i_42] [i_42] [i_27])));
                            var_96 = (!var_6);
                            var_97 += (var_0 || 841079442);
                        }
                    }
                }
                var_98 = var_7;
            }
        }
    }
    var_99 = -var_10;
    #pragma endscop
}
