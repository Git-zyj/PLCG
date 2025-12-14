/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((var_5 ? (((arr_1 [i_0] [i_0]) + (arr_3 [i_0]))) : (min(-8111740529060514191, var_8))));
        arr_4 [i_0] = (((!28281) ? (127 || var_13) : ((var_15 ? (arr_3 [i_0]) : -8111740529060514191))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_17 = ((((arr_9 [i_2 - 4] [i_3] [i_3 - 1]) + 9223372036854775807)) << (((((arr_9 [i_2 - 1] [i_2] [i_3 - 1]) + 3838547452497877307)) - 9)));
                    arr_11 [i_1] [i_2] [i_2] [i_1] = (((arr_8 [i_1] [i_1]) ? var_15 : (arr_5 [i_1])));
                }
            }
        }
        var_18 = var_11;
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_19 += (arr_12 [i_4 + 1]);
        var_20 = (min((arr_14 [i_4 + 1]), (max((arr_12 [i_4]), var_10))));
        arr_15 [i_4] = ((var_2 ? (((((6810 ? var_6 : var_11))) ? 37254 : 1)) : (((~-7866784639726252045) ? var_2 : ((min((arr_14 [i_4 - 2]), var_3)))))));
    }
    var_21 = (max((min((var_0 < 92), var_9)), var_14));
    #pragma endscop
}
