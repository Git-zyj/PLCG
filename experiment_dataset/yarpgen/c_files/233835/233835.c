/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0]) % (~var_12)))));
        var_19 = ((var_9 ? (((!(((arr_1 [i_0]) <= var_6))))) : (((!((min(1, var_10))))))));
        var_20 = (min(var_1, var_11));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 0;
        arr_6 [i_1] = var_0;
    }
    var_21 = (!((min(-var_12, ((1 ? 51918 : 37031))))));
    var_22 = (-1 ? ((max(((var_7 ? var_1 : var_16)), 1))) : (min((max(var_10, var_0)), (var_13 / 2294758012))));
    var_23 = (min(var_5, var_14));
    #pragma endscop
}
