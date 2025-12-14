/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 -= (max((((!(arr_4 [i_0])))), (((arr_4 [i_1]) ? 1981679547 : (arr_4 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [6] [7] [8] = (max(((((((arr_12 [i_0] [9] [i_2] [i_3]) ? 639 : var_5))) ? (arr_0 [i_0] [i_1]) : var_1)), ((-(arr_8 [i_0] [i_1])))));
                            var_13 &= (max(((~(arr_11 [i_0] [7]))), ((~(arr_11 [i_0] [i_3])))));
                            var_14 = (arr_12 [8] [7] [i_1] [i_0]);
                            arr_14 [5] [6] [i_0] = (((((29031 ? (arr_0 [10] [i_1]) : (arr_12 [i_3] [i_2] [7] [i_0])))) > (arr_11 [4] [1])));
                            arr_15 [i_1] = ((((min((arr_10 [i_0]), (arr_2 [i_1])))) ? (((arr_2 [i_1]) ? (arr_3 [i_0]) : (arr_1 [i_2]))) : ((~(arr_3 [5])))));
                        }
                    }
                }
                var_15 = 1;

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_16 = ((0 - (((12 + 3104451088) ? ((max((arr_6 [i_0] [i_1] [i_4]), 252))) : var_11))));
                    var_17 = (((arr_10 [i_0]) >> (((((arr_8 [i_0] [i_1]) & (arr_0 [i_4] [i_1]))) - 65))));
                    var_18 = ((((((arr_9 [i_0] [i_1] [i_4]) ? ((((arr_12 [i_0] [8] [i_0] [i_0]) ? 240 : 0))) : ((~(arr_3 [i_0])))))) ? (max(((-(arr_7 [i_1] [11]))), 1)) : ((max((max((arr_8 [i_4] [10]), var_2)), (arr_12 [i_0] [1] [i_4] [i_4]))))));

                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [7] [i_4] [i_5] = (((((~(arr_7 [i_4] [i_5])))) ? (((arr_8 [i_0] [10]) ? 20 : ((~(arr_6 [i_5 - 1] [i_4] [i_1]))))) : (((arr_4 [i_0]) ? (arr_4 [i_5 - 1]) : 64))));
                        arr_22 [i_0] [8] [i_5] [i_5] = (max((((((0 ? (arr_8 [i_0] [3]) : (arr_0 [i_0] [i_1])))) ? (arr_6 [i_5 - 1] [i_1] [i_0]) : (arr_3 [i_5]))), (((!(arr_7 [i_5 - 1] [9]))))));
                        arr_23 [i_0] [i_1] [i_5] [i_5] = ((~(arr_12 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (0 - 4599301419510680502)));
                        arr_27 [i_6] [i_4] [i_1] [2] = (max((min((arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]), ((1 | (arr_2 [i_0]))))), ((-(arr_6 [9] [i_1] [i_6])))));
                        var_20 = (!42120);
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_4] [i_4] [i_7] = (((((1 ? (arr_18 [i_0] [i_0] [i_4] [i_7] [i_7 - 1] [i_7]) : (arr_18 [1] [3] [i_4] [0] [i_7 - 1] [i_7 - 1])))) ? ((min((((arr_1 [i_1]) && 1)), (!var_4)))) : (max((!41), var_3))));
                        var_21 = (((arr_26 [1] [i_4] [i_1] [8]) ? (((((min((arr_10 [i_7]), 12))) ? ((~(arr_29 [i_7] [i_7]))) : (((arr_10 [i_0]) ? 0 : 255))))) : (min((arr_25 [i_7 - 1] [6] [i_7 - 1] [i_7]), (arr_25 [11] [i_0] [i_7 - 1] [i_7])))));
                        arr_33 [i_0] [i_7] [i_4] [11] = (max(((-(((arr_20 [1] [i_1] [4] [i_7]) ? 3 : (arr_0 [6] [i_4]))))), ((max((arr_20 [i_7] [i_7 - 1] [i_7] [i_7]), (arr_8 [i_1] [i_4]))))));
                        var_22 += ((65535 ? 64880 : (-32767 - 1)));
                        arr_34 [i_0] [2] [i_7] [i_4] [i_7] = (arr_16 [i_4] [i_7 - 1]);
                    }
                    arr_35 [i_0] [2] [i_4] [7] = (((((18 ? (arr_8 [3] [i_1]) : var_1))) ? (!var_8) : (arr_17 [i_1])));
                }
            }
        }
    }
    var_23 = (min(var_23, ((min(((var_11 ? var_8 : var_0)), 255)))));
    var_24 = var_7;
    var_25 = var_11;
    #pragma endscop
}
