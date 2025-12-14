/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((((!var_0) ? 186 : var_3))) ? -2115315650 : var_7));
    var_21 = ((66768001 | ((((max(var_6, var_17))) ? var_8 : var_2))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_22 -= (((2115315650 & (arr_0 [i_0] [i_0]))));
        var_23 |= (arr_1 [i_0 + 3]);
    }
    #pragma endscop
}
