/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) < (arr_0 [i_0])));
        var_21 = (min(var_21, var_0));
    }
    #pragma endscop
}
