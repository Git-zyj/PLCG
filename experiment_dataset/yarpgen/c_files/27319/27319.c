/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_10 ? var_6 : var_6)), ((min(var_4, (var_6 <= var_5))))));
    var_12 = ((var_7 & (min(((var_1 ? var_4 : var_6)), var_7))));
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((var_7 ? (arr_1 [i_0] [i_0]) : (((var_8 ? var_2 : var_4)))));
        var_15 = var_8;
    }
    #pragma endscop
}
