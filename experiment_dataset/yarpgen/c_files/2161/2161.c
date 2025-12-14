/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_0;
    var_19 = ((var_6 ? (((((min(var_10, -30870))) && var_2))) : var_16));
    var_20 = (((((17027 ? var_13 : (min(-6850555106985405119, -9))))) && (((~(var_7 + var_17))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = (min((3030528359930090726 % 1), ((min(var_6, (arr_1 [i_0 + 1]))))));
        var_22 = ((~((~(arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 + 2] &= (arr_3 [i_1 + 1]);
        var_23 *= (((arr_3 [i_1 + 1]) / ((var_0 ? var_0 : (arr_3 [0])))));
        arr_5 [i_1 - 1] = 107536635;
    }
    #pragma endscop
}
