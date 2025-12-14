/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = var_1;
                        var_14 ^= ((((2361387674 / (arr_2 [i_3]))) * (var_7 + 125)));
                        var_15 *= ((2361387667 != (arr_8 [i_3 + 1] [i_3 + 1] [i_0] [i_0 + 2] [i_1 + 3] [i_1 + 3])));
                    }
                }
            }
            var_16 -= (arr_4 [1] [i_1 - 2]);
            var_17 += (((((var_6 ? (arr_1 [6]) : 1))) ? (arr_5 [i_0 + 1] [2] [4] [i_1 + 1]) : (arr_3 [i_0 + 1])));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_4] &= var_8;
            var_18 = (min(var_18, var_10));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_19 -= (~var_11);

            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_6] [i_0] = 8146;
                    arr_23 [i_0] [i_0] [i_6 - 4] [i_0] = (((arr_7 [i_6 + 1] [i_5 + 2] [i_0 + 2] [i_0]) << (-1887334121 + 1887334152)));
                    arr_24 [i_0] [i_6] [i_5] [i_7] [i_0] [i_7] = var_1;
                    var_20 = (min(var_20, ((((arr_2 [i_0 + 1]) + (arr_2 [i_0 - 1]))))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((arr_18 [i_0] [i_5 - 1]) % (arr_17 [i_6] [i_6] [i_5 - 1] [i_6]))))));
                    var_22 = (arr_25 [i_0 - 1] [i_6 - 1] [i_5 - 1] [i_8]);
                }
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    arr_30 [i_0] [i_6] [i_5 + 2] [i_0] [i_0] = ((var_8 ? 27393 : (arr_6 [i_0 + 1] [i_6 - 3] [i_6 - 3])));

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_23 = ((arr_5 [i_0] [i_0] [i_0] [i_9 - 2]) ? (arr_15 [i_9 + 2] [i_9 + 2]) : var_10);
                        arr_33 [i_6] &= var_7;
                    }
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        arr_37 [i_9] [i_0] [i_0] [i_0] [i_9] = (((arr_19 [i_5 + 2] [i_5 + 2] [10]) ? var_4 : var_10));
                        var_24 = var_0;
                    }
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        var_25 *= (arr_34 [i_6] [i_5] [4] [i_6] [i_5 + 1] [i_6] [i_6]);
                        arr_40 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((1 ? (arr_0 [i_5] [i_5]) : var_7)));
                    }
                }
                var_26 = (min(var_26, ((((arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1]) - var_2)))));
                var_27 = var_3;

                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    var_28 &= (1896233418 % 50724);
                    var_29 = var_6;

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_30 ^= (var_3 + var_8);
                        arr_49 [i_0 + 1] [i_0] [i_0] = (arr_48 [i_14] [i_13 + 3] [i_6 + 1] [i_0] [i_0 - 1]);
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_31 = (arr_17 [i_0] [i_5 - 1] [i_6 - 4] [i_13]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 ? var_0 : (arr_47 [i_0] [i_6] [i_0] [i_6 - 1] [i_13] [i_13 + 3] [i_0])));
                        var_32 = var_5;
                        var_33 = ((-563110802140851049 ? (arr_51 [i_0 + 1]) : (arr_51 [i_0 + 2])));
                    }
                    arr_53 [i_0 + 2] [i_0 + 2] [i_5] [i_0] [i_0 + 2] = var_4;
                }
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_34 = ((arr_26 [i_0 + 1] [i_5 + 2] [i_5 + 2] [i_5 + 2]) ? ((207 ? var_0 : -1896233419)) : -var_9);
                arr_57 [i_16] [i_5] &= var_5;
                var_35 &= var_4;
            }
        }
        for (int i_17 = 1; i_17 < 9;i_17 += 1) /* same iter space */
        {
            var_36 &= (((var_6 * var_1) ? (arr_26 [i_0] [i_17] [i_17 + 1] [i_17]) : 2092957599));
            arr_61 [i_0] = ((var_6 / 607557327) % 394486773);
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 8;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_37 = (arr_17 [i_0] [i_0] [i_18] [6]);
                            var_38 = var_0;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    {
                        var_39 = (207 * 1);
                        var_40 += ((var_10 ? (((arr_0 [i_0] [i_0]) + var_8)) : (arr_19 [i_0 - 1] [i_0 - 1] [i_17 + 2])));

                        for (int i_23 = 4; i_23 < 10;i_23 += 1)
                        {
                            arr_79 [i_23] [i_21] [i_21] [i_21] [i_21] [8] |= ((!(((var_9 ? 1896233419 : -13446)))));
                            var_41 = ((~(arr_27 [i_0 + 2] [i_17 + 1] [i_21] [i_23 - 2])));
                        }
                        for (int i_24 = 2; i_24 < 9;i_24 += 1)
                        {
                            var_42 = 63124;
                            var_43 = (arr_73 [i_17 + 2] [i_17 + 2] [i_17 - 1] [i_17]);
                            var_44 = (max(var_44, var_4));
                            var_45 = (min(var_45, var_5));
                        }
                        for (int i_25 = 2; i_25 < 9;i_25 += 1)
                        {
                            arr_85 [i_0] = var_4;
                            arr_86 [i_25] [i_0] [i_25] [i_25] [i_25] = (var_8 + -32475);
                        }
                    }
                }
            }
        }

        for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
        {
            arr_91 [2] [4] [i_26] &= (2092957599 % var_1);
            /* LoopNest 2 */
            for (int i_27 = 4; i_27 < 10;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    {
                        var_46 -= var_11;
                        var_47 = ((var_8 ? var_0 : var_7));

                        for (int i_29 = 1; i_29 < 8;i_29 += 1)
                        {
                            arr_99 [i_0] [i_0] [i_26] [i_28] [i_28] [i_28] [i_29] &= (4557 - var_7);
                            var_48 = (((-2092957600 % var_0) ? ((var_5 ? 32484 : (arr_46 [i_26] [i_26] [i_27] [i_28] [i_29] [i_27] [i_27]))) : var_3));
                        }
                    }
                }
            }
        }
        for (int i_30 = 0; i_30 < 1;i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 11;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 11;i_32 += 1)
                {
                    {
                        var_49 += ((607557327 ? 822251329 : -22296));
                        var_50 = ((var_3 ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : var_0));
                    }
                }
            }
            var_51 = ((!(arr_67 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1])));
        }
        for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
        {
            arr_111 [i_0] = var_6;
            /* LoopNest 2 */
            for (int i_34 = 0; i_34 < 1;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 11;i_35 += 1)
                {
                    {
                        arr_117 [i_35] [i_0] [i_34] [i_0] [i_0] = var_10;
                        var_52 = (arr_82 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                        var_53 ^= ((var_0 ? (7150928119039051997 * 1011264260) : var_10));
                    }
                }
            }
        }
        arr_118 [0] |= -1;
    }
    for (int i_36 = 0; i_36 < 0;i_36 += 1)
    {
        var_54 = (max(var_54, -1896233423));
        var_55 = var_0;
        var_56 = ((var_2 ? (min((arr_119 [i_36] [15]), 12763634983314059073)) : (((91 ? var_0 : 6891)))));
    }
    var_57 &= ((var_2 * (max(var_6, (var_3 % var_11)))));
    var_58 = var_6;
    #pragma endscop
}
