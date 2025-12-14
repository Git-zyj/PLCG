/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~0);
    var_20 |= (max(var_17, (var_5 ^ var_5)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = ((((+(min((arr_0 [i_0]), 1048575)))) >= ((((116 >= (arr_2 [i_0 + 4])))))));
        arr_3 [i_0] = (((arr_2 [i_0 + 1]) ? ((((((var_16 ? var_12 : 507904)) < (arr_2 [i_0 - 1]))))) : (max((((var_18 == (arr_1 [i_0])))), (min((arr_0 [i_0]), var_6))))));
        var_22 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 |= ((!(~1197713149100205718)));
        arr_6 [i_1] |= var_1;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [2] = (((arr_0 [i_2 - 2]) - (arr_0 [12])));
        var_24 = (min(var_24, var_10));
    }
    var_25 += var_17;
    var_26 = ((((((((var_8 ? var_8 : -115))) ? 4294967280 : var_13))) ? ((((max(1, var_10))))) : (((((var_9 ? 127 : var_7))) ? (max(var_12, var_10)) : var_6))));
    #pragma endscop
}
