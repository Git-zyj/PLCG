/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((~((var_10 ? (max(var_5, var_0)) : var_7)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = var_1;
        var_17 = (max(var_17, ((max((var_0 | var_1), (arr_2 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (((min((~45015), (((arr_6 [i_1 + 1] [i_1]) ? 43149 : (arr_6 [i_1] [i_1])))))) ? (((((var_14 ? 27496 : var_10))))) : ((1 ? ((var_7 << (((arr_6 [2] [i_1]) + 5851799008913540599)))) : ((var_9 ? var_7 : var_3)))));
        var_18 += (var_4 ? -var_4 : ((var_13 / (arr_4 [i_1 - 3]))));
        arr_9 [i_1] = var_3;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_19 = ((((var_8 ? var_14 : 1)) ^ -var_12));
        var_20 = (((((max(((10796437204649376959 != (arr_1 [i_2] [5]))), var_12)))) >= ((((arr_6 [i_2 + 1] [i_2]) ? (arr_1 [1] [7]) : (arr_12 [i_2]))))));
    }
    var_21 += var_14;
    #pragma endscop
}
