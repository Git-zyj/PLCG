/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (max(var_11, -1715642100));
    var_14 = ((var_5 ? var_4 : var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 4607;
        var_16 = 30296;
    }
    #pragma endscop
}
