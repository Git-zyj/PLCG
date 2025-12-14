/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((((var_5 || (arr_9 [i_3 + 2] [i_2 - 1] [i_4 - 1] [i_3 + 1] [i_4]))) || (50598 || 26089)));
                                var_17 = (((((arr_0 [i_0]) / var_12)) * (var_12 % var_11)));
                                arr_13 [5] [4] [i_0] [4] [4] = (-51 < -27);
                            }
                        }
                    }
                }
                arr_14 [i_0] [1] = ((-631313874 ? -1 : (((-123 + 866) - 1))));
                arr_15 [i_0] [i_0] [i_0] = (!((((arr_9 [i_1] [i_1 + 1] [i_0] [i_0 + 2] [i_0 - 2]) << (((arr_9 [i_0 + 1] [i_1 + 4] [i_0] [i_0] [i_0 + 1]) - 3844963619))))));
            }
        }
    }
    #pragma endscop
}
