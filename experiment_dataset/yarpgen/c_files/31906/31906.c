/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 ^= ((var_7 ? var_8 : ((var_9 ? var_3 : var_7))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 3] [i_2 - 1] [i_2] = var_0;
                        var_14 = var_3;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_15 = var_0;
                            var_16 = (min(var_16, var_11));
                            var_17 = (((((128 ? 1 : 0))) ? ((var_10 ? var_12 : var_4)) : (((var_5 ? var_9 : var_8)))));
                        }
                        arr_16 [i_0] [i_1 + 1] [i_0] [0] [i_3] [i_3] = var_10;
                        arr_17 [i_0] = var_7;
                    }
                }
            }
            var_18 = (((((var_6 ? var_0 : ((var_12 ? var_0 : var_8))))) ? (((var_11 ? ((var_1 ? var_6 : var_8)) : var_6))) : var_12));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_20 [i_5] [i_5] [i_5 + 1] = ((var_3 ? var_11 : var_2));
            var_19 = var_10;
            arr_21 [i_5] |= (var_6 ? var_5 : var_7);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_25 [i_6] = var_0;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_28 [i_0] [i_6] [i_7] = var_3;

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_32 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 2] [i_7] [i_8] = ((var_11 ? var_0 : var_10));
                    var_20 = (max(var_20, (((31793 ? 233 : 1)))));
                }
                var_21 = (max(var_21, var_1));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_22 = var_4;
                var_23 ^= ((var_1 ? (((((var_12 ? var_2 : var_9))) ? ((var_4 ? var_2 : var_12)) : var_1)) : var_4));
            }
            var_24 = ((var_2 ? var_6 : ((var_4 ? ((var_2 ? var_0 : var_12)) : var_5))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_25 = (var_7 ? var_1 : var_3);
                        var_26 = var_2;
                        var_27 = var_5;
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_28 = (min(var_28, (((var_8 ? var_4 : var_7)))));
            var_29 = var_10;
            var_30 = (((((var_9 ? 31793 : 1))) ? 1137033614 : 18446744073709551615));
            var_31 = var_10;
        }
    }
    var_32 = var_9;
    #pragma endscop
}
