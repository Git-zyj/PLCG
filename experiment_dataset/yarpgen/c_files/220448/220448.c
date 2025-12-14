/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 *= (((((-24744 ? 1 : 1))) ? ((min(0, ((max(var_9, var_6)))))) : -var_8));
        var_11 = ((var_9 ? ((var_6 ? 28 : ((227 ? (arr_0 [i_0]) : 1)))) : 0));
        var_12 *= (((15198 ? ((-8342 ? (arr_1 [i_0]) : var_8)) : ((0 ? var_0 : (arr_2 [i_0]))))));
    }
    var_13 = ((((min(-64, 28))) ? ((-8342 ^ ((min(1, var_5))))) : 0));
    var_14 = var_6;
    var_15 = ((-var_2 + (min((max(var_6, var_1)), (127 > 1792)))));
    var_16 = (min(var_2, var_9));
    #pragma endscop
}
