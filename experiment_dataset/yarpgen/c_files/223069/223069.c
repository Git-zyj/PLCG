/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = arr_2 [i_0] [i_0];
        var_22 ^= (max((((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_3 [i_1 - 1] [i_1 + 2]) / (arr_3 [i_1 - 1] [i_1 + 2])));
        arr_8 [i_1 + 2] [i_1] = (arr_3 [i_1] [i_1 - 1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_23 = (arr_9 [i_2]);
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
    }
    var_24 = (min(var_24, ((max(((((max(var_18, var_11)) <= (max(var_18, var_0))))), (((var_10 + 9223372036854775807) << (((var_17 + 4684127158648195286) - 62)))))))));
    #pragma endscop
}
