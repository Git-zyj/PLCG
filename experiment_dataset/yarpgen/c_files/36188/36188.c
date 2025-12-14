/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_8, var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = ((((min(var_0, (~var_0)))) ? (((((var_6 ? var_4 : var_1)) % var_7))) : (var_5 | 150)));
        var_13 = ((((min(var_1, (max(-1, var_2))))) < ((var_10 ? var_2 : (min(var_1, 13536803153891417095))))));
        var_14 ^= ((var_3 * (var_5 * var_7)));
        var_15 ^= (((((var_5 ? var_1 : var_1))) ? var_5 : var_1));
    }
    #pragma endscop
}
