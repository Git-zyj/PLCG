/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((max(((((18446744073709551609 ? var_10 : -63)))), ((0 ? 4294967283 : ((((var_7 && (arr_4 [4] [4]))))))))))));
                var_15 = 127;
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (!14)));
                    var_17 = (max(var_17, 16));
                    arr_15 [i_2] [i_2] = (arr_4 [i_3] [i_2]);
                }
            }
        }
        var_18 = var_5;

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_18 [i_2] = 79;
            arr_19 [i_2] &= (arr_8 [i_2] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_7] [i_7] [i_2] = 2838436780;
                        var_19 = 4294967277;
                        arr_26 [i_2] [i_5] [i_6] [i_7] [i_7] = 64;
                    }
                }
            }
            arr_27 [i_2] [i_2] [i_5] = var_9;
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_20 ^= var_6;

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_21 = (((-((max(1, 32540))))));
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_39 [10] [i_9] [2] [8] [i_12] [10] [10] = ((!(((1 ? 1 : 4294967255)))));
                            arr_40 [i_8] [i_8] [5] = (max(4294967255, 4294967241));
                            arr_41 [i_8] = 109;
                            arr_42 [i_8] [1] [i_9] [i_10 - 3] [i_11] [i_12] [i_12] = ((1 ? 65535 : var_12));
                        }
                    }
                }
            }
            var_22 += (max(((-127 ? -100 : -32759)), var_13));
            arr_43 [i_8] = ((var_6 + (((arr_30 [i_8] [i_8]) ? 227 : 65534))));
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 14;i_13 += 1)
    {
        arr_46 [i_13] [i_13 + 2] = var_3;
        arr_47 [i_13] = 227;
        arr_48 [i_13] = ((var_7 ? 511 : (arr_45 [i_13 + 2])));
    }
    #pragma endscop
}
