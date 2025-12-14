/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (arr_4 [i_0] [i_1] [i_2]);
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = (arr_6 [i_0] [i_1 + 3] [i_2] [i_1]);
                }
            }
        }
        var_17 ^= (arr_2 [i_0] [i_0] [i_0]);
        arr_9 [i_0] [i_0] = ((var_6 ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_4 [i_0 + 4] [i_0 + 4] [i_0])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_18 = (min(var_18, ((min(((((1 || 5990726081425743850) >> (((!(arr_11 [1]))))))), (arr_11 [1]))))));
        var_19 = (min(((max((arr_12 [i_3] [i_3]), ((1 + (arr_10 [i_3])))))), (arr_11 [i_3])));
        var_20 *= ((-(arr_10 [i_3])));
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, ((!((((arr_12 [i_4 + 2] [i_6]) - (arr_12 [i_4 + 1] [i_6]))))))));
                    arr_19 [i_4 + 2] [i_4] [i_4] = (((max((arr_14 [i_4 + 2]), (((!(arr_18 [i_4] [i_5] [i_6] [i_6])))))) & (arr_15 [i_4] [i_4 + 2])));
                    arr_20 [10] [10] [i_6] = (max((((((max(1, 9771))) ? ((~(arr_14 [1]))) : (arr_14 [i_4 - 1])))), (min(((((arr_11 [i_5]) ? (arr_14 [i_4]) : (arr_18 [i_4] [i_5] [i_6] [i_6])))), var_10))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_22 |= (var_15 & ((max((arr_12 [i_6] [i_5]), (arr_12 [i_4 + 2] [i_5])))));
                                var_23 += (max(((min(55768, (arr_23 [3] [1] [i_7] [i_7])))), (arr_15 [i_7] [i_7])));
                            }
                        }
                    }
                    var_24 = (arr_22 [4] [i_5] [i_5] [i_5]);
                }
            }
        }
    }
    var_25 = ((((min((max(var_10, var_10)), var_13))) ? var_4 : var_14));
    #pragma endscop
}
