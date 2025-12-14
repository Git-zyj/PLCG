/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_10 -= ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? ((132 ? 8108901270106286551 : (arr_0 [i_0]))) : -814007453));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 |= (arr_1 [i_0 + 2]);
                    arr_7 [i_0] = (((arr_2 [i_0]) ? ((1048575 & (arr_4 [i_0] [i_0] [i_0]))) : 16299));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_12 = ((((((((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_8 [i_3] [i_3])))) ? (arr_8 [i_3] [i_3]) : ((((arr_9 [i_3]) ? 40 : (arr_9 [i_3])))))) - (((arr_8 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3])))));
        var_13 = (min(var_13, (arr_9 [i_3])));
    }
    var_14 = (((((var_2 ? ((var_7 ? -1 : 34581)) : -1048566))) ? var_7 : 16));

    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_15 = ((((max(29670, -1))) < ((((((arr_11 [i_4] [i_4]) ? 9223372036854775807 : 1))) ? (arr_11 [i_4] [i_4 - 3]) : (((arr_10 [i_4]) ? (arr_10 [i_4]) : (arr_11 [i_4] [i_4])))))));
        var_16 -= ((((((-7 ? 1048575 : (arr_10 [i_4]))) > (arr_10 [i_4]))) ? (((arr_10 [i_4 - 1]) & 9223372036586340352)) : 17));
        var_17 = (min(var_17, (!-268435456)));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_18 -= ((-13 & 0) ? -1048576 : -16384);
        var_19 = (max(var_19, (((!(arr_13 [i_5 + 3]))))));
        var_20 = (arr_13 [i_5]);
        var_21 = (min(var_21, (arr_14 [i_5])));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_22 = (max(((((min((arr_10 [i_6]), (arr_13 [i_6])))) ? -1545790495 : (((arr_16 [i_6]) / (arr_16 [i_6]))))), (((arr_16 [i_6]) ? (arr_14 [i_6]) : 18597))));
        var_23 -= 9223372036854775807;
        var_24 = (((13096 ? (((-2066905612 ? (arr_14 [i_6]) : 1670636922))) : ((-9223372036854775803 ? (arr_15 [i_6] [i_6]) : (arr_13 [i_6]))))));
        arr_18 [i_6] = (min(9223372036854775807, (((40 / (arr_12 [i_6] [i_6]))))));
        var_25 -= (arr_11 [i_6] [i_6]);
    }
    #pragma endscop
}
