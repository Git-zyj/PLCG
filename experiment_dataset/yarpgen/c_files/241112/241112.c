/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((-((var_4 ? 1161116012997245330 : (max((arr_9 [i_0] [i_2]), var_11))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] = (((!(arr_9 [i_0 + 1] [i_0 + 1]))) ? ((((arr_11 [i_3] [i_2] [i_2] [i_2] [i_2] [i_0]) ? var_6 : (arr_9 [i_2] [i_3])))) : (((((max((arr_11 [14] [i_0] [8] [i_1] [i_2] [i_2]), var_8))) ? (((arr_0 [i_0] [i_0]) / (arr_9 [i_0] [i_0]))) : (arr_4 [i_0])))));
                        var_15 = -6213;

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_16 = ((((max(var_2, (arr_17 [i_3] [i_3] [i_3])))) ? (min((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_2] [i_0]), (arr_0 [i_1] [i_4 - 1]))) : (arr_0 [1] [i_4 + 1])));
                            arr_18 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_2] = (arr_4 [5]);
                            var_17 = ((((((var_14 ? (arr_3 [i_0 + 1]) : (arr_3 [i_3]))))) ? var_6 : (max((max(0, var_12)), (arr_12 [i_0 + 1] [i_4 + 2] [i_4])))));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_18 &= ((-((((max((arr_9 [i_3] [i_1]), (arr_7 [i_3] [3] [i_1])))) ? var_5 : (arr_0 [2] [i_2])))));
                            var_19 = (max(var_19, (arr_14 [i_1] [i_1] [1] [i_5] [i_3])));
                            var_20 = (((((min((arr_17 [i_2] [i_2] [i_5]), (arr_5 [i_3])))) ? ((16777216 ? (arr_6 [i_3]) : 18446744073709551609)) : (arr_0 [i_0 + 1] [i_0 + 1]))));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_21 = var_2;
                            var_22 = (((arr_3 [i_0]) ? (arr_15 [i_6 + 1] [14] [i_3] [i_3] [14] [i_0]) : ((max((arr_1 [i_3]), (((arr_23 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0 - 1] [i_0]) / var_10)))))));
                            var_23 = (max(var_23, (max((((!(var_3 != var_10)))), (arr_4 [i_3])))));
                            arr_25 [i_0] [i_2] [i_1] [i_2] [10] [i_6 - 1] = 2;
                            arr_26 [i_0] [4] [i_0] [i_2] [1] = ((+(((arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_2] [i_6 - 2]) / var_1))));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_24 = ((-((max((arr_3 [i_0 + 1]), (arr_0 [i_7 + 1] [i_0 + 2]))))));
                            var_25 = (max(((((arr_9 [i_0] [12]) ? (arr_4 [i_2]) : var_9))), ((var_4 ? (arr_5 [i_1]) : var_5))));
                        }
                        arr_30 [i_0] [i_2] = max((arr_9 [i_0 + 2] [i_0 + 2]), ((min((arr_9 [i_0 - 1] [i_0 - 1]), (arr_9 [i_1] [i_3])))));
                    }
                    var_26 = var_14;
                }
            }
        }
    }
    var_27 &= (max((min(var_6, (var_13 & var_4))), var_11));
    var_28 += (min(var_13, (min(var_1, var_4))));
    #pragma endscop
}
