/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = max(var_9, (min(var_18, var_5)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_23 = (min((min((((~(arr_0 [i_0])))), (max(var_18, var_12)))), ((max((arr_0 [2]), (arr_0 [i_0]))))));
    }
    #pragma endscop
}
