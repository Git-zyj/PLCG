/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((65522 <= ((3 ? var_10 : var_6))));
    var_20 = ((-((var_1 ? ((-7 ? 7 : var_13)) : ((min(var_12, var_5)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [7] &= ((((4 || ((min(141, var_5))))) || ((!(((var_15 ? (arr_2 [i_0]) : (arr_0 [i_0]))))))));
        var_21 = 163;
    }
    var_22 = var_10;
    var_23 = (((-(!-3))));
    #pragma endscop
}
