/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-2725716276436725396, ((((var_8 && var_3) ? (min(2147483642, 6559)) : ((var_6 ? 65535 : 6560)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = 65472;
        var_12 += 58978;
        var_13 = 6545;
        var_14 = ((arr_1 [i_0] [i_0]) ? ((58978 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : 58976))));
    }
    #pragma endscop
}
