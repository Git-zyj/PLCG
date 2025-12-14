/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(((45315 ? ((((arr_3 [i_0]) > (arr_1 [9])))) : (arr_3 [i_0]))), 87));
        var_17 = (((arr_1 [i_0]) ? (((arr_3 [i_0]) ? (max(5598917374700011629, 67)) : ((min(var_2, 7752))))) : var_13));
        arr_4 [i_0] = ((!(((15443 >> (((arr_0 [i_0] [i_0]) + 93)))))));
    }
    var_18 = (min(var_18, (min(var_7, 1679671257))));
    #pragma endscop
}
