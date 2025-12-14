/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? var_10 : var_8));
    var_12 = (min(var_12, ((max(var_6, var_1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        var_14 = 1;
        var_15 = ((((min((arr_1 [i_0]), (var_9 >= 6357775001314500597)))) && ((((arr_0 [i_0] [i_0]) ? var_3 : ((0 / (arr_0 [1] [i_0]))))))));
    }
    var_16 = var_2;
    #pragma endscop
}
