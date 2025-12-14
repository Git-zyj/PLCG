/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((!(!0))));
                var_16 = (min(var_16, (min(var_7, 226))));
                var_17 += (min(((562941363486720 ? (max(2453303503587297781, (arr_3 [18]))) : var_4)), (((min(var_9, -2453303503587297762))))));
                var_18 = (min(var_11, (max((min(-2453303503587297774, (arr_2 [i_1]))), (~var_5)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_6 [i_2] = var_0;
        arr_7 [i_2] = ((arr_2 [i_2]) ? (arr_2 [i_2]) : var_4);
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        var_19 = (arr_2 [i_5]);
                        arr_17 [i_2] [i_2] [i_2] [i_5] = var_6;
                        var_20 |= var_1;

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [i_2] [i_3 - 2] [i_4 - 1] [i_2] [i_6] = (((arr_14 [i_6 + 1] [i_4] [i_4 - 1] [i_2]) * (!-7835)));
                            var_21 -= 255;
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_3 + 1] [i_2] = var_7;
                            arr_26 [i_2] [i_2] [i_4 - 1] [i_3] [i_2] = 949943583;
                            arr_27 [9] [i_5 + 1] [i_2] [i_2] [i_2] [i_2] = var_12;
                            var_22 = 0;
                        }
                        var_23 += 216;
                    }
                }
            }
        }
        arr_28 [i_2] = (var_6 & var_11);
        var_24 = (max(var_24, (arr_2 [i_2])));
    }
    #pragma endscop
}
