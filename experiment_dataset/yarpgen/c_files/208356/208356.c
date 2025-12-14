/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-18010 ? var_7 : var_13))));
    var_18 = (-(min((var_4 | var_6), 29315)));
    var_19 = ((~((((var_10 ? 5 : var_12))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (var_3 - var_10);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = ((var_16 ^ (var_11 | 20)));
            var_22 *= (!var_5);
            var_23 += (~20);
        }
        var_24 = ((var_11 ? ((var_1 ? var_0 : var_13)) : (var_8 + 1)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_25 += var_16;
        var_26 += ((max((!var_6), (max(var_9, 29307)))));
        var_27 ^= (((!var_15) / (((max(4, var_2))))));
    }
    #pragma endscop
}
