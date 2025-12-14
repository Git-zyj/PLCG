/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? ((var_5 ? var_14 : var_7)) : var_3));
    var_21 = ((var_8 ? ((((897459621 != var_18) ? ((min(var_14, 57))) : (~17217)))) : (((17227 && var_14) ^ var_17))));
    var_22 = -1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-134213632 ? 17226 : ((max(var_14, (min(var_7, 130)))))));
        arr_4 [i_0] = (((((var_18 ? var_3 : var_16))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    #pragma endscop
}
