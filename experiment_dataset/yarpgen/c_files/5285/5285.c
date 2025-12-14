/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = ((~((-((~(arr_1 [i_0])))))));
        arr_2 [i_0] = var_1;
    }
    var_12 -= var_1;
    var_13 = var_8;
    #pragma endscop
}
