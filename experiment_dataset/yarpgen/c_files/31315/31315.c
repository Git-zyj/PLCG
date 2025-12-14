/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((min((((267726023 ? 504 : 3989384066597406133))), (min(8008633251682094202, 3989384066597406133))))) ? -3989384066597406132 : (max(3989384066597406147, -72))));
        var_18 = (min(var_18, var_1));
        var_19 *= ((min(var_7, (arr_2 [i_0] [i_0]))));
        var_20 *= (min(((max((arr_2 [i_0] [i_0]), (arr_2 [13] [13])))), ((212 ? 3989384066597406145 : 106))));
        arr_3 [i_0] = ((!(((~(arr_2 [i_0] [i_0]))))));
    }
    var_21 *= (-1898823679 == var_5);
    var_22 = ((((((!(!var_9))))) != (min((max(var_4, 267726024)), var_4))));
    var_23 = ((~(var_15 >= 552668213)));
    var_24 = var_12;
    #pragma endscop
}
