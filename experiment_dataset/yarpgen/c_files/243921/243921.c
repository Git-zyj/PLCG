/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (-49717 ? ((((arr_2 [i_0]) < var_10))) : (-1 - 255));
        arr_4 [i_0] = -1;
        arr_5 [i_0] = ((((((arr_1 [i_0]) ? ((126 ? var_8 : var_7)) : (((var_3 && (arr_0 [i_0]))))))) ? (arr_2 [i_0]) : (min(14596, 2013746682))));
    }
    var_11 = var_7;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (min(var_12, (var_3 / var_6)));
        var_13 = (max(var_13, (((var_1 < (arr_8 [i_1]))))));
        var_14 = (((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1]))) * ((min((arr_7 [i_1]), (arr_7 [i_1]))))));
    }
    #pragma endscop
}
