/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] |= var_3;
        var_15 -= 131;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (min(var_16, ((~(!var_5)))));
        var_17 = -8365;
        arr_8 [i_1] = ((+((((((arr_7 [i_1]) * 0))) ? ((var_5 ? (arr_6 [8]) : var_7)) : (arr_2 [i_1] [i_1])))));
    }
    var_18 = ((1 || ((((((var_1 ? -347613748 : 94))) ? var_11 : var_9)))));
    #pragma endscop
}
