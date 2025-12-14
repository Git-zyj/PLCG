/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((((var_8 * 14980305594861456640) << (-var_8 - 7937105126562120489)))) ? 95 : (((((min(var_0, var_11)))) | (min(var_3, 9510))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((2147483647 << (64 - 64))));
        arr_4 [i_0] [i_0] = (((((-2147483647 - 1) ^ 1852972142))) && 1);
    }
    #pragma endscop
}
