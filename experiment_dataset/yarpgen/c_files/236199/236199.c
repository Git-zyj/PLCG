/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = ((~(!var_8)));
        var_12 = ((-((var_5 ? var_10 : var_2))));
    }
    var_13 = (max((min((min(var_8, var_1)), var_4)), var_4));
    #pragma endscop
}
