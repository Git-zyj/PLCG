/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min((min(1128013207, var_15)), (max((arr_2 [i_0]), (-4 & var_4)))));
        arr_4 [i_0] = ((max(((var_17 ? (arr_1 [i_0]) : var_16)), var_4)));
    }
    #pragma endscop
}
