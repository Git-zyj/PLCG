/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((27756 ? var_4 : var_5))) + (27757 > var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(var_14, (((((var_5 ? (arr_0 [i_0] [i_0]) : -5101767628714841232)) + (((204840797 ? 37789 : 6))))))));
        var_15 = ((arr_1 [i_0] [i_0]) >= (((arr_0 [i_0] [i_0]) ? 37766 : 134217696)));
        var_16 = (min(var_16, (((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) % ((-92 ? 1014536659461777013 : 1)))))));
        var_17 &= (((~4090126500) | 9608452816954090385));
    }
    #pragma endscop
}
