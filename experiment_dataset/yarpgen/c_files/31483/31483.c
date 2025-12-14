/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (~32767);
        var_18 = var_9;
    }
    var_19 &= var_4;
    var_20 = var_13;
    var_21 = var_6;
    #pragma endscop
}
