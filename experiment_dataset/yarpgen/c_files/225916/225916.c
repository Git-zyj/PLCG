/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? ((((!(arr_0 [i_0]))))) : (arr_0 [i_0])));
        var_11 = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (min((((((max((arr_1 [i_1]), (arr_3 [i_1])))) ? (arr_5 [0] [i_1]) : ((var_2 ? (arr_5 [i_1] [i_1]) : var_1))))), (max((arr_0 [i_1 + 1]), var_6))));
        var_12 = ((!(arr_5 [i_1 - 1] [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = (((((min(-126, -126)))) / (min(((((arr_13 [i_2] [i_3] [i_3] [i_4]) & var_7))), (max((arr_9 [i_2]), var_5))))));
                    arr_16 [i_2] [i_3] = ((!(arr_14 [i_2])));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_13 = (arr_9 [i_2]);
                        var_14 = var_5;
                        arr_19 [i_2] [i_3] [i_5 + 1] = var_3;
                        var_15 ^= (max(var_7, (!var_3)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_16 = (max((arr_11 [i_2] [i_2] [i_2]), (arr_13 [i_2] [i_3] [6] [i_2])));
                                arr_27 [i_3] [i_3] [i_3] [i_2] [i_3] = max(var_1, (max(2147483647, 125)));
                                var_17 = (min((arr_13 [i_7] [i_7] [i_6 - 1] [i_6 - 1]), 119));
                                var_18 = (((((((-9223372036854775807 - 1) ? (arr_13 [i_3] [i_3] [i_3] [i_3]) : var_6)) >= (arr_11 [i_2] [4] [i_2]))) ? (arr_22 [i_2] [i_2] [18] [i_7]) : (max((arr_21 [i_2] [i_7]), (arr_20 [i_7] [i_6] [i_2] [1] [18] [i_2])))));
                                var_19 = max((min((arr_8 [i_2]), (((arr_24 [i_2] [i_3] [i_4] [i_6 - 2] [i_2] [i_7]) | (arr_17 [i_2] [i_2] [i_4] [11] [i_7]))))), (((!((min(var_0, (arr_17 [i_2] [i_3] [i_4] [i_6] [i_7]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_2] = ((((!((((arr_22 [5] [i_2] [i_2] [i_2]) / (arr_23 [i_2] [i_2])))))) ? ((min((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]), var_1))) : (max((arr_10 [16]), (((arr_20 [i_2] [9] [i_2] [i_2] [i_2] [i_2]) ? var_1 : var_4))))));
        arr_29 [i_2] = (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + var_8));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_20 = (min((min((max((arr_26 [i_8] [4] [i_9] [i_9] [i_8] [i_9] [i_10]), var_1)), var_3)), ((min((((-9223372036854775807 - 1) ? -1625128683 : 198)), (arr_34 [18] [i_9]))))));
                    arr_37 [i_8] [i_9] [9] = (((!((min((arr_14 [i_8]), (arr_10 [i_10])))))));
                }
            }
        }
        var_21 = (((arr_17 [i_8] [i_8] [5] [i_8] [i_8]) ? ((max((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_17 [i_8] [i_8] [18] [i_8] [i_8])))) : ((max(17323, 47918)))));
        var_22 = (max(var_22, (((max(((max((arr_11 [i_8] [0] [i_8]), var_1))), (arr_23 [i_8] [i_8])))))));
        arr_38 [i_8] = var_9;
    }
    var_23 = min(var_5, (max(var_3, (max(var_5, var_6)))));
    #pragma endscop
}
