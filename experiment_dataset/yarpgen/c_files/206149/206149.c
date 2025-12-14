/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [1] = ((var_7 ? ((max(1, var_1)) : (!var_11))));
                arr_6 [i_0] [10] = (max(((((min(var_1, (arr_4 [i_0] [i_1])))) ? 62 : (!var_16))), (--2044487577)));
                var_19 = -1;

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_20 = ((62808 ? (((0 ? 1 : -4))) : (2356900531 * 1)));
                    var_21 = (((((arr_3 [i_0]) > 127)) ? ((((!-23) ? var_8 : ((max(1, var_3)))))) : ((~((var_14 ? (arr_0 [i_0] [i_0]) : 127))))));
                    arr_11 [i_0] [12] [i_2] [i_2] = (0 > 23);
                    var_22 = (max(var_22, (~-11)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_23 ^= ((820613904 ? 5 : 87));
                    arr_14 [16] [i_1] [16] [i_3] = arr_2 [i_0];
                    arr_15 [i_0] [i_1] [i_3] = (-2848745264 ^ var_1);
                    arr_16 [i_3] [i_3] [1] [i_0] &= (1938066764 | 1);
                    var_24 = (~var_5);
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    arr_19 [13] [i_4 - 1] [i_1] [i_0] = (((!1024) / ((18446744073709551615 ? (~820613925) : 5))));
                    var_25 = (arr_7 [i_1] [i_1]);
                    arr_20 [i_0] [i_1] [i_4 + 2] = ((1 ? ((min(128, 1))) : ((1839615264 ? -1 : 820613936))));
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_23 [i_0] [i_5 - 1] = (66 < 0);

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 = ((-1 ? 0 : 1));
                        arr_27 [i_0] [i_0] [i_0] = ((~(arr_4 [i_0] [i_1])));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_27 &= (1267334802 <= -2147483644);
                                var_28 = (max(var_28, (arr_1 [i_8])));
                                var_29 = (1 >= 1);
                            }
                        }
                    }
                    arr_37 [i_0] [i_1] [i_7] [1] = var_2;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_30 += (!94);
                                arr_50 [i_0] [i_1] [i_10] [i_11] [3] = (((arr_13 [i_0] [i_0] [i_0]) ? 374685744750799776 : 1));
                                arr_51 [i_0] [19] [19] [10] [i_0] [13] = (((arr_49 [i_0] [i_0] [i_0] [i_0] [i_0]) / var_3));
                            }
                        }
                    }
                    var_31 = (((-27 & 1040) - (arr_8 [i_0] [12] [1])));
                    arr_52 [i_0] [i_1] [1] [i_10] = (((arr_41 [i_0] [1] [i_10]) ? 4 : (arr_41 [i_0] [i_1] [1])));
                }
            }
        }
    }
    var_32 = var_2;
    var_33 = (max(((~(820613930 && -1))), ((-13 ? 1 : 820613904))));
    #pragma endscop
}
