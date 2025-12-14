/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((min((min(var_8, var_15)), (var_14 || var_0)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0 - 1]);
        var_20 = (-9223372036854775807 - 1);
        var_21 = (min(9223372036854775807, 17844291053512476369));
        var_22 += (~2538275953);
    }
    var_23 = (max(var_23, ((((((var_14 ? 5799904284431345593 : ((var_10 ? var_9 : var_9))))) ? var_0 : var_13)))));
    var_24 += ((((min((max(0, var_2)), var_11))) && var_15));
    var_25 = (min(((var_18 % (((var_3 ? var_6 : var_12))))), var_7));
    #pragma endscop
}
