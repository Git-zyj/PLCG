/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? ((~((4294967295 ? var_8 : 18)))) : var_0));
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        var_14 = (~-1529215832);
    }
    #pragma endscop
}
