/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((2974964135790973606 ? var_10 : (max((arr_1 [i_0] [i_1]), -1635950078975837373)))), ((max((arr_0 [i_0] [i_1]), (0 & 58860))))));
                var_14 = ((((var_3 || (arr_1 [i_0] [i_1]))) ? (((!(arr_1 [i_1] [i_0])))) : (((arr_1 [i_1] [i_0]) ? 255 : (arr_1 [i_0] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 = (min(((-(arr_8 [i_2] [i_2]))), (arr_8 [i_2] [i_2])));
        var_16 = (min(var_16, (max(var_3, 6675))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_13 [i_3] = (((((arr_3 [0]) + 6673)) < (arr_1 [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_18 [i_5] [i_5] [i_5] = 0;
                    arr_19 [i_3] [i_4] [i_5] = var_10;
                    arr_20 [i_3] [i_5] [2] = (-126 ? (arr_1 [i_4 + 2] [i_3 + 1]) : (41 - 58850));
                }
            }
        }
        var_17 = -9223372036854775802;
    }
    for (int i_6 = 2; i_6 < 7;i_6 += 1)
    {
        arr_24 [i_6] = (((1 ? ((1 ? -25525 : 1)) : 0)));
        arr_25 [i_6] = (arr_22 [i_6]);
        var_18 = var_10;
        var_19 = (((((arr_21 [i_6] [i_6]) << ((max((arr_7 [i_6]), 1))))) > (((max(1, (arr_7 [i_6])))))));
        arr_26 [i_6 + 3] [10] = arr_8 [7] [0];
    }
    #pragma endscop
}
