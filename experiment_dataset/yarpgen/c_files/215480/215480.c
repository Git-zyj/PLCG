/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1 - 3] [i_2] [i_3] [i_0] [i_0] [i_0] = ((var_8 / (((min((arr_13 [i_0] [i_1] [i_2] [19] [i_3] [i_3] [i_4]), (arr_14 [i_0]))) + var_18))));
                            var_19 -= var_9;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((max(((-var_8 ? (arr_10 [i_7] [i_7]) : (min(var_17, var_10)))), var_11)))));
                            var_21 = ((var_0 & (arr_2 [i_7])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_22 = var_7;

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_23 = var_14;
                arr_29 [i_0] [i_0] [i_0] = ((~var_5) ? (~var_14) : (arr_14 [i_0]));

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_33 [i_10] [i_0] [i_0] [i_8] [i_0] [i_0] = (arr_3 [i_0] [i_8]);
                    var_24 *= var_7;
                    var_25 = (arr_26 [i_0]);
                    arr_34 [i_0] [i_0] [i_0] [19] = (arr_14 [i_0]);
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        arr_42 [i_0] [1] [1] [i_9] [i_11] [i_0] = var_5;
                        var_26 = (min(var_26, (((var_7 & ((~(arr_39 [5]))))))));
                        var_27 -= -var_15;
                    }
                    var_28 = (max(var_28, (arr_37 [i_0] [17] [i_0] [i_11 + 2] [i_8])));
                    arr_43 [i_0] [i_0] [i_0] [i_8] [10] [1] = arr_32 [i_0] [i_0] [11] [i_11] [i_11 + 1];
                    arr_44 [i_0] [i_8] [i_9] [i_11] = (var_16 + var_7);
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_29 = (var_0 % (arr_25 [i_0] [i_0]));
                    var_30 &= (arr_27 [i_9] [i_0]);
                    arr_47 [i_13] [i_0] [i_0] [i_0] = ((var_7 / -30) + var_18);
                }
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_31 = (min(var_31, ((((arr_51 [i_15] [i_0]) * (var_17 == var_10))))));
                            arr_58 [i_16] &= (((~(arr_23 [i_16] [i_15] [i_16]))));
                            var_32 = var_14;
                        }
                    }
                }

                for (int i_17 = 3; i_17 < 18;i_17 += 1)
                {
                    var_33 = ((((35049 ? 5 : 2147483647)) | var_7));
                    arr_61 [i_0] [i_0] [i_0] [i_14] [i_14] [i_17] = var_3;

                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_64 [i_0] [i_0] [14] [14] = var_6;
                        arr_65 [i_0] = var_1;
                    }
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_34 = (min(var_34, (arr_3 [i_14] [i_0])));
                    arr_69 [i_0] = var_5;
                    var_35 ^= (((arr_52 [i_19] [i_14] [i_8] [1]) || (arr_12 [i_0] [i_8] [i_0] [i_19] [i_8])));
                }
                for (int i_20 = 3; i_20 < 16;i_20 += 1)
                {
                    arr_72 [i_0] [i_0] [i_8] [i_14] [18] = 124;
                    arr_73 [i_0] [i_0] = (((((arr_19 [i_0] [i_0] [i_0] [i_20]) || var_1)) ? var_16 : -var_18));
                }
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    var_36 |= arr_20 [12] [i_21] [i_14] [i_8] [12];
                    arr_76 [i_0] [i_0] = ((var_3 % (arr_32 [i_21] [i_0] [i_8] [i_0] [i_0])));
                    var_37 = (~var_0);
                    arr_77 [i_0] [i_0] [i_14] [i_0] [i_21] = (i_0 % 2 == 0) ? (((var_7 << (((((arr_17 [i_21] [i_0] [i_0] [i_0]) + 23132)) - 40))))) : (((var_7 << (((((((arr_17 [i_21] [i_0] [i_0] [i_0]) + 23132)) - 40)) - 14413)))));
                }
                arr_78 [i_0] [i_8] [i_8] [i_14] = (((((~var_18) + 2147483647)) >> (var_1 - 14331772268232067538)));

                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    var_38 = ((var_0 ? var_2 : (((arr_75 [i_0] [i_0]) + var_2))));
                    var_39 = (max(var_39, (((arr_66 [i_0] [i_8] [10] [i_22]) || (var_10 > var_3)))));
                    arr_82 [i_0] [i_0] [i_0] [16] = (!var_18);
                }
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    arr_85 [12] [i_0] [i_0] [i_0] = (var_7 % var_12);

                    for (int i_24 = 2; i_24 < 17;i_24 += 1)
                    {
                        var_40 = (((((var_10 + (arr_51 [18] [6])))) ? var_9 : (var_0 + var_12)));
                        arr_88 [i_0] [i_0] [i_8] [i_8] [3] [17] = var_13;
                    }
                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        var_41 *= (((13 % 13) && (var_17 && var_3)));
                        var_42 = var_18;
                    }
                    var_43 = var_13;

                    for (int i_26 = 2; i_26 < 17;i_26 += 1)
                    {
                        arr_95 [i_23] |= (((arr_56 [i_26 - 2] [i_26 + 3] [19] [i_26 + 2] [i_26 - 1] [i_26 - 1]) > (!var_16)));
                        var_44 = (max(var_44, ((((arr_28 [3] [i_26 - 2]) < (var_15 / 2147483633))))));
                        var_45 = var_4;
                    }
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        var_46 = (min(var_46, ((((var_18 ? (arr_45 [i_0] [i_0] [i_14] [i_23] [i_27]) : var_4)) ^ (((var_0 + 2147483647) << (var_3 - 122)))))));
                        var_47 *= (((arr_98 [i_23]) & (((var_11 >= (arr_94 [i_23]))))));
                    }
                    for (int i_28 = 0; i_28 < 20;i_28 += 1)
                    {
                        arr_104 [14] [14] [14] [i_14] [i_23] [i_0] [i_28] = ((((((arr_18 [i_0]) ? (arr_50 [i_0] [i_14]) : var_9))) ? (var_9 & var_2) : var_1));
                        arr_105 [i_28] [i_0] [i_0] = var_10;
                        arr_106 [i_0] [9] [i_23] [i_23] [i_14] [i_8] [i_0] = (((arr_21 [i_28] [i_0] [i_0] [i_8] [i_0]) % (((((arr_48 [i_0] [i_8]) || var_10))))));
                        arr_107 [i_0] [i_8] [i_14] [i_14] [19] [i_0] [i_14] = var_14;
                    }
                }
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    var_48 = (max(var_48, (((var_3 / (arr_8 [4] [i_14]))))));
                    arr_111 [2] [i_14] [i_8] [2] &= (((arr_41 [i_29] [6] [12] [i_0] [i_0]) ? -var_16 : (arr_23 [i_0] [i_0] [0])));
                    var_49 = ((((arr_55 [i_0]) ? var_4 : (arr_14 [i_0]))));
                }
                var_50 -= (var_1 || var_11);
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    {
                        var_51 &= var_12;
                        var_52 = (max(var_52, ((((arr_12 [i_0] [i_0] [i_8] [i_30] [8]) ? (arr_112 [i_0] [i_8] [i_30]) : (arr_96 [i_30] [i_30] [i_8] [i_30]))))));
                    }
                }
            }
        }
        for (int i_32 = 0; i_32 < 20;i_32 += 1)
        {
            arr_119 [i_32] |= (((~124) ? ((((((var_17 ? var_4 : (arr_39 [i_0])))) || (arr_24 [i_32] [3] [i_0] [i_0] [i_0])))) : (120 % 64)));
            var_53 = ((var_12 ? (((var_8 + (arr_87 [i_0] [i_32] [i_0] [i_32] [i_0] [i_0]))) : var_7)));
            arr_120 [i_0] = var_1;
        }
        var_54 = ((-(max((var_8 % var_16), (~var_4)))));
        var_55 *= ((min((arr_71 [14] [i_0] [i_0] [i_0] [14]), var_15)));
    }

    for (int i_33 = 0; i_33 < 16;i_33 += 1)
    {
        arr_123 [i_33] [i_33] = (~18446744073709551615);
        var_56 = (max(var_56, ((-(((((var_7 << (var_9 - 163))) >= (arr_49 [i_33] [i_33] [i_33] [i_33]))))))));
    }
    var_57 = ((((var_4 & var_18) > (~var_16))));
    #pragma endscop
}
