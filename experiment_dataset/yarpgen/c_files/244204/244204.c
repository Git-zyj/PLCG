/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((var_2 ? var_0 : var_6)))));
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = var_4;
        var_13 *= (!((106 <= (arr_0 [i_0]))));
        var_14 *= ((~((var_8 << (((arr_1 [i_0 - 1]) - 937775176079097359))))));
    }
    var_15 |= ((var_7 ? var_4 : var_0));
    #pragma endscop
}
