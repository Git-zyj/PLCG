/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((((!(var_8 >> 1)))), (((min(var_8, var_11)) << (var_19 - 7799802204491306201))));
    var_21 = ((!(((((min(0, var_16))) ? (1938661638 || 10516) : (~-69))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = (((1 ^ (arr_1 [i_0]))));
        var_23 = (arr_1 [i_0]);
    }
    #pragma endscop
}
