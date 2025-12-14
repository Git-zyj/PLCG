/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((max(var_5, var_2)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((max(var_14, var_8))) ? var_8 : var_0)) > (max(var_3, var_10))));
        arr_4 [i_0] = (max(var_5, var_13));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(((max(var_8, var_7))), (var_7 % var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = (max(-var_16, var_3));
                                var_19 = (((((max(var_12, var_13)) ? (max(var_14, var_15)) : ((max(var_9, var_4)))))));
                                var_20 ^= var_11;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_21 = (max(var_21, ((((var_7 >= var_2) * var_3)))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_22 = (min(var_22, (var_4 | var_4)));
                            var_23 = ((~var_8) % var_16);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_7] [i_5] [1] = (var_0 && var_6);
                            var_24 = (((var_1 + var_14) * var_0));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = ((~((var_6 ? var_1 : var_9))));
                            arr_27 [i_0] [i_1] [i_5] [i_1] = ((((var_5 << (var_11 - 144))) != var_13));
                            var_26 = (~var_14);
                            arr_28 [i_0] [3] [i_2] [i_1] [i_8] = ((var_16 || (((var_7 ? var_15 : var_11)))));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_27 ^= (var_6 * var_10);
                            arr_33 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_9] = -var_9;
                        }
                        arr_34 [i_1] [i_1] [i_2] [i_1] = var_8;
                        var_28 = ((var_10 ? var_0 : var_15));
                        arr_35 [i_1] [i_5] = ((var_7 ? (var_9 - var_0) : var_5));
                    }
                    var_29 = (max(var_29, ((((~var_12) > var_1)))));
                }
            }
        }
        var_30 = ((!(max(var_10, (!var_10)))));
    }
    #pragma endscop
}
