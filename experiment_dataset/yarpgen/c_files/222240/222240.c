/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = var_9;
        var_20 = (min(var_20, var_16));
        arr_3 [i_0] [i_0] = var_15;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_17;
        arr_9 [i_1 - 1] = (max(((min(var_9, var_4))), (min(var_2, var_15))));
        var_21 = min(var_16, (max(var_8, var_9)));
        var_22 = var_7;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_23 = (min(var_0, ((max(var_6, ((min(var_9, var_5))))))));
        arr_12 [i_2] = var_0;
        arr_13 [i_2] = var_13;
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_24 = (max(var_24, var_3));
        arr_18 [i_3] = var_0;
        arr_19 [i_3 - 1] [i_3] = var_17;
        var_25 = var_17;
    }
    var_26 = var_14;
    var_27 = var_17;
    #pragma endscop
}
