/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((((((var_3 + 2147483647) << ((((((min(var_2, var_13))) + 57)) - 8))))) % var_7));
        arr_5 [i_0] = (var_4 && var_6);
        var_15 = var_10;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_16 = var_11;
        arr_10 [i_1] = ((((~(arr_8 [i_1] [i_1]))) / (((((min(var_9, var_10)))) + ((var_9 ? var_10 : var_5))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = var_4;
        arr_14 [i_2] [i_2] = (min((min((var_2 - var_9), var_6)), var_2));
    }
    #pragma endscop
}
