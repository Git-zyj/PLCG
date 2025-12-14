/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((var_7 % (var_15 - var_16)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_7));
        var_19 -= 57098;

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_20 *= (arr_3 [i_0] [i_1 + 1]);
            var_21 = (min(var_21, ((((9 <= var_5) ? var_0 : (arr_2 [i_1 + 4]))))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_22 ^= ((-(var_12 / var_14)));
                            arr_15 [i_2] [6] [i_1 + 2] [i_3] [6] [6] [i_2] |= (!var_8);
                        }
                    }
                }
                var_23 |= (((arr_0 [i_0] [i_1 + 2]) >= (arr_6 [4] [i_1 + 2] [i_2])));
                var_24 += (((arr_6 [2] [i_1] [8]) >= (var_1 % var_8)));
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_27 [10] &= (min(((max((arr_3 [i_8 + 1] [i_7 - 1]), 1))), (((((-56 ? -906899222 : (arr_0 [i_5] [i_5])))) ? var_14 : (!var_13)))));
                        var_25 += (min((arr_17 [i_5] [i_5]), ((32767 ? var_6 : ((48340 ? (arr_17 [i_6] [i_6]) : (arr_14 [i_5] [i_5] [i_5] [0] [i_5])))))));
                        var_26 += (min(((~(arr_14 [i_8 + 1] [6] [i_7 + 1] [6] [i_7 + 1]))), (((arr_14 [i_8 - 2] [6] [i_7 + 1] [6] [i_7 + 1]) ? (arr_14 [i_8 - 2] [2] [i_7 - 2] [2] [i_7 - 2]) : (arr_14 [i_8 + 1] [4] [i_7 + 1] [4] [i_7 + 1])))));
                    }
                }
            }
        }
        var_27 *= ((((~((((arr_4 [8]) < 81))))) < (max(((-(arr_9 [12] [i_5] [i_5] [12]))), -60))));
        var_28 = (min(var_28, ((min((arr_16 [i_5]), ((((((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_14 : var_11))) ? (((arr_13 [i_5] [i_5] [10] [i_5] [i_5]) + var_4)) : 18446744073709551614)))))));
    }
    var_29 |= (max(-var_9, ((var_3 + (~32767)))));
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                {
                    var_30 *= ((((((var_15 * var_2) == ((max(89, var_14)))))) & (max((!var_16), (max((arr_30 [i_9]), (arr_35 [i_10] [i_9])))))));
                    var_31 &= (((arr_33 [i_9]) % (arr_35 [i_9] [i_10 - 3])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 3; i_12 < 6;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    arr_46 [i_12] [i_12] [i_13] [i_12] &= ((((var_1 ? (arr_4 [i_13]) : (((arr_10 [i_12] [i_12] [i_13] [i_12]) | (arr_7 [i_13]))))) % var_3));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 6;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_32 *= -42429;
                                var_33 += (((((((var_6 ? 1891403950 : (arr_48 [i_14] [i_13] [i_13] [i_12]))) ^ ((((var_3 == (arr_10 [i_12] [i_12] [i_13] [i_12])))))))) ? (((-(max(var_1, (arr_10 [i_12] [i_13] [i_13] [i_15])))))) : (max((((arr_11 [i_13] [i_13 + 3] [i_14] [i_15 - 2] [i_13]) ? (arr_22 [i_13] [i_14] [i_13 - 1] [i_13]) : var_4)), var_14))));
                                var_34 -= (min((((((1 ? var_12 : (arr_26 [i_13 - 4] [i_14] [i_15]))) > (~255)))), (((((arr_14 [0] [0] [0] [i_13] [i_16]) + 2147483647)) >> ((((var_4 ? (arr_50 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]) : 8458)) - 5514))))));
                                var_35 ^= ((-var_14 ? ((var_12 ? (((arr_6 [i_13] [i_13] [i_14]) ? var_2 : 42432)) : 3)) : (!var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
