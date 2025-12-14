/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    var_14 *= (max((min((arr_0 [i_3]), (arr_0 [i_3]))), (arr_0 [i_3])));

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_15 |= var_10;
                        arr_12 [i_0] [i_1] [i_1] [i_4] = arr_0 [i_0];
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_16 = var_6;
                        var_17 *= (-9223372036854775807 - 1);
                    }
                    var_18 = (max(var_18, (arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [2])));
                }

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_19 [i_0] = (max((arr_13 [i_0] [12] [i_2] [i_2] [i_1 - 1]), -4294967285));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_19 ^= (arr_3 [i_2 - 1] [8] [i_6]);
                        arr_23 [i_0] [i_1 - 2] [i_0] [i_6] [i_7 + 2] = arr_16 [i_0 - 1] [i_6] [i_2];
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_20 = var_2;
                        var_21 = var_12;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_22 = (arr_1 [i_0]);
                        var_23 = var_13;
                        arr_28 [4] [i_0] [4] [1] [i_0 - 1] [i_2 - 1] [i_9] = ((~(arr_15 [i_0] [i_1 - 3])));
                        var_24 = var_4;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_2 - 1] [i_6] [i_10] = var_3;
                        var_25 |= (arr_9 [i_10] [i_10] [i_10] [i_6] [i_2 - 1]);
                        var_26 = (max(var_26, var_4));
                        arr_32 [i_0] [i_1] [i_2] [i_1] [4] [i_0] [i_10] = var_6;
                    }
                }
                arr_33 [i_0] [i_0] [i_0] = (arr_3 [i_1] [i_1] [i_0]);
                var_27 = (max(var_27, ((((-(arr_17 [10] [i_1] [i_1] [10])))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_38 [i_0] = (arr_5 [i_0 - 1] [i_1 - 3] [i_0] [i_2 - 1]);
                            var_28 = (arr_20 [4] [i_11] [i_11] [11] [i_1] [i_0]);
                            arr_39 [i_0 - 1] [i_0] [10] [2] [i_12] = (arr_18 [i_0] [i_0] [i_2] [i_11]);
                            var_29 = (arr_37 [i_0] [i_1] [i_0]);
                        }
                    }
                }
            }
            for (int i_13 = 3; i_13 < 12;i_13 += 1)
            {
                var_30 = (max(var_30, (arr_29 [10] [4] [i_13] [10] [6] [i_0] [10])));

                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    var_31 = (arr_14 [i_0] [1] [i_13] [i_14 + 1] [i_13] [i_14 + 1]);
                    var_32 *= (arr_40 [i_0] [i_1 + 2] [9] [9]);
                    arr_46 [i_0] [3] [3] = (min((max((arr_44 [i_14 - 1] [i_0]), (arr_44 [i_14 - 1] [i_0]))), (arr_17 [i_0] [i_13 - 1] [i_0] [i_0])));
                    var_33 = var_3;
                }
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {

                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        var_34 = var_3;
                        arr_51 [i_0] [9] [i_13] [i_15] [i_0] = var_5;
                    }
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_35 = min(var_12, var_11);
                        arr_56 [i_0] [i_1] [i_13] [i_15 + 2] [i_0 - 1] = -2262229269523155517;
                        var_36 = var_13;
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_37 = var_6;
                        arr_60 [i_15] [i_0] [i_15] [i_13 + 1] [i_13] [i_0] [i_0] = var_10;
                    }
                    var_38 = (max(var_38, var_6));
                }
                var_39 = (arr_26 [i_0] [i_13 + 1]);
            }
            for (int i_19 = 3; i_19 < 10;i_19 += 1)
            {
                arr_63 [i_0] [i_1] [i_0] = var_9;
                arr_64 [i_0] = (max((!var_7), ((~(arr_42 [i_0])))));
            }

            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                var_40 = ((!((min(1, -3254823087922928295)))));
                var_41 = ((((!(arr_4 [i_0])))));
                var_42 = (arr_3 [i_0 - 1] [7] [i_0]);
            }
            arr_68 [i_0] [i_0] = var_8;
        }

        /* vectorizable */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_71 [i_0] [i_0] [i_0] = var_13;
            arr_72 [0] [12] |= var_0;
        }
    }
    for (int i_22 = 1; i_22 < 21;i_22 += 1)
    {
        var_43 = var_2;
        arr_76 [i_22] = (arr_75 [i_22 - 1]);
    }
    /* LoopNest 3 */
    for (int i_23 = 2; i_23 < 21;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 24;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                {

                    for (int i_26 = 1; i_26 < 23;i_26 += 1)
                    {
                        arr_86 [i_25] [i_24] [i_25] [i_26 - 1] = var_9;
                        arr_87 [i_23] [i_24] [i_25] [i_26] = (~(arr_80 [i_26 - 1] [i_26] [i_25]));
                        arr_88 [i_23] [i_25] = ((-((min(var_11, var_3)))));
                    }
                    for (int i_27 = 4; i_27 < 23;i_27 += 1)
                    {
                        var_44 = (max(var_44, ((max(var_10, var_6)))));
                        var_45 = var_10;

                        for (int i_28 = 1; i_28 < 21;i_28 += 1)
                        {
                            var_46 = (min(var_46, ((min(var_8, ((min((arr_84 [i_28] [7] [i_23 - 1] [i_23 - 1]), var_1))))))));
                            arr_94 [i_28 + 2] [i_27 - 4] [i_25] [i_25] [i_24] [i_23 + 3] = var_6;
                            arr_95 [i_28] [i_25] [i_25] [i_25] [i_23] = (max((arr_89 [i_25] [i_28] [i_28] [i_25]), (max(-7188, 18446744073709551615))));
                        }
                    }
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {

                        for (int i_30 = 3; i_30 < 21;i_30 += 1) /* same iter space */
                        {
                            arr_102 [i_23 + 1] [i_25] [i_29] [i_29] [11] = ((!(arr_93 [i_25] [i_30 + 3] [i_30 - 3] [i_30 + 1] [i_30])));
                            arr_103 [i_23] [16] [i_25] [i_29] = (((!((min((arr_81 [i_24] [i_24]), var_3))))));
                            arr_104 [16] [i_29] [i_25] [i_25] [i_24] [i_23 + 2] = (arr_82 [i_23 + 3] [i_23 - 1] [i_23 + 3]);
                            arr_105 [i_25] [i_24] = var_5;
                            var_47 = (arr_81 [i_30] [i_23 + 1]);
                        }
                        for (int i_31 = 3; i_31 < 21;i_31 += 1) /* same iter space */
                        {
                            var_48 = (arr_78 [i_23 + 2]);
                            arr_110 [i_24] [i_24] [i_24] &= (max((arr_92 [i_23] [5] [i_25] [9] [i_31 - 3]), (arr_84 [i_23] [i_31] [i_23 - 2] [i_29])));
                            var_49 ^= var_0;
                        }
                        for (int i_32 = 4; i_32 < 21;i_32 += 1)
                        {
                            arr_113 [i_25] [8] = (~var_5);
                            arr_114 [1] [i_24] [i_25] [i_25] [8] [i_32] [i_25] = var_6;
                        }
                        /* vectorizable */
                        for (int i_33 = 3; i_33 < 22;i_33 += 1)
                        {
                            arr_118 [i_23] [4] [14] [i_24] |= (arr_117 [18] [i_23] [i_23 + 2] [i_23 + 2] [i_24] [i_33 - 2]);
                            var_50 = var_11;
                        }
                        var_51 = arr_98 [i_23] [i_24];
                        arr_119 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_25] = var_4;

                        for (int i_34 = 0; i_34 < 24;i_34 += 1)
                        {
                            arr_123 [i_23 - 2] [i_25] [20] = var_4;
                            var_52 = var_3;
                            arr_124 [i_23] [i_29] [i_29] [19] [i_25] [i_25] = (!var_2);
                            var_53 = (arr_90 [i_34] [i_29] [i_24] [i_23]);
                        }
                        for (int i_35 = 2; i_35 < 23;i_35 += 1)
                        {
                            var_54 = (arr_82 [i_35] [i_29] [i_23]);
                            arr_127 [i_23] [i_25] [i_24] [i_25] [i_29] [i_35] = (max((max((arr_126 [i_25] [i_35 + 1] [i_35] [i_35 - 2] [1]), (arr_126 [i_25] [i_35 + 1] [i_35] [i_35] [20]))), var_5));
                            arr_128 [4] [i_25] [4] [i_29] [i_35] [i_35] [i_24] = var_1;
                            arr_129 [i_23] [3] [i_25] [i_25] [i_29] [i_35] = (max(1, ((max(var_6, (~var_2))))));
                            arr_130 [i_25] [i_29] [i_25] [i_24] [i_25] = (min(var_12, ((min(var_7, var_10)))));
                        }
                        arr_131 [i_25] [i_29] = var_12;
                    }
                    var_55 = (!var_6);
                    var_56 = ((-((max(var_8, var_11)))));
                    var_57 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
