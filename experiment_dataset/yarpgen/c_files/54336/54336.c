/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 += ((~((-(arr_11 [i_3 - 1] [i_3 - 2] [5] [i_3 - 2])))));
                                var_11 = (min((!var_3), (max(3, (arr_11 [6] [i_1] [i_2] [i_0])))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_12 = (min(var_12, ((((~var_5) * ((((arr_6 [8]) * (arr_3 [i_0] [i_1])))))))));
                        arr_17 [3] [i_1] [i_2] [3] [8] [i_1] = (((arr_12 [i_0] [i_2 + 2] [1] [i_5 - 1] [i_0]) ? ((-var_7 ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : var_1)) : -var_6));
                        var_13 = (arr_7 [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_1] [12] [i_6] [i_1] = ((((arr_5 [i_1] [i_1]) ? -11353 : (((arr_2 [i_0]) ? var_7 : (arr_5 [i_6] [0]))))));
                        arr_22 [i_0] [i_1] [i_6] [i_6] [i_2] = arr_14 [i_0] [i_1] [i_2 + 1] [i_6] [i_2];
                        var_14 = ((((((arr_16 [5] [i_1] [i_2] [i_6]) ? ((((var_2 > (arr_3 [3] [i_0]))))) : (127 * var_3)))) ? -var_8 : (((((-(arr_8 [i_0] [i_0] [i_0] [i_0]))) >= ((((arr_20 [i_0] [i_0] [i_0] [i_0]) == (arr_2 [i_0])))))))));
                        var_15 = ((-(arr_13 [4] [i_1] [i_2] [i_2] [i_2] [i_6])));
                        var_16 = ((var_1 ? (arr_19 [i_0] [i_0] [i_6] [10]) : ((var_3 % (arr_11 [i_0] [i_6] [i_0] [i_6])))));
                    }
                    var_17 = (((((((arr_10 [i_2] [i_2 + 1] [i_2 - 1] [10]) / (arr_0 [i_0] [i_0]))))) ? 234 : ((max(((~(arr_18 [i_0] [i_1] [i_2] [i_2] [5]))), ((-(arr_0 [i_0] [i_0]))))))));
                    arr_23 [i_0] [i_0] [i_1] [i_2] = ((((((!(arr_15 [i_0] [i_1] [i_2] [i_0])))) - ((~(arr_10 [i_0] [i_0] [i_2] [i_0]))))) <= ((var_0 ? (arr_13 [0] [i_2] [3] [i_1] [3] [i_0]) : (((arr_8 [11] [i_0] [i_1] [i_2]) + (arr_4 [i_0]))))));
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = var_4;
    #pragma endscop
}
