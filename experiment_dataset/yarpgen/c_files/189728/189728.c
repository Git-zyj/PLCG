/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 * (min((var_2 && var_14), (max(208, var_10))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 -= (((arr_1 [i_0] [i_0]) <= ((var_5 ? (arr_1 [i_0] [i_0]) : var_17))));
        var_20 = var_11;
    }
    var_21 ^= (min(((min(var_15, ((var_14 ? 4294967295 : 0))))), (((((max(var_11, var_1)))) & ((var_1 ? var_10 : 1))))));
    #pragma endscop
}
