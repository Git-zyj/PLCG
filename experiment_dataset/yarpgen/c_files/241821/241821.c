/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_2 [i_0] [i_0]);
        var_13 = (max(var_13, ((min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_6)), ((((arr_1 [i_0]) > (arr_1 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((!((max((arr_3 [i_0]), 1)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {

                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_14 = (((((max(var_0, (arr_11 [i_1] [15] [i_1 + 1] [i_4 - 1]))))) >= (((6270955839422945837 - (arr_8 [i_1 + 2] [i_1 + 2] [i_1]))))));
                        arr_13 [4] [i_3 + 2] [i_3] [i_3] [i_3 + 2] = (min((min(((var_6 ? var_10 : (arr_12 [i_1] [i_1] [i_1] [i_1]))), (arr_9 [i_1 + 3] [i_1 + 3] [i_3]))), ((min(1, (arr_7 [i_3 + 1] [i_4 - 2]))))));
                        var_15 ^= (min(((((arr_6 [i_1]) ? (arr_12 [11] [i_2] [i_3] [i_4]) : var_2))), (arr_12 [i_1] [i_4 + 2] [i_3] [i_3])));
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_1 - 1] [i_5] [i_3] [i_5 + 3] = (((-(arr_12 [i_1] [i_2] [i_1] [i_5 - 1]))));
                        arr_17 [i_5 + 3] [i_5] = (max(((-((var_11 ? 0 : (arr_7 [i_1 - 2] [i_1]))))), var_7));
                    }
                    var_16 = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [0] [0] [i_6] [i_7] = (min((((!(arr_7 [i_1] [i_1 - 3])))), (arr_21 [i_3 + 1])));
                                arr_24 [i_1] [i_1] [i_2] [0] [i_6] [i_7] = (!var_1);
                                arr_25 [i_6] [i_3] [i_1] = (min((max(((max((arr_11 [i_1] [i_2] [i_3] [i_2]), 1))), (((arr_7 [i_1] [i_2]) ? var_5 : var_1)))), ((((arr_12 [i_1 - 2] [i_3 - 2] [i_3] [i_2]) ? (arr_12 [i_1 - 1] [i_3 + 4] [i_3 + 1] [9]) : var_10)))));
                            }
                        }
                    }
                    var_17 ^= ((((~2199021158400) - (1 - 0))));
                }
                var_18 ^= (min(var_0, (max(18446744073709551610, ((18446744073709551615 / (arr_18 [i_1])))))));
                arr_26 [i_2] = ((var_0 ? (((-((max(var_4, var_10)))))) : (max((min(var_7, var_3)), var_5))));
                arr_27 [i_1] [i_2] [i_1] = (((((((!(arr_19 [i_1] [i_1] [i_1 + 1] [i_1])))))) ? ((((arr_5 [i_1 - 3]) >= ((min(var_5, 4294967295)))))) : var_11));
                var_19 = min(((var_4 ? (arr_11 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (arr_18 [i_1 + 3]))), (((arr_20 [i_1 - 2]) - var_1)));
            }
        }
    }
    var_20 = (!var_4);
    var_21 = -var_11;
    #pragma endscop
}
