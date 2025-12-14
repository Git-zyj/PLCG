/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = (((!((var_12 && (arr_10 [i_4]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] = var_11;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] = -28883;
                    var_13 = ((var_9 ? -var_4 : ((min(var_10, var_9)))));
                    arr_15 [i_1] [9] [i_2] [8] = ((var_1 * (((max(var_6, (arr_5 [i_1]))) >> (-28883 + 28940)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                arr_23 [i_6] = 28882;
                var_14 = (min(((29623 ? -668155995 : -668155995)), ((min((min(var_0, var_9)), (arr_22 [i_6] [i_6 - 1] [i_6]))))));
                arr_24 [i_6] = (((arr_20 [i_6]) / (((((28882 ? var_4 : (arr_20 [i_6])))) ? (((65535 ? var_5 : 28883))) : -var_1))));
            }
        }
    }
    var_15 = (max((((((var_0 ? 420 : var_7)) >= (~var_8)))), var_1));
    #pragma endscop
}
