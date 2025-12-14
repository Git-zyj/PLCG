/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (-(arr_6 [i_0] [i_1]));
                    arr_9 [3] [i_0] [i_0] [3] = (((((min((arr_8 [i_0]), (arr_5 [2]))) != (arr_7 [5] [i_1] [11]))) ? (max((arr_4 [i_0] [i_1] [i_2]), (var_10 + var_6))) : (!5746663941626601101)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 = 873545947;

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_18 = (((arr_10 [1] [3] [3]) ? (arr_8 [i_0]) : 231));
                            var_19 *= ((~(-77 != 76)));
                            var_20 = (min(var_20, (-68 - -76)));
                        }
                    }
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_21 = ((max((arr_11 [i_0] [i_1]), (arr_11 [i_0] [15]))));
                        var_22 = ((~((35459 ? var_3 : ((min(76, 108)))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] = (+(((arr_12 [7] [i_5] [i_5] [i_5 + 2] [2] [i_5]) + -1783582248)));
                        arr_17 [i_0] [i_0] [4] [i_5 + 1] = -76;
                        arr_18 [i_0] = (max((((var_8 ? (arr_15 [i_2] [8] [i_2] [i_5 - 2] [7] [i_5]) : (arr_15 [i_0] [4] [i_2] [i_5 + 1] [i_5] [i_5])))), (arr_3 [i_5 + 1] [i_0])));
                    }
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        var_23 = (arr_21 [10] [i_0] [i_1] [i_2] [1] [i_0]);

                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_0] [7] [2] [7] [i_0] [i_7] = max((((max(0, 2745392948)) + var_10)), (arr_12 [i_2] [i_6 - 2] [i_7] [i_2] [i_7] [i_7]));
                            var_24 = (((((var_3 ? 76 : (~59430)))) ? 76 : 12571136990198605676));
                            arr_27 [i_0] [i_0] [i_1] [7] [i_6 + 1] [i_0] = 1705590362619017285;
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_25 = (max(var_25, 1));
                            var_26 = (-(!-48));
                            var_27 = (((~-2076378297) ? (arr_22 [13] [i_1] [1] [i_6] [i_8]) : (~-3337096000664069348)));
                            var_28 += (arr_28 [i_1] [i_2] [i_6]);
                        }
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_29 = (~-76);
                            arr_33 [i_0] [i_0] [8] [i_2] [i_2] = min(255, (5838124109520192777 | 5732));
                        }
                    }

                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        var_30 = (arr_24 [5] [i_1] [14] [i_1]);
                        var_31 = (max(((max((~156), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), ((var_7 ? (max((arr_11 [i_0] [4]), 1194312762719624632)) : (((max(14760, (arr_29 [i_0] [i_1] [3] [i_0])))))))));
                    }
                    arr_38 [i_0] [i_0] = (arr_29 [i_0] [i_1] [3] [i_2]);
                }
            }
        }
    }
    var_32 = var_12;
    #pragma endscop
}
