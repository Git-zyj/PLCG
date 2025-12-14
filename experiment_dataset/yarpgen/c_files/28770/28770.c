/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = min(((1 ? 0 : 7003456359411859608)), ((min((min(-26722, (arr_3 [i_0]))), ((0 ? var_0 : (-127 - 1)))))));
        var_15 = (min(var_15, ((((((-(arr_2 [i_0])))) + -var_12)))));
    }
    var_16 = var_1;
    #pragma endscop
}
