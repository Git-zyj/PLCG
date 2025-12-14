/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = (min(255, 255));
                            var_11 = ((255 * (min(1, 198779842))));
                            var_12 = ((15516170608215945618 ? ((235 ? 3145728 : 59434)) : (0 * -3776031141483819500)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((max((!127), (!var_7))))));
                            arr_19 [i_0] = ((((max(var_4, (arr_1 [i_4])))) ? ((((((!(arr_1 [i_1]))) || (arr_0 [i_0 - 2] [i_0 - 1]))))) : (max((!17175133206196391951), (((arr_14 [i_5] [i_0] [i_0] [i_0]) ? var_8 : var_9))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7] [i_6] [i_6] = (~((-(arr_20 [i_7]))));
                    var_15 = ((202 ? 15516170608215945605 : 1));
                    arr_27 [i_6] [i_7] [i_7] [i_6] = (((((1048339575 / -53) ? (27605 || 150) : 19)) * (((((arr_24 [i_6] [i_6] [i_8] [i_8]) * (arr_24 [1] [i_6] [i_7] [i_8]))) * (!4278190080)))));
                    var_16 &= arr_25 [1] [1] [22] [12];
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] [i_6] [i_6] [i_9 + 3] [7] [i_9] = ((-1 ? (604330015 * 15516170608215945621) : ((((arr_25 [i_6] [i_8] [i_9 + 4] [i_8]) ? (arr_25 [i_6] [i_7 + 2] [i_8] [i_9]) : 897016371)))));
                                arr_33 [i_6] = ((153 ? -1784736572 : 2930573465493605987));
                                arr_34 [i_7] [i_6] = ((((var_8 / (arr_23 [i_6] [i_6])))) ? (((-401109787 ? 71 : 15516170608215945618))) : ((max((arr_23 [i_6] [i_6]), (((arr_23 [i_6] [i_6]) / var_1))))));
                                arr_35 [i_6] [i_7] [i_8] [i_6] [i_10] = (min(((var_3 ? var_2 : (arr_31 [i_7 + 2] [i_9 - 2] [i_6] [i_9 + 1] [i_9 + 2]))), var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
