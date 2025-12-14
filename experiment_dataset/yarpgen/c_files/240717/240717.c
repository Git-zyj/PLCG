/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max(var_12, (!1)));
        var_13 = (min(var_13, var_0));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 += (min((var_11 <= 1), (min((min(9223372036854775807, 1)), var_10))));
        var_15 ^= ((1 ? 1 : 1));
        var_16 *= (!137);
    }
    var_17 = (max(var_17, var_9));
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
