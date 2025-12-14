/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_3, (min(((var_5 ? var_9 : var_8)), 1))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = 2050998404;
        var_18 = -17179397187867623862;
        var_19 -= ((var_3 ? ((min((arr_1 [4]), 24))) : ((((min(var_8, var_0))) ? ((~(arr_2 [1]))) : (21 || -21347)))));
    }
    #pragma endscop
}
