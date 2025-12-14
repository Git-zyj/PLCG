/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_17 ? 32755 : var_0)) < ((var_13 ? var_5 : -32741)))))) > (((~var_10) ? (((min(20457, -20918)))) : 13629277303041178076))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = ((((min((arr_9 [8] [8] [i_0] [i_1 + 2] [i_3 - 1] [8]), 20512))) ? (var_14 && 32755) : (~var_19)));
                                var_22 = ((-(((arr_10 [i_0] [8] [i_1] [8]) ? (arr_10 [i_0] [i_1 + 2] [i_1] [i_3 - 2]) : (arr_10 [i_0] [i_0] [i_1] [1])))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1 + 1] [5] = ((((var_10 ? ((var_13 << (((var_11 + 12440) - 18)))) : 1)) * 1));
                }
            }
        }
    }
    var_23 = (max(var_23, ((min((((((max(245, var_1))) ? (min(1985879200, var_11)) : ((var_11 ? 1989 : var_12))))), (((max(9488773883818690678, var_5)) ^ (~var_10))))))));
    var_24 = var_10;
    var_25 = var_0;
    #pragma endscop
}
