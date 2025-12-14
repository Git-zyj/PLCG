/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (~15762598695796736);
    var_11 = var_2;
    var_12 = ((min((min(1, var_5), 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 -= var_4;
                arr_6 [2] [1] = var_9;
            }
        }
    }
    #pragma endscop
}
