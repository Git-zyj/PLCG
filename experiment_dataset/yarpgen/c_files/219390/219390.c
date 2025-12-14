/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((((-2147483647 - 1) || var_0))) << (var_4 && var_2)))), (max(((2147483645 ? 70 : 2509923479)), (max(var_1, 1))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (((196 < 1) ? ((min((arr_1 [i_0]), (~var_9)))) : (min((arr_0 [1]), var_7))));
        arr_2 [i_0] [i_0] = var_10;
        arr_3 [i_0] = (((((1047552 + (arr_0 [i_0 - 1])))) ? (((max(62, var_2)))) : (min(var_10, var_3))));
        arr_4 [i_0] = (((var_2 < var_9) ? (max(var_5, (arr_1 [i_0]))) : var_9));
        var_13 = var_4;
    }
    #pragma endscop
}
