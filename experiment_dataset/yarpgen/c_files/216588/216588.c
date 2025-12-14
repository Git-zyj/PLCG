/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 >> ((((9223372036854775807 ? 0 : var_1)) >> (var_1 - 15320852945370526145)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (min((((arr_2 [15]) * (arr_2 [i_0]))), ((((max((arr_2 [i_0]), 0))) ? ((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_12 = 1;
        arr_3 [i_0] = var_7;
    }
    var_13 = var_6;
    var_14 = 3407555857;
    var_15 = (((var_1 ? var_4 : ((6542856117257167347 ? var_7 : var_0)))));
    #pragma endscop
}
