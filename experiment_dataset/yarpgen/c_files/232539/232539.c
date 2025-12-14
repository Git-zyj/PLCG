/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_2 ? var_9 : -1)) < var_5)) ? (((min(17251, var_3)) + (((var_14 ? 1 : -1))))) : ((max(var_0, var_12)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((((((var_1 ? var_9 : 0))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))), ((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [20]) : 245))))));
        var_20 = (min(var_20, (1 ^ 1)));
        arr_3 [i_0] [i_0] = 106;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 ^= (((min((arr_6 [i_1]), var_9)) - (arr_6 [i_1])));
        arr_7 [i_1] [i_1] = (min((((max((arr_1 [i_1]), var_12)))), -1));
    }
    var_22 = var_14;
    var_23 = (min(((max(4154501457, 1))), (((var_8 ^ var_7) * (((-1 ? var_12 : var_16)))))));
    #pragma endscop
}
