/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (min((((var_7 * var_10) ^ var_8)), ((((min(1, 7398285990778038882))) ? (((var_7 ? var_5 : var_13))) : (min(var_14, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] = ((var_3 ? var_17 : (arr_2 [i_0])));
                                var_21 = var_3;
                                var_22 -= (--34902897112121344);
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = var_9;
                var_23 = ((((min((arr_6 [i_1 - 3] [i_1 - 3] [i_0] [i_0]), 1))) ? ((0 ? (arr_10 [i_1] [i_1] [20] [i_1 - 3] [16]) : var_10)) : (!var_7)));
                var_24 = (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
