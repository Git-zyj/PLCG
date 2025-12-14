/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, 7980893011769584465));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = (min((arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]), ((((arr_6 [i_0]) && (arr_3 [i_0]))))));
                        var_21 = min(28672, (((1048576 * var_18) ? (1 + var_12) : ((min((arr_9 [i_0] [i_1] [i_2] [i_3]), 1))))));
                        arr_12 [i_0] [i_3] [i_2] [i_3] = 4782011854526923903;
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0] = ((((max(56218, (((arr_6 [i_0]) / (arr_9 [i_0] [i_0] [i_2] [19])))))) ? (((arr_9 [i_0] [i_1] [i_2] [i_3]) * (var_0 / var_12))) : (((max((!911950312), 36863))))));
                    }
                }
            }
        }
        arr_14 [i_0] = var_1;
        var_22 = (min(var_22, ((max(var_10, ((((arr_2 [i_0] [i_0]) / -15220))))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_23 ^= var_5;
            arr_23 [i_4] = ((!(arr_11 [i_4] [i_4] [i_5] [9] [i_5])));
            arr_24 [i_5] [i_5] [i_4] |= arr_8 [i_5];
        }
        var_24 *= ((((max((-15215 | 1950487876), (arr_22 [i_4] [i_4])))) ? (((511 || var_6) ? (((var_17 != (arr_4 [i_4])))) : ((max(1, 15228))))) : ((-(137438953470 <= -88)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, (((((max((((arr_8 [i_7]) ? 15215 : (arr_11 [i_7] [i_7] [i_6] [i_4] [i_6]))), var_9))) ? (arr_22 [4] [i_6]) : (((max((arr_16 [i_4]), ((((arr_16 [i_4]) == 15872))))))))))));
                    arr_29 [i_7] [i_6] = ((0 || (((~(36863 & -5059630693126800637))))));
                    arr_30 [i_4] [i_6] [i_6] [i_4] &= var_13;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_35 [i_8] = (((((511 ? var_1 : -31860))) ? var_15 : ((((!(arr_11 [14] [i_8 + 1] [i_8 + 1] [i_8] [i_8])))))));
        arr_36 [i_8] = (((arr_25 [i_8 + 1] [i_8 + 1]) * (arr_27 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1])));
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        arr_39 [i_9 + 2] [i_9] = 12;
        arr_40 [i_9] [i_9] = ((((max(519, (arr_11 [i_9 + 2] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 1])))) ^ var_17));
    }
    var_26 = (((var_0 ? -15215 : ((min(170, -16360))))));
    #pragma endscop
}
