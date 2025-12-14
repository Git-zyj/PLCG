/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] &= min(((var_8 ? (min(var_0, var_5)) : var_1)), (var_6 / var_8));
                            var_14 *= (((((min(var_4, var_6)) ? (min(var_11, var_7)) : var_4))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] = ((((((max(var_1, var_6))) ? ((min(var_3, var_8))) : (min(var_8, var_2))))) ? ((min(var_8, var_3))) : (max((min(var_1, var_7)), var_3)));
            }
        }
    }
    #pragma endscop
}
