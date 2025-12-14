/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = ((((((arr_0 [i_0 + 1]) ? 65535 : ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1]))))))) ? ((min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1])))) : (arr_0 [i_0 + 1])));
        var_17 *= (((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1]))) >> ((((arr_0 [i_0]) && 68)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = (((((~(arr_0 [i_1])))) ? (((arr_4 [i_1]) ? (arr_1 [i_1]) : (arr_4 [i_1]))) : (arr_1 [i_1])));
        var_19 = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : var_6));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = (min(var_20, ((max((min((arr_5 [i_2] [i_2]), (arr_5 [8] [i_2]))), var_10)))));
        var_21 += (((((~(arr_6 [20] [i_2])))) / 562949886312448));
        arr_8 [i_2] [i_2] = arr_6 [i_2] [i_2];
    }
    var_22 = (max(var_22, (((((((var_1 ? var_14 : var_1)))) ? var_6 : var_12)))));
    var_23 = -var_1;
    #pragma endscop
}
