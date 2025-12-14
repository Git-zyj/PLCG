/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [4] |= ((var_0 > ((var_5 ? var_12 : var_8))));
        var_14 = (arr_2 [i_0 + 1]);
    }
    var_15 = ((var_1 ? var_4 : var_5));
    var_16 &= ((((var_4 >> (var_3 - 155))) / var_7));
    #pragma endscop
}
