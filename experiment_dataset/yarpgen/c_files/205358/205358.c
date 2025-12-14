/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((17606659458401965375 ? (var_6 == 1) : (max((var_15 < 48), ((var_3 ? 1 : var_4))))));
    var_19 = ((((((1 ? 1 : 32745)))) ? ((((1 ? var_0 : var_10)))) : ((((min(1, var_8))) ? (1 * var_11) : var_15))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 1460001746))) ? 1 : (((1 ? 1 : (arr_2 [i_0]))))));
        arr_3 [i_0] = (((!-1) ? (~1) : 38));
        arr_4 [i_0] = (max((max((arr_0 [i_0]), var_9)), (max(1, (arr_0 [i_0])))));
    }
    var_21 = ((var_7 ? (var_5 && var_11) : (((!(((1 ? 4294967286 : -124))))))));
    var_22 = ((var_0 < (((((var_7 << (2295347214 - 2295347203))) & ((var_15 ? var_17 : 1)))))));
    #pragma endscop
}
