/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_18;
    var_21 = var_15;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((116 ? (~var_14) : 1))) & var_12)))));
        var_23 = (min(var_23, (((((((((~(arr_1 [i_0 + 2] [i_0 - 1])))) ? (min(var_0, var_7)) : var_19))) ? (((((!(arr_0 [i_0])))))) : 1)))));
        var_24 = (max(var_24, (((((var_10 & (((-(arr_1 [i_0 + 1] [i_0])))))) == (((arr_1 [i_0 - 1] [i_0]) ? (~var_10) : (arr_0 [i_0 + 3]))))))));
    }
    var_25 = (((~-117) ? 1 : ((var_13 ? var_19 : 5))));
    #pragma endscop
}
