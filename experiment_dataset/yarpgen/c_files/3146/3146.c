/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((var_7 ? ((max(-7343181992078122184, 30))) : ((var_3 ? var_5 : var_7)))) > var_7));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((-1 ? -22 : 13)) % 40));
        var_14 = (((arr_1 [i_0 - 2]) / (arr_0 [i_0 - 1])));
        var_15 -= (!var_11);
        var_16 = var_2;
        var_17 ^= arr_0 [i_0];
    }
    #pragma endscop
}
