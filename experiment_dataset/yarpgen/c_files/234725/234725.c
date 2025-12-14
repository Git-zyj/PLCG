/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((var_8 ? (((4152894198 ? var_9 : 1))) : (min(var_2, var_15))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (0 ? var_10 : 61);
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), 2058122088021710796));
    }
    #pragma endscop
}
