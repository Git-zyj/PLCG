/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((-7687103707699251611 + 9223372036854775807) << (((!(arr_2 [i_0]))))));
        var_18 = (!3708336243657602641);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (0 > 65535);
        var_19 ^= ((var_7 == (arr_0 [2] [i_1])));
        arr_8 [i_1] = (arr_6 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_20 = (arr_9 [i_2] [i_2]);
        var_21 = (((arr_9 [0] [i_2 + 1]) ? (arr_10 [5] [i_2 + 1]) : (arr_9 [i_2 - 2] [i_2 - 2])));
    }
    var_22 = ((~(((((var_10 ? 196 : var_15)) <= (!var_6))))));
    #pragma endscop
}
