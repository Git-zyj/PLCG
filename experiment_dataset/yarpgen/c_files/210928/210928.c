/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max((((((var_10 ? var_15 : var_4))) ? var_14 : var_6)), (((var_16 ? var_0 : (var_3 || 0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 -= ((17740066094260327997 >> (16368942905906050347 - 16368942905906050335)));
        arr_2 [i_0] [i_0 + 1] = 40;
        var_19 ^= ((~((~(arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_20 = max((arr_3 [i_1 - 1]), (((!(arr_3 [i_1])))));
        var_21 = (max(var_21, var_6));
    }
    var_22 = (max(504288453, (min(var_12, (max(var_11, var_6))))));
    var_23 = var_12;
    #pragma endscop
}
