/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 207;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (max(var_21, -32743));
        var_22 = (max(var_22, var_19));
    }
    #pragma endscop
}
