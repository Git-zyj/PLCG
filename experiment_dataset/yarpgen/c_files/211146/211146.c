/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_1;
    var_15 = 103;
    var_16 = (max((((-var_11 % ((var_12 ? var_0 : var_7))))), var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 *= 1639510393;
        var_18 = (min(var_18, ((((~0) ^ ((((arr_0 [i_0]) ? ((max((arr_2 [i_0]), 1))) : (~1)))))))));
        arr_3 [1] = 4294967295;
    }
    #pragma endscop
}
