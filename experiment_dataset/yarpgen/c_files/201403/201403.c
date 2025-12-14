/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!216);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [4] &= (!216);
        arr_4 [i_0] = (arr_1 [6]);
    }
    #pragma endscop
}
