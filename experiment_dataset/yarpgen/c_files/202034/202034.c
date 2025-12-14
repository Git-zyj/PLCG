/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 *= ((((((var_5 ? var_15 : var_7)) ? (var_9 - var_13) : (min(var_0, var_1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, 193789113));
        arr_4 [i_0] [i_0] = (193789113 / 7075);
        arr_5 [i_0] = ((((((min(var_7, var_7))) ? (var_10 / var_15) : (var_3 / var_5))) / (((193789111 / (max(1, 193789100)))))));
        var_20 = ((((((!var_13) ? (var_3 & var_12) : var_9))) ? (var_7 == var_12) : (var_6 / var_9)));
        var_21 ^= ((((!var_1) && var_7)));
    }
    var_22 = (((var_0 ? var_3 : ((var_16 >> (var_14 + 94))))));
    #pragma endscop
}
