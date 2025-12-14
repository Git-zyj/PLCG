/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? var_5 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 += (((((arr_4 [i_0 + 1] [i_1] [i_4]) ? (arr_6 [i_3] [i_3 + 2] [i_4] [i_3 + 4]) : (arr_3 [i_0 - 1] [i_0 + 1]))) >= (((((arr_4 [0] [i_1] [i_4]) ? (arr_5 [i_2] [i_2] [i_2] [i_2]) : (arr_3 [i_0] [i_0]))) & (arr_0 [i_0 - 1])))));
                                var_15 = (arr_5 [i_0 + 1] [i_1 + 1] [i_2] [3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_16 = (((((!((!(arr_1 [i_6])))))) / (arr_11 [i_0] [i_0] [i_0 + 1] [4] [i_0 - 1])));
                            var_17 = ((~(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_16 [i_1] [i_1] [i_1] [i_6 + 1] [i_5]))) ? (((arr_1 [10]) / (arr_0 [i_1 + 1]))) : ((((arr_5 [i_5] [i_1] [9] [i_1]) || (arr_4 [i_0] [i_0] [i_1]))))))));
                            var_18 = (min(var_18, (arr_15 [i_5] [0] [i_5] [i_1])));
                            var_19 = (min(var_19, ((((arr_11 [i_5] [i_5] [i_6 - 1] [i_6] [i_6]) >> (((arr_11 [i_1] [i_6] [i_6 - 1] [i_6] [i_6]) - (arr_11 [i_1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1]))))))));
                            arr_17 [i_1] [i_5] = (((arr_15 [i_1] [i_1] [i_1] [i_1]) > (arr_3 [i_0 + 2] [1])));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((arr_22 [i_0] [i_1 - 2] [6] [i_8] [i_8] [i_9]) == (arr_22 [i_0 + 2] [i_1 - 1] [i_7] [i_8] [i_9] [i_7]))) ? (arr_0 [i_1 - 2]) : (((!((((arr_20 [i_9]) - (arr_15 [i_0 + 2] [i_1] [i_8] [i_9])))))))))));
                                arr_27 [i_9] [i_8] [i_7] [i_0] [i_1] [i_9] &= ((-0 / (((arr_1 [i_0 - 1]) / (arr_1 [i_0 - 1])))));
                                arr_28 [i_0] [i_1] [i_7] [1] [i_1] [7] = (((((arr_13 [i_1] [i_0 + 2] [i_1 + 1] [i_8]) ^ (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_1] [i_1]))) ^ (((arr_13 [i_1] [i_0 - 1] [i_1 - 1] [i_8]) ? (arr_25 [i_0 - 1] [0] [i_0 + 1] [0] [i_0 + 2] [i_0] [i_1]) : (arr_0 [i_0 + 1])))));
                                var_21 = (!(arr_8 [i_1 + 1] [i_1 - 1]));
                            }
                        }
                    }
                    arr_29 [i_1] [1] [i_7] = (max((((arr_20 [i_1]) & (arr_20 [i_1]))), (((arr_11 [i_0 + 1] [i_0 + 2] [i_1 - 1] [i_1] [i_1 - 2]) / ((-(arr_15 [i_0 + 1] [i_1 - 1] [i_1] [i_7])))))));
                    arr_30 [5] [i_1] [i_7] [i_1 - 2] = (arr_7 [i_0] [i_1] [i_1] [i_7] [i_7]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            {
                arr_36 [i_10] [i_11] = (min(((~(arr_35 [i_10] [i_11]))), (((arr_31 [i_11]) & (arr_32 [i_10])))));
                var_22 = ((!((((((arr_35 [i_10] [i_11]) ? (arr_33 [i_10] [i_11]) : (arr_35 [i_10] [13]))) % (arr_34 [i_10]))))));
            }
        }
    }
    var_23 = ((32767 ? 222 : 1008));
    #pragma endscop
}
