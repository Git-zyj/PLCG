/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = -106;
        arr_5 [i_0] [i_0] = (3541912850 - var_19);
    }
    #pragma endscop
}
