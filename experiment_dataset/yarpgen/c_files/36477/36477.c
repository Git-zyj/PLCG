/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((~((min(var_6, var_0))))), ((max(var_0, (min(109, 33873)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, (((~(arr_1 [1]))))));
        arr_3 [i_0] = ((var_0 ? (arr_2 [i_0]) : ((42171 ? 59666 : 104))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 |= ((((min(((188 ? 234 : (arr_5 [i_1]))), ((min(151, 1)))))) && ((((((19 << (42155 - 42130)))) ? (!146) : (86 ^ var_10))))));
        arr_6 [i_1] = ((1 - ((min(138, 1)))));
        var_18 = max((!var_5), (arr_2 [i_1]));
        var_19 = (max(((~(arr_2 [i_1]))), ((0 ? (arr_0 [i_1]) : 2655355846))));
        var_20 -= ((+(min((1 >> 4), 1))));
    }
    var_21 = var_9;
    var_22 = ((((min(176, (max(1, var_6))))) ? (((var_9 - var_9) >> (var_5 - 63636))) : (max(var_13, (((15321 ? var_1 : var_6)))))));
    #pragma endscop
}
