/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = -var_6;
        var_17 *= (arr_0 [i_0] [i_0]);
    }
    var_18 = ((max(var_9, (3621798626764093910 / 3693406879))));
    #pragma endscop
}
