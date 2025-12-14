/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (((((((max(var_5, var_3))) >> ((((-17742 ? 11589 : var_9)) - 11564))))) ? (~-5958) : (((((8850 ? var_9 : var_10))) ? ((32768 ? var_3 : 32768)) : (56686 > 26788)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = 56686;
        var_17 = ((!(((34619 ? (77 + var_7) : (0 + 41807))))));
        arr_3 [9] [9] = ((11589 ? (arr_0 [i_0] [i_0]) : (((((arr_1 [i_0]) ? (arr_0 [8] [i_0]) : 6196)) ^ (var_0 && var_4)))));
    }
    #pragma endscop
}
