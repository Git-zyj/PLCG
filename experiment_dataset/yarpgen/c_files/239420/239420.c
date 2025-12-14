/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_12;
        var_15 = var_7;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_2] = var_12;
                        arr_15 [i_4] [i_2] [i_2] [i_1] = var_13;
                        var_16 = var_9;
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            arr_18 [i_1] [i_1] = var_0;

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_25 [i_1] [i_5 + 1] [i_6] [i_7] = var_10;
                    var_17 = var_9;
                    arr_26 [1] [i_6] [i_5 - 1] [i_5] [i_1] = var_9;
                    var_18 = (min(var_18, var_4));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_29 [i_1] = var_9;
                    arr_30 [i_1] [i_1] [i_1] [i_1] = var_2;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_19 = var_13;
                    var_20 = var_11;
                }

                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_21 = var_3;
                    var_22 = var_1;
                    var_23 |= var_5;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_43 [i_1] [i_12] [i_5 - 1] [i_1] [i_5 - 1] = var_10;
                        var_24 = var_13;
                        var_25 = var_7;
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        var_26 = (max(var_26, var_10));
                        arr_48 [9] [i_5] [i_1] |= var_5;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        arr_51 [i_1] [22] [i_6] [i_14] [i_5] [i_11] [i_1] = var_8;
                        arr_52 [4] [i_5] [4] [i_5] [i_14] [i_14] [17] = var_6;
                        arr_53 [i_14] [i_11] [i_14] [i_11] [i_14] [i_11] = var_3;
                        arr_54 [i_14] [i_1] [i_6] [i_1] [i_1] &= var_0;
                    }
                    var_27 = var_2;
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    {
                        var_28 = (max(var_28, var_1));
                        var_29 = var_3;
                        arr_59 [i_1] [i_1] [i_15] [i_15] [i_16 - 1] = var_6;
                        arr_60 [8] [8] [i_15] [i_15] [i_15] [i_15] = var_1;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    {
                        arr_69 [i_1] [i_1] [i_1] [i_1] [i_1] = var_7;
                        var_30 ^= var_11;
                        var_31 ^= var_13;
                        var_32 -= var_0;
                    }
                }
            }
        }
        arr_70 [i_1] = var_11;
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
    {
        var_33 = var_7;

        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                var_34 = var_9;
                arr_80 [i_19] [i_20] [i_21] |= var_3;
            }
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_35 -= var_7;

                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        arr_89 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = var_12;
                        var_36 = var_6;
                        var_37 = var_9;
                    }
                    for (int i_25 = 2; i_25 < 22;i_25 += 1)
                    {
                        var_38 = var_1;
                        arr_92 [18] [i_23] [i_22] [i_20] [i_19] = var_4;
                    }
                }
                arr_93 [i_19] [i_19] = var_7;
                var_39 = var_7;
                var_40 = (min(var_40, var_7));
                arr_94 [i_19] = var_8;
            }
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                arr_97 [2] [i_19] [i_19] [2] = var_1;
                arr_98 [i_19] = var_6;
            }
            var_41 = (min(var_41, var_11));
            arr_99 [i_19] [i_19] [i_20] = var_10;
        }
        for (int i_27 = 4; i_27 < 19;i_27 += 1)
        {
            arr_102 [i_19] [i_19] [i_19] = var_4;
            var_42 += var_5;
            var_43 = var_7;
            var_44 = var_2;
        }
    }
    var_45 = var_4;

    for (int i_28 = 2; i_28 < 22;i_28 += 1)
    {
        var_46 = (min(var_46, var_5));
        var_47 += var_6;
        arr_105 [i_28] = var_7;
    }
    for (int i_29 = 0; i_29 < 14;i_29 += 1)
    {
        var_48 -= var_2;

        for (int i_30 = 0; i_30 < 14;i_30 += 1)
        {

            for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
            {
                var_49 = (min(var_49, var_8));
                arr_116 [i_30] [i_31] = var_13;
                var_50 *= var_1;
                arr_117 [i_29] [i_31] [i_29] = var_11;
            }
            for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
            {
                var_51 = var_5;
                /* LoopNest 2 */
                for (int i_33 = 1; i_33 < 11;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 14;i_34 += 1)
                    {
                        {
                            var_52 = var_5;
                            arr_127 [4] [i_30] [i_32] = var_1;
                            var_53 = (max(var_53, var_6));
                            arr_128 [i_29] [i_32] [i_34] = var_7;
                        }
                    }
                }
            }
            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                var_54 = var_4;

                for (int i_36 = 0; i_36 < 14;i_36 += 1)
                {
                    var_55 = var_11;
                    var_56 = var_10;
                    arr_135 [i_29] [3] [i_30] [i_35] [i_35] [i_36] = var_6;
                }
                for (int i_37 = 3; i_37 < 13;i_37 += 1)
                {
                    arr_138 [i_29] [i_30] [12] [i_37] = var_12;

                    for (int i_38 = 0; i_38 < 14;i_38 += 1)
                    {
                        arr_141 [i_37 - 1] [i_37] [i_37] [i_37] [i_37] = var_10;
                        arr_142 [i_37] = var_3;
                        var_57 -= var_6;
                        var_58 = var_11;
                    }
                    for (int i_39 = 0; i_39 < 14;i_39 += 1)
                    {
                        var_59 = var_9;
                        var_60 = var_11;
                        var_61 *= var_6;
                    }
                    var_62 = var_0;
                }
                for (int i_40 = 0; i_40 < 14;i_40 += 1)
                {
                    var_63 = var_9;
                    arr_149 [i_29] [i_29] = var_11;
                    var_64 -= var_8;
                    var_65 = var_5;
                }
                var_66 = var_7;
                arr_150 [i_29] [i_29] = var_8;
                arr_151 [i_29] [i_29] [i_29] [i_29] = var_11;
            }
            arr_152 [i_29] [i_29] [i_29] = var_13;
            var_67 = (min(var_67, var_0));
            arr_153 [i_29] [i_29] [7] = var_1;
            arr_154 [i_29] [i_30] |= var_3;
        }
    }
    /* LoopNest 2 */
    for (int i_41 = 2; i_41 < 21;i_41 += 1)
    {
        for (int i_42 = 0; i_42 < 24;i_42 += 1)
        {
            {
                arr_159 [i_41 + 2] [i_41] [i_41] = var_0;
                /* LoopNest 2 */
                for (int i_43 = 1; i_43 < 20;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 24;i_44 += 1)
                    {
                        {
                            var_68 = (min(var_68, var_13));
                            var_69 -= var_3;
                        }
                    }
                }

                for (int i_45 = 0; i_45 < 24;i_45 += 1)
                {
                    arr_167 [i_41] = var_8;
                    arr_168 [i_41 + 3] [i_42] [i_41 + 3] = var_12;
                    var_70 -= var_10;
                }
            }
        }
    }
    #pragma endscop
}
