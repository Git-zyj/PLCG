/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_12 ? (((var_10 ? 0 : var_2))) : (max(var_5, var_1)))), (32261 && var_5)));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, (min(((((arr_1 [i_0 - 4] [i_0 + 1]) + (arr_1 [i_0 - 2] [i_0 - 2])))), (((arr_0 [i_0] [i_0 + 2]) ? ((var_0 + (arr_0 [i_0] [i_0]))) : ((-(arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = (min(((((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 4])))), ((~((-(arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = var_7;
        var_21 -= (!21);
        var_22 = (arr_3 [i_1]);
    }
    #pragma endscop
}
