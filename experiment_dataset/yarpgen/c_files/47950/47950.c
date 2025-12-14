/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_16;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                arr_18 [i_2] [i_3 + 1] [i_0] = var_13;
                                var_18 = var_0;
                                arr_19 [i_0] [i_1] [i_1] [6] [i_3 + 1] [i_3] [i_4] = var_13;
                            }
                        }
                    }
                }
                var_19 = var_5;
            }
        }
    }
    var_20 *= var_14;

    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_21 = var_11;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [i_6] [16] = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [i_6] [i_6] [i_5] = var_16;
                                arr_36 [i_6] [i_6] = var_12;
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        arr_41 [9] [i_6] [i_7] [i_6] = var_6;

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            var_22 = (max(var_22, var_2));
                            var_23 = var_2;
                            arr_44 [i_5 + 2] [i_7] [i_7] [i_10] [i_11] &= var_12;
                            arr_45 [i_5] [i_6] [i_6] [i_10] [i_6] [i_5] = var_14;
                            var_24 = var_10;
                        }
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            arr_49 [i_6] [i_6] [i_6] = var_5;
                            arr_50 [i_12] [i_6] [1] [i_6] [i_6] [i_5 - 1] = var_8;
                        }
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_25 = var_6;
                        var_26 = (max(var_26, var_0));
                        arr_55 [i_6] [i_6] = var_7;
                        arr_56 [i_6] [i_6] [i_7] [i_13] = var_15;
                        var_27 = var_3;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        arr_59 [i_14] [11] [i_6] [i_5 + 1] [i_5] = var_12;

                        for (int i_15 = 3; i_15 < 20;i_15 += 1)
                        {
                            var_28 = (min(var_28, var_10));
                            var_29 &= var_1;
                            arr_62 [i_15] [i_15 + 3] [i_6] [i_6] [i_6] [i_5] [16] = var_12;
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            arr_66 [6] [11] [11] [i_7] [i_6] [i_14] [i_16] = var_5;
                            var_30 = var_13;
                            var_31 = var_5;
                        }
                        var_32 = var_5;
                    }
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_33 = (max(var_33, var_10));

        for (int i_18 = 2; i_18 < 22;i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        {
                            var_34 = (min(var_34, var_0));
                            var_35 = var_16;
                            arr_80 [i_18] = var_0;
                        }
                    }
                }
            }

            for (int i_22 = 2; i_22 < 22;i_22 += 1)
            {
                var_36 = var_10;
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 20;i_24 += 1)
                    {
                        {
                            arr_90 [i_24] [i_23] [i_18] [i_18] [i_18] [0] = var_2;
                            arr_91 [i_17] [i_17] [i_18] [i_22] [i_18] [i_24] = var_5;
                            arr_92 [i_17] [i_17] [i_22] [i_23] [i_18] = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 1;i_25 += 1)
                {
                    for (int i_26 = 4; i_26 < 21;i_26 += 1)
                    {
                        {
                            arr_98 [i_26 + 1] [i_18] [i_26] [i_26] [i_26] [i_26] [i_26] &= var_2;
                            var_37 *= var_3;
                            arr_99 [i_18] [i_18 - 2] [i_22 - 1] [i_25] [i_25] [i_26 + 1] = var_11;
                            var_38 = (max(var_38, var_9));
                            var_39 -= var_16;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 21;i_27 += 1)
            {
                for (int i_28 = 1; i_28 < 20;i_28 += 1)
                {
                    {
                        var_40 = var_8;
                        var_41 = (min(var_41, var_7));
                    }
                }
            }

            /* vectorizable */
            for (int i_29 = 0; i_29 < 23;i_29 += 1)
            {
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 23;i_30 += 1)
                {
                    for (int i_31 = 2; i_31 < 20;i_31 += 1)
                    {
                        {
                            arr_111 [i_17 + 2] [i_17 + 2] [i_17] [i_18] [i_17] = var_13;
                            arr_112 [i_30] [i_18] [i_18] [i_17] = var_5;
                        }
                    }
                }
                arr_113 [i_17] [i_18] [i_18] = var_4;
                arr_114 [i_18] [i_29] = var_10;
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 0;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        {
                            var_42 = (min(var_42, var_13));
                            arr_121 [i_32 + 1] [i_18] [i_29] [i_32] = var_6;
                            arr_122 [i_17] [i_18] [i_29] [i_18] [i_17] [1] = var_4;
                        }
                    }
                }
            }
        }
        for (int i_34 = 2; i_34 < 22;i_34 += 1) /* same iter space */
        {
            var_43 = var_5;
            var_44 = var_8;
        }
    }

    for (int i_35 = 2; i_35 < 12;i_35 += 1)
    {
        var_45 = var_16;
        var_46 = (max(var_46, var_1));
    }
    for (int i_36 = 0; i_36 < 17;i_36 += 1)
    {
        arr_130 [i_36] = var_11;
        /* LoopNest 3 */
        for (int i_37 = 0; i_37 < 17;i_37 += 1)
        {
            for (int i_38 = 3; i_38 < 16;i_38 += 1)
            {
                for (int i_39 = 1; i_39 < 14;i_39 += 1)
                {
                    {

                        for (int i_40 = 3; i_40 < 15;i_40 += 1)
                        {
                            var_47 = var_6;
                            var_48 &= var_10;
                            arr_142 [i_36] [i_37] [i_38] [i_39] [i_40 + 2] = var_13;
                            var_49 = var_9;
                        }
                        for (int i_41 = 2; i_41 < 14;i_41 += 1)
                        {
                            var_50 = (min(var_50, var_6));
                            var_51 = var_15;
                        }
                        var_52 = var_6;

                        for (int i_42 = 1; i_42 < 16;i_42 += 1)
                        {
                            arr_149 [i_37] [i_37] = var_11;
                            var_53 = var_4;
                        }
                        var_54 = var_15;
                    }
                }
            }
        }
        var_55 = var_3;
    }
    /* LoopNest 2 */
    for (int i_43 = 1; i_43 < 23;i_43 += 1)
    {
        for (int i_44 = 2; i_44 < 23;i_44 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_45 = 2; i_45 < 22;i_45 += 1)
                {
                    for (int i_46 = 0; i_46 < 25;i_46 += 1)
                    {
                        {
                            var_56 = (min(var_56, var_6));
                            arr_159 [i_43 - 1] [i_44] [i_45] [5] = var_0;
                        }
                    }
                }
                var_57 = var_6;
            }
        }
    }
    #pragma endscop
}
