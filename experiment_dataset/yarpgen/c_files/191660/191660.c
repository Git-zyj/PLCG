/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = ((((((arr_0 [i_0]) ? var_9 : var_5))) ? ((var_2 ? 1421850599 : 2873116697)) : 2873116690));
        var_12 = ((~(arr_1 [i_0 + 1])));
    }
    var_13 = (min(var_13, var_6));
    #pragma endscop
}
