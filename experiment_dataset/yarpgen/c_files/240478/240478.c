/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_11 ? ((-var_6 ? ((var_13 ? var_9 : 1)) : -59935)) : var_1));
    var_16 = ((((min(23831, 1))) / ((var_8 ? var_6 : var_13))));
    var_17 = var_13;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((-(min((arr_1 [i_0]), -721457871))))) ? (arr_0 [i_0] [i_0 + 1]) : ((-(((arr_0 [i_0] [i_0 + 1]) ? var_11 : var_7)))))))));
        var_19 = (((((~(arr_3 [i_0])))) ? ((-((min(var_13, (arr_0 [i_0 - 1] [i_0 - 1])))))) : (((max(0, 1)) ? -0 : -1))));
    }
    #pragma endscop
}
