/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-var_2 || (var_12 >> var_4))));
    var_19 |= ((-var_7 ? var_2 : 96));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((min((arr_0 [i_0] [4]), (((var_17 * var_13) ^ var_0)))))));
        var_21 = ((~((137998576 ? 137998592 : -8867))));
        var_22 -= (((1 ? var_3 : 1)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((var_7 > (arr_0 [i_1] [2]))))));
        var_24 = ((!((1 <= (arr_3 [i_1])))));
        var_25 = (((arr_3 [i_1]) ? var_12 : ((8867 - (arr_0 [i_1 - 1] [i_1])))));
    }
    var_26 = var_4;
    var_27 ^= (max((((!(((var_14 ? var_2 : 1)))))), ((-8868 ? 6457731770863374147 : 2207130974))));
    #pragma endscop
}
