/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((var_13 ? var_2 : var_8)))))));
    var_15 = (min(var_15, (var_7 - var_12)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(var_16, (((~(((arr_1 [i_0]) ? (~var_3) : ((min(var_0, 32754))))))))));
        arr_2 [i_0] = ((var_7 ? ((var_9 ? (~192) : ((var_3 - (arr_1 [i_0]))))) : (((arr_0 [i_0]) * (arr_1 [i_0])))));
    }
    var_17 = ((!((min(65343, (var_3 == var_2))))));
    #pragma endscop
}
