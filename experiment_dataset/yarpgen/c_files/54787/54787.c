/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((!0) ? (((!var_14) ? (min(1, (arr_1 [i_0] [i_0]))) : (arr_2 [i_0]))) : ((~(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] [7] = (min(((-(arr_0 [i_0]))), ((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_16 = ((3355203574 ? ((((((arr_0 [2]) ? (-2147483647 - 1) : 1700242725))) ? (max((arr_1 [10] [10]), 28)) : 3655)) : ((min((((var_12 / (arr_2 [i_0])))), ((127 ? var_5 : 286557481)))))));
        arr_5 [10] [i_0] = ((~(min(var_8, ((286557481 ? var_7 : 2147483647))))));
    }
    var_17 = 287994769;
    var_18 = ((~(min((~40), ((var_14 ? var_6 : var_7))))));
    #pragma endscop
}
