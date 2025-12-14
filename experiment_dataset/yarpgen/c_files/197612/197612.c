/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_4;
    var_13 = ((min((max(35990, var_8), var_5))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max((arr_1 [i_0]), -8));
        var_15 = ((min(((arr_1 [i_0]), 0))));
    }
    var_16 = (~var_2);
    #pragma endscop
}
