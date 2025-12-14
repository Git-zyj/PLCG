/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (~(arr_0 [i_0] [i_0]));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (1 * 1) : -var_3));
        var_17 = ((1 ? (((arr_3 [i_0] [i_0]) ? (-127 - 1) : (arr_1 [i_0]))) : 1));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_3] = ((((((arr_6 [i_2]) + (arr_10 [i_1])))) ? (arr_8 [i_1]) : (((1 ? 0 : 1)))));
                    var_18 -= var_3;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_19 = (min(var_19, 1));
                                var_20 = (((arr_17 [i_1] [i_2] [i_2] [i_4 - 2] [i_4 - 3] [i_5]) ? (arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_5] [i_5]) : (arr_17 [i_1] [i_2] [i_2] [i_3] [i_2] [i_5])));
                                arr_18 [i_1] [i_2] [i_3] [i_4] [i_5] = (((((-((-(arr_7 [i_2])))))) ? (((max(((max((arr_16 [i_5] [i_3] [i_3] [i_2]), var_13))), (arr_15 [i_1] [i_2] [i_1] [i_4 - 1] [i_2]))))) : (max(var_7, (min((arr_10 [i_5]), var_7))))));
                                var_21 = (max(var_21, (arr_16 [i_1] [i_2] [i_4 - 3] [i_5])));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [1] = 0;
        arr_20 [i_1] |= ((var_0 ? ((((arr_14 [12]) ? (arr_14 [10]) : -1))) : (arr_11 [i_1] [i_1] [0] [i_1])));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_22 |= ((1 | (arr_10 [i_7])));
                    var_23 *= ((((arr_13 [i_1] [i_6] [i_6] [i_6] [i_6] [i_7]) ? (((~(arr_23 [i_6 + 1] [i_6] [i_7])))) : (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_21 [i_7]) : (arr_13 [19] [i_1] [i_6] [i_6] [i_7] [i_7]))))) | (((min((arr_16 [i_7] [i_6] [i_6] [i_1]), (arr_16 [i_1] [i_6] [i_7] [i_1]))))));
                }
            }
        }
        arr_25 [i_1] = ((max(3133403891, 1)));
    }
    #pragma endscop
}
