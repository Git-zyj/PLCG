/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (((((var_4 ? ((var_15 ? var_0 : 0)) : var_14))) ? (1759 && 63780) : var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((min(var_12, -63777))) && (arr_0 [i_0])));
        var_19 = (min(((((arr_3 [i_0]) ? 63777 : var_11))), (max((arr_3 [i_0]), var_4))));
    }
    var_20 = ((var_1 ^ ((var_15 ? 63786 : (~13924565328865163265)))));
    #pragma endscop
}
