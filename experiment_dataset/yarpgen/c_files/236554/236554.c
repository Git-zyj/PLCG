/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~(var_10 && var_9)))) & ((var_10 ? (((max(0, -1)))) : var_5))));
    var_14 += (max((!var_6), ((((min(-1, var_8))) % ((max(44, 27788)))))));
    var_15 = (min(((var_12 ? var_2 : var_7)), var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((((max((min(512, -27789)), ((min(var_4, var_8)))))) * ((((arr_2 [i_0]) > (arr_1 [i_0]))))));
        var_17 |= min(var_2, ((var_7 * ((((!(arr_3 [i_0] [i_0]))))))));
        var_18 = (((-9 & var_9) << ((((~((~(arr_3 [i_0] [i_0]))))) - 47))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 -= (arr_0 [i_1]);
        arr_7 [i_1] = (min(((((max((arr_0 [i_1]), 47223))) ? (arr_3 [7] [i_1]) : (min(5313167053499351861, -27783)))), (arr_2 [i_1])));
    }
    #pragma endscop
}
