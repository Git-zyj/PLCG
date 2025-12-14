/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_10 = (min(var_10, ((((-99 != 1) ^ ((1 ? var_1 : 0)))))));
        var_11 = var_9;
    }
    var_12 = (max((var_5 && var_3), (min(-4954162298882869032, var_1))));
    var_13 = ((-(~4294967275)));
    var_14 = (((((-(max(65519, 2114180659))))) % ((var_6 ? 2386629440 : (var_6 / 1816981277)))));
    var_15 = (max((min((var_8 & -22), var_6)), -12));
    #pragma endscop
}
