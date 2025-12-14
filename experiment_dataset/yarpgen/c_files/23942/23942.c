/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 | (~57770)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max(((~(~var_4))), (arr_3 [i_0] [i_0])));
                var_13 -= (((~(arr_1 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (((~var_1) ? var_2 : var_9));
                                var_15 = (arr_0 [i_0]);
                                var_16 = (max(var_16, var_5));
                                var_17 = var_0;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_18 = (max(var_18, (((~(arr_11 [2] [i_0] [11] [i_0] [i_0]))))));
                                arr_13 [i_0] [i_3] [1] [i_2] [4] [i_0] = var_6;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_19 = (min(var_19, (var_4 <= 21)));
                                var_20 = 10;
                            }
                            var_21 = ((+(min((arr_7 [9] [i_0 + 1] [9] [i_3]), 98))));
                        }
                    }
                }
                arr_17 [i_0] = -3240;
            }
        }
    }
    #pragma endscop
}
