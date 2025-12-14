/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = var_6;
        arr_3 [i_0] = ((-(((arr_1 [i_0]) ? var_8 : var_3))));
        arr_4 [1] [8] = 46134;
        arr_5 [18] = -3864746009;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (((var_11 || var_6) ? ((((~-1) <= (var_12 / var_4)))) : 1));
        arr_10 [i_1] = (((!87) ? -4 : ((var_6 ? var_6 : var_2))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = ((~((var_11 ? (arr_8 [i_2]) : var_9))));
        var_16 = var_7;
        var_17 = var_0;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_18 = (min((44108 & var_8), (3 & 21427)));
        var_19 = ((((((var_10 ? var_0 : 16))) / -var_13)));
        arr_15 [i_3] [i_3] = ((((min((arr_8 [i_3]), var_6))) && var_13));
        var_20 = (max((((var_2 - var_8) / 44089)), ((((0 & var_7) ? (((arr_1 [15]) ? (arr_1 [i_3]) : -107)) : (1 < var_8))))));
    }
    var_21 = (+-8);
    var_22 = ((((((var_13 ? var_4 : 107))) ? var_8 : (var_4 + var_3))));
    var_23 = (((((~((65535 ? var_8 : var_12))))) ? ((var_3 << ((min(var_0, 1))))) : (~var_1)));
    #pragma endscop
}
