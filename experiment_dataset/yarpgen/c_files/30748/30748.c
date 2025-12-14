/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((((max(var_3, 255)))) ? (((arr_9 [i_2] [i_2] [i_2 + 3] [i_2 + 2]) ? (arr_6 [i_2] [i_1] [i_2 + 4]) : (arr_6 [10] [i_1] [i_2 - 2]))) : (((min(65535, var_0))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_20 [i_1] [i_6] [i_5] [17] [6] [i_1] = ((((var_10 ? (((!(arr_10 [i_0] [i_1])))) : ((28 ? -115 : -1)))) - (((arr_16 [i_1 - 1] [i_7]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_1))));
                                arr_21 [i_0] [i_1] [9] [i_7] = (min(-18446744073709551614, (((+(((arr_18 [i_1]) / var_3)))))));
                                var_14 = (min(var_14, (max((((!(arr_16 [i_0] [i_1 - 1])))), (min((arr_17 [i_0] [i_6] [i_5]), (arr_15 [i_0] [13] [i_1 + 1] [i_6])))))));
                                var_15 = (arr_4 [i_0] [i_1 - 1]);
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] [i_7 + 1] = (!199);
                            }
                        }
                    }
                }
                var_16 = (((((var_1 ? (arr_3 [i_1] [i_1]) : var_4))) ? ((var_9 ? ((var_7 ? (arr_14 [i_1]) : 9223372036854775807)) : ((0 >> (65521 - 65466))))) : var_7));
            }
        }
    }
    var_17 = (((min(var_8, var_1))));
    var_18 = var_8;
    #pragma endscop
}
