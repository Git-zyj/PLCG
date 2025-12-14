/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = ((~((min((arr_2 [i_2 - 2] [i_2 - 2] [i_2 + 1]), 29154)))));
                                var_14 &= (min((min((arr_11 [4] [i_1] [i_1] [i_2] [i_3] [i_4]), ((min(var_4, var_10))))), var_10));
                                arr_15 [16] [i_3] = (49336 - 1208224400);
                                var_15 = (min(var_15, (((((min(var_9, (arr_4 [12] [i_2 + 1] [i_0])))) ? 11108312963577355725 : ((min(14, var_10))))))));
                                var_16 = (!var_0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_5 + 1] [i_2] [14] [i_0] = min((min(var_5, (arr_14 [i_2 - 2] [16] [i_5 - 2] [i_6] [i_6]))), (((arr_2 [i_6] [i_1] [i_0]) * (arr_16 [i_2 + 1] [i_2 - 3] [i_5 - 2] [i_5 - 3]))));
                                var_17 = (arr_16 [i_1] [i_2 + 1] [i_5 - 1] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((min(16380, 1208224400))) ? var_5 : var_1));
    #pragma endscop
}
