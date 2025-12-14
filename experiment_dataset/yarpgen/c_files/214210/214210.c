/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~var_11) + ((~(max(0, 0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = -25;
                    var_16 = var_14;
                }
            }
        }
    }
    var_17 = var_3;
    var_18 = ((var_8 ? var_4 : (~var_11)));

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = (min((575897802350002176 / 4611686018427387904), -14));
                    arr_19 [i_3] [i_3] [i_5] = min(((1 ? (arr_15 [i_5] [i_3] [i_3] [i_3]) : (arr_2 [i_3]))), (((arr_15 [i_3] [i_3] [i_4] [i_5]) ? (-32767 - 1) : (arr_15 [i_3] [i_3] [i_4] [i_5]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = (((-22954 + 2147483647) >> ((((((min(var_11, (arr_13 [i_3] [i_7])))) ? var_3 : (arr_9 [i_3] [i_3]))) - 7786719262350016577))));
                                var_20 = 734433406;
                                var_21 *= (min((max((arr_10 [i_5]), (arr_10 [i_4]))), (min(31, (arr_11 [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_3] [i_3] = ((~(min(var_14, 2475018691))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    var_22 = (arr_31 [i_9 - 1] [i_9] [i_9]);
                    arr_33 [i_3] [i_8] [i_8] = arr_15 [i_3] [i_3] [i_9] [i_9];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_44 [i_12] [i_11] [i_11] [i_10] = (arr_4 [i_11 + 2] [i_10 + 2] [i_10]);

                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_23 = (arr_1 [i_13]);
                        var_24 = 9223372036854775807;
                        var_25 |= ((30071 ? (!231) : (arr_4 [i_13 - 1] [i_13 + 2] [i_13 + 2])));
                        var_26 = (((arr_46 [i_10 - 2] [i_12]) & (arr_46 [i_10 - 3] [i_13 + 2])));
                    }
                    for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_27 = (((arr_0 [i_10 - 1]) < 50831));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_28 ^= (arr_46 [i_10] [i_11]);
                            arr_51 [i_12] [2] |= (244 / 24086);
                            var_29 = ((arr_36 [i_10 + 2] [i_11 + 1]) ? (((arr_41 [i_10] [i_11 + 2] [i_15]) ? -4445051439974801255 : (arr_1 [i_10]))) : (arr_39 [i_15] [i_10] [i_10]));
                            arr_52 [i_10 + 2] [i_14] = ((~(arr_43 [i_15] [i_11 - 1] [i_10])));
                            var_30 = (max(var_30, -16963));
                        }
                    }
                    for (int i_16 = 1; i_16 < 12;i_16 += 1) /* same iter space */
                    {
                        var_31 = (arr_41 [i_12] [i_10 + 2] [i_10 + 2]);
                        arr_56 [i_10] [i_11] [i_12] [i_11] = (((arr_39 [i_10 - 3] [i_11 - 1] [i_11 - 1]) / (arr_2 [2])));
                        var_32 = var_13;
                    }
                    for (int i_17 = 1; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, ((((arr_36 [i_10 - 2] [i_17 + 1]) ? (arr_46 [i_17 - 1] [i_11 - 1]) : -22954)))));
                        var_34 = 1048064;
                    }
                    var_35 = (arr_1 [i_10 + 1]);
                }
            }
        }
        var_36 = (min(var_36, (((14690 ? (arr_6 [i_10] [i_10 + 2] [i_10 - 3] [i_10 - 3]) : 19152)))));
        arr_59 [i_10] = var_2;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 12;i_19 += 1)
            {
                {
                    var_37 = ((~var_0) | (arr_38 [i_10 + 1]));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 0;i_21 += 1)
                        {
                            {
                                var_38 -= (arr_37 [i_10 - 1] [i_19 + 3]);
                                var_39 = (((arr_61 [i_18] [i_19] [i_18]) | var_8));
                                var_40 = (((arr_57 [i_10] [i_10] [i_19] [i_20] [i_10]) ? (arr_57 [i_10 - 3] [i_18] [i_19] [i_20] [i_21 + 1]) : (arr_57 [i_10 + 2] [i_18] [i_18] [i_20] [i_21])));
                                arr_71 [i_10] [i_18] [i_18] [i_18] [i_21] = ((var_0 ? ((1262159208720782889 ? 8180452150949385131 : var_1)) : 1308499155));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_22 = 3; i_22 < 13;i_22 += 1) /* same iter space */
    {
        var_41 = (min(-1536323159, 16955));
        var_42 |= ((((max(((max(14705, (arr_63 [i_22] [i_22 + 1] [i_22] [i_22 + 1])))), (arr_53 [i_22] [i_22] [i_22 - 2])))) ? (~9945) : (((((max((arr_57 [i_22] [i_22] [i_22] [i_22 - 2] [i_22 - 3]), 21191)))) ^ (max(2520966332092016809, 0))))));

        /* vectorizable */
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                arr_79 [i_22] [i_22] [i_23] [i_24] = 99;
                var_43 = (min(var_43, (arr_1 [i_22 - 3])));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_44 = (arr_39 [i_26] [i_22] [i_22]);
                            var_45 = (arr_77 [i_22 - 1] [i_22 - 1] [i_22] [i_24]);
                            var_46 = (~((65 ? 48581 : var_13)));
                            var_47 = var_13;
                        }
                    }
                }
            }
            var_48 = (max(var_48, var_11));
            arr_85 [i_22] [i_22 + 1] [i_22] &= ((-(arr_43 [i_22 - 2] [i_22 - 2] [i_22 - 3])));
            var_49 = (max(var_49, -1852484851));
        }
        var_50 = (max(var_50, ((((max((arr_58 [i_22 - 1] [i_22 - 1]), (arr_82 [i_22] [i_22 + 2] [i_22] [i_22 - 1])))) ? var_4 : (arr_72 [i_22])))));
    }
    #pragma endscop
}
