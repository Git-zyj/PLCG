/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 + 2] [i_1] [i_2] [4] |= var_18;
                            var_20 = (min(var_20, var_14));
                            arr_14 [i_1] [i_2] [i_3] = var_17;
                            arr_15 [i_3] [i_2] [i_1] [i_0 + 1] = var_3;
                            arr_16 [i_0 + 2] [i_1 + 2] [i_2] [1] [i_1] [i_3] = var_17;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 = var_14;
                            var_22 = var_0;
                            arr_22 [13] [i_1] [i_4] [i_5] = (var_2 ? var_17 : var_6);

                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_23 ^= (((((var_2 ? var_12 : var_6))) ? var_15 : var_6));
                                var_24 += var_15;
                            }
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_28 [i_1] [i_5] [i_4] [i_1] [14] = var_9;
                                var_25 = ((var_7 ? (((var_4 ? var_0 : ((var_13 ? var_19 : var_1))))) : ((var_13 ? var_13 : var_12))));
                                arr_29 [i_0] [i_1 + 3] [i_4] [2] [3] = (((((var_15 ? ((var_4 ? var_10 : var_8)) : var_9))) ? var_9 : var_15));
                                var_26 &= var_16;
                                var_27 = (max(var_27, (((var_3 ? var_13 : var_17)))));
                            }
                            for (int i_8 = 2; i_8 < 18;i_8 += 1)
                            {
                                var_28 -= ((var_5 ? var_2 : var_3));
                                arr_33 [18] [i_1] [i_4] [i_5] [7] [18] = var_12;
                                var_29 ^= ((var_9 ? (((((var_14 ? var_13 : var_10))) ? var_0 : var_13)) : var_4));
                            }
                            var_30 = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_31 &= var_11;
                            var_32 -= var_16;
                        }
                    }
                }
                var_33 += var_2;
            }
        }
    }
    var_34 = var_16;
    var_35 = var_0;
    #pragma endscop
}
