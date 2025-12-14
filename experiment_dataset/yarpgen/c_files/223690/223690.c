/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (!-21187);
        arr_5 [i_0] [i_0] = (((((((var_14 ? var_6 : var_13))) / (max(var_0, var_14)))) == (2791553887 | var_5)));
        var_20 = (max(var_20, (((!(((((max(var_7, var_9))) - (max(var_19, 8930658559168540280))))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 += ((-var_15 ? (~14556029063302650890) : var_7));
        arr_8 [i_1] = 14307;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_22 = (max(var_22, (((((var_3 ? (var_19 || -798687164) : (var_8 | var_4))) * (((((max(-25731, 11))) < (var_14 || var_6)))))))));
        arr_12 [i_2] = 1;
        var_23 = ((~((var_8 ? (max(var_7, 25730)) : 1813818724))));
        arr_13 [i_2] = ((((((var_19 ? var_7 : var_17)))) ? ((863125254 ? 162 : (var_17 * -98))) : var_14));
        var_24 = (max(var_24, var_16));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 -= ((484192342014450020 ? var_2 : (var_14 * 1)));
        var_26 = ((var_14 ? var_8 : 1813818724));
    }
    var_27 = ((((((~(~-849655223990573318))) + 9223372036854775807)) << (((min((((157 ? -25715 : 162))), var_3)) - 3790091445))));
    var_28 = (-1 - var_12);
    #pragma endscop
}
