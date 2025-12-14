/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 - var_13);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = -var_13;
        var_15 = (((var_4 & var_7) | var_5));
        arr_4 [i_0 - 1] = -var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (!var_0);
        arr_7 [i_1] = (var_11 < var_8);
        var_17 = var_13;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = ((98 / (((var_9 + 2147483647) >> (var_5 + 702159463)))));
        var_19 = (4044539258053709975 != -99);
        arr_10 [i_2] = ((~(var_9 | var_5)));
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_20 = ((~((var_10 >> (var_0 + 2390)))));
        arr_13 [i_3] = (((var_8 % var_5) * var_10));
        arr_14 [i_3] [i_3] = (3 != 97);
    }
    #pragma endscop
}
