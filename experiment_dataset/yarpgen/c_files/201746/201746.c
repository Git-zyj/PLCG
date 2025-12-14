/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_5 == var_10);
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = var_1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = ((((((((min((-32767 - 1), (arr_9 [i_0])))) * (var_4 | var_4))) + 2147483647)) << ((((((~(arr_3 [i_4] [i_1 - 1] [i_0]))) / (min((arr_13 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_2]))))) - 9126579241))));
                                arr_14 [i_0] [i_0] [2] [i_3] [i_3] [i_0] [i_3] = -32761;
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((((min((arr_9 [i_1 - 1]), (arr_9 [i_1 - 1])))) ? ((-1454850051 % (arr_9 [i_1 - 1]))) : (((arr_9 [i_1 - 1]) / var_7))));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] = var_4;
                        var_16 -= (arr_7 [2]);
                        var_17 = (max(var_2, ((((var_8 >> (var_2 - 3067))) * var_8))));
                        var_18 = ((((max(((max(var_9, var_1))), (var_8 ^ var_1)))) ? (((((var_5 >= (arr_6 [i_1 - 1] [i_0])))) & ((50570 ? var_1 : var_0)))) : (arr_0 [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 ^= ((!(((var_11 ? (arr_5 [4] [6]) : var_7)))));
                        var_20 = (max(var_20, var_9));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_26 [i_8] [i_0] [i_0] [i_0] [i_0] = (max(3780163237, (arr_1 [i_0])));
                            var_21 = (min(var_21, ((min((((arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) ? var_2 : (arr_17 [i_8] [i_1 - 1] [i_0] [i_0]))), ((0 & (arr_17 [1] [i_1 + 1] [i_1] [6]))))))));
                            arr_27 [i_8] [i_0] [i_0] [1] = ((-(var_0 * 0)));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_22 = ((127 ? (min(var_6, (arr_4 [i_1 + 1] [i_0] [i_5]))) : (arr_29 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_7])));
                            arr_30 [i_0] [i_1 - 1] [4] [i_1 - 1] [5] [0] [i_1] = (arr_21 [7] [i_1] [i_5] [i_1] [i_9]);
                            arr_31 [i_0] [i_0] [5] [i_7] [i_7] [i_9] [i_9] = (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_34 [2] [i_1] [i_1] [6] [i_1] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
                            arr_35 [i_0] [i_1] = (((arr_5 [i_1] [i_0]) + ((((arr_21 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_21 [i_1 + 1] [i_1 - 1] [2] [i_1 - 1] [i_1 + 1]) : var_9)))));
                            arr_36 [i_0] [i_0] = (min((arr_12 [i_10] [i_7] [i_7] [i_5] [i_0] [i_0] [i_0]), ((1900811288 ? ((var_3 ? var_11 : (arr_33 [i_0] [i_1] [i_5] [i_7] [i_10]))) : (min(var_2, var_11))))));
                            arr_37 [i_0] [i_1] [4] [i_5] [i_5] [i_0] [i_0] = (!1);
                        }
                    }
                    arr_38 [i_1] [i_0] = (min((!var_6), ((~(arr_8 [i_0] [i_0] [3])))));
                    var_23 = (max(var_23, ((((((!(var_10 || var_2)))) >> 0)))));
                }
                arr_39 [i_0] [i_0] [i_1 - 1] = (1 && 32073);
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
