/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_18 |= (max(-1621979243, (((arr_0 [i_0 - 2]) << (((arr_0 [i_0 - 2]) - 78))))));
        var_19 = 22;
    }
    var_20 = ((((max(var_5, var_15))) / (max(var_15, ((var_13 ? var_0 : var_16))))));
    var_21 = var_5;
    var_22 = ((((((var_1 ? var_5 : var_15)) ^ var_0)) >> (32767 - 32767)));
    #pragma endscop
}
