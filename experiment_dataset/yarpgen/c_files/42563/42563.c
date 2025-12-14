/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 -= (8713131567930698189 > var_10);
                arr_6 [i_0] [15] [i_1] = min((~-var_0), (arr_0 [i_1] [i_0]));
            }
        }
    }
    var_16 -= var_1;
    var_17 = var_9;
    var_18 = min(((min(var_7, var_7))), ((var_7 ? var_11 : (max(281629168, var_6)))));
    #pragma endscop
}
