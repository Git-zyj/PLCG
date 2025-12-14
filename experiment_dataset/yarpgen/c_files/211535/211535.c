/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((var_6 >= (var_2 ^ var_17)))), (((((var_18 ? var_15 : var_4))) ? (9 | 3993203811577386880) : ((var_13 ? var_19 : var_15))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = ((((min(var_18, var_19))) ? var_15 : ((((arr_4 [i_0] [i_1 + 2] [i_2 - 2]) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_2 + 2]) : (arr_4 [i_0 - 1] [i_1 + 1] [i_2 + 1]))))));

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_22 -= 1599461816377390713;
                            arr_11 [i_4] [i_1 + 4] [i_3] [i_2 - 2] [i_1 + 4] [i_0] = (min((arr_10 [i_0 + 1] [i_1 + 2] [i_2] [i_3] [i_2 + 2] [1]), (((arr_8 [i_0] [i_1 + 2] [11] [i_3]) / var_7))));
                            var_23 = (min(var_23, ((min((min(((var_4 ? 165 : var_0)), (((var_12 ? var_8 : (arr_1 [i_0 + 1])))))), (!var_16))))));
                            var_24 = ((876378215 ? (-2147483647 - 1) : 0));
                            var_25 ^= ((-(((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1))));
                        }
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            var_26 -= ((((((arr_4 [i_1 + 4] [i_1] [i_1]) ? (arr_4 [i_1 - 1] [i_1] [i_1]) : (arr_4 [i_1 + 4] [9] [i_0])))) ? (((arr_1 [i_1 + 4]) ? var_18 : (arr_10 [7] [i_1 + 4] [7] [i_2] [i_3] [i_3]))) : (min((min(1620064136, 192)), (arr_6 [i_5])))));
                            var_27 = (min(var_27, var_8));
                            var_28 = (max(var_28, ((((((~(arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1])))) ? var_1 : (arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2]))))));
                            var_29 = (((((arr_4 [1] [i_1] [i_1]) ? 187 : (var_16 / var_9)))) ? (arr_7 [4] [4] [4] [i_3] [i_5 - 1]) : (((var_4 + 9223372036854775807) << (((~var_3) - 70)))));
                        }
                        arr_14 [i_0] = ((((arr_3 [i_0 + 1]) || (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [5]))));
                    }
                }
            }
        }
        arr_15 [i_0] = (min((arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]), 251));
        var_30 = (((((((max(var_18, var_8))) ? (min(var_10, (arr_10 [3] [10] [3] [11] [2] [3]))) : (((max(var_2, var_9))))))) ? (min((min(-1599461816377390713, var_14)), ((max((arr_13 [i_0 - 1] [8] [i_0] [i_0] [i_0]), (arr_12 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0])))))) : (max(var_11, (((arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [1] [1]) | var_14))))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        var_31 ^= ((~(arr_18 [i_6])));
        var_32 = (max(var_32, ((max((max((arr_16 [i_6 - 1] [i_6 - 1]), (arr_16 [i_6 + 1] [i_6 + 1]))), ((((arr_18 [i_6]) == var_8))))))));
    }
    #pragma endscop
}
