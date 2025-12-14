/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = ((-((-(var_1 && 234)))));
        var_13 = 30;
    }
    #pragma endscop
}
