/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 ^= var_7;
        arr_3 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = -var_3;
        arr_6 [i_1] [8] = arr_0 [i_1] [i_1];
    }
    var_22 = (max(((((((var_12 ? var_13 : var_7))) + 39279007))), var_5));
    #pragma endscop
}
