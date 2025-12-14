/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((-var_5 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_21 = (((!(arr_1 [i_0]))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (!1331262830));
        var_22 = (((!(((var_9 ? (arr_0 [i_0]) : var_2))))) ? ((min(((min(22, 0))), var_7))) : (min(2912157850, (arr_0 [i_0]))));
    }
    var_23 = var_15;
    #pragma endscop
}
