/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (475404011 && var_0);
        arr_4 [i_0] = (((((((var_3 & (arr_2 [i_0] [i_0])))) ? ((var_12 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (var_0 ^ 1)))) ? (arr_2 [i_0] [13]) : (arr_0 [i_0]));
    }
    var_20 = (((var_9 || 172701609) ? (((var_2 ^ 65534) << (((min(172701609, 1073740800)) - 172701547)))) : ((min(-247, ((5944582447158084997 ? var_12 : var_8)))))));
    var_21 = ((var_11 / ((max(var_7, var_10)))));
    #pragma endscop
}
