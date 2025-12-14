/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_2 ? -var_1 : var_0)))));
    var_14 = var_6;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = 18446744073709551609;
        var_16 = ((~(min(var_0, (-70 - var_0)))));
    }
    #pragma endscop
}
