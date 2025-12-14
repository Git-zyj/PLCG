/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = -15134;
        arr_3 [i_0 - 2] = 214;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = var_2;
                        var_15 = var_8;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = (min(var_16, var_0));
                        arr_24 [i_1] [i_5] [i_5] = -10061;
                        arr_25 [i_1] [i_5] [i_6] [1] = (arr_8 [i_1] [i_6]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    {
                        var_17 |= var_10;
                        arr_33 [i_1] [i_1] [i_8] [i_1] [i_1] [i_1] = (arr_19 [i_9 + 1] [0] [i_10 + 1] [i_10]);
                        arr_34 [i_1] [i_1] [i_8] [i_1] = var_10;

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_37 [i_1] [i_8] [i_9] [i_10] [2] = (arr_9 [i_11] [i_11] [i_10 + 1]);
                            var_18 = (max(var_18, var_3));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_40 [0] [i_8 + 1] [i_9] [i_10 + 1] [i_12] &= 9644;
                            arr_41 [i_1] [i_1] [i_8] [i_9] [i_10 + 1] [2] [i_8] = (arr_35 [i_8] [i_10 + 1] [i_8] [i_10] [i_10 + 1] [i_10 + 1] [i_10]);
                            arr_42 [i_8] [i_10] = 140764180;
                            arr_43 [i_1] [i_1] [i_1] [9] [i_8] = var_8;
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_46 [i_13] = 993627720;
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    {
                        arr_56 [i_13] [i_16] [14] [i_16] &= var_5;
                        arr_57 [1] [2] [i_16] |= var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                {
                    arr_63 [i_18] = (arr_50 [2] [i_13] [i_17] [i_17]);
                    arr_64 [i_13] [12] [i_18] [i_18] = (arr_49 [i_18] [i_17] [0]);
                    var_19 = 3567434815;
                    var_20 = (arr_45 [i_13]);
                    arr_65 [i_13] [i_13] [i_18] = 3567434844;
                }
            }
        }
        var_21 = (max(var_21, 3567434815));
    }
    for (int i_19 = 0; i_19 < 22;i_19 += 1)
    {
        var_22 = var_2;
        arr_70 [i_19] = (arr_67 [i_19] [i_19]);
        arr_71 [i_19] = (arr_68 [i_19] [i_19]);
    }
    /* LoopNest 2 */
    for (int i_20 = 3; i_20 < 12;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            {
                var_23 += (arr_55 [i_20 + 1] [12] [i_20] [i_20 + 1]);

                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 11;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 12;i_24 += 1)
                        {
                            {
                                var_24 += (arr_83 [i_20] [i_21] [i_22 - 1] [i_20] [i_24] [i_22] [i_24 - 1]);
                                arr_84 [i_20] [i_21] [12] [i_23] [i_24] = (arr_45 [i_22 - 1]);
                            }
                        }
                    }
                    var_25 += 0;
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 13;i_26 += 1)
                        {
                            {
                                var_26 *= 0;
                                arr_90 [i_20] [i_20] [i_21] [i_20] [1] [i_26] = var_8;
                                arr_91 [i_20] [i_25] [i_22] [i_21] [i_20] = (arr_81 [i_20 - 1] [i_20]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_27 = 1; i_27 < 10;i_27 += 1)
                {
                    arr_95 [i_27] [i_20] = var_2;
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 13;i_29 += 1)
                        {
                            {
                                var_27 = (arr_97 [i_27 + 2] [i_27 + 2] [i_20 + 1] [i_20 - 3]);
                                arr_101 [i_20 - 3] [i_20] [i_20 - 1] [2] [i_20] = (arr_61 [i_27] [i_20] [i_27]);
                                var_28 = 4294967295;
                            }
                        }
                    }
                }
                for (int i_30 = 0; i_30 < 13;i_30 += 1)
                {
                    arr_104 [i_20] [i_21] [i_21] = -31864;
                    /* LoopNest 2 */
                    for (int i_31 = 1; i_31 < 11;i_31 += 1)
                    {
                        for (int i_32 = 3; i_32 < 11;i_32 += 1)
                        {
                            {
                                var_29 += 26622;
                                var_30 = (min(var_30, (-2147483647 - 1)));
                                var_31 = 26622;
                            }
                        }
                    }
                    var_32 = (arr_49 [i_20 + 1] [i_20 - 3] [i_20]);
                    arr_111 [i_20] [i_20] [i_20 - 3] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
