/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((((-31 ? var_11 : (((max(51235, 32751))))))) ? (((max(4080, var_10)))) : (min((((var_8 ? var_10 : var_1))), (var_11 / 56)))));
    var_16 = (min(var_16, (((~(((((var_1 ? var_1 : var_10))) ? 29 : (248 && var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (min(var_17, (arr_10 [3] [i_0] [0] [i_2] [i_3])));
                        var_18 = 31;
                        var_19 = (min(var_19, (((14285 ? ((max((arr_5 [i_1]), 8793945538560))) : ((((arr_3 [i_1]) << (122 - 95)))))))));
                        var_20 = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [5] [i_0] [i_1] [i_2] [i_4] = (min(((((arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_1] [i_1 - 4]) <= -30))), (arr_9 [i_0 + 1] [i_0] [i_0 + 2] [i_1] [i_1 - 4])));
                        arr_16 [i_0] [i_0 + 2] [8] [i_0 + 2] [i_4] = (max((arr_6 [i_0]), (min(29, 1))));
                        var_21 = (arr_7 [i_0] [i_1] [i_2] [6]);
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [15] = ((!((((((arr_2 [4]) && (arr_12 [4] [i_2] [1] [i_0]))) ? (((arr_6 [i_0]) | (arr_18 [i_0] [i_0] [1] [i_5 + 1]))) : 1)))));
                        var_22 = (min(var_22, (((51235 ? -3 : 200)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_23 = ((~((32751 ? (arr_5 [i_0]) : var_10))));
                        arr_22 [i_0] [i_0] [20] = ((((((arr_12 [22] [i_1] [2] [2]) ? 43617 : (arr_0 [i_6])))) ? (arr_11 [10] [i_1] [i_0]) : (arr_11 [i_0 - 1] [i_1 - 2] [i_0])));
                        var_24 = (((arr_2 [i_2]) ? (arr_21 [i_0] [i_0] [i_1 - 1] [i_2] [17] [17]) : (arr_2 [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 = ((!(arr_20 [i_0] [i_0])));
                                arr_27 [i_2] [i_2] [i_2] [i_7] [i_8] &= (arr_4 [i_8] [11]);
                                var_26 = (((min((arr_21 [i_0 + 4] [i_1 - 2] [i_1 - 3] [i_1 + 4] [i_7 - 1] [i_7 - 1]), (arr_21 [i_0 - 1] [i_1 - 2] [i_7] [12] [i_7 - 1] [i_7 - 1])))) && 0);
                            }
                        }
                    }
                    var_27 = var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_28 = ((!((((arr_2 [i_0 + 3]) ? (arr_2 [i_0 + 4]) : 151)))));
                                var_29 = ((((min(var_4, -1))) ? (max((arr_20 [i_1 - 3] [i_0]), (arr_20 [i_1 - 3] [i_0]))) : ((((!((((arr_10 [i_0 + 1] [i_1] [i_2] [i_9] [i_10]) ? 52 : 18)))))))));
                                arr_32 [i_0] [i_0] [9] [0] [0] = (min((arr_29 [22] [i_1] [i_9] [i_9]), (((!((((arr_0 [7]) ? 16320 : (arr_8 [i_0] [i_9] [i_0])))))))));
                                arr_33 [i_10] [i_9] [i_0] [i_0] [i_0] = ((((((arr_8 [i_0] [i_1 - 4] [i_1 - 1]) ? 2656894674593985691 : 65535))) ? (arr_5 [i_0]) : 21916));
                                var_30 = ((16 ? (((max((arr_11 [i_0] [i_0 - 1] [i_0]), (arr_11 [i_0 + 4] [i_0 + 4] [i_0]))))) : (((arr_26 [6] [i_0] [i_0 + 1] [13] [i_1 + 4] [i_1 - 2]) - (arr_26 [i_0 + 1] [i_0] [i_0 + 1] [i_1] [i_1 - 2] [i_1 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
