/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 ^= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = var_3;
        arr_5 [i_1] = var_11;
        arr_6 [i_1] = (arr_4 [i_1]);
    }
    var_23 = var_19;
    #pragma endscop
}
