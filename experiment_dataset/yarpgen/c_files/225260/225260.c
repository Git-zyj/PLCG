/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_8);
    var_20 = (max(var_20, (var_8 & var_13)));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = ((((min((arr_1 [i_0 - 4]), ((var_11 ? 1 : 395820224))))) ? var_11 : (!1)));
            var_22 = (((arr_0 [i_0 - 4]) ? (((var_9 && (arr_0 [i_0 - 1])))) : ((((min(var_1, var_17))) ? ((134217727 ? var_9 : 787)) : (arr_0 [i_0])))));
        }
        var_23 = (min(var_23, var_2));
        var_24 = ((((min((arr_2 [i_0]), var_14))) ? ((var_16 ? 1 : 2087)) : (!63448)));
        var_25 = (((max(134217727, 95)) + var_17));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_6 [i_2] = ((((var_18 ? (arr_4 [i_2]) : (arr_5 [5]))) % -var_6));
        var_26 = (!4487031359124243185);
    }
    #pragma endscop
}
