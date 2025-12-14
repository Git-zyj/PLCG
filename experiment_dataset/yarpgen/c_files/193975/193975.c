/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~((var_11 ? 253 : 9))))) ? (((min(3695524082616167579, var_4)))) : var_11));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_21 = (((((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (~13484424408428295967) : (min(253, (arr_0 [3])))))) ? ((((var_10 ? var_8 : 16777200)))) : (max((arr_1 [i_0 - 2]), (max((arr_0 [i_0]), 251))))));
        var_22 = ((((((min(27687, (arr_1 [i_0])))) ? (((arr_0 [i_0]) * var_7)) : (arr_1 [i_0]))) < var_11));
    }
    #pragma endscop
}
