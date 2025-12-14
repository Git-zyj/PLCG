/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 = -1757820078514399909;
                        arr_11 [i_3] = (arr_6 [7] [i_2] [12]);
                    }
                    var_16 -= min(3724138698, 3724138698);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = ((570828594 ? var_13 : (!570828594)));
        arr_16 [i_4] = 3724138701;
        arr_17 [i_4] = var_9;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_17 = (min(var_17, (arr_12 [i_6])));
                        arr_25 [i_6] [5] [i_6] [1] = (3724138701 ? 3724138701 : 3724138715);
                        var_18 = (max(var_18, (((570828594 ? (arr_3 [i_4] [i_4] [i_4]) : 3724138682)))));
                        arr_26 [i_6] [i_5] = (arr_7 [7]);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_19 -= (min(((3724138715 ? 570828577 : 3724138701)), (min(((570828595 ? var_7 : 3724138700)), (min(3724138735, (arr_0 [3])))))));
                    var_20 = ((3724138691 + (arr_23 [5] [i_9] [i_10] [i_10] [5] [i_10])));
                }
            }
        }
        var_21 = ((((arr_35 [i_8] [i_8]) / (arr_35 [4] [i_8]))) < (arr_35 [3] [5]));
    }
    #pragma endscop
}
