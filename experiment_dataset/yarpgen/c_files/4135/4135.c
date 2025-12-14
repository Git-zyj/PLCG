/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 -= (arr_0 [17]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] &= (max((((arr_5 [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0 + 2] [i_0 + 2]) : (arr_5 [i_0 + 1] [i_0 - 1]))), (arr_5 [i_0 + 1] [i_0 + 2])));
                        arr_12 [i_3] [i_1] |= (((arr_2 [i_2]) ? (((max((arr_9 [i_3] [i_2]), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : ((var_6 ? (((arr_0 [i_0 - 1]) ? var_10 : (arr_7 [i_1] [i_3]))) : (arr_3 [i_0 + 1] [i_0 - 1])))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_0] &= (!(arr_8 [i_0] [i_4]));
                        var_13 = (arr_13 [i_1] [i_1] [i_1] [i_2] [i_4] [i_4]);
                        var_14 = ((var_9 ? (arr_14 [i_0] [i_1] [i_0 - 1] [i_0]) : var_7));
                    }
                    var_15 = var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] = (arr_7 [1] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_16 = (((((max((arr_25 [i_5] [i_5] [i_5]), (arr_23 [i_5] [i_5] [i_7 - 1] [i_8]))))) ? (min((arr_19 [i_7] [17] [17]), (arr_17 [i_5] [0]))) : var_7));
                            var_17 = ((((((arr_13 [i_5] [i_8 + 1] [i_5] [i_8 + 1] [i_8] [i_8]) ? (arr_10 [i_8] [i_8 + 1] [1] [i_8 + 1]) : (arr_23 [i_8] [i_5] [11] [i_8 + 1])))) ? (((((var_0 ? var_6 : (arr_5 [i_8] [i_7])))))) : var_10));
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_18 = ((~(!var_3)));
        var_19 = var_1;
        arr_32 [i_9] = ((((max(((((arr_0 [18]) ? (arr_31 [i_9]) : (arr_7 [i_9] [i_9])))), var_10))) ? (((!(arr_13 [16] [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9])))) : (max((min((arr_0 [i_9]), var_8)), (((arr_28 [i_9 - 1] [i_9 - 1]) ? var_8 : (arr_2 [i_9])))))));
        arr_33 [i_9] = (max((max((!var_2), (((arr_2 [i_9]) & var_1)))), ((((max((arr_7 [i_9] [7]), var_4))) ? var_6 : (min((arr_8 [i_9] [1]), (arr_28 [i_9] [i_9])))))));
    }
    #pragma endscop
}
