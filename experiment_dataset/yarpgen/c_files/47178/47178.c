/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_8;
    var_21 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_1;
        var_22 = var_18;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_23 |= max((arr_0 [i_1 - 3]), (arr_1 [i_1] [i_1]));
        arr_6 [8] |= var_15;
    }
    #pragma endscop
}
