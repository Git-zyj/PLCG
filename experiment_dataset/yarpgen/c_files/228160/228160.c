/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? var_17 : (101 + 16977)));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_21 += (min(((-82 ? 243 : 528251380021395482)), (var_2 / var_18)));
        var_22 ^= ((((min(var_0, 146))) <= (~0)));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [8] = (arr_3 [i_1]);
        var_23 = (min(-1, (min(251, ((3779073905 ? 994278393 : var_19))))));
    }
    var_24 |= var_3;
    var_25 = ((0 ? -1 : 52220));
    var_26 = min(((min(0, -57))), (((2975260519 ? -122 : var_14))));
    #pragma endscop
}
