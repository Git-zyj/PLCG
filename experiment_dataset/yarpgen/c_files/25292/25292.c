/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    var_14 = (min(var_14, var_10));
    var_15 = (!var_8);
    var_16 = ((((((var_7 && var_4) + (~var_4)))) + ((((min(var_2, var_1))) ? var_1 : ((var_6 ? var_2 : var_5))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((((6727316221992499236 ? 71 : 536870911)) << (536870911 && 536870911)));
        var_18 = ((var_7 ? (((arr_0 [i_0] [i_0]) ? var_4 : (arr_0 [i_0] [i_0]))) : ((((var_1 + var_9) ? var_2 : var_0)))));
        arr_4 [i_0] = var_10;
        var_19 = (min(var_19, (var_1 / var_0)));
        arr_5 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) % (((((((arr_1 [i_0] [i_0]) && var_2))) < var_1)))));
    }
    #pragma endscop
}
