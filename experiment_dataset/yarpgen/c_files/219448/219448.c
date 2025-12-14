/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 += ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (((~(min(var_6, (arr_0 [i_0])))))) : (((((var_3 + (arr_0 [i_0])))) ? (arr_0 [i_0]) : (4789522208001986158 - 4789522208001986176)))));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_11 = (min(var_11, (((-89 ? (((!(((-89 ? 39236 : -28032)))))) : (((((!(arr_0 [i_0]))) && (var_8 && var_7)))))))));
    }
    var_12 = (min(var_12, ((((max(var_3, 6260356298255061924)) <= -89)))));
    #pragma endscop
}
