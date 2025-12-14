/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_3;
        var_12 = ((3362082436 && (arr_1 [i_0])));
        var_13 = (max(var_13, var_1));
    }
    var_14 = (min(var_6, var_10));
    var_15 = 79;
    #pragma endscop
}
