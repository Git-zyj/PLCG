/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(var_6, 0)))) ? (255 >= 255) : var_8));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            arr_13 [0] [0] [i_3] [i_3] [i_4 + 1] &= (((var_4 ? (min(var_6, 182622914953775733)) : (max(4593671619917905920, 839523554)))));
                            var_21 = (min(var_21, ((((var_16 ? (((((arr_11 [i_3] [i_1] [6] [4] [4] [i_3] [i_4]) == (arr_7 [i_3] [8] [i_3] [i_4 + 2]))))) : var_5))))));
                        }
                    }
                }
            }
            var_22 = max((((!((max(var_18, 1)))))), ((var_8 ? (!var_6) : 501343164756106627)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((-((var_3 ? var_13 : var_18))))));
                            var_24 = (max(var_24, (((((((arr_15 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_6 - 3]) ? (arr_12 [i_6 - 3] [7] [i_1] [i_1 + 2] [i_0 - 1] [i_0]) : 1))) ? (~64) : var_7)))));
                            var_25 = (max(var_25, ((min((arr_20 [i_1 + 2] [i_1 + 2] [i_7]), (arr_16 [i_0] [i_1] [i_5] [i_0] [i_7]))))));
                            arr_24 [i_0 - 1] [1] [6] [1] [i_6 - 1] [0] &= ((576320014815068160 ? (min(12426449954822263307, var_17)) : (arr_10 [i_0 - 2] [i_1 - 1] [6] [6] [i_5])));
                        }
                    }
                }
            }
            var_26 = (arr_5 [i_0 + 2] [8]);
            var_27 *= ((((arr_21 [0] [i_0] [i_0 - 3] [i_1 - 2] [i_1]) - (var_9 >= var_7))));
        }
        var_28 = (min(var_28, var_8));
        arr_25 [i_0 + 3] [i_0] = ((-(((arr_4 [i_0 - 3]) / (arr_4 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        arr_28 [i_8 + 3] = ((0 >> (18446744073709551610 - 18446744073709551597)));
        var_29 &= (((((var_14 ? var_11 : (arr_27 [i_8] [2])))) ? -1876071642 : (arr_26 [i_8 - 1])));
        var_30 ^= (arr_26 [i_8]);
        arr_29 [i_8 + 3] = 8741;
        arr_30 [i_8 + 3] [i_8] = var_16;
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        arr_33 [i_9 - 1] [i_9] = (((!133) && 1));
        var_31 = (max(var_31, (((min(((-(arr_31 [i_9 - 1] [i_9 - 1]))), 0))))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_32 = -4311;
        var_33 = (max((arr_27 [i_10] [i_10]), (((arr_27 [i_10] [i_10]) ? (arr_27 [2] [i_10]) : (arr_27 [i_10] [i_10])))));
    }
    #pragma endscop
}
