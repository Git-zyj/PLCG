/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [6] [i_1] |= ((-(((((!(arr_2 [i_1] [i_1] [i_0])))) & (((!(arr_2 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = ((var_7 ? (max((arr_6 [11] [i_2] [i_4]), var_7)) : (((min(34906, -4096))))));
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_3] [i_1] = (((((((max(89, 69))) ? (min((arr_12 [i_4] [i_3]), var_10)) : var_16))) || ((min((arr_0 [i_0] [i_2]), (arr_8 [i_2 - 1] [i_1] [i_2 - 1]))))));
                                var_18 *= (arr_5 [i_3] [i_3]);
                                var_19 = (min(var_19, 78));
                            }
                        }
                    }
                }
                var_20 = (((min((arr_5 [i_1] [i_0]), 126)) * var_15));
                arr_14 [i_0] [i_1] = (((((-((max((arr_10 [i_0] [i_1] [i_1] [i_1]), var_14)))))) ? (arr_12 [i_0] [i_1]) : var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_21 [i_6] = ((((((var_16 + (arr_9 [i_6] [i_5] [i_5] [i_5] [i_5] [i_5]))))) / ((max(var_0, 105)))));
                var_21 = (max(var_21, (((!((min((arr_10 [i_5] [i_5] [i_6] [i_6]), var_8))))))));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_24 [i_7] [i_6] [i_7] = (arr_5 [i_6] [10]);
                    var_22 = (((((var_8 - (arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((arr_3 [i_6] [i_7]) ? (arr_3 [i_6] [i_6]) : var_16)) : (((+((var_14 ? (arr_5 [i_6] [2]) : var_0)))))));
                    var_23 = (max(var_23, ((max(((((((arr_5 [i_7] [i_6]) * 0))) ? ((~(arr_10 [i_5] [i_5] [i_6] [i_7]))) : 105)), 81)))));
                }
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    arr_29 [i_6] = (max(var_14, -var_6));
                    var_24 = (max(var_24, (((1 ? -var_16 : (arr_2 [i_8 - 1] [i_8 + 1] [i_8 - 1]))))));
                    var_25 |= (!(((-87 ? (min(var_8, var_2)) : ((((arr_0 [i_8] [i_5]) ? (arr_18 [6]) : (arr_20 [2] [2]))))))));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_26 += (arr_35 [i_5] [i_6] [10] [i_5] [i_5] [10]);
                                var_27 = var_6;
                                arr_37 [i_6] [i_9] [i_9] [i_6] [i_6] = (((((!(((82 ? -46 : -82)))))) & (((min(var_14, -1661))))));
                                var_28 = (max((((arr_9 [1] [i_11] [1] [i_11] [i_11] [i_11]) ? (arr_2 [i_6] [i_6] [i_11]) : var_12)), (max((arr_25 [i_10 + 2] [i_10 + 1] [i_9] [i_9]), ((30262 ? (arr_35 [i_5] [i_5] [i_5] [i_10 + 1] [i_11] [i_10 + 1]) : 1))))));
                            }
                        }
                    }
                    var_29 &= (max(var_15, ((var_15 ? (arr_27 [8]) : 229))));
                    var_30 = ((~((-var_5 - (arr_28 [i_9])))));
                }
                var_31 = var_0;
            }
        }
    }
    var_32 = (min(-105, (!var_5)));
    #pragma endscop
}
