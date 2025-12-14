/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((max(var_14, 97)), var_10))) ? (((-666119402 | -89) ? (min(var_5, 15870975026169517028)) : 1319624322)) : (((var_16 ? var_12 : ((8 ? var_5 : var_1)))))));
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((666119426 ? (max((arr_2 [i_0]), var_15)) : (((max(var_5, var_15)))))));
        arr_4 [i_0] = (35184372088832 / -1319624324);
        arr_5 [i_0] = (((((((((arr_1 [i_0]) ? var_6 : (arr_2 [i_0])))) ? (((var_1 >= (arr_1 [i_0])))) : 0))) ? (max((var_5 & var_13), (10117058535805619355 * 10117058535805619355))) : -var_14));
    }
    #pragma endscop
}
