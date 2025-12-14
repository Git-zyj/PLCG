/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-var_3 ? ((var_0 ? var_5 : var_3)) : ((min(1, 65535)))))) ? (6 + var_4) : (var_4 / var_5));
    var_11 += var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (!((((min(32766, 1))))));
        var_13 = ((~((~(~var_1)))));
    }
    #pragma endscop
}
