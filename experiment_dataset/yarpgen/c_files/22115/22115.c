/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_3, -838584949877113722));
    var_18 = ((((min(-1, 1))) ? var_15 : (var_1 + 249)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = var_5;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 *= -11747;

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_3 [i_0 + 1]) << (((arr_2 [i_0 + 3] [i_0 + 1] [i_4 - 2]) - 7153))));
                            arr_13 [i_0] [i_0] = ((~(7680 & 1)));
                        }
                        var_21 = ((var_11 ? 2147483647 : (((arr_10 [i_0] [i_0] [i_2] [i_3]) + 178))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_17 [10] [10] = -11;
        var_22 = (((((~11744) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((arr_4 [i_5] [i_5]) * var_12))))) ? (arr_14 [i_5]) : 9);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_23 ^= ((~(arr_8 [i_5] [i_5])));
            var_24 = ((17 ? 18446744073709551615 : -8));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_25 = (max(var_25, (~var_5)));
                            arr_29 [i_7] [i_5] [i_6] [i_7] [i_8] [i_7] = (var_9 ^ 1);
                            arr_30 [i_8] [10] [i_8 - 2] [i_8] [i_7] [10] [i_7] = ((~(arr_11 [i_8 - 1] [i_8 + 1] [1] [i_8 - 2] [i_9 + 4])));
                        }
                    }
                }
            }
        }
        var_26 = (min(((18446744073709551610 ? 1 : 4334391338002623628)), (arr_21 [i_5] [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
