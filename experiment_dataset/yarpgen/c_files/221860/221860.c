/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((var_3 ? ((var_14 ? var_1 : var_9)) : var_12)), (max(234881024, (min(var_6, 4294967295)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 2545984794;
                arr_8 [i_0] = 4294967295;
                arr_9 [i_0] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = min((min((923689420 | 3028879958), (max(2509879690, var_5)))), (min((min((arr_15 [i_4] [i_3] [i_3] [7] [7] [9] [i_0]), (arr_11 [i_0] [i_2] [i_0] [i_0]))), (arr_5 [i_0] [i_0]))));
                                var_17 = ((arr_0 [i_1] [i_0]) ? (((((arr_5 [i_3] [i_4]) <= 1513610165)) ? var_11 : (((arr_2 [i_2]) & var_2)))) : ((((((var_7 ? (arr_12 [i_0] [i_0]) : (arr_4 [i_2] [i_0]))) < 2725981601)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_7 ? var_1 : (min(var_13, var_5))));
    #pragma endscop
}
