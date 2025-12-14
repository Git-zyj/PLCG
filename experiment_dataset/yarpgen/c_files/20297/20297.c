/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 &= ((((((arr_2 [i_0 + 1]) ? 1 : (arr_2 [i_0 + 2])))) > (min(3207092197, 1148417904979476480))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((+(max((arr_3 [i_0 - 1] [i_1] [i_2]), (arr_7 [i_2] [i_4 + 1] [i_4 - 2] [i_4] [i_4])))));
                                var_17 = (!(((min(1643438711, var_4)))));
                                var_18 = ((((-(min(529819401, var_10)))) | (arr_7 [i_4 - 3] [i_2] [i_2] [i_1] [i_0])));
                                var_19 = (max(var_19, (((var_12 / ((7129940036971227574 - ((min(var_6, 3))))))))));
                                var_20 = 1;
                            }
                        }
                    }
                }
                var_21 = (-((min(var_0, (0 >= 65533)))));
                var_22 = (max(var_22, (((var_5 | (((!(arr_7 [i_0] [i_1] [i_0 - 1] [i_0 + 2] [4])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_23 = ((((4749140780663998705 & var_0) ? (((1 ? 65533 : var_1))) : -4519365991608099364)));
                    var_24 = (min(((((arr_19 [i_5 + 1] [i_5 + 1]) <= (arr_8 [i_5] [i_5 - 1] [i_5] [i_7] [i_5] [i_5 - 1])))), (arr_0 [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_25 = ((((((arr_23 [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5]) ^ (arr_2 [i_5 - 2])))) ? ((min(0, var_8))) : ((((arr_9 [16] [16] [6] [16] [16] [i_9] [16]) < 65533)))));
                                var_26 = (arr_0 [i_8]);
                                var_27 = (min(var_27, ((!((!(arr_20 [i_5 - 1] [1] [i_8] [i_9])))))));
                                var_28 = (min(var_28, ((((arr_10 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9]) ? (((max((arr_21 [i_5] [i_6] [9] [i_5]), -6768522192670727935)) >> ((((1 ? (arr_18 [i_8] [14]) : (arr_16 [6] [16] [i_9]))) + 2221625208100411249)))) : var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_29 = (((((arr_28 [i_5 - 2] [i_6]) & (arr_28 [i_5 - 2] [i_6])))) | -1002373353352885639);
                                var_30 = (min(var_30, 0));
                                var_31 = (max(var_31, (((!(arr_1 [i_5 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
