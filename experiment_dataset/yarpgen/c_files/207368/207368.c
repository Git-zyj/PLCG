/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max((max(var_9, 6555734719336427164)), (~var_1))), ((((var_9 % var_5) ? (537349702 != var_2) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = 4000641219;
                var_12 = (arr_4 [2]);
            }
        }
    }
    #pragma endscop
}
