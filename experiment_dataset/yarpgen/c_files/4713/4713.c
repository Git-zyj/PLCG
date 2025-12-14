/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (((max((arr_1 [i_0 + 2]), 61958))) ? (max(1, (((arr_0 [i_0]) ? (arr_1 [i_0]) : 856108754181259284)))) : 13690);
        var_16 = ((-4294967295 || (((min(51844, 856108754181259302))))));
    }
    #pragma endscop
}
