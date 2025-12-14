/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_12, (max(var_4, (max(var_4, var_0))))));
    var_15 = (min(((var_4 ? ((var_4 ? var_11 : var_8)) : var_8)), (((max(-595448935, var_12))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = var_5;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_17 = (min(var_17, ((min((arr_4 [14]), (arr_4 [8]))))));
        arr_6 [i_1] [i_1] = (min(var_5, (arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 = (min(var_18, (arr_7 [i_2])));
        var_19 = ((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2]));
    }
    #pragma endscop
}
