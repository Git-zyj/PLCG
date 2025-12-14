/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_3, (!var_10)))) ? (((var_2 ? var_2 : var_10))) : var_4));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_16 = (min((arr_0 [9] [i_0 + 2]), (((((1428837024 ? 2866130272 : -113))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (arr_0 [i_0 + 1] [i_0 + 3])))));
    }
    #pragma endscop
}
