/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_18 *= (arr_3 [i_0 - 2] [i_0 - 2]);
        var_19 *= ((-1712 % (((arr_1 [i_0 + 1] [i_0]) ? var_16 : 16))));
        var_20 |= (var_11 ? var_1 : var_15);
        var_21 ^= ((-var_4 ? var_5 : (arr_0 [i_0 + 1])));
    }
    #pragma endscop
}
