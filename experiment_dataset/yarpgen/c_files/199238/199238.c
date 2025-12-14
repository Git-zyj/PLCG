/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-5850340325599109402 / var_1) | (var_9 * var_0));
    var_15 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((5850340325599109402 ? ((var_0 ? (arr_0 [i_0]) : 6418019590131634607)) : (arr_1 [i_0] [i_0])));
        var_16 = (max(var_16, ((((arr_0 [i_0]) ^ var_13)))));
    }
    #pragma endscop
}
