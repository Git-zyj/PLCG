/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        var_12 = (var_7 < var_8);
        arr_3 [i_0] = var_9;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = var_6;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_1] [i_2] = var_6;
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = (arr_4 [i_2 - 1] [i_1 - 2] [i_0]);
                            var_14 = var_6;
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = (((arr_4 [i_5] [i_5 - 1] [i_2 + 1]) ? var_11 : (1 & 1)));
                            arr_19 [i_2] [i_2] = (var_10 & var_3);
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_2, var_9));
    var_16 = var_5;
    var_17 &= ((((!((max(var_5, var_5))))) ? ((1 ? 15626607564823050498 : 461363465796260925)) : 37616));
    #pragma endscop
}
