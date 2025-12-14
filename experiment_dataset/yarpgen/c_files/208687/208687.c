/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_1 != var_13) ? (var_14 || 5799774777315816851) : var_3))) ? var_17 : (((((32175 ? var_5 : -2))) ? var_9 : ((var_11 ? 6941354982501982129 : var_15))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (max((~var_14), (((!(arr_1 [i_0]))))));
        var_20 = (10862597967471506048 ? (arr_1 [i_0]) : (~11054130339255219268));
    }
    var_21 = (((((var_10 ? -var_15 : var_8))) ? ((((max(-2137981000, var_11))) ? var_13 : (!1350))) : ((((!(((var_5 ? var_3 : var_7)))))))));
    #pragma endscop
}
