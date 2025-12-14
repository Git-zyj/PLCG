/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (max((((((var_6 ? var_6 : 1))) ? var_3 : (~0))), (((1 - 1) ? var_1 : 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(((~(((!(arr_2 [i_0])))))), (arr_3 [i_0])));
        var_18 -= var_13;
        var_19 = (((arr_2 [i_0]) ? (var_2 >> 1) : ((var_8 ? ((0 ? 1 : 1)) : ((min(1, var_7)))))));
    }
    var_20 = var_0;
    #pragma endscop
}
