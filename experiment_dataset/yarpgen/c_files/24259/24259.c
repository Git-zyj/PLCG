/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((var_9 ? var_3 : ((var_12 ? var_9 : var_13))))), ((var_13 ^ (max(var_4, var_0)))));
    var_15 = (min(970776393, (((!((max(-1864584787, var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max((((!((min(6863353214519090073, 1)))))), var_4));
                arr_5 [i_1] [i_0] = (max((min(0, 5873588115532719953)), ((((0 ^ 0) ^ 1)))));
            }
        }
    }
    #pragma endscop
}
