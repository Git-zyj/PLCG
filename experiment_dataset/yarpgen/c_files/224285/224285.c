/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_0);
    var_16 &= var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 += ((20494 ? (arr_2 [i_0] [i_0]) : 45042));
        var_18 = var_9;
        var_19 ^= var_4;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = var_2;
        var_20 = (max(var_20, var_2));
        var_21 = (max(var_21, var_7));
    }
    var_22 = -var_0;
    #pragma endscop
}
