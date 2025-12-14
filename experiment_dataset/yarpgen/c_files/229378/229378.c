/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~((((max((arr_1 [i_0 - 1]), var_14))) ? var_16 : (((arr_1 [i_0]) - var_0))))));
        var_20 = 0;
        var_21 = var_9;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 -= -1632869919;
        arr_7 [i_1] = ((var_3 ? (arr_5 [i_1]) : var_4));
    }
    var_23 = (-2147483647 - 1);
    #pragma endscop
}
