/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = (max(var_17, ((min(((-(((arr_1 [i_0]) ? var_13 : (arr_0 [i_0] [i_0]))))), var_13)))));
        var_18 = ((21 ? (((arr_0 [i_0 + 4] [i_0 + 2]) ? (arr_0 [i_0 + 2] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))) : (-6881051384944568213 < var_8)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (max((min(var_5, (arr_1 [i_1]))), ((-(arr_1 [i_1])))));
        var_20 = (arr_2 [0]);
    }
    var_21 = ((((min(var_15, var_2))) ? (min(((var_13 ? var_9 : var_7)), var_8)) : (((min(0, 21))))));
    #pragma endscop
}
