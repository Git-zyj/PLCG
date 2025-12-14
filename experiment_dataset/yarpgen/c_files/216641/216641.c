/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [1] [1] = (max(((-2096046162 ? (arr_2 [i_0 - 2] [1] [i_2]) : (arr_6 [i_0 - 2] [i_1] [i_0 - 2]))), ((max((arr_6 [i_0 + 1] [i_1] [i_2]), var_6)))));
                    arr_8 [i_0] &= ((-(((arr_3 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : var_9))));
                }
            }
        }
    }
    var_19 = ((-((max((!3), (max(var_9, var_4)))))));

    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = (max(1056964608, 1056964608));
        var_21 = (max(var_21, ((max((arr_10 [i_3 - 1]), ((((((arr_9 [i_3] [i_3]) ? (-127 - 1) : 32640))) ? ((-1096869430 ? var_3 : -1056964626)) : (((var_10 ? (arr_10 [i_3 - 1]) : (arr_9 [i_3 - 1] [i_3])))))))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_15 [6] [i_4 - 1] [i_4 - 1] [i_4] &= (max((((!(arr_13 [i_4 + 2] [i_5] [i_5] [i_5])))), (524235949 / 28)));
                    var_22 = ((var_16 ? -var_17 : ((var_8 ? ((var_0 ? var_8 : (arr_12 [i_3 - 1] [i_4 + 1] [i_5]))) : var_13))));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_23 = ((((-683070027174188724 ? 1 : (((arr_9 [i_6] [0]) + 1))))) ? (((-(max((arr_13 [16] [i_6] [i_6 - 1] [9]), var_11))))) : (((((arr_9 [i_6 - 1] [2]) ? var_8 : var_7)) / (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
        var_24 = (((((arr_16 [i_6 - 1]) * (arr_16 [i_6 - 1]))) / ((((min(12, (-127 - 1)))) ? (arr_10 [i_6 - 1]) : 2047))));
        var_25 = (((((arr_17 [i_6] [i_6 - 1]) ? (arr_13 [i_6 - 1] [i_6] [i_6 - 1] [i_6]) : (arr_17 [i_6] [i_6 - 1]))) / (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
    }
    var_26 = var_17;
    #pragma endscop
}
