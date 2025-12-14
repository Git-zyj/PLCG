/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((min((min(var_7, var_8)), 1))), 38));
    var_14 |= (min(((-97 ? ((min(0, (-127 - 1)))) : var_6)), (!0)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 = ((((!(((1 ? 1 : 9))))) || (min((min(1, var_8)), (!72)))));
        var_16 = (min((~1), -7));
        var_17 = var_3;
        var_18 = (min(var_18, ((min(var_0, (min(((min(1, var_8))), ((var_8 ? -75 : var_10)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((var_11 % 1) ? ((6 ? 1 : 1)) : (-54 || 0)));
        arr_6 [i_1] = 96;
        var_19 = (1 / -9);
    }
    #pragma endscop
}
