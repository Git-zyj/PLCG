/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? var_12 : var_2));
    var_16 = 0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((-((+(max((arr_0 [i_0]), 0))))));
        var_18 = ((((((arr_0 [i_0]) ? ((26198 / (arr_0 [1]))) : (arr_0 [i_0])))) ? ((((((arr_0 [i_0]) / 1626718012))))) : (min(29427, var_6))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_19 = (((~8) ? ((185 ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 2] [i_1 + 1]))) : (((!(arr_1 [i_1] [i_1 - 2]))))));
        var_20 = ((var_13 <= (max(251, (arr_3 [i_1])))));
        var_21 = var_11;
        var_22 = (-1926608989 > 22585);
    }
    var_23 = 458917658;
    #pragma endscop
}
