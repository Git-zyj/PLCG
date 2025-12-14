/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((1 ? (234881024 + 1) : 80))) ? (--123) : ((2252558932 ? 59896 : -111)))))));
        arr_2 [i_0] = (arr_0 [i_0]);
        var_14 = (max(var_14, (((!(arr_0 [i_0]))))));
        var_15 = (min(((min((arr_1 [i_0]), ((max(-115, var_7)))))), ((-124 ? 33 : 42720))));
        var_16 = (-32765 + -126);
    }
    var_17 = ((var_5 ? (((((180 ? var_6 : -54)) ^ -20489))) : ((1 ? 120 : ((var_3 ? var_10 : var_6))))));
    #pragma endscop
}
