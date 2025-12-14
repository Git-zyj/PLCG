/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (!var_8);
        var_17 = ((-32505856 - (4262461451 != var_14)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [19] [i_0] = -140737488355312;
                    arr_9 [i_0] [i_0] = ((-(~14670245343341646347)));
                    var_18 = (40 & var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 -= (!4352);
                                arr_15 [i_1] [i_1] = 140737488355333;
                                var_20 = var_6;
                            }
                        }
                    }
                    var_21 = (~-140737488355302);
                }
            }
        }
    }
    var_22 = ((!((!(3776498730367905280 && var_10)))));
    #pragma endscop
}
