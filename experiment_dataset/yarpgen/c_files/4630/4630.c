/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= (((((var_16 ? var_3 : var_15))) >> (((((arr_0 [i_0]) ? (arr_0 [i_0]) : 17)) - 24892))));
        var_19 -= max((((!((max((arr_1 [i_0]), 4131234785)))))), (((max(var_6, var_7)) << (-10762 + 10784))));
    }
    var_20 = (min(var_12, 1));
    #pragma endscop
}
