/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_17 |= (((-(((!(arr_3 [i_0] [i_0] [i_0])))))));
                            var_18 = ((((((arr_0 [i_3]) ? (((var_4 + (arr_8 [i_0] [i_1] [i_2] [i_0])))) : (arr_6 [i_2] [i_2] [i_2])))) ? (max((2147483647 / var_10), 106)) : (max((~111), var_9))));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_19 = ((((arr_6 [i_0] [3] [i_0]) ? var_3 : (arr_6 [i_0] [i_1] [i_5]))));
                var_20 = ((-((-107 ? (((min(53391, (arr_5 [i_0] [i_1] [i_5]))))) : (max(var_11, 4294967295))))));
                var_21 = (((arr_2 [i_5] [i_0]) ? (arr_2 [i_0] [i_0]) : (((((arr_5 [i_0] [1] [18]) + 2147483647)) >> (12144 - 12123)))));
                var_22 = (min(var_22, ((((arr_0 [i_5]) * (((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((~12144) ? 9 : (((((min((-127 - 1), var_9)))) ^ (~var_3))))))));
                            var_24 = ((-(max(var_4, -65313))));
                            var_25 = var_0;
                            var_26 = min((((arr_2 [i_0] [i_0]) ? 1 : -1123065614)), (arr_22 [i_0] [19] [i_1] [i_6] [i_7] [i_8]));
                            var_27 = arr_17 [19] [i_1];
                        }
                    }
                }
                var_28 = max((((((arr_7 [6] [17] [17]) ? var_16 : (arr_3 [i_6] [i_6] [i_6]))))), (min((max(52, var_4)), -126)));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 &= 2199023255520;
            var_30 = ((~(min(-6236725861617194975, 1))));
            var_31 = (max(var_31, (((max((arr_8 [i_9] [i_9] [i_9] [i_0]), var_0)) != -6236725861617194965))));
            var_32 = ((((!((!(arr_7 [i_0] [i_0] [i_0]))))) ? (arr_21 [i_9]) : ((max(var_2, var_15)))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            var_33 = ((14 ? var_5 : 53381));
            var_34 = (((arr_19 [11] [i_10 + 3] [i_10 + 3] [i_10] [i_10 + 2]) < var_5));
        }
        var_35 = (((-(arr_6 [i_0] [i_0] [i_0]))));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_36 = ((arr_12 [i_11] [i_0] [i_0] [i_0]) >= (arr_11 [i_0] [i_0] [i_0]));
            var_37 = (arr_8 [i_11] [i_11] [i_0] [i_0]);
            var_38 = (arr_15 [i_0] [i_0] [i_11] [i_0]);
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_39 += (((~3684334149656506437) == ((max(var_4, 32739)))));
            var_40 = (min(var_40, (((max((arr_28 [i_12]), ((min((arr_27 [i_0] [i_12]), 53398)))))))));
            var_41 = (2724118662 * 18446744073709551615);
            var_42 = (arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
            var_43 = (arr_32 [i_0]);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 20;i_15 += 1)
                {
                    {
                        var_44 = (var_0 & var_15);
                        var_45 |= var_2;
                        var_46 = (-7094406339513327404 & var_11);
                        var_47 = var_16;
                    }
                }
            }
            var_48 = ((0 ? (arr_28 [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_49 = (max(var_49, ((((arr_33 [i_0] [i_13] [i_13]) + var_2)))));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        var_50 = 134512180;
        var_51 = var_8;
        var_52 = ((~(~-1)));
    }
    for (int i_17 = 3; i_17 < 19;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            var_53 = ((min((arr_37 [i_17] [i_17]), (~var_0))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    {
                        var_54 += (((max(((1 ? 53388 : var_10)), -1))) ? (((((arr_35 [i_17] [i_18]) != var_13)))) : ((((-(arr_38 [i_19]))) / ((max(var_4, (arr_22 [i_17] [i_18] [i_19] [i_19] [i_18] [i_17])))))));
                        var_55 = (min((arr_52 [1] [i_18] [i_17 + 2] [i_17]), var_9));
                        var_56 = (((arr_17 [i_17] [i_17]) & ((-1 ? (max(1, 18446741874686296126)) : (162150406 * var_2)))));
                    }
                }
            }
        }
        var_57 = ((53398 ? 7094406339513327400 : (((2199023255489 ? ((var_11 ^ (arr_36 [i_17]))) : 122)))));
        var_58 = (max((((var_4 == (arr_25 [i_17] [i_17])))), (arr_37 [i_17] [i_17 - 3])));
    }
    /* vectorizable */
    for (int i_21 = 3; i_21 < 24;i_21 += 1)
    {
        var_59 = (((arr_56 [i_21 - 2]) >= var_8));
        var_60 = (max(var_60, (((((((arr_57 [i_21 - 3] [i_21 + 1]) & -310973693))) ? 144115188075855871 : (arr_56 [i_21 + 1]))))));
    }
    var_61 = ((var_15 ? ((((var_12 ? var_1 : 1)))) : 65529));
    #pragma endscop
}
