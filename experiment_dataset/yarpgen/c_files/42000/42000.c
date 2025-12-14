/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_15 ^ (var_17 | var_9))));
    var_20 = (min(var_20, ((min((((5210971295269272883 / -997328819) & -var_7)), var_11)))));
    var_21 -= (((((!(var_12 < var_1)))) << (((((var_16 ? var_7 : var_13))) - 16548))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 -= (((((arr_2 [i_0 + 3] [i_0 + 2]) + 2147483647)) << (((arr_1 [i_0 + 3]) - 1))));
        var_23 = var_12;
        var_24 = (arr_2 [i_0] [i_0 - 1]);
    }
    var_25 = ((min(var_13, ((0 ? var_7 : 20418)))));
    #pragma endscop
}
