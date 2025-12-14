/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [2] |= 1;
        var_19 = var_9;
    }
    var_20 = (min(var_20, 1));
    #pragma endscop
}
