/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_4;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 &= ((4294967295 - (arr_0 [i_0 + 2])));
        var_16 += var_0;
    }
    var_17 = ((var_3 ? var_10 : var_2));
    var_18 -= var_2;
    #pragma endscop
}
