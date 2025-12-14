/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((var_4 & (min(var_8, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= ((((-(min(1899100419, var_5)))) <= (((min((var_1 < 1899100419), var_6))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_3] [7] = ((((((!var_6) ? var_4 : (arr_11 [i_2] [i_2])))) ? ((var_2 & (arr_8 [i_0] [i_2] [i_4]))) : (min((((var_5 ? -26175 : var_7))), ((-3613837306972142247 ? var_2 : (arr_11 [i_0 - 2] [i_2])))))));
                                var_15 -= ((((((var_12 | var_5) ^ ((var_9 ? var_5 : var_9))))) ? var_5 : var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
