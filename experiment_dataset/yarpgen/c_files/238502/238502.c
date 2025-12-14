/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_0, var_0)))) - ((var_9 + ((var_6 ? var_2 : var_0))))));
    var_12 = (((((-((var_0 ? var_4 : var_5))))) + ((var_8 + (var_4 * var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 = ((((var_1 ? (arr_0 [i_3]) : var_6)) >= (arr_7 [i_0] [i_0] [i_2] [i_2] [5])));
                        var_14 = (((((arr_0 [i_0]) + var_9)) + var_0));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (max(var_15, (((((((arr_9 [0] [i_4]) - (var_7 - var_10)))) - (((arr_8 [i_0] [1] [i_2] [i_2] [i_0]) - (arr_8 [i_4] [i_2] [i_4] [i_4] [i_1]))))))));
                        var_16 = (max(var_16, ((max((max((arr_1 [i_1] [2]), ((((arr_0 [i_0]) && var_10))))), ((max((((arr_2 [i_0] [4] [i_4]) / var_4)), ((var_7 ? (arr_11 [i_0] [i_0] [i_0] [8]) : var_9))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 = ((var_0 ? (arr_11 [i_0] [i_1] [i_6] [i_0]) : (arr_11 [i_0] [i_2] [i_1] [i_0])));
                            var_18 = (((arr_7 [i_0] [i_5] [i_2] [i_1] [i_0]) && (arr_7 [i_0] [i_1] [i_2] [i_5] [i_6])));
                            var_19 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_20 = (((var_8 ^ var_5) | (arr_3 [i_0])));
                        }
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            var_21 = (max(var_21, (arr_0 [1])));
                            arr_20 [i_0] [i_1] [i_0] [1] = (((((arr_11 [10] [i_2] [i_2] [i_0]) > (arr_19 [i_0] [i_1] [1] [i_5]))) || (((var_4 ? (arr_10 [i_1] [i_2] [i_5] [i_7]) : var_9)))));
                        }
                        var_22 = (min(var_22, (arr_4 [5] [5] [i_5])));
                        var_23 = (((var_4 != var_9) ? (arr_12 [i_0] [i_0] [i_2] [i_2]) : (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_5]) / (arr_18 [i_0] [i_1] [i_2] [i_0] [i_1])))));
                    }
                    var_24 = (((var_0 || ((max(var_7, var_2))))) || ((min((arr_14 [i_0] [i_1] [i_0] [i_1]), (max((arr_4 [i_0] [i_1] [i_0]), var_0))))));
                    var_25 = (min(var_25, ((((((var_4 ? (arr_16 [i_2] [i_1] [4] [i_2] [i_1] [i_1]) : ((var_3 ? var_3 : (arr_11 [2] [i_1] [2] [8])))))) ? ((+(((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [10] [i_0] [i_0] [i_0] [i_0]) : var_4)))) : var_1)))));
                    arr_21 [i_0] [i_1] = (((((var_2 ? (arr_16 [i_0] [4] [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]))) * (((arr_2 [i_2] [i_0] [i_2]) * var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
