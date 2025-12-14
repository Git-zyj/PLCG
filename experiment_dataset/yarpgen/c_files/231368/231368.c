/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 2031616;
    var_15 = var_4;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, (((((0 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_1 [18]))) - (arr_0 [i_0 + 1] [i_0 - 1]))))));
        var_17 = (((~2147483647) ^ ((((max(var_7, var_7))) | (~0)))));
        arr_3 [i_0] = (max((!-1), (((arr_1 [i_0]) || (var_0 && var_10)))));
        var_18 = ((((((var_10 ? 12 : var_1) >= var_9)))));
        var_19 = (~-var_9);
    }
    #pragma endscop
}
