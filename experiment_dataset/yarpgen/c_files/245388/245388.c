/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = (((max(0, (max((arr_1 [i_4 + 2] [i_4 + 2]), (arr_6 [7]))))) != (((-(76 > 127))))));
                                arr_14 [i_0] [8] [i_2] [i_0] [i_4] [4] &= (((((~((max(var_8, 62)))))) ? (((arr_12 [6] [i_4 + 1] [i_4 + 2] [6] [i_4 + 1]) ? ((max((arr_4 [i_0] [i_0] [i_0] [i_0]), var_1))) : ((-30320 ? (arr_0 [i_0] [i_1]) : var_6)))) : (((-((var_4 ? var_11 : -86)))))));
                                var_13 &= ((max(16384, var_5)));
                                var_14 = (max(((var_3 ? (arr_8 [i_0] [i_4 - 1] [i_1] [i_4 - 1]) : var_5)), (((((var_10 ? 1 : (arr_13 [i_1] [i_1] [i_1]))) != var_8)))));
                            }
                        }
                    }
                }
                var_15 = (arr_5 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_16 = ((((max(-var_4, 76))) - ((var_1 ? var_2 : (((var_7 ? -1 : var_5)))))));
    #pragma endscop
}
