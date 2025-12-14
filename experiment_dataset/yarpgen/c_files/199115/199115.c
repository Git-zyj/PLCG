/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 ? var_8 : var_7));
    var_19 = (((((24 ? ((var_10 ? var_2 : var_6)) : ((min(11127, var_12)))))) ? (min(((1 ? var_17 : 0)), (var_16 > var_16))) : var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((((((~16384) ? var_7 : (min(var_13, (arr_2 [i_0])))))) ? ((((!(arr_3 [5] [i_0]))))) : ((~(((arr_2 [1]) * var_12))))));
        var_21 = 261722815;
    }
    #pragma endscop
}
