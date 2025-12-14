/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((2955621846 ^ var_9) | ((var_6 ? var_2 : var_3)))) ^ var_9))));
    var_12 |= var_9;
    var_13 = ((((((7039846783364173533 == var_3) ? (var_0 | 4294967295) : (((1 ? 1 : 37)))))) ? ((1 ? ((var_7 ? var_8 : var_7)) : var_7)) : (((0 ^ ((0 ? 2215478630 : var_4)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, ((((((((var_1 ? var_1 : 4294967269)) >> ((((var_10 ? 4204557999844349672 : var_10)) - 4204557999844349665))))) ? var_3 : ((var_4 + ((7039846783364173555 ? var_0 : var_2)))))))));
        var_15 = ((var_4 ? (1 ^ var_9) : (((((var_7 ? 1 : var_3))) ? ((var_6 ? 0 : var_2)) : 1))));
    }
    #pragma endscop
}
