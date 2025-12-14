/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 || ((max(1, (0 < var_5))))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((arr_1 [i_0 - 3] [i_0 - 1]) ? 138 : 2006305155956502373)) >> (((((((arr_0 [i_0]) - 118)) << (165 > var_6))) - 970529499))));
        arr_3 [i_0] = ((137 < ((21934 ? 0 : 1073741824))));
        var_14 = (min(0, ((((arr_1 [i_0 + 3] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_15 = (((5975068778400301336 & var_11) < (((152 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (-2147483647 - 1))) : ((137 ? (arr_1 [i_0] [i_0]) : var_8)))))));
        var_16 = (-164 + var_12);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = (arr_6 [i_1]);
        var_18 = (775926057 < 152);
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((1786742452 ? 118 : -2147483626));
    }
    var_19 = (((((26 * (~52753)))) ? 12782 : (((!var_9) / 119))));
    var_20 ^= ((var_9 || ((((!230) ? ((var_11 ? 0 : 11881961360591005238)) : (min(var_10, var_6)))))));
    var_21 += (--46);
    #pragma endscop
}
