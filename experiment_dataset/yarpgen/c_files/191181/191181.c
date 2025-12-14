/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 *= ((~(((var_7 ? (-127 - 1) : var_7)))));
        var_13 = arr_0 [i_0 + 2];
        var_14 = (min((((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : var_3)), (((arr_1 [i_0 - 1] [i_0 + 1]) ? var_0 : var_10))));
    }
    var_15 = var_8;
    var_16 = var_4;
    var_17 = (min(var_17, var_7));
    #pragma endscop
}
