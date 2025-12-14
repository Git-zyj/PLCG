/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_2 ? (max(4717914263741208238, var_14)) : var_12)));
    var_16 = (((min(((var_2 ? 14238 : var_5)), (~var_10)))) % ((-((var_8 ? var_4 : -4717914263741208233)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (min((((-4717914263741208238 ? ((min((arr_0 [i_0]), var_4))) : (~var_7)))), (max((36505 < 789149640), 3046370262937091121))));
        arr_3 [4] = ((((var_7 ? var_9 : var_5))) | var_0);
    }
    var_17 = var_5;
    var_18 = (((((max(var_4, var_8)) + ((-26 ? var_5 : 31)))) - ((4717914263741208238 ? 225 : 0))));
    #pragma endscop
}
