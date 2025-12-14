/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_4] = (((((((678335592 + (arr_0 [i_0])))) ? (((arr_14 [i_0] [i_1 + 1] [i_2 - 2] [i_1] [i_3] [i_1] [i_0]) ? (arr_11 [i_3] [i_1] [i_1] [i_0]) : (arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] [i_4]))) : ((var_12 ? 4614310215886879326 : (arr_5 [i_0] [i_1] [2] [i_3]))))) > ((min((arr_4 [i_3 - 2] [i_2 - 2]), (arr_13 [i_4] [i_4] [i_4] [i_1] [i_4]))))));
                                arr_16 [i_1] [i_2] [i_3] = ((((((-5435 ? var_5 : var_12)))) ? (arr_2 [i_1] [i_1]) : var_5));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_6 - 2] [i_1] [i_2 + 1] [i_1] [i_0] = max((((((-124 ? 3072 : var_0))) ? (arr_1 [i_0] [i_1 + 1]) : (var_1 % var_6))), (arr_22 [i_6 + 1] [i_2 + 1] [i_1 + 3]));
                                arr_24 [i_5] [i_5] [i_1] = var_5;
                                arr_25 [i_6] [i_1] [i_2 - 1] [i_1] [i_0] = (max(((!(((var_1 ? var_0 : var_1))))), (((!var_4) >= 140737219919872))));
                            }
                        }
                    }
                    arr_26 [i_1] [i_1] = ((((((var_5 - (arr_9 [i_2] [i_1] [i_1] [i_0]))) ? var_6 : (arr_20 [7] [i_0] [i_1] [i_1] [i_2] [i_2] [i_1])))));
                    var_13 = ((((max((arr_20 [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]), (max((arr_20 [i_0] [i_2] [i_2] [i_0] [i_2 - 1] [i_2] [i_1]), (arr_5 [i_0] [i_1] [i_2] [i_1])))))) ? ((-(arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2 - 2] [i_0]))) : (((((arr_6 [i_2]) ? (arr_10 [i_0] [i_0] [16] [i_1] [i_1] [i_0]) : var_3)) ^ (arr_21 [8] [i_1] [i_2 - 1] [i_1 + 2] [i_1] [i_1] [i_1])))));
                    var_14 = var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                arr_32 [i_7] [i_8] = var_1;
                var_15 = var_9;
            }
        }
    }
    #pragma endscop
}
