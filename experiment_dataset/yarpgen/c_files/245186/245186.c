/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((var_12 ? ((((!((max(78, 65))))))) : (min((!1011085855), ((185 ? 4294967281 : var_17))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 += ((!(arr_1 [10])));
        var_20 = (arr_3 [i_0 + 1] [i_0]);
    }
    #pragma endscop
}
