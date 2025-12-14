/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 && var_8) << var_9)));
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (min(((-(~var_0))), ((max(((var_3 ? 0 : (arr_1 [i_0]))), var_7)))))));
        var_14 = (min(((((arr_0 [i_0 + 1] [i_0 + 4]) + var_8))), ((var_5 ? (arr_0 [i_0 - 1] [6]) : var_10))));
    }
    #pragma endscop
}
