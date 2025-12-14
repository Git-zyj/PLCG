/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (((((1023 ? (arr_0 [8]) : (arr_0 [i_0]))) << (-1 + 8))));
        arr_2 [i_0] = (!8808160230473681211);
    }
    var_13 = var_9;
    #pragma endscop
}
