/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, var_1));
        var_14 = (max(var_14, (~-9579773514184923588)));
    }
    var_15 = (max(var_15, ((((~242) * (!var_1))))));
    #pragma endscop
}
