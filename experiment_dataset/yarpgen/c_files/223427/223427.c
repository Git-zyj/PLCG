/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = var_1;
                                arr_12 [i_2] [7] [i_2] [2] [7] = ((((min(2224486350104467989, (arr_10 [i_0 + 2] [i_0 + 2] [10] [i_0 - 2] [i_0 - 2])))) ? (max((arr_10 [i_0] [i_0 - 3] [i_0] [2] [i_0 - 1]), var_5)) : ((((arr_10 [i_0] [i_0 - 3] [i_0] [i_0 + 2] [i_0 - 2]) ? 0 : (arr_10 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 3]))))));
                                var_20 = (arr_7 [i_4] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    arr_13 [6] [6] [6] [6] |= ((var_16 ? ((-(((arr_4 [21] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_0 [6]))))) : ((((max(var_18, (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2])))) ? (((arr_3 [i_0] [i_1] [i_2]) ? var_18 : (arr_3 [6] [i_1] [i_0]))) : var_16))));
                    arr_14 [i_2] [i_2] = -0;
                }
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
