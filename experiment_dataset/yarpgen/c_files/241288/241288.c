/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(var_18, var_15));
        var_19 = (arr_1 [0] [i_0]);
        var_20 = (162 ^ -931235488);
    }
    var_21 = var_2;
    var_22 = (((1 - 255) ? ((var_1 ? -var_10 : var_17)) : var_2));
    #pragma endscop
}
