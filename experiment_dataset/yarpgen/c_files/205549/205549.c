/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, 87));
                    var_11 = 3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = 1852;
                                arr_14 [i_0] = 37;
                                var_13 = -60;
                                var_14 = 255;
                            }
                        }
                    }
                }
            }
        }
        arr_15 [1] |= 39;

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 8;i_6 += 1) /* same iter space */
            {
                var_15 *= 3581493500;
                var_16 |= -3458368388263133680;
                arr_23 [i_6] &= 0;
                var_17 *= -2011052903;
            }
            for (int i_7 = 4; i_7 < 8;i_7 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_5] [i_7] [i_0] = 536608768;
                var_18 = 19795;
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_19 = 266707932;
                            var_20 -= -1064504308;
                        }
                    }
                }
            }
            var_21 = (min(var_21, 508627888));
            var_22 = (min(var_22, 1689109720));
        }
        var_23 = (max(var_23, -1442317913));

        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            arr_36 [2] [3] [i_0] = -121;
            arr_37 [3] [i_0] [3] = 1153340764;
            arr_38 [i_0] = 13;
            var_24 = (max(var_24, 4028259363));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        arr_44 [i_0] [i_10 - 1] [i_0] [i_11] [i_12] = 1;
                        var_25 = 8066;
                        var_26 = 760990148;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_27 = -672;
            var_28 = 16;
            arr_49 [i_0] = 20;
        }
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] [i_14] = -99;

        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_29 -= 20;
            var_30 = (min(var_30, 224));
            arr_55 [8] [i_15] [8] = (-2147483647 - 1);
        }
        for (int i_16 = 2; i_16 < 14;i_16 += 1)
        {
            var_31 = 1793047934;
            var_32 = -32763;
            arr_59 [i_14] |= 0;
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            var_33 = -22766;

            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_34 |= 93;
                var_35 = 109;

                /* vectorizable */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_36 = 0;
                    var_37 = 0;
                }
                var_38 = 3968620874;
            }
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            arr_69 [i_14] = 2147483642;
            var_39 = 23220;

            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                var_40 = 609902488;
                arr_72 [i_21] [10] [i_21] = 0;
                arr_73 [i_14] [i_21] = 17;
                var_41 = 31665730;
            }
            for (int i_22 = 1; i_22 < 14;i_22 += 1) /* same iter space */
            {
                var_42 = -92;
                arr_77 [i_22] [i_20] [i_14] |= -1177678259;
                arr_78 [i_14] [8] = -115;
            }
            for (int i_23 = 1; i_23 < 14;i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 12;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 15;i_25 += 1)
                    {
                        {
                            arr_87 [i_14] [i_23] = 4294967295;
                            var_43 |= -122;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 2; i_26 < 13;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        {
                            var_44 = 213;
                            arr_94 [0] [i_20] [i_23] [i_20] [9] = 1;
                        }
                    }
                }
            }
        }

        for (int i_28 = 0; i_28 < 15;i_28 += 1)
        {
            var_45 += 255;

            for (int i_29 = 1; i_29 < 14;i_29 += 1) /* same iter space */
            {
                var_46 = 32;
                var_47 = 1;
            }
            for (int i_30 = 1; i_30 < 14;i_30 += 1) /* same iter space */
            {
                var_48 = 0;
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 15;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        {
                            var_49 = (max(var_49, 2147483647));
                            var_50 = 4028259363;
                            var_51 = -1496;
                        }
                    }
                }
                var_52 = 126;
            }
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 15;i_33 += 1)
            {
                for (int i_34 = 0; i_34 < 15;i_34 += 1)
                {
                    {
                        arr_111 [i_14] [i_33] [i_33] [i_34] = 133;
                        var_53 = 1636248613108585141;
                        var_54 = (-2147483647 - 1);
                    }
                }
            }
        }
        for (int i_35 = 2; i_35 < 14;i_35 += 1)
        {
            var_55 = (-32767 - 1);
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 15;i_36 += 1)
            {
                for (int i_37 = 1; i_37 < 11;i_37 += 1)
                {
                    {
                        arr_119 [i_14] [i_35] [i_36] = 251;
                        var_56 = -15423;
                        var_57 = 1;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_38 = 0; i_38 < 15;i_38 += 1)
            {
                for (int i_39 = 0; i_39 < 15;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 15;i_40 += 1)
                    {
                        {
                            var_58 = 11;
                            var_59 &= -9984;
                        }
                    }
                }
            }
            var_60 = 2147483647;
            arr_129 [i_14] [i_35] = 407292813;
        }
    }
    for (int i_41 = 0; i_41 < 15;i_41 += 1) /* same iter space */
    {
        arr_133 [i_41] = 326346421;
        var_61 = 1;
        var_62 = 17;
    }
    for (int i_42 = 0; i_42 < 15;i_42 += 1) /* same iter space */
    {
        var_63 = -3;
        var_64 = 17;
        var_65 = (min(var_65, 5));
        var_66 = 1073741568;
        var_67 ^= -1381598508865639031;
    }
    var_68 = var_9;
    var_69 = var_6;
    #pragma endscop
}
