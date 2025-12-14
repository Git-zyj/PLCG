/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 ? (-127 - 1) : (((var_9 + 9223372036854775807) >> (var_1 - 3262447135)))))) ? var_1 : ((((min(var_7, var_0))) ? var_3 : var_0))));
    var_11 = var_2;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = ((~(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_13 = (min((arr_1 [i_0]), (max((!-767173548), (min(var_1, (arr_1 [i_0])))))));
    }
    var_14 = (max(var_3, ((var_1 ? var_4 : var_3))));
    var_15 = (((((var_6 ? ((var_1 ? var_8 : (-9223372036854775807 - 1))) : var_4))) ? -1728945842 : (((max(var_2, var_6))))));
    #pragma endscop
}
