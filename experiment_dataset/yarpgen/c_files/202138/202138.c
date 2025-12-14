/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, 3812862801219451173));
        var_16 = (((((~((4387481991969651365 ? (arr_2 [8] [8]) : 4387481991969651365))))) ? -1 : (max(14014, var_9))));
        var_17 = (((((703509051 ? var_12 : var_11))) > (min((var_13 <= var_1), (max(var_1, -18669))))));
    }
    var_18 = ((var_3 ? var_4 : (((var_14 ? (max(44, var_6)) : (18 || var_13))))));
    #pragma endscop
}
