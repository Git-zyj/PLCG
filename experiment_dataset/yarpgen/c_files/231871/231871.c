/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 | -23);
    var_15 = (var_2 / var_0);

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (+(((arr_2 [i_0 - 2] [i_0 + 1]) ? var_7 : var_8)));
            arr_4 [i_0] = 19;
        }
        var_17 = var_12;
        arr_5 [i_0 + 1] = ((((min(var_12, (arr_1 [i_0 + 1])))) ? ((var_2 ? var_4 : (arr_1 [i_0 - 1]))) : ((var_4 & (arr_1 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_18 *= ((-((var_8 ? var_5 : 33))));
                        var_19 = var_11;
                        var_20 = ((var_13 ? 2741493928 : (arr_12 [i_2] [i_2] [i_5])));
                    }
                }
            }
        }
        arr_17 [i_2] [i_2] = var_5;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_21 = ((var_9 - (((251 ? (arr_19 [i_6]) : ((max(2261, 65520))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_26 [7] [7] [1] [i_8] = ((((arr_18 [i_7]) ? (arr_20 [i_8 - 1] [i_8 + 2]) : (arr_24 [22] [22] [i_8 + 2] [i_8] [i_8 + 2] [i_9]))));
                        var_22 = ((17 & (((-(min(1, (arr_25 [i_8] [i_8 - 1] [i_7] [i_6] [i_8]))))))));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_23 = ((((~(arr_19 [i_6]))) >= (arr_25 [i_8] [i_8] [i_9] [5] [i_8])));
                            var_24 -= ((-var_3 ? ((var_5 ? ((var_1 ? var_7 : (arr_29 [i_6]))) : (var_11 != 3830322442))) : (min(((min(114, var_0))), (min(var_5, -41))))));
                            var_25 = (min(var_25, ((((~-2) | var_5)))));
                            var_26 ^= (min((arr_20 [i_7] [i_10]), (((((~909020420450432414) + 9223372036854775807)) << (var_4 - 6328627593879832226)))));
                            var_27 = var_3;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_28 -= ((-(arr_31 [i_9 + 3])));
                            arr_32 [i_6] [i_8] [i_8 + 1] [i_9 + 3] [i_9 + 3] = ((!(var_0 | var_5)));
                            var_29 += (!17322);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [14] [i_8] [i_6] [i_12] = (8 > 63298);
                            arr_37 [i_8] = ((max((((-(arr_31 [i_6]))), (max(var_8, -3944636028226152228))))));
                            var_30 = var_5;
                            var_31 = (min(var_31, (((!(((var_6 ? (arr_25 [i_7] [i_8] [i_8 + 2] [22] [i_7]) : var_0))))))));
                            var_32 -= var_0;
                        }
                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            var_33 = (!-26);
                            var_34 = var_6;
                        }
                    }
                }
            }
        }
        var_35 *= ((((max(var_10, var_10))) ? (((arr_27 [i_6] [i_6] [0]) ? var_11 : (arr_27 [i_6] [i_6] [6]))) : (var_7 << 0)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_36 = ((63298 ? var_7 : (arr_25 [8] [8] [i_14] [i_14] [i_14])));

        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            arr_46 [i_14] [14] [0] &= (~var_3);
            var_37 = (((arr_29 [i_14]) ? 26658 : (arr_20 [i_14] [i_14])));
            var_38 += ((1 - (1 * 17179869183)));
            arr_47 [i_15] [i_14] [i_15] = (((arr_19 [i_14]) ? (arr_24 [i_14] [i_14] [i_14] [i_15] [12] [i_14]) : var_13));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            arr_52 [i_16] = var_2;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    {
                        var_39 = ((~((1 ? var_11 : 4149677064))));
                        var_40 = ((var_2 ? (((1816731401295916411 ? var_11 : var_13))) : var_9));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            var_41 -= (-127 - 1);
            var_42 = (-(arr_20 [i_14] [i_14]));
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
        {
            var_43 |= var_8;
            var_44 ^= (var_2 - var_13);
            arr_62 [i_14] [i_20] = var_7;
            var_45 = (max(var_45, (!var_0)));
        }
    }
    #pragma endscop
}
