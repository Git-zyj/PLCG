/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min((((var_12 && ((min(var_10, var_8)))))), (((~1) ? var_6 : var_0))));
                var_17 = min(var_12, (arr_1 [i_0 - 1] [i_0]));
            }
        }
    }
    #pragma endscop
}
