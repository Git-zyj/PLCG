/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (((-((var_2 ? var_16 : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = min(((min(var_8, var_9))), (arr_8 [i_0] [i_0 + 3] [i_0]));
                    var_23 = 14;
                }
            }
        }
    }
    var_24 = ((var_7 | ((max(var_8, 0)))));
    #pragma endscop
}
