/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] = arr_1 [i_0];
    }
    var_11 = var_0;
    #pragma endscop
}
