/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 14;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = 14;
        arr_3 [i_0 + 1] = arr_0 [i_0];
    }
    #pragma endscop
}
