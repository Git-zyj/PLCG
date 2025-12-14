/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 |= (((((~(15486 && var_9)))) ? var_2 : ((((var_1 ? var_4 : var_11))))));
    var_15 = (max(var_15, ((((((var_12 ? (min(var_5, 32207)) : 1))) ? (min(var_8, (var_3 * 1023))) : ((var_8 ? ((var_8 ? var_3 : 32207)) : var_0)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= min((((2078470071 + var_3) + var_4)), (arr_1 [3]));
        var_16 ^= ((!((max((var_2 > 15486), ((2078470099 ? 0 : 1)))))));
        var_17 = (min((((((65528 ? 1 : 1))) ? (min(-32204, (arr_0 [i_0]))) : (((arr_1 [i_0]) ? (arr_0 [4]) : var_8)))), (min((((arr_0 [i_0]) | 0)), (~0)))));
        var_18 = var_9;
    }
    var_19 = var_5;
    #pragma endscop
}
