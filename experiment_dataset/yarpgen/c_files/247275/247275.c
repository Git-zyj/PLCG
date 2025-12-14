/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [2] [i_1] [11] [i_1] = ((max(-161385850, (var_0 / var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [7] [i_3] [i_3] [i_3] [i_3] [2] [i_3] = (((((-161385849 & 10) & ((~(arr_5 [i_3]))))) ^ var_9));
                                var_14 = (max(var_14, ((((-4123763739819244587 ? ((max(var_6, (arr_5 [i_1])))) : (((arr_2 [i_4]) << (((arr_2 [i_0]) - 1116826917))))))))));
                            }
                        }
                    }
                }
            }
        }
        var_15 = ((-161385848 ? var_0 : (((arr_1 [i_0]) & (arr_0 [i_0] [i_0])))));
        var_16 -= var_12;
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_17 = arr_18 [i_5] [16];

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_6] = (((arr_19 [i_5]) - (min(((((arr_18 [i_5 + 3] [i_6]) ? (arr_18 [i_5] [i_6]) : var_0))), (arr_19 [i_6])))));
            var_18 = ((((-(arr_15 [i_6])))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_19 = ((-23 ? (((arr_21 [i_7] [i_8]) ? 247 : 42606)) : var_5));
                    var_20 = 65508;
                    var_21 = (min(var_21, (((((var_0 ? (arr_15 [i_7]) : (arr_22 [11] [11]))) | ((~(arr_17 [i_9]))))))));
                    arr_31 [8] = ((~(arr_15 [i_8])));
                }
            }
        }
        var_22 = (((~(arr_25 [13]))));
    }
    var_23 = (max(var_23, ((((max((~65508), var_7)) >= var_10)))));
    #pragma endscop
}
