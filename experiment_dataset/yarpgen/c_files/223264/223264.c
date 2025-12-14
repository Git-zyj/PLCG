/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, ((((~(arr_0 [i_0] [i_0])))))));
        var_22 += ((((((arr_1 [i_0]) * var_8))) && var_16));
        var_23 = var_8;
    }
    var_24 = ((((min(var_12, (13948566558810914765 ^ 11154018424800499654)))) ? ((var_3 ? var_0 : var_4)) : ((min(((var_4 ? var_2 : var_2)), var_15)))));
    var_25 = -var_16;
    #pragma endscop
}
