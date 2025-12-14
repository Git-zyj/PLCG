/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((var_8 ? ((var_4 ? var_2 : -5373467131124852819)) : (((13909 ? 0 : var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
