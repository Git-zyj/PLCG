/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -var_16;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [1] [1] [1] [i_2] [i_2] = ((~0) ? var_3 : (!var_12));
                                var_20 = (var_2 ? var_12 : var_18);
                                arr_13 [i_0 - 1] [i_0 - 1] = ((var_2 ? var_4 : var_11));
                                var_21 = -var_1;
                                var_22 ^= (!var_18);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((var_5 ? ((var_16 ? var_15 : var_0)) : -1));
                    arr_15 [i_1] [i_2] = (3662445524652183727 ? 55640 : 1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 -= (((((var_0 ? var_1 : var_16))) ? var_16 : var_11));
                                var_24 = var_7;
                                arr_22 [i_0 - 3] [i_1] [i_6] [i_5] [i_6] = ((var_15 ? var_13 : var_7));
                            }
                        }
                    }
                }
                arr_23 [i_1] = var_4;
                var_25 = (min((min(var_6, var_18)), (!var_18)));
            }
        }
    }
    #pragma endscop
}
