/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_17 ? (((var_10 - var_6) ? (~var_14) : -1948037132)) : ((min((((var_4 ? 1 : 1))), -2147483642)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);
        var_20 = (((((!2875430554316802624) ? var_4 : (((arr_0 [i_0] [i_0]) ? var_3 : (arr_0 [i_0 - 1] [3]))))) - (!1)));
    }
    #pragma endscop
}
