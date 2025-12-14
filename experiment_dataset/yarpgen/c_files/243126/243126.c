/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 3726996297;
        arr_4 [i_0] = ((var_4 ^ ((1894595912 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 3])))));
        arr_5 [i_0] = ((((max(0, -11937))) ? (((-4777987500049017883 ? 1894595912 : 1894595912))) : (((((arr_0 [i_0 - 1]) && var_0)) ? var_12 : (arr_0 [i_0 + 1])))));
    }
    var_19 = (!655514481);
    #pragma endscop
}
