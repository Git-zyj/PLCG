/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (2147483647 % 1);
        var_13 = (max(var_13, (~2147483647)));
    }
    var_14 = (max(var_14, 1));
    var_15 = (max(var_15, var_1));
    #pragma endscop
}
