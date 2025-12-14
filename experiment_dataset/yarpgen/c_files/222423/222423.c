/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((-32767 - 1) ? -5632047330805891382 : var_18));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 = var_1;
        var_22 = (((var_10 ? (arr_1 [i_0]) : var_16)) - (((var_11 ? var_5 : var_1))));
        var_23 = (((var_10 && var_18) || ((((arr_1 [12]) ? (arr_0 [i_0] [i_0]) : var_5)))));
    }
    var_24 = (2080768 - 17);
    #pragma endscop
}
