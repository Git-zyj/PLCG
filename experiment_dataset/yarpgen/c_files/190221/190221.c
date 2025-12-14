/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_5 / var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = (((var_0 % var_16) / (min((-9223372036854775807 - 1), var_7))));
                            var_20 = ((var_17 && ((max(var_3, var_14)))));
                        }
                    }
                }
                var_21 = var_9;
            }
        }
    }
    var_22 = (max(var_22, var_0));
    #pragma endscop
}
