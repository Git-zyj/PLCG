/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((~((~((253 ? var_8 : var_10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((max(var_3, var_5)) >> (((var_0 || ((min((arr_2 [i_0]), var_12))))))));
        var_15 &= (!var_5);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = (max((arr_4 [i_1] [i_1]), var_1));
        arr_8 [i_1] = ((((max((((arr_2 [i_1]) * 0)), var_6))) ? 0 : (((((14992 ? (arr_0 [i_1] [i_1]) : 15571))) ? var_1 : -0))));
        arr_9 [i_1] = ((var_9 + (-2147483647 - 1)));
        arr_10 [i_1] [i_1] = (arr_5 [i_1 + 2]);
    }
    #pragma endscop
}
