/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_2 ? var_10 : var_1)) * var_8)) == ((min(var_4, (var_13 / var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = ((var_11 * (arr_0 [i_0])));
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = ((var_14 ? var_13 : var_3));
        arr_2 [i_0] [i_0] = (-var_0 & var_13);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (min((min(-68, -968158675)), (-968158675 & 0)));
        var_20 = ((((min(((min((arr_4 [i_1]), (arr_5 [i_1] [i_1])))), var_7))) ? 28 : ((min((arr_3 [i_1] [i_1]), var_4)))));
    }
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
