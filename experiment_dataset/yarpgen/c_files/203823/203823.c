/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_3;
    var_13 = ((497198284 << (3797769011 - 3797769002)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                var_15 = -3797769015;
                                var_16 = var_6;
                            }
                        }
                    }
                    var_17 = ((-((202 << (((arr_5 [i_0] [i_0]) - 16))))));
                    var_18 = (((((497198273 ? (arr_0 [i_2]) : 497198276))) ? (arr_5 [12] [12]) : (!-77)));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_19 = (~-13858);
                        var_20 = -974499974;
                    }
                }
            }
        }
        var_21 = ((~(86220824 | 36028797017915392)));
        var_22 = ((~var_2) ? var_8 : var_7);
        var_23 = (arr_14 [i_0] [i_0] [i_0] [i_0 + 3]);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            {
                var_24 -= (arr_21 [20] [22] [i_6]);
                var_25 = var_0;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_26 = 497198271;

                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                var_27 = ((+((51696 ? (arr_23 [i_7] [i_7] [i_7 + 1] [i_7 + 1]) : (arr_23 [i_7] [i_7 + 2] [i_7 - 1] [i_7 + 2])))));
                                var_28 ^= (((((~(arr_25 [0] [6] [14])))) ? var_3 : var_8));
                            }
                            var_29 = ((-27 ? (max(497198260, (arr_27 [i_6]))) : 3313191032));
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    var_30 = (arr_18 [i_7] [i_6]);
                    var_31 = ((497198271 ? (arr_31 [6] [i_7 + 2] [9] [0]) : var_10));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_32 = (max(var_32, (~1)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_33 = -1;
                                var_34 = ((~(arr_38 [i_6] [i_7 + 4] [i_6] [i_6] [i_14])));
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_35 |= (arr_28 [i_15] [i_7] [4] [i_7] [i_6] [4] [i_6]);
                    var_36 = 1;

                    /* vectorizable */
                    for (int i_16 = 4; i_16 < 22;i_16 += 1) /* same iter space */
                    {
                        var_37 = var_7;
                        var_38 = (arr_42 [i_7 + 4] [i_7 - 1] [i_16 - 4] [i_16 - 3]);
                        var_39 = 6104175969230143989;
                    }
                    for (int i_17 = 4; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        var_40 = (max(var_6, (((104 % 169) ? ((var_7 ? 10279068168926725892 : var_4)) : (-2147483647 - 1)))));
                        var_41 = ((~(~var_1)));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_42 = (max((((arr_39 [i_6] [i_6] [i_6] [i_6]) ? (arr_39 [i_6] [13] [15] [i_6]) : (arr_39 [i_6] [1] [i_19] [i_6]))), (arr_16 [i_19 - 1])));
                                var_43 = ((((((arr_49 [i_6] [7] [i_19 - 1] [i_18] [i_19 + 2]) + 2147483647)) << (614586723 - 614586723))));
                                var_44 = (max(-974499974, ((max(var_1, ((!(arr_26 [i_6] [15] [i_7] [i_7] [i_7] [i_7]))))))));
                                var_45 = 497198262;
                            }
                        }
                    }
                }
                var_46 = (max((((var_4 / -90) ? ((var_4 ? (arr_27 [i_6]) : 81)) : -974499974)), ((-((61 ? var_2 : 51710))))));
            }
        }
    }
    var_47 = var_3;
    #pragma endscop
}
