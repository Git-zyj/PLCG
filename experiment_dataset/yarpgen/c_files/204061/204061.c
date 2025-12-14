/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((((((var_17 << (5148 - 5143)))) ? ((2486341349 ? -5178 : 525925507)) : ((675894863 ? var_8 : var_16)))), (!var_13));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 = (((((-((min(18, (arr_0 [i_0]))))))) ? (((max(-5148, (arr_3 [i_0]))) - (arr_1 [i_0] [i_0]))) : ((max((arr_1 [i_0 - 2] [i_0 + 1]), 5161)))));
        var_22 = (arr_3 [i_0]);
        var_23 = ((!(((((min(5156, -5148))) ? (((0 ? (arr_2 [i_0]) : (arr_0 [i_0])))) : 1061429357)))));
    }
    #pragma endscop
}
