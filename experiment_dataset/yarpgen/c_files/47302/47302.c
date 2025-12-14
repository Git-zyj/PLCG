/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? 3513032354 : (((max(var_0, 781934942)) & (min(var_8, -1633992277393701968))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (max(var_18, ((max((arr_0 [10]), ((~((21597 >> (541165879296 - 541165879294))))))))));
        var_19 |= ((var_10 & (((max((arr_1 [i_0]), 1))))));
    }
    var_20 = 4560;
    #pragma endscop
}
