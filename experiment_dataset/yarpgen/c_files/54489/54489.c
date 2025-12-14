/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));
    var_11 -= var_8;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 = var_9;
        var_13 = 140737488355328;
    }
    #pragma endscop
}
