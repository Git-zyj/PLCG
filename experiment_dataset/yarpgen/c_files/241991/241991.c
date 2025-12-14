/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!var_1) ? (min(1, 3377699720527872)) : var_9)) * var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(16420807153736630747, -18));
                var_18 = 32700;
            }
        }
    }
    #pragma endscop
}
