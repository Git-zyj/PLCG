/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 = ((var_1 ? var_3 : var_10));
        arr_2 [i_0] = 38028;
        arr_3 [11] [i_0] = (469708516 ? var_11 : 2736712982868976863);
    }
    var_15 = var_6;
    var_16 = var_4;
    #pragma endscop
}
