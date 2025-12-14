/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? (((var_11 ? var_2 : var_14))) : (((((max(var_8, var_18)) < (((var_15 ? var_18 : var_4)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 *= ((~(max(var_7, var_13))));
                                arr_14 [i_4] [18] [i_1] [i_1] [i_0] [i_0] = (max((max((max(var_19, var_18)), ((((arr_5 [i_0] [i_1] [i_1]) ? var_4 : var_15))))), ((max(-6460212320354938773, 31)))));
                                arr_15 [i_0] [i_0] [i_0] [0] [12] &= (min((!var_0), ((((arr_4 [i_4] [i_3] [i_1]) && var_8)))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] = arr_4 [i_0] [i_0] [i_0];
                            }
                        }
                    }
                    var_22 = (((((-((var_12 ? var_1 : var_5))))) ? ((~(min((arr_5 [i_0] [i_1] [i_1]), (arr_1 [i_1]))))) : (!var_12)));
                }
            }
        }
    }
    var_23 = ((max(6460212320354938773, 1125899906842623)));
    #pragma endscop
}
