/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = (arr_2 [i_0 + 1]);
        var_16 = (min(var_16, var_2));
        var_17 = ((-(arr_0 [i_0] [i_0 - 1])));
    }
    var_18 = ((77 ? 77 : 264241152));
    var_19 = (((((var_7 ? var_1 : -9085172259550088877))) / ((((min(var_1, -128))) / 17466))));
    var_20 &= (!45);
    #pragma endscop
}
