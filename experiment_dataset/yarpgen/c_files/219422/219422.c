/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(4869146215395547501 / 112)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 = (((((+((((arr_7 [i_0] [i_1 + 1] [i_2]) != var_3)))))) ? (((((var_5 ? var_7 : var_19))) ? ((var_6 ? (arr_2 [i_0]) : (arr_7 [i_2] [i_2] [i_2]))) : (((143 ? (arr_1 [i_1]) : var_6))))) : ((((!(((var_16 ? (arr_2 [8]) : var_10)))))))));
                    arr_8 [i_0] [1] = (max(var_14, var_14));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_22 = (max(var_22, (arr_3 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_23 = (!107);
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = (max((((arr_14 [i_0] [i_1 + 2] [7]) ? var_7 : var_13)), -var_16));
                                arr_17 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_4] [i_5] [i_4] = (((((arr_15 [i_0] [i_0] [i_0] [i_0] [5] [i_0] [i_0]) ? (arr_9 [i_4] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [4]))) >= (((var_0 ? var_10 : ((var_0 ? (arr_5 [i_0] [i_1]) : 110)))))));
                            }
                        }
                    }
                    var_24 += (arr_5 [4] [4]);
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] = (arr_5 [i_0] [i_8]);
                                arr_28 [i_0] [i_1] [i_0] [i_6 + 1] [i_0] = ((-(((!(((var_13 ? (arr_26 [0] [i_1 + 2] [i_6 - 1] [i_7] [i_8]) : (arr_6 [i_0] [i_6 - 1] [i_0] [i_8])))))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [10] = ((-((((var_16 / var_5) >= ((max(var_2, 511))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((max((arr_19 [i_1 + 2] [i_6 + 1] [i_9 + 1]), (arr_31 [i_9 + 4] [6] [6] [i_6 + 1])))))));
                                var_26 ^= ((((!(arr_32 [i_0] [i_6 + 1] [i_6] [2] [11] [i_1 - 1])))));
                                arr_36 [i_0] = ((((max(var_8, (arr_6 [i_9 + 2] [i_0] [i_0] [i_1 + 2])))) % (max((arr_23 [i_0] [i_1 + 1] [i_6] [i_9 - 1] [i_10]), var_5))));
                                var_27 = ((-(min((arr_25 [i_6] [i_6] [i_0] [i_10] [i_10]), (!var_1)))));
                            }
                        }
                    }
                    var_28 = (max((min((arr_18 [i_1 + 2] [i_0] [i_6 + 1]), var_6)), (min((arr_18 [i_1 - 1] [i_0] [i_6 + 1]), (arr_18 [i_1 - 1] [i_0] [i_6 - 1])))));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_29 = (max(var_29, ((((min((arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2]), ((~(arr_7 [i_0] [i_1 + 2] [i_0])))))) ? ((1 ? 703609254 : 26426)) : (((((max((arr_37 [i_0] [i_1] [i_1 - 1] [9]), var_15))) ? (var_6 << 1) : (arr_0 [i_1 - 1]))))))));
                    var_30 += (min(((var_10 ? (((min(30, var_15)))) : (min(var_3, var_16)))), (((-(((arr_20 [8] [i_11] [0]) ? var_18 : var_7)))))));
                }

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_31 = (min(var_31, var_13));
                    arr_41 [i_0] [i_1] [i_12] [i_1 + 2] = ((((max((arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (((!var_12) ? (((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_14 [i_0] [i_1] [i_1]) : (arr_6 [i_12] [i_12] [i_0] [i_12]))) : (arr_14 [i_0] [i_12] [i_12]))) : (((((min(var_14, (arr_25 [i_12] [0] [i_0] [i_0] [i_0]))) + 9223372036854775807)) << (((((((arr_11 [i_0] [i_0]) + var_18)) + 17803)) - 1))))));
                }
                arr_42 [i_0] [i_1 + 2] = ((!(((236 ? 143 : 219)))));
            }
        }
    }
    var_32 = var_8;
    #pragma endscop
}
