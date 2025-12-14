/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_17;
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_11;

        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            arr_7 [i_1] = var_0;
            var_21 = (max(var_21, var_4));
            arr_8 [i_1] = var_16;
        }
        var_22 = var_18;
        var_23 = (min(var_23, var_12));
        arr_9 [i_0] = var_9;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2 + 1] = var_17;
        var_24 += (min(var_12, (min(var_10, var_14))));
        arr_13 [i_2 - 1] = (max(((min(var_18, var_16))), (min(var_11, (min(var_14, var_11))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_25 = var_9;
        var_26 = (min(var_9, var_4));
        var_27 = var_9;
    }
    var_28 = var_12;
    #pragma endscop
}
