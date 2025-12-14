/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 *= min(var_14, (((var_6 ? (arr_0 [i_0 - 1]) : var_16))));
        arr_2 [i_0] = var_18;
        var_20 = (((((((var_5 ? var_7 : var_17)) & -var_9))) ? var_2 : (min((arr_1 [i_0]), (((arr_0 [5]) - var_17))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 |= ((var_16 != (arr_3 [i_1])));
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = (69 / 56);
        arr_7 [0] = arr_3 [i_1];
        var_22 = var_5;
    }
    var_23 |= var_5;
    var_24 = min(var_8, ((-((var_14 ? var_7 : var_11)))));
    var_25 = (max(var_25, ((((var_8 + 2147483647) >> ((((~(var_16 | var_17))) - 111498174)))))));
    #pragma endscop
}
