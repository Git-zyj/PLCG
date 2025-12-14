/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = (arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (((var_2 / var_10) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) : 15));
                                arr_12 [i_0 + 1] [i_1] [i_0 + 1] [i_3 - 2] [i_4] [i_3] = (!9524);
                                var_14 = (((((96 ? var_5 : 63))) | 8323349589429367668));
                            }
                        }
                    }
                    var_15 = var_10;
                }
            }
        }
    }
    var_16 = (21 ? ((max(var_9, (!var_1)))) : var_0);
    #pragma endscop
}
