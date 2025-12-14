/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = ((var_11 ? -var_13 : var_18));
    var_22 = ((((max(var_12, var_13)))) % 65512);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 ^= var_1;
        arr_4 [i_0] = (!var_16);
    }
    var_24 &= (((var_1 ? (max(var_0, 64)) : (((max(1, 1)))))));
    #pragma endscop
}
