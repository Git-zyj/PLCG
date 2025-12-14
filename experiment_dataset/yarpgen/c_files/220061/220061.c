/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((-1414113048856527955 ? var_3 : -22))) ? (var_6 * -2868898338550301672) : (((0 ? var_6 : 0)))))) ? ((max(((var_1 ? var_3 : 1)), (var_9 < var_13)))) : var_11));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] = ((((((((var_2 ? var_1 : -1377411939))) ? (arr_0 [i_0] [i_0]) : 3940649673949184))) ? var_5 : (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
