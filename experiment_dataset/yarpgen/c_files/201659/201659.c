/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 -= ((~(arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (var_12 || var_14);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 += var_14;
        var_18 = ((-(170 * var_8)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_5 + 2] [i_3 + 2]);
                                var_20 = var_3;
                                arr_19 [i_5] [i_5] [i_3] [i_5] = (((arr_0 [i_3 + 1]) ? var_15 : (arr_0 [i_6])));
                                var_21 = var_5;
                                var_22 = (((125 == 17) ? (arr_5 [i_3 - 1]) : -var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_23 = ((var_10 != ((~(arr_17 [i_7] [i_7] [i_4] [i_7])))));
                                var_24 = (min(var_24, (arr_11 [2])));
                            }
                        }
                    }
                    var_25 = (var_10 && 125);

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_27 [i_2] [i_3] [14] [i_9] = -246;

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_26 = arr_8 [i_4];
                            var_27 -= var_6;
                            var_28 = ((48 ? 103 : 131));
                            var_29 = ((var_14 ? (arr_21 [i_9]) : var_5));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_30 |= (((arr_18 [i_4] [i_4 - 1] [15] [i_3 + 3]) + var_15));
                            var_31 = (arr_8 [i_2]);
                            arr_35 [i_2] [i_2] [i_3] [3] [i_9] [i_9] [i_11] = (((arr_15 [i_3] [i_3 + 1] [i_3 - 1]) >= var_12));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 = ((var_13 ? (((arr_17 [i_4] [i_3] [i_4 + 1] [i_3]) ^ (arr_18 [i_2] [i_2] [i_2] [i_2]))) : var_6));
                            var_33 = (max(var_33, (arr_18 [i_4 - 1] [10] [i_4] [17])));
                        }
                        var_34 = var_15;
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_40 [i_2] [i_2] [19] [i_2] = ((+((((arr_28 [i_2] [i_3] [i_4 + 1] [i_13] [i_13]) >= var_15)))));
                        var_35 = ((((var_9 ? 125 : var_11)) * (var_2 / var_7)));
                        arr_41 [i_13] [11] [i_4] [i_2] [i_2] &= var_8;
                    }
                }
            }
        }
        arr_42 [i_2] = ((((!(arr_15 [i_2] [i_2] [8])))));
        var_36 = (var_5 | var_2);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 4; i_15 < 18;i_15 += 1)
            {
                {
                    arr_49 [i_14] [i_2] [i_14] [i_14] = arr_20 [i_2] [2] [i_15 - 2] [i_2];
                    var_37 = var_3;
                    var_38 = (var_10 | 130);
                }
            }
        }
        var_39 = var_9;
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {

        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            var_40 |= (((~var_14) ? (!80) : ((min(151, 120)))));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                arr_59 [i_18] [i_18] [i_18] [8] |= ((((var_5 == (arr_51 [i_17] [i_16]))) ? ((var_10 ? var_3 : var_0)) : (arr_38 [i_16] [i_16] [i_18] [1] [i_18])));

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_41 *= var_5;
                    var_42 = ((114 ? var_3 : (arr_16 [8] [i_17 + 1] [7] [i_17])));
                    var_43 = (((arr_12 [0] [i_17]) < -242));
                }
            }
            /* vectorizable */
            for (int i_20 = 2; i_20 < 13;i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        {
                            var_44 -= 120;
                            var_45 = (var_4 ^ var_3);
                        }
                    }
                }
                var_46 = ((-(arr_16 [i_20] [i_17] [i_17] [i_16])));
            }
            /* vectorizable */
            for (int i_23 = 2; i_23 < 13;i_23 += 1) /* same iter space */
            {
                arr_73 [i_16] [10] = ((var_2 ? ((-(arr_48 [i_16] [i_17] [i_16]))) : 242));
                arr_74 [i_16] = (((arr_3 [3] [i_17 - 1]) | (((arr_67 [i_16] [i_16] [i_16]) ? (arr_72 [i_23 + 1] [i_17] [i_17 - 1] [i_16]) : var_7))));
                var_47 = (((arr_12 [i_17 - 1] [i_23 + 1]) || (((var_3 ^ (arr_12 [1] [i_23 - 2]))))));
                var_48 *= (((((arr_23 [i_16] [i_17] [i_23] [18] [i_16]) ? var_6 : 39)) > var_13));
            }
        }
        var_49 ^= max(var_3, var_9);
    }
    var_50 = (var_12 || var_3);
    #pragma endscop
}
