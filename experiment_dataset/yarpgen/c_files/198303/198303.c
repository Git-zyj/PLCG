/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [6] [6] [i_2] [i_3] [i_4] = (max(((max((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_13 [i_4 + 1] [i_3] [i_3] [i_2] [i_1 - 2] [i_0])))), (max(var_6, var_4))));
                                arr_17 [3] [3] [3] [i_3] [i_4] = (arr_0 [i_0] [i_0]);
                                arr_18 [i_3] [i_3] [i_1] [i_3] = (arr_1 [i_4] [i_1]);
                                arr_19 [i_0] [i_1] [i_3] [i_3] [i_3] [i_4] = max(var_9, (max(29812, 12304015924105494586)));
                            }
                        }
                    }
                    var_16 = (max((arr_3 [9] [i_2]), (arr_3 [i_2] [i_2])));
                    arr_20 [i_0] = var_1;
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_23 [i_0] [i_1] = (max((max(-92, 5912235204118584752)), ((max((arr_22 [i_0] [i_1 + 2] [i_5 - 2]), (arr_10 [12] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 *= max((max((arr_22 [i_0] [i_1] [i_5]), (max((-2147483647 - 1), 91)))), (arr_1 [i_0] [i_1]));
                                arr_29 [i_7] [0] [i_5] [i_5] [6] [i_5] = var_15;
                                arr_30 [i_7] [i_1] [i_5 - 1] [1] [i_1] [i_0] &= (arr_28 [i_6] [i_6] [3] [i_6] [2]);
                                arr_31 [i_1] [i_1 + 2] [i_1] [i_1 - 2] [2] |= (max((max(var_14, (arr_4 [i_6] [i_5] [i_0]))), (max(var_12, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_32 [i_0] [i_5] [i_6] [i_7] = arr_10 [i_0] [i_1 - 2];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_37 [9] [9] [i_5] [i_8] [i_9] = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_18 = (max(var_4, (arr_34 [1] [3] [3] [i_8] [i_8] [10])));
                                arr_38 [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [1] = arr_13 [i_0] [4] [i_0] [0] [i_9] [i_9];
                                arr_39 [i_1] [1] [i_1] [i_1] = var_11;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_19 = var_9;
                    arr_42 [i_10] [i_10] [i_1 - 2] [i_0] = (arr_13 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 - 1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_47 [i_11] = (max(var_7, var_9));
                            var_20 = (max(((max(var_11, var_3))), var_15));

                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 14;i_13 += 1)
                            {
                                arr_51 [4] [i_12 - 1] [i_11] [i_12] [i_13] = arr_9 [i_0];
                                arr_52 [i_0] [4] [1] [i_12] [i_13] = arr_49 [i_12 - 2] [i_12] [i_12 - 3] [3];
                                var_21 &= (arr_22 [i_13] [i_1 - 1] [i_1 - 1]);
                            }
                            arr_53 [i_0] [i_1 + 1] [i_11] [i_12] = (max((arr_21 [i_0] [i_11] [i_12]), ((max((arr_8 [i_1 - 2] [i_1 - 2]), (arr_8 [i_1 - 2] [i_11]))))));
                            arr_54 [i_0] = max(((max((max(var_2, var_6)), ((max(var_13, (arr_13 [i_0] [i_1] [i_1] [8] [i_11] [i_12]))))))), (max(var_0, (arr_36 [i_0] [i_1 + 2] [i_12 + 1] [i_12 - 3] [i_12] [i_12 - 3]))));
                        }
                    }
                }

                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_22 = (max(var_22, ((max(var_14, var_12)))));
                        var_23 = (max(var_23, (arr_2 [1])));
                    }

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_64 [i_16] [i_17] [i_17] [i_0] = var_8;
                            arr_65 [i_0] [i_17] [i_0] = var_11;
                        }
                        arr_66 [i_1] [i_16] = arr_56 [i_0] [i_0] [i_0];
                        arr_67 [i_0] = var_3;
                        arr_68 [i_0] = var_1;
                    }
                }

                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    var_24 = (max(var_24, var_3));
                    var_25 &= (max((arr_46 [i_0] [i_1] [i_1 - 1] [2]), (max((max(-161048424, 5836964890433883512)), (arr_10 [i_0] [i_0])))));
                    arr_73 [i_0] [i_1] [i_18] = (arr_69 [i_0] [i_0] [i_0] [i_18 - 1]);
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_76 [i_0] [i_0] [i_0] = (arr_56 [i_0] [11] [i_19]);
                    arr_77 [6] [i_1] |= (arr_50 [i_1 - 2]);

                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_26 ^= (arr_45 [12] [i_1 - 1] [i_0] [i_20] [i_20]);
                        arr_81 [1] = var_12;
                        arr_82 [i_0] = (arr_63 [i_0] [i_1 + 2] [8] [i_19] [8]);
                        arr_83 [i_0] [i_0] [i_0] [13] [i_0] [2] = var_12;
                        arr_84 [i_0] [i_1 - 1] [i_1 - 1] [i_1] = (arr_72 [i_1] [i_1] [i_1 - 1] [i_20]);
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_21 = 2; i_21 < 24;i_21 += 1)
    {
        var_27 = var_7;
        var_28 = var_14;
    }
    for (int i_22 = 1; i_22 < 18;i_22 += 1)
    {
        var_29 = (arr_87 [i_22]);
        arr_91 [i_22] = (max(((max(var_12, (arr_86 [i_22 + 3])))), var_15));
        arr_92 [i_22] [i_22] = var_9;
        arr_93 [i_22] = (max((max((arr_88 [i_22]), (arr_88 [i_22]))), (arr_88 [i_22])));
        arr_94 [i_22] [i_22] = var_12;
    }
    for (int i_23 = 3; i_23 < 21;i_23 += 1)
    {
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 19;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 20;i_25 += 1)
            {
                {
                    var_30 -= max(1, 1);

                    /* vectorizable */
                    for (int i_26 = 2; i_26 < 18;i_26 += 1) /* same iter space */
                    {
                        var_31 = (arr_100 [i_26 + 1]);
                        var_32 = (min(var_32, (arr_102 [i_23 + 1] [i_23 + 1] [i_25] [i_26])));
                        var_33 *= (arr_96 [i_23 - 1] [i_23 - 1]);
                        arr_104 [i_23 - 2] [i_23 - 2] = (arr_100 [i_26 + 1]);
                    }
                    for (int i_27 = 2; i_27 < 18;i_27 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_28 = 0; i_28 < 22;i_28 += 1) /* same iter space */
                        {
                            var_34 = (arr_103 [i_23] [i_23] [i_25] [i_27 + 1]);
                            var_35 = (arr_101 [i_27 - 1] [i_25 + 1] [i_24 + 3]);
                        }
                        for (int i_29 = 0; i_29 < 22;i_29 += 1) /* same iter space */
                        {
                            arr_114 [i_23] [i_24] [i_25] = (arr_107 [i_29] [i_29] [i_27] [i_25] [i_24] [i_23 - 1]);
                            arr_115 [i_23 - 3] [i_24] [i_24] [i_25] [i_27] [18] [i_25] = var_0;
                            arr_116 [i_23] [i_23] [i_23] [5] [i_23] [i_23] [i_23] |= arr_98 [i_23] [i_23];
                            var_36 = var_3;
                            arr_117 [i_23] [i_24] [i_25] [i_25] [i_24] = (arr_109 [i_25] [i_25] [i_25] [i_25 + 2] [i_25]);
                        }
                        for (int i_30 = 0; i_30 < 22;i_30 += 1) /* same iter space */
                        {
                            arr_120 [i_23] [i_25 + 2] = (max(-2110176770, 4294967295));
                            arr_121 [i_30] [i_24] [i_25] [i_25] [i_30] = (max((arr_111 [i_23 + 1] [12] [i_25] [i_27]), (arr_101 [i_23 - 1] [i_23 - 1] [i_23 - 1])));
                            arr_122 [9] = var_0;
                        }
                        for (int i_31 = 1; i_31 < 21;i_31 += 1)
                        {
                            var_37 = (max(var_3, (arr_107 [i_23 - 3] [i_23] [i_23 + 1] [i_23] [i_23] [i_23])));
                            arr_125 [i_31] [i_24] [i_25] [i_23] [i_31] = (max((max((arr_111 [i_27] [i_27 + 2] [i_27 + 3] [i_27 + 3]), var_15)), (max((max((arr_113 [i_23] [i_23] [i_23] [i_23] [15] [i_23]), var_7)), (arr_87 [i_23])))));
                            var_38 = (min(var_38, var_12));
                        }
                        arr_126 [15] [i_25] [i_25 - 1] [i_24] [i_24 + 2] [i_23] = (max((max((max((arr_85 [i_24 + 2] [4]), var_15)), ((max(var_14, (arr_101 [i_23] [i_23] [i_23])))))), (arr_88 [0])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_32 = 2; i_32 < 20;i_32 += 1)
        {
            for (int i_33 = 1; i_33 < 1;i_33 += 1)
            {
                {
                    arr_133 [i_33] = (arr_99 [i_32] [i_32 + 2] [i_33 - 1]);
                    var_39 -= var_9;
                }
            }
        }
    }
    var_40 = var_7;
    var_41 = (min(var_41, ((max(var_0, var_2)))));
    #pragma endscop
}
