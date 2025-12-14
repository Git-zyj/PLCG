/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 += (arr_0 [i_0]);
        var_20 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (853677889 - 853677889)));
        var_21 = ((6054705424495102226 ? -1 : -591373371));
        var_22 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_23 = (((((-(var_9 + 9642)))) ? var_14 : var_5));
    var_24 = (max(var_24, (((((((min(var_3, 1))) ? (var_15 >= var_13) : ((1 ? 4294967295 : var_8)))) <= var_10)))));
    #pragma endscop
}
