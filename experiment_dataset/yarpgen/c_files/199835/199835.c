/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = var_7;
        var_11 = (max(var_11, var_8));
        arr_3 [i_0] [i_0] = ((var_9 ? 768897105 : 4044967470));
    }
    var_12 = var_5;
    #pragma endscop
}
