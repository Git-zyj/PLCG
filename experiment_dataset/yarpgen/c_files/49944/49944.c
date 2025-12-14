/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(var_16, ((1579466260570598566 ? 0 : 1377351390))));
    var_18 = (min(var_18, (((!(((var_16 - var_1) == (min(var_4, var_8)))))))));
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((((min((arr_1 [i_0] [i_0]), 14313294599790461108))) ? (((((var_11 <= (arr_3 [10]))) ? var_16 : (((133 - (-32767 - 1))))))) : var_3));
        var_20 = (min(var_20, ((min(var_14, (arr_1 [i_0] [i_0]))))));
        var_21 *= ((((((arr_3 [9]) >> (((max((arr_2 [i_0] [i_0]), var_0)) - 13143155610430801917))))) ? ((~(max(var_0, var_16)))) : -var_14));
    }
    #pragma endscop
}
