/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (((~var_6) ? 1 : (~var_11)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_2] [i_3 + 2] = (arr_9 [i_0] [i_0]);
                                var_15 = (min(var_15, (~1825151093)));
                                var_16 = (arr_14 [i_0] [i_2] [i_2] [i_1 - 1] [i_0]);
                            }
                        }
                    }
                }
                arr_17 [i_0] [2] [i_0] = var_7;
                var_17 = (min(var_17, -var_4));
            }
        }
    }
    var_18 = ((((!(((10567 ? var_10 : var_9))))) ? var_12 : (((((var_11 ? var_5 : 1))) ? (min(var_7, var_14)) : ((max(var_9, -18)))))));
    var_19 ^= var_3;
    #pragma endscop
}
