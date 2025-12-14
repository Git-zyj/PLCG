/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 && var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 *= (((var_9 / var_4) < (1 & var_6)));
        var_13 = 1;
    }
    var_14 = (max(var_0, (((var_4 >= 1) & 1))));
    var_15 = (((~2624) / (max(var_3, (var_1 & 0)))));
    #pragma endscop
}
