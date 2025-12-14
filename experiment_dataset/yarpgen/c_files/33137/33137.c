/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((((1432175243 << (91 - 69)))) ? var_6 : (min(var_5, -127))))));
    var_14 -= (max((!var_6), (min(var_9, ((var_0 ? var_5 : var_3))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 - 1] [i_0]) == (((arr_1 [i_0]) / 648038584))));
        var_15 = (max(var_15, (648038584 & 3646928728)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (arr_4 [i_1 + 2])));
        var_17 = 55582;
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_4 [i_2 - 2])));
        var_19 = (max(var_19, (max((~1916299681), (~3646928703)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_20 = 214;
        var_21 = (max(var_21, ((((arr_9 [i_3] [i_3]) % (arr_9 [i_3] [i_3]))))));
    }
    #pragma endscop
}
