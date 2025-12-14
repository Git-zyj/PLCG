/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 4] = -4294967295;
        var_20 = ((-((var_13 ? var_15 : var_7))));
        var_21 = (min(var_21, var_19));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_5 [i_1] = ((-(arr_4 [0])));
        var_22 ^= (arr_1 [i_1 + 2] [i_1 - 1]);
    }
    var_23 = -var_0;
    var_24 = (min(var_24, var_2));

    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        var_25 = (max(((((((var_17 ? var_17 : var_5))) || (((-647192986264333523 ? var_11 : 0)))))), (max(14130, (((arr_7 [i_2]) ? 28 : 1))))));
        var_26 = (max(var_26, (arr_7 [i_2])));
        var_27 -= (arr_7 [i_2 + 1]);
    }
    var_28 = var_1;
    #pragma endscop
}
