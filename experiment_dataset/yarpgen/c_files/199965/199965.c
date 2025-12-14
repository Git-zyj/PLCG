/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 += ((((((arr_2 [i_0] [5]) - var_3)) * (((var_2 > (arr_0 [i_0])))))));
            var_20 = ((-24025 & ((((arr_3 [i_0] [i_0] [i_0]) && 11343)))));
            arr_6 [i_0] = var_7;
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_21 = (((max((arr_4 [i_2] [i_2 + 3] [i_2 - 2]), (arr_4 [2] [i_2 + 1] [i_2 + 3])))) ? (max(var_8, (arr_4 [i_2] [0] [i_2 - 2]))) : ((var_10 ? (arr_4 [i_2] [i_2] [i_2 + 4]) : var_6)));
            arr_9 [i_2] [i_2] = ((((((var_4 | var_5) <= 13)))) > var_7);
            var_22 &= (-(((arr_8 [i_2 + 1] [2] [i_2 + 4]) / (arr_8 [i_2 + 3] [6] [i_2 + 2]))));
        }
        arr_10 [20] = (max(((-(max(var_16, var_11)))), ((max((var_18 || var_1), (((arr_4 [14] [i_0] [i_0]) && -944757756)))))));
        arr_11 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_23 = (min(var_23, (arr_7 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 = ((((-(arr_13 [i_3]))) * (!var_15)));
                        var_25 += (((var_17 * var_2) ? (var_2 / var_2) : 25276));
                    }
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_26 = (((arr_21 [i_3] [3] [i_3] [i_3]) * (((var_5 ? var_10 : (arr_17 [i_3] [i_7] [i_3]))))));
                        var_27 += ((var_1 ? var_14 : (arr_21 [i_3 - 1] [i_4] [16] [i_3 + 2])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_28 *= 1;
                        var_29 &= ((((((arr_18 [i_3 + 1] [i_3 + 1]) - 1))) ? (arr_13 [0]) : 845277449799422708));
                        var_30 = (((arr_8 [18] [i_3] [i_5]) ^ ((~(arr_21 [i_3 + 2] [i_4] [i_3] [1])))));
                    }
                    arr_26 [i_3] [11] [i_3] [6] = (((arr_0 [i_3 + 2]) % (arr_16 [i_3] [i_3 + 1] [i_3 + 2])));
                    arr_27 [i_3] [i_3] = (arr_4 [i_5] [i_5] [i_5]);
                }
            }
        }
        var_31 = (min(var_31, (arr_8 [i_3] [14] [16])));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            {
                var_32 = (((((max(var_0, (arr_21 [i_9] [i_10] [10] [i_10])))) ? 0 : (max(var_12, 3564789967)))) ^ 1776);
                var_33 ^= (arr_17 [i_9] [i_9 - 1] [16]);
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_34 = (((arr_38 [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 2]) ? (((((arr_38 [i_10] [i_10 - 1] [2] [i_10]) + 2147483647)) << (((((arr_38 [i_10] [i_11 - 3] [i_12] [i_13]) + 8709)) - 27)))) : ((max(-17, (arr_38 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]))))));
                                var_35 = (min(var_35, ((-(252391454 >= -62)))));
                                var_36 = var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 &= var_18;
    var_38 = ((-(((!var_0) & var_6))));

    for (int i_14 = 1; i_14 < 9;i_14 += 1)
    {
        var_39 = (max(var_12, (((((arr_38 [i_14 + 1] [8] [13] [i_14 + 1]) ? (arr_32 [i_14]) : var_0))))));
        var_40 -= ((~(((!65) ? var_7 : 1801044903))));
        var_41 += ((+((((arr_14 [1]) || (arr_14 [4]))))));
    }
    #pragma endscop
}
