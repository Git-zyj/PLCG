/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, (((((((~var_11) ? var_6 : var_1))) ? (~var_4) : 32758)))));
        var_14 = ((var_6 ? ((~((var_2 ? var_11 : var_5)))) : (((var_7 ? var_5 : var_7)))));
        var_15 = (!var_7);
        var_16 |= ((((!(!var_8))) ? (max(4, 4053042232)) : ((((((var_2 ? var_3 : var_3))) ? var_1 : ((var_6 ? var_3 : var_11)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((!(((var_0 ? var_1 : -32758)))));
        var_17 = ((var_2 ? (!var_1) : var_10));
        arr_6 [i_1] = var_0;
    }
    #pragma endscop
}
