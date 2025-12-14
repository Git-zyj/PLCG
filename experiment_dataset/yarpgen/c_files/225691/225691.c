/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 -= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (max(var_23, (arr_4 [i_1])));
        var_24 *= (arr_1 [i_1] [i_1]);
    }
    var_25 = var_16;
    var_26 = var_9;
    var_27 = var_8;
    #pragma endscop
}
