/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_17;
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [1] = max(36, 219);
        arr_9 [i_1] [i_1] = var_12;
        arr_10 [0] = (843703899 % 65535);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_15 [i_2] |= (min(var_16, 219));
        arr_16 [i_2] [i_2] = var_9;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_21 [i_3] [7] [7] [i_2] = var_17;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_25 [10] [i_3] [i_4] [i_4] [i_5] = (max(224, var_12));
                        arr_26 [i_3] = (((arr_12 [i_4]) + var_12));
                        arr_27 [i_2] [i_3] [i_4] [i_3] = var_15;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_33 [i_2] [i_3] [i_4] [14] [i_6] [i_7] = (max(((min(128, var_2))), (arr_20 [i_4])));
                                arr_34 [6] [i_7] [i_7] [i_6] [i_4] [i_3] [6] &= (843703899 > var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_43 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_10] = var_16;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_49 [i_8] [i_9] [i_10] [i_11] [i_12] = 32;
                                arr_50 [i_12] [i_8] [i_9] [i_10] [i_9] [i_8] [i_8] = 80;
                                arr_51 [i_8] [i_8 - 2] [1] [i_10] [i_11] [i_9] = 32;
                                arr_52 [i_8] [i_8] [i_10] [i_10] [i_9] [i_11] [i_12] = (230 % 52);
                                arr_53 [i_8] [i_9] [i_10] [i_11] [i_11] [i_12] = arr_42 [i_12] [i_11] [i_10] [i_8];
                            }
                        }
                    }
                    arr_54 [i_8] [i_9] = (((~(arr_6 [i_8]))));
                }
            }
        }

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_58 [i_8] [i_8] = -var_13;
            arr_59 [i_8 - 2] [i_8] [i_13] = arr_48 [i_8] [i_13] [i_13] [i_13] [i_13];
            arr_60 [i_13] [i_8] [i_8] = var_5;
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    arr_71 [i_8] [i_14] [i_15] [i_16] = (!42443);
                    arr_72 [i_8] [i_14] [i_16] = var_9;
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                {
                    arr_75 [i_8] [i_17] [i_14] [i_17] [i_17] = var_11;

                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        arr_78 [i_17] = (arr_55 [i_18] [i_18]);
                        arr_79 [i_8] [i_14] [8] [2] [i_18] [i_14] = (((arr_37 [i_8] [i_8]) % 248));
                    }
                    arr_80 [i_17] [4] [i_17] &= var_7;
                    arr_81 [i_8] [i_8] [i_17] [i_8] = var_6;
                    arr_82 [4] [i_17] [i_17] [i_8] = var_2;
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        arr_88 [i_8] [i_20] [i_15] = var_19;
                        arr_89 [i_8] [i_20] [i_20] [i_8] [i_8] = 255;
                    }
                    for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                    {
                        arr_92 [i_14 + 1] [i_19] = 196;
                        arr_93 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8] = 242;
                        arr_94 [i_8] [i_8 + 1] [i_15] [i_19] [i_21] [i_15] = (arr_38 [i_21] [i_19]);
                        arr_95 [i_19] [5] [i_8] = 204;
                        arr_96 [i_21] = var_6;
                    }
                    arr_97 [i_8] [i_8 + 3] = var_4;
                    arr_98 [i_14] [i_19] [i_15] [i_14] [i_14] [i_8] = (var_14 | var_7);
                }
                arr_99 [8] [8] [i_15] [i_8] = var_17;
            }
            for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
            {
                arr_103 [i_8] = 27474;
                arr_104 [6] [i_22] [3] [i_8] = (arr_0 [4]);
                arr_105 [i_8] [i_8 - 1] [i_8] = (1 != 232);
            }
            arr_106 [i_8] [i_14] = var_4;
            arr_107 [i_14] = var_9;
        }
        for (int i_23 = 4; i_23 < 11;i_23 += 1)
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 11;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 11;i_26 += 1)
                    {
                        {
                            arr_118 [i_8] [i_23] [i_25] [i_25 - 1] [i_23] = (-1525526164 != 58);
                            arr_119 [i_8] [i_23] [i_24] [i_25] [i_26] = var_10;
                        }
                    }
                }
            }
            arr_120 [i_8] [i_8] [i_8] = arr_100 [i_23] [i_8] [i_8 + 2];
        }
        for (int i_27 = 1; i_27 < 11;i_27 += 1)
        {

            for (int i_28 = 4; i_28 < 10;i_28 += 1)
            {
                arr_127 [i_27] [i_28] |= var_7;

                for (int i_29 = 1; i_29 < 9;i_29 += 1)
                {
                    arr_130 [i_8 - 1] [i_27] [i_27] [i_28] = 3240037399352955498;
                    arr_131 [i_8] [i_8] [i_27] [i_28] [i_28] [i_29] = var_10;
                }
                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {
                    arr_135 [i_8] [i_27] [i_28] [i_30] = var_8;
                    arr_136 [i_8] [i_27] [i_27] [i_28] [i_28 - 2] [i_30] = var_14;
                    arr_137 [i_8] [i_27] [i_28 - 3] [i_30] = (arr_19 [i_28] [i_27] [i_28] [i_27]);
                }
                arr_138 [i_27] = var_15;
            }
            arr_139 [i_8] [i_27] = var_7;
        }
        arr_140 [i_8] = var_0;
        arr_141 [i_8] = 52;
    }
    var_20 = (var_6 || var_15);
    #pragma endscop
}
