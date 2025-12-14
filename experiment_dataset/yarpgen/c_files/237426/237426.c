/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((+((-1 ? (-127 - 1) : -32735)))) | (!var_10)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = var_6;
        var_21 *= var_2;
        var_22 = var_11;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 - 2] [i_1] = var_1;
        arr_5 [i_1] [i_1] = ((((max(var_1, -1))) ? var_9 : var_2));
    }
    var_23 = ((var_11 ? ((var_3 ^ (!var_14))) : var_15));
    #pragma endscop
}
