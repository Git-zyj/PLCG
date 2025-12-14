/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, ((((((var_8 ? var_8 : var_3))) ? (var_8 && var_9) : var_7)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 += (((((var_4 << (((var_8 + 294720504) - 7))))) ? (((!(arr_1 [i_0])))) : (((arr_2 [i_0] [i_0]) ? (!var_8) : (arr_1 [5])))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_13 = ((((((max(var_5, var_6)) + (max(var_4, var_6))))) ? ((var_0 % (min(var_0, var_7)))) : ((var_10 << (var_7 - 1777236635)))));
    #pragma endscop
}
