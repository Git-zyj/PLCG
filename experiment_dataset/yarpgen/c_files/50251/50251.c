/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (var_4 - -var_14);
        arr_2 [i_0] [2] = (var_9 - var_4);
    }
    #pragma endscop
}
