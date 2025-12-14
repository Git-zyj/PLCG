/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (max((max((arr_1 [i_0] [i_0]), 2737245457482276293)), var_5));
        arr_2 [18] [0] = ((+(((arr_0 [i_0]) / -711171827))));
        var_18 = 26486;
    }
    var_19 = (min(var_6, var_9));
    #pragma endscop
}
