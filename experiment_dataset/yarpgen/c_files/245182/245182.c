/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((var_4 + ((min(-var_0, ((var_8 ? var_5 : var_2)))))));
    var_11 = var_1;
    var_12 = (max(var_12, var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (((((min(var_9, var_1)))) ? var_6 : (135291469824 && var_5)));
        var_14 = (((-(arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? ((-(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_15 = ((!((var_9 == (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
