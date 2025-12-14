/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_2;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_15 += -var_8;
        arr_3 [i_0 + 1] = ((var_8 >> (-8 + 20)));
    }
    var_16 = 66;
    var_17 = 2059289058;
    #pragma endscop
}
