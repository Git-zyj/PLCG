/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_9);
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 *= ((((1 ? -var_11 : ((-(arr_1 [i_0]))))) % (max(var_9, var_8))));
        var_15 = (min(var_15, ((((max(0, 1)) && (((-(!21241)))))))));
    }
    #pragma endscop
}
