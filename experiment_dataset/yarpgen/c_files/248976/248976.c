/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(var_11, var_1)))));
    var_16 -= ((var_2 >= ((1261580795 << (((var_8 + 36) - 23))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] = (arr_12 [i_0 - 1] [i_1] [9] [i_3] [i_3]);
                                arr_15 [i_0] [1] [i_0] [i_0] [4] [i_0] [i_0 - 2] = var_14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = ((((((arr_10 [i_0 + 2] [i_0 - 2] [i_0] [14] [i_0]) ? var_11 : var_8))) ? (arr_5 [i_6] [i_1] [i_0 + 2]) : var_4));
                                arr_20 [1] [1] [9] [1] [i_5] [i_6] = (arr_13 [i_5] [i_1] [i_6] [i_5] [i_6]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_18 = (((((arr_5 [i_7] [i_7] [i_8]) < (arr_13 [0] [i_7] [i_8] [i_8] [i_8]))) ? (arr_17 [2] [1] [0] [6] [0]) : ((max(var_13, (var_13 - -1261580796))))));
                    var_19 = (!var_7);
                }
            }
        }
        var_20 -= ((min((max(109, (arr_0 [i_0] [i_0]))), 65531)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_21 = (min(var_21, (~-var_12)));
        arr_30 [i_9] [i_9] = -1261580811;
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_34 [i_10] [i_10] = ((0 ? -120 : 226254351));
        arr_35 [7] = -1261580770;
    }
    #pragma endscop
}
