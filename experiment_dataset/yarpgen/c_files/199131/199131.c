/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = var_8;
        var_14 = 58503;
        var_15 = (min(var_15, var_2));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(((((arr_4 [i_1]) <= ((max(var_3, (arr_3 [i_1]))))))), ((((min((arr_3 [i_1]), (arr_3 [i_1])))) ? var_0 : 58503))));
        arr_5 [i_1] = 202;
        var_17 = (((((arr_4 [i_1]) + 2147483647)) << (((((((((var_8 ? var_3 : (arr_4 [i_1])))) ? var_6 : (arr_4 [i_1]))) + 1804295079)) - 29))));
    }
    #pragma endscop
}
