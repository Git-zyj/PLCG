/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? var_8 : var_9));
    var_16 = 126976;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (((max((arr_2 [i_0]), (arr_2 [i_0]))) > (min((arr_2 [i_0]), -1))));
        var_18 += ((((min(126953, 9223372036854775807))) % (((((0 ? (arr_1 [18]) : 0))) ? (((arr_0 [10] [i_0]) / 18446744073709551615)) : (max(0, 18446744073709551615))))));
        arr_4 [i_0] [16] = var_2;
        arr_5 [17] = ((!((min(3, (arr_1 [i_0]))))));
        arr_6 [i_0] [i_0] = (((((255 >> (((arr_0 [i_0] [i_0]) - 191))))) ? (((!((min(var_8, 126981)))))) : var_2));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = ((126979 ? ((-((64 << (((-104 + 129) - 1)))))) : (!9223372036854775807)));
        arr_11 [i_1] = ((var_8 << ((((~((1 ? (arr_1 [i_1]) : 4096)))) - 16672675782414419852))));
    }
    #pragma endscop
}
