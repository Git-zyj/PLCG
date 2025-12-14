/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [13] [5] [17] [2] [8] [6] [9] = (max(((((arr_7 [2] [i_0 + 2] [1] [1]) ? var_4 : (-127 - 1)))), ((((32767 ? 1 : (arr_6 [1] [14] [17] [7]))) + ((max((arr_2 [5] [13] [15]), 2175967507)))))));
                                var_16 = (min(var_16, ((((arr_9 [i_4] [0] [1] [12] [0]) ? ((((((arr_1 [5] [13]) ? (arr_11 [1] [2] [1] [5] [2]) : 0))) ? (min((arr_0 [1] [13]), (arr_3 [0] [1]))) : var_14)) : (var_12 / -var_5))))));
                                arr_14 [11] [6] = ((~((max(var_10, (arr_0 [i_0 + 2] [i_0 + 1]))))));
                                arr_15 [13] [1] [7] [17] [5] = (max((28028 / 5687), (((arr_11 [i_0 - 2] [5] [4] [i_1 - 1] [6]) ? (arr_11 [i_0 + 1] [9] [1] [i_1 - 1] [13]) : var_15))));
                                arr_16 [14] [16] [14] [6] [1] [1] = -5;
                            }
                        }
                    }
                    arr_17 [1] [14] [6] = 2040;
                    arr_18 [6] [13] [1] = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [13] [1] [3] [0] [i_5] = var_5;
                                var_17 -= ((((((arr_9 [i_0 + 1] [i_0 - 1] [1] [i_0 - 1] [i_1 - 2]) | (arr_9 [i_0 + 2] [i_0 - 2] [1] [i_0 + 2] [i_1 + 1])))) ? (-127 - 1) : (max((arr_9 [i_0 + 2] [i_0 + 2] [11] [i_0 - 1] [i_1 - 3]), (arr_11 [1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [1])))));
                                arr_24 [15] [i_5] [1] [5] [6] = (251 ? (((4 ? 77 : var_4))) : var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((var_11 == var_9) ? (max(511, var_6)) : ((((var_9 == ((var_8 ? var_15 : 32766))))))));
    #pragma endscop
}
