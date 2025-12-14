/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_0;
    var_13 = var_8;
    var_14 = var_6;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = ((var_10 ? var_0 : ((min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 - 3]))))));
        var_16 *= 134209536;
    }
    #pragma endscop
}
