/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_10, (max(var_8, var_14))))) ? var_15 : var_15));
    var_19 = ((((1 ? (var_14 && var_14) : (var_15 || 49152)))) ? (!var_9) : (((((min(var_11, var_7))) && 65535))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_20 += (((((var_6 ? (127 ^ 1) : 112))) | (max((min(-1, -7)), (arr_1 [i_0 + 2])))));
        var_21 |= var_5;
    }
    #pragma endscop
}
