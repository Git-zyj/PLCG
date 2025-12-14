/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = var_11;
        var_13 &= -var_2;
    }
    var_14 &= var_4;
    #pragma endscop
}
