/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_10 = var_3;
        arr_2 [i_0] [i_0] = (-(max((max(var_9, var_3)), var_9)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_11 *= ((var_8 ? var_0 : var_6));
        arr_6 [i_1] [i_1] = (~var_5);
        arr_7 [i_1] = ((var_7 ? var_4 : var_1));
        arr_8 [i_1] [i_1] = var_4;
    }
    var_12 = (((((var_1 ? ((var_1 ? var_7 : var_9)) : (~var_5)))) ? ((var_0 ? var_1 : var_6)) : var_3));
    #pragma endscop
}
