/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_11 = ((~(((min(var_3, var_6)) * (((max((arr_1 [i_0]), var_5))))))));
        var_12 = (max(var_12, (((~(-32767 - 1))))));
    }
    #pragma endscop
}
