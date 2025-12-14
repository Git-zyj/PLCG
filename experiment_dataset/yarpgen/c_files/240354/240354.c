/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 *= (((((-(arr_1 [0])))) - var_4));
        arr_3 [i_0] [i_0] = (~var_11);
    }
    var_15 = -var_2;
    #pragma endscop
}
