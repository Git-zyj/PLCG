/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((-79 >= ((+(((arr_3 [i_0] [i_0]) ? 2147483647 : var_1))))));
        var_15 = (min(var_15, ((((((0 * (((arr_0 [i_0]) ? var_10 : (arr_2 [i_0] [1])))))) ? (((+(((arr_1 [i_0] [i_0]) ? -926394429 : 1))))) : ((1411931319 ? 1411931319 : 16777215)))))));
        arr_5 [i_0] = (((((arr_1 [i_0] [i_0]) + 10593))) ? ((min(33752, 2085))) : (-2147483647 - 1));
    }
    var_16 = (min(var_16, var_8));
    var_17 = var_7;
    var_18 = (((((((var_6 ? var_13 : -2147483640))) >= ((1 ? var_4 : var_5)))) && var_4));
    #pragma endscop
}
