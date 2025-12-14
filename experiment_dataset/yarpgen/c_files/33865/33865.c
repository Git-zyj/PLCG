/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        arr_3 [i_0] = var_13;
        arr_4 [i_0] = 58914;
        arr_5 [i_0] = var_14;
    }
    #pragma endscop
}
