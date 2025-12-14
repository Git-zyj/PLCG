/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((~(arr_0 [i_0 - 1]))) + 2147483647)) >> (51159 - 51136)));
        var_19 -= (((2079 && (((1 ? 33552384 : (arr_0 [i_0 + 1])))))));
        var_20 = ((~(min(var_2, (arr_3 [i_0])))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_2] [i_3] = (arr_8 [i_1]);
                    var_22 = (arr_8 [i_1]);
                    var_23 = (((-38 + 2147483647) << (((-84 + 94) - 10))));
                    arr_14 [i_1] [i_1] [i_1] [4] |= (!var_6);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_5] = -40220;
                                arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] [i_2] [i_1] = ((!(arr_12 [i_2])));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_1] [i_1] = ((((!(arr_19 [i_1] [1] [0] [i_1]))) ? ((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : var_5));

        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            var_24 = (~var_10);
            var_25 ^= (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            var_26 = (max(var_26, (((-(arr_17 [i_6 + 2] [i_6] [i_6] [i_6] [i_6]))))));
        }
        var_27 = (max(var_27, ((((arr_24 [12]) > 1)))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_28 = (max(255, (((((max(-25000, 0)))) ^ ((var_7 ? 112 : (arr_33 [i_9])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_29 = ((((arr_17 [i_7] [6] [i_7] [i_7] [i_7]) ? 0 : (arr_17 [i_7] [i_8] [i_9] [i_10] [i_11]))));
                                arr_40 [0] [i_8] [i_8] [i_10] [i_7] = (max((min((arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 - 4]), (arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 + 1]))), (((arr_34 [i_11 + 2] [i_11] [i_7] [i_11] [i_11 - 4]) ? (arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 - 2]) : var_16))));
                                var_30 = (((((-65 ? (arr_37 [i_11] [i_11 - 3] [1] [i_11 - 3] [i_11 + 2] [i_11] [i_11 - 1]) : (arr_37 [i_11] [i_11 + 2] [i_11] [i_11 - 2] [i_11] [i_11] [i_11 + 2])))) ? 7 : ((1 ? var_17 : -33552390))));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (i_7 % 2 == 0) ? (((~(((arr_24 [i_7]) + (arr_24 [i_7])))))) : (((~(((arr_24 [i_7]) - (arr_24 [i_7]))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] [i_12] = -33552403;
        var_32 = ((((-33552403 ? -33552386 : 151)) >= 0));
        var_33 = (arr_32 [i_12] [i_12]);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_34 = (((arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_17 [i_13] [i_13] [i_13] [18] [i_13]) : (arr_17 [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_35 = (arr_5 [i_13]);
        var_36 = 32767;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_50 [i_13] [i_13] [15] [i_13] = ((-((151 ? (arr_27 [i_13] [i_15]) : (arr_27 [i_13] [i_13])))));
                    arr_51 [i_15] [i_13] [i_15] [i_15] = (((arr_41 [i_14]) ? var_2 : var_5));
                    var_37 = (3042237845794132961 | -33552403);
                }
            }
        }
    }
    var_38 = var_11;
    var_39 ^= (min((var_15 + var_14), ((((((59 ? var_13 : 290921064))) ? ((((-32767 - 1) ? 84 : var_11))) : var_15)))));
    var_40 = var_11;
    #pragma endscop
}
