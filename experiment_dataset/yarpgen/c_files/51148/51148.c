/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((-763830883180945051 ^ 19986) ? (var_0 ^ var_1) : (var_8 <= var_1))), var_10));
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, (~127)));
        var_15 = 45537;
        arr_3 [i_0] = -32;
    }
    var_16 = var_6;
    #pragma endscop
}
