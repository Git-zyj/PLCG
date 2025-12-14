/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = var_13;
        arr_2 [i_0 - 3] = 3429695064035348975;
        var_16 += ((-(!9223372036854775807)));
    }
    #pragma endscop
}
