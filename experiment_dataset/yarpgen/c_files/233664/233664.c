/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = ((-(!var_6)));
        var_17 = (((var_4 | var_11) ? var_14 : -var_7));
        arr_2 [i_0] = var_15;
        var_18 = (arr_0 [i_0]);
    }
    var_19 = max(((min((~21717), ((max(var_8, var_1)))))), ((var_1 ? (max(61, 10015461588297370488)) : -var_8)));
    var_20 = ((((((min(var_15, var_14)) * ((var_8 ? var_1 : var_8))))) ? var_7 : (min((21719 - 1), 3))));
    var_21 = (max(((((~(-32767 - 1))) ^ var_8)), var_8));
    var_22 = var_5;
    #pragma endscop
}
