/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (((arr_0 [i_0]) ? 2147483638 : ((var_4 - (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [13] [i_1] [i_1] = (((arr_8 [i_0] [i_1] [i_2] [i_3 - 2] [i_1]) ? ((max((arr_8 [i_0] [i_0] [i_2] [i_3] [i_1]), (arr_8 [i_1] [i_2] [10] [i_1] [i_1])))) : (arr_8 [i_0] [6] [i_0] [i_2] [i_1])));
                            var_12 = (min(var_12, ((((!1) ? (((55 || (!0)))) : 1)))));
                            arr_11 [i_1] [4] [4] [i_3] = (max((((arr_5 [i_1] [i_3] [i_3] [i_1]) / (arr_5 [i_1] [i_3] [i_2] [i_1]))), (arr_5 [i_1] [i_1] [i_1] [i_1])));
                            arr_12 [i_1] = var_7;
                            arr_13 [i_1] [12] [i_2] [9] [i_1] [i_1] = (arr_1 [i_1]);
                        }
                    }
                }
                var_13 += (arr_2 [8] [8]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_5] [i_4] = ((((arr_5 [i_5] [i_4 + 2] [i_4 + 1] [i_4 + 3]) ? (arr_19 [i_5] [i_4 + 1]) : (arr_19 [i_5] [i_4 + 2]))));
                    arr_23 [i_4] [i_4] [i_5] [i_5] = ((var_6 ? (((arr_8 [i_4] [9] [i_6] [i_5] [i_5]) ? (arr_8 [i_4] [10] [i_4] [i_4] [i_5]) : (arr_8 [i_4 + 2] [9] [i_5] [i_5] [i_5]))) : (((~58) ^ (arr_21 [i_4] [6] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
