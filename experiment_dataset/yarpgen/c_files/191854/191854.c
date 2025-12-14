/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((!4017181307646413831) == ((((arr_0 [i_0]) >= ((min((arr_0 [i_0]), (arr_1 [i_0])))))))));
        var_13 = ((((min((arr_1 [i_0]), (arr_1 [i_0]))) ? ((-(arr_0 [i_0]))) : ((var_10 ? var_2 : (arr_1 [i_0]))))));
        var_14 = (~65535);
        var_15 *= (arr_0 [2]);
    }
    var_16 = (((((min(var_4, var_9)) ? (max(var_5, var_12)) : var_12))));
    var_17 = var_12;
    #pragma endscop
}
