/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = var_4;
        arr_5 [i_0] = ((-(18446744073709551612 & var_7)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_9 [i_1 - 1] [i_1] = (1 | 18446744073709551611);
        arr_10 [7] [i_1] = (((arr_8 [i_1 - 2]) / (arr_6 [i_1])));
    }
    var_18 = ((-((var_16 ? -16394710264868720229 : (6545703056468714684 / var_12)))));
    var_19 = (max((max((((var_12 ? 9223372036854775807 : var_4))), var_12)), (457713387 % 4)));
    #pragma endscop
}
