/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((min(77, (var_12 & var_8))) / (~var_9)))));
    var_15 = var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, ((min(var_5, var_4)))));
        var_17 = min(var_6, (((!var_5) ? (max(var_5, var_10)) : ((var_8 ? 246 : (arr_0 [i_0]))))));
        var_18 = (((-var_5 ? (min(var_0, (arr_1 [i_0] [i_0]))) : ((((arr_0 [11]) ? (arr_0 [i_0]) : 250))))) >= (((max(32767, -32764)))));
    }
    #pragma endscop
}
