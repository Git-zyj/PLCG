/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 65511));
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((((65525 != 65511) + (max(var_3, 24)))), ((59570 ? 65511 : (~65496)))));
        var_21 = max(var_12, (((25 ^ (arr_1 [i_0])))));
        var_22 ^= (min(((max(17320, 2178495493))), (~var_1)));
        var_23 += (((-127 - 1) / ((var_10 ? var_17 : 65520))));
    }
    #pragma endscop
}
