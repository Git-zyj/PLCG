/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_5 ? var_13 : var_15))) ? ((var_8 ? -8 : -740572658)) : 113)));
    var_19 = ((-740572658 ? -6914 : -6914));
    var_20 = (min((((~113) ^ var_10)), var_3));
    var_21 = ((((((((-6914 ? var_4 : var_11))) ? 14430563069920886145 : ((max(1650850938, var_0)))))) ? ((var_6 ? 2771543998 : ((192 ? var_5 : (-127 - 1))))) : (var_14 && var_15)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = ((((((((arr_1 [i_0]) | var_4))) ^ -1738653844358583911)) ^ ((min((~3444464014), 98)))));
        var_23 = ((min(1, ((48664 ? var_16 : (arr_0 [i_0]))))));
    }
    #pragma endscop
}
