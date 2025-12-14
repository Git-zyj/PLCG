/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 18516;
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 -= (((var_12 ^ var_16) ? ((var_7 ? 320258222 : (min(var_5, 320258241)))) : (((arr_0 [i_0]) ^ ((18502 + (arr_1 [i_0])))))));
        var_21 = ((!(arr_1 [i_0])));
    }
    var_22 = var_10;
    #pragma endscop
}
