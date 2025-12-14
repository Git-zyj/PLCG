/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~-33) << (((max((min(-33, var_14)), 3774743172)) - 3774743166))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_17 = (((((arr_7 [i_0]) && var_7)) && (arr_1 [i_1 + 1] [i_3 + 1])));
                                var_18 ^= (((arr_10 [i_1 + 1] [i_3] [i_3 + 1] [8] [8]) == 50406));
                                var_19 = (~15);
                            }
                            var_20 = (arr_3 [i_0]);
                        }
                    }
                }
                var_21 = -17;
            }
        }
    }
    var_22 = 520224123;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_23 = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_24 = (arr_21 [i_5] [i_5] [i_5]);
                                var_25 = (arr_16 [i_7] [i_7]);
                                var_26 = (max(var_26, ((((arr_14 [i_5 + 1]) ? ((((arr_27 [i_5] [i_5] [12] [i_5] [i_9]) ? var_8 : -24134))) : (((((-11 ? (arr_20 [i_9] [i_9] [i_9] [i_9]) : var_8))))))))));
                                var_27 = (((3774743172 % 25017) << (8823618921214583524 - 8823618921214583495)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
