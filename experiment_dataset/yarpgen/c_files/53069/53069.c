/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? (((((var_4 ? var_4 : var_4))) ? var_0 : ((var_0 ? var_0 : var_4)))) : var_3));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = var_6;
        var_12 = ((((var_6 / ((var_5 ? var_1 : var_0)))) * ((((var_4 ? var_8 : var_5)) * (var_1 / var_7)))));
        arr_2 [i_0] [i_0] = ((var_5 ? (var_0 == var_9) : (((var_5 != var_1) ? var_7 : (((var_8 ? var_5 : var_5)))))));
        arr_3 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = var_5;
        arr_7 [i_1] &= (((((var_3 + var_3) > var_2)) ? (var_3 / var_4) : (((((var_1 ? var_2 : var_0))) ? ((var_1 ? var_7 : var_1)) : (669570653399859149 <= -4476330988823595894)))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (var_1 ? (((((((var_9 ? var_3 : var_8))) || (var_1 - var_5))))) : (((((var_6 ? var_6 : var_0))) ? (var_8 != var_7) : ((var_3 ? var_7 : var_1)))));
        var_13 = ((4294967272 << (4294967295 - 4294967264)));
        arr_11 [i_2] = var_0;
    }
    var_14 += (((((((var_1 ? var_1 : var_9))) ? (var_9 / var_9) : ((var_5 ? var_1 : var_3)))) <= ((1578436971 ? 7 : -4476330988823595894))));
    var_15 = var_5;
    #pragma endscop
}
