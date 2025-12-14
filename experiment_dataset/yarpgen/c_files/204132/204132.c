/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_18, (((max(var_0, var_0))))));
    var_21 += ((var_19 ? -var_15 : (((((9223372036854775807 ? var_16 : -16316))) ? var_18 : ((-16316 ? 0 : var_13))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (var_4 - var_19);
        var_23 = ((~(arr_1 [i_0] [i_0])));
        arr_3 [7] = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [19] = ((-(arr_4 [i_1] [i_1])));
        var_24 = (0 != 8);
        var_25 = var_3;
        var_26 = (1008 >= -16302);
    }
    #pragma endscop
}
