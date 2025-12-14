/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 >> ((((~511) < (var_13 || var_2))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((511 < ((-25 ? 1818691539 : 101))));
        var_16 = var_14;
        var_17 = (max(var_9, ((~(max((arr_0 [i_0]), 524))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_18 = 141;
        arr_7 [i_1] = ((511 ? 65534 : -7));
        var_19 = (arr_6 [i_1]);
        arr_8 [i_1] = 2107001189;
        arr_9 [i_1] = -76664689;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_20 -= ((((!((max(2842534639, var_14))))) || ((max(((-6783368030429310738 ? (-2147483647 - 1) : (arr_1 [9]))), (min((arr_11 [12] [i_2 - 1]), -6783368030429310734)))))));
        arr_12 [8] |= 3234415245;
    }

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_21 = var_8;
        arr_17 [i_3] [i_3] = (~12);
        var_22 &= (max((((~(arr_15 [i_3] [i_3])))), -6783368030429310738));
        var_23 &= (((~(arr_14 [i_3 - 2]))));
    }
    #pragma endscop
}
