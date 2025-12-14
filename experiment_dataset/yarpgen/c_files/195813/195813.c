/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (min(var_15, var_14));
        var_16 = (max(var_16, ((-100 ? 2 : 4294967293))));
    }
    var_17 = (max(var_13, var_0));
    #pragma endscop
}
