/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_7, ((var_12 ? var_0 : var_14))))) ? 1 : ((((var_7 ? var_8 : var_9)))));
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_9, ((var_16 ? (var_2 && var_2) : 2147483647))));
        arr_4 [12] [12] = var_4;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (min(var_19, var_3));
        var_20 = ((-((var_7 ? (arr_5 [i_1] [i_1 + 1]) : 1060763336))));
    }
    var_21 -= (min(3467393581524904616, 3467393581524904623));
    #pragma endscop
}
