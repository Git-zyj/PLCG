/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((((min(-5294, var_10))) ? var_12 : (min(var_5, (max(5276, var_7))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((~(arr_0 [16])))) ? -106 : ((-(arr_0 [0]))))))));
        var_16 = ((-(~-94)));
    }
    var_17 = var_11;
    #pragma endscop
}
