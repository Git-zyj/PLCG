/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((((24 ? var_7 : var_4))) ? (!var_3) : ((var_6 ? var_7 : -13)))), (((((max(var_6, var_1))) ? (58 && -9142888061328073470) : var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((103 ? 3784020784346605357 : (((-9142888061328073458 ? 236357983 : (-9223372036854775807 - 1))))));
        var_12 = (((arr_0 [i_0]) ? -9142888061328073470 : -39));
        arr_5 [i_0] = (((((arr_0 [i_0]) ? 179 : var_5)) & (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((1 / (((arr_2 [1]) ? (arr_1 [6]) : var_9)))))));
        arr_9 [8] = 8;
    }
    #pragma endscop
}
