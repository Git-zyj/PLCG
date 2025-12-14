/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_1;
    var_18 -= (((~var_11) & var_11));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(((arr_0 [i_0]) ? var_9 : (arr_1 [i_0] [i_0])))))) ^ (-30 ^ 14572331519302212102)));
        arr_5 [i_0] [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((~(arr_6 [i_1 - 3])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, (((var_12 != (((arr_10 [i_2]) ? var_11 : var_9)))))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_21 = (((var_8 && var_13) != (arr_14 [i_2] [i_2] [i_4])));
                        arr_18 [i_1] [i_1] [i_1] [i_1] = (arr_7 [i_3]);
                        var_22 = (min(var_22, (((((((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_16 [i_1])))) ? (arr_12 [i_1] [i_2] [i_4]) : (((arr_6 [i_1]) * (arr_6 [i_4]))))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_23 = (((arr_11 [i_2]) ? var_13 : (arr_11 [i_1 - 3])));
                            var_24 = var_8;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_25 -= var_8;
                            arr_27 [i_1] [i_2] [i_2] [i_5] [i_7] [i_5] = (((((var_12 ? var_15 : (arr_25 [i_7] [i_7] [i_7] [i_7])))) ? (((arr_13 [i_2] [i_2]) & var_0)) : (var_7 % var_10)));
                        }
                        var_26 = var_6;
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_25 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_2]) > (arr_25 [i_1 + 1] [i_1] [i_1 - 1] [i_5])));
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        arr_41 [i_8] [i_8] [i_8] [i_10] [i_9] [i_11] = var_7;
                        arr_42 [i_9] [i_8] [i_9] = (((((var_13 ? (arr_12 [i_9] [i_8 - 1] [i_8 - 1]) : (arr_12 [i_8] [i_8 + 2] [i_8 + 2])))) || ((!(arr_12 [i_8] [i_8 - 2] [i_10])))));
                        var_27 = ((var_11 ? (var_7 * var_3) : ((((arr_40 [i_9]) * ((var_6 ? var_10 : (arr_29 [i_11]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 13;i_13 += 1)
            {
                {
                    arr_49 [i_13] [i_12] [i_8] [i_8] = (arr_31 [i_8]);
                    arr_50 [i_8] [i_8] [i_8] &= (((arr_22 [i_8] [i_8] [i_8]) ? ((((~var_9) && ((((arr_44 [i_12]) ? (arr_9 [i_8] [i_13]) : var_5)))))) : (8192 % 1210852119)));
                    arr_51 [i_8] [i_12] [i_8] = (((var_3 == (arr_21 [i_12] [i_12] [i_12] [i_8]))) ? (((var_14 && (arr_45 [i_13 + 3])))) : ((((var_1 + var_12) && (((var_10 ? (arr_39 [10] [10]) : var_1)))))));
                    var_28 = ((var_0 ? ((((arr_39 [4] [i_12 + 1]) && var_15))) : (((!(arr_39 [14] [i_12 - 1]))))));

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_29 ^= (var_4 / (((arr_7 [i_12 + 1]) ? var_12 : var_12)));
                        arr_54 [i_8] [i_13 - 3] [i_12] [i_8] [i_8] [i_8] = var_11;
                    }
                    for (int i_15 = 4; i_15 < 15;i_15 += 1)
                    {
                        arr_57 [i_8] [i_8] [i_13] [i_15] = ((+(((arr_23 [i_8 + 1] [i_8 + 1] [i_8 + 1]) % (arr_26 [i_8] [i_8 + 1])))));
                        var_30 = ((((((arr_10 [i_8]) ? var_9 : var_7)))) & ((((var_5 >> (var_1 + 117))) >> (((((arr_48 [i_15] [i_13] [i_12 + 1]) >> (((arr_26 [i_8] [i_8]) - 3364181509837415445)))) - 1152127736)))));
                        var_31 = ((((((arr_39 [i_15] [i_15]) ? var_3 : var_14)) == (((((arr_43 [i_12]) && var_0)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
