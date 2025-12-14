/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((((var_17 ? var_16 : var_7))) ? ((var_2 ? 0 : var_10)) : var_4)), ((var_12 ? -401362588 : (arr_2 [i_0] [i_0])))));
        var_19 = (max(var_19, ((max((max((max((arr_0 [7]), var_6)), ((((arr_0 [i_0]) ? (arr_1 [10] [i_0]) : (arr_2 [6] [6])))))), ((max(401362584, (arr_2 [i_0] [i_0])))))))));
    }
    var_20 = var_15;
    #pragma endscop
}
