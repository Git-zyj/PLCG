/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_3, var_3));
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [9] = ((((((arr_1 [i_0]) - -30653)) & (((arr_1 [4]) >> (((arr_1 [0]) - 645083462030842945)))))) - (max((min((arr_1 [i_0 + 1]), (arr_0 [6]))), -14726)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (((min((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_5 [i_0] [1] [i_2]))) == (((min((arr_7 [i_0 + 1] [i_1]), -14733))))));
                    var_15 = (min(143, (min((max((arr_6 [i_1]), 19)), ((max(14721, (arr_4 [i_0] [i_1]))))))));
                    var_16 = min((max((((arr_4 [6] [i_1]) ? (arr_4 [i_0] [8]) : (arr_4 [4] [i_1]))), (((arr_4 [i_0] [2]) + (arr_6 [0]))))), ((((arr_5 [i_2] [i_2] [i_2]) > (arr_5 [1] [1] [1])))));
                }
            }
        }
        arr_9 [i_0] = ((((((min(132, -9145272827297473224)) + (arr_0 [i_0 + 1])))) ? ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : ((max(24179, ((((arr_3 [i_0] [5] [i_0 + 1]) == 1063641643))))))));
        var_17 = (~0);
        arr_10 [i_0] = (max(((max(113, (arr_3 [6] [i_0] [i_0 + 1])))), ((((min((arr_5 [4] [8] [8]), (arr_4 [i_0] [i_0])))) ? (arr_1 [i_0 + 1]) : 0))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] = -2062205610;
        arr_15 [5] = (((arr_12 [i_3 - 4] [i_3 - 4]) ? 511 : ((1 / (arr_13 [10] [10])))));
        var_18 -= (15 + 255);
        arr_16 [1] [1] = (arr_12 [i_3 - 2] [i_3 - 2]);
        var_19 = (((arr_12 [22] [i_3]) ? (arr_13 [i_3 - 1] [i_3 - 4]) : ((((arr_12 [1] [i_3]) - 2)))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_20 [i_4] = (((((((((143 ? 24185 : (arr_11 [i_4])))) ? (arr_12 [i_4] [i_4]) : (arr_11 [i_4]))) + 2147483647)) >> (((((arr_13 [i_4] [20]) ? -14739 : (max(0, 1063641643)))) - 92))));
        arr_21 [14] = (max((max((arr_18 [i_4]), (arr_18 [i_4]))), (max(3387898164, (arr_18 [i_4])))));
        arr_22 [i_4] = (max(1570006622, (((arr_12 [i_4] [i_4]) | (arr_12 [1] [i_4])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [7] [i_7] = (max(((32767 ? (arr_13 [i_6 - 2] [i_9 - 2]) : 22940)), ((((arr_19 [i_5 + 2]) * (arr_19 [i_5 + 1]))))));
                                arr_36 [i_7] [5] [1] [4] [5] [9] = (((((max((arr_23 [i_5 - 2]), (arr_23 [i_5 - 1]))))) * (max((((arr_17 [15]) * 143)), ((((arr_18 [14]) ? 44 : 3138558254)))))));
                            }
                        }
                    }
                }
                var_20 ^= (arr_12 [i_5 - 2] [i_5 + 2]);
            }
        }
    }
    var_21 = (~5919);
    #pragma endscop
}
