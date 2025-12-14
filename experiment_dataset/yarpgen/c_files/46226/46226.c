/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_9, (((((min(var_5, var_12))) ? (((var_11 + 2147483647) >> (var_1 - 43376))) : ((var_8 ? var_6 : var_0)))))));
    var_14 = ((((var_0 ? var_2 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 2] [i_1] [i_2] [i_2 + 1] [i_2] = var_3;
                            var_15 = (arr_4 [i_1] [0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_4] [i_1] = ((((((arr_6 [i_0 - 2] [i_5]) ? ((var_7 ? var_8 : (arr_3 [i_0] [i_1] [i_6]))) : ((~(arr_18 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_6])))))) ? (((-(arr_21 [i_0 + 1] [i_4 + 1] [i_5 - 1] [5] [i_5 - 1])))) : ((((var_5 - (arr_10 [i_1] [i_5]))) >> (((min((arr_10 [i_1] [1]), (arr_10 [i_1] [1]))) - 1112467207624258908))))));
                                arr_25 [i_0] [i_1] [i_1] [i_5] [i_6] = ((~((~(0 && 3995946299)))));
                            }
                        }
                    }
                }
                var_16 = ((((arr_7 [i_1] [i_0 - 2] [i_0 - 1]) ? (arr_7 [i_1] [i_0 + 1] [i_0]) : (arr_9 [8] [i_0 - 1] [i_1 - 2] [i_1]))));
                arr_26 [i_1] = (((((~(arr_8 [i_0 - 2] [i_1])))) ^ ((~(~var_11)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_8] = ((~((var_4 ? (((arr_4 [i_1] [9]) ? var_4 : var_10)) : (arr_29 [i_0 + 1] [i_1] [i_7] [i_8])))));
                            var_17 = (max(var_17, ((min((((-(((arr_8 [i_0] [i_1]) ? var_4 : var_8))))), ((((max(var_9, (arr_8 [10] [10])))) ? (((arr_30 [i_0] [i_7]) * var_5)) : (min(var_4, (arr_1 [i_0 + 1] [i_7 - 1]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((299020997 ? var_5 : var_8));
    #pragma endscop
}
