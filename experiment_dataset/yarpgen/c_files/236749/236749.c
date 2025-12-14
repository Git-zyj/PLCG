/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~(((!(((var_4 ? var_13 : var_7)))))));
    var_19 = ((var_9 ? ((((1 ? 34359738367 : var_13)))) : (max((!var_17), (~var_0)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 = var_8;
        var_21 = (max(var_21, var_0));
        var_22 = (min(var_22, ((((((0 ? var_0 : 34359738340))))))));
        var_23 = ((-(((arr_0 [i_0 + 1] [i_0 + 1]) | -34359738367))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_24 = (min(var_24, ((max(1, var_5)))));
        arr_4 [1] &= ((-(max(var_15, (((!(arr_3 [i_1]))))))));
        var_25 = (max((((arr_3 [i_1 + 1]) ? ((((arr_3 [i_1]) ? var_2 : (arr_3 [i_1])))) : (((arr_1 [i_1]) ? -1 : (arr_0 [i_1] [i_1]))))), (arr_1 [i_1])));
        var_26 = (min(var_26, 0));
        arr_5 [2] = (max(((-1 ? (~-175639221) : -var_16)), (arr_1 [i_1 + 1])));
    }
    #pragma endscop
}
