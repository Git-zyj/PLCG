/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = -var_12;
        arr_4 [i_0] [i_0] = (((((max(var_11, var_4))) ? 27783 : -var_1)));
        var_20 ^= (((-(-127 - 1))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = var_15;
        var_22 ^= var_11;
        arr_7 [i_1] = var_12;
        var_23 = ((var_18 ? ((-((-80 ? var_10 : var_1)))) : ((~(~var_16)))));
        var_24 = -27783;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 = ((var_4 ? var_10 : var_6));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = (!-var_17);
            var_26 ^= ((((~((var_7 ? var_7 : var_6)))) ^ ((31 ? (0 * 27069) : 33))));
        }
    }
    #pragma endscop
}
