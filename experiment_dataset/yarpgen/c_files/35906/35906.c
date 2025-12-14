/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_12;
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] |= (min((min((var_17 || var_7), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))), var_6));
                                arr_14 [i_2] [i_2] [i_2] [i_0] [i_2] = (max(((((!var_14) ? (arr_0 [i_1]) : (((!(arr_3 [10]))))))), (max(var_6, (arr_11 [i_2])))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_2] [i_2] [i_0] = var_16;
                    arr_16 [12] [i_1] [i_2] [i_2] = (max(4017096160005199333, (min(-var_3, (4167219246 - -4017096160005199325)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] = max(((-(((arr_10 [i_6] [i_6] [i_5] [i_2] [i_2] [i_1] [i_0]) ? var_5 : (arr_17 [i_0] [i_0] [i_0] [i_0]))))), (max(-66, -4017096160005199334)));
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = (16137 & 1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
