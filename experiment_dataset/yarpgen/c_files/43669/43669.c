/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_18;
    var_21 = (min(((min(((var_7 ? var_19 : var_1)), var_1))), var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = (max((min(var_2, ((var_0 ? var_14 : var_14)))), ((max(var_18, var_19)))));
        var_23 = var_12;
        var_24 = (min((max(var_4, var_9)), ((min(var_14, var_1)))));
    }
    #pragma endscop
}
