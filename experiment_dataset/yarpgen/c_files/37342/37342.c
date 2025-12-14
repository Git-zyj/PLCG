/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_12, 3873))) ? 1 : (((max(var_12, var_14)))))) == 28710));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (max((max((((arr_0 [i_0]) ? (arr_2 [i_0]) : 1)), ((max((arr_2 [i_0]), var_13))))), ((((arr_1 [i_0 + 4]) > (arr_1 [i_0 + 4]))))));
        var_17 = ((((min(7124, 664982648230253383))) ? ((18 | (arr_2 [i_0 - 1]))) : (((!(arr_1 [i_0 - 1]))))));
    }
    #pragma endscop
}
