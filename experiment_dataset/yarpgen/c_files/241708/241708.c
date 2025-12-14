/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_2 % (max(1401597261, 18446744073709551615))));
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 85172948))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        arr_3 [11] [i_0] = (min(((max((arr_1 [i_0]), (arr_0 [i_0])))), ((((((arr_0 [i_0]) - 0))) ? (arr_2 [i_0] [i_0]) : (((arr_0 [i_0]) ? var_6 : 0))))));
        var_17 = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max((min((((arr_0 [i_1]) * (arr_0 [i_2]))), (((var_13 ? (arr_1 [i_1]) : (arr_2 [i_0] [i_0])))))), (1 > 1309190894)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [i_3] = (((((((arr_7 [i_0] [i_2] [i_4]) ? var_4 : (arr_0 [10]))))) ? (min((arr_14 [i_4 + 3] [i_4] [i_4] [i_3] [i_4 + 3] [i_4 + 3]), (arr_14 [i_4 + 3] [i_4] [i_4 + 2] [i_3] [i_4 + 3] [i_4 + 3]))) : (((max((arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]), (arr_7 [i_0] [i_1] [i_3])))))));
                                arr_16 [i_3] [i_3] = ((((max(0, 1357360904)) ? (((max((arr_2 [19] [i_2]), (arr_2 [i_2] [i_1]))))) : (arr_12 [i_4] [21] [i_4 + 1] [i_3] [i_4]))));
                                var_19 -= (max((arr_12 [i_0] [i_0] [i_2] [i_1] [i_4]), (min((arr_12 [i_1] [i_4 + 1] [i_4] [i_1] [i_4 + 3]), (((~(arr_6 [i_0]))))))));
                            }
                        }
                    }
                    arr_17 [3] [6] [6] = ((((((arr_7 [i_0] [i_2] [i_2]) ? (arr_11 [20] [i_0] [i_2] [i_1]) : (arr_7 [i_0] [i_1] [i_2])))) ? ((max((arr_9 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2]), (arr_7 [i_1] [i_1] [19])))) : (arr_7 [i_2] [i_1] [i_0])));
                    var_20 = ((max((arr_7 [i_0] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_2]))));
                    var_21 -= (((((var_13 + var_1) ? ((max((arr_6 [i_1]), -1))) : (arr_5 [i_0] [i_1] [i_2])))) ? (((!(arr_13 [9] [i_1] [i_2])))) : (247 / 1983294941));
                }
            }
        }
    }
    var_22 -= var_12;
    var_23 = (min(var_23, (((var_6 ? var_13 : ((max(var_7, var_4))))))));
    #pragma endscop
}
