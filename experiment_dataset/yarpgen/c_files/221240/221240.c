/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(91, ((var_14 ? 91 : var_11))))) ? var_10 : var_13));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = ((1 ? 1 : 3917894104766154639));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((~(arr_2 [i_0])));
                    var_20 *= ((((((arr_4 [i_1] [i_1] [i_0 + 3]) * ((96 ? (arr_6 [i_0] [i_1] [i_2] [i_2 - 3]) : var_13))))) ? (max((((78 ? 192 : 114))), -7236443076189448748)) : (((55880 ? 55880 : 9655)))));
                    var_21 = (((((1 & (((arr_2 [i_1]) ? (arr_2 [i_2]) : 36))))) ? -var_0 : 9223372036854775807));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_20 [i_3] [i_3] [i_4] [i_3] [i_7] [1] = 132;
                                var_22 = (max(var_22, ((((((~((var_13 ? (arr_16 [i_3] [i_4] [i_3] [i_4] [i_7]) : var_7))))) > (min((arr_1 [i_3]), (((arr_0 [i_5] [i_7]) ? (arr_15 [i_3] [i_3] [i_5] [1]) : var_13)))))))));
                                var_23 ^= (min((((((arr_0 [7] [i_6]) > (arr_15 [i_6] [6] [i_4] [i_3]))) ? ((((arr_5 [i_3] [i_3] [i_4]) == (arr_6 [17] [16] [i_3] [17])))) : (arr_17 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1]))), -115));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_24 = (221 - -6878);

                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        arr_25 [i_3 - 3] [i_4] [i_9 + 1] = ((1 ? 94 : 49));
                        var_25 = (arr_2 [i_3]);
                    }
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        arr_29 [i_4] [i_8] [i_4] [i_4] |= (((arr_7 [i_3 - 2] [i_3] [i_8] [i_3 + 2]) ? (arr_23 [i_3 + 2] [i_10 - 1] [i_3] [i_3 + 2] [2]) : (arr_15 [i_3] [i_3] [i_3 + 2] [i_10 - 1])));

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_32 [i_10] = ((var_7 ? ((((arr_5 [1] [i_8] [i_10]) >> (120 - 119)))) : (arr_18 [i_3])));
                            var_26 = ((-(arr_24 [i_3 + 3] [5] [i_11 + 4])));
                        }
                    }
                    var_27 ^= (arr_9 [i_3] [i_3]);
                    arr_33 [i_8] = (arr_27 [i_3]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_28 = (arr_4 [i_8] [i_8] [i_8]);
                                var_29 = (min(var_29, (((~(arr_39 [i_12 + 2] [i_3 + 1] [i_12] [i_12 + 2] [i_12 + 2]))))));
                                arr_40 [i_3] [i_3] [i_3] = (1241522699 - 21033);
                                var_30 = (max(var_30, (arr_5 [i_3] [i_4] [i_13])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 20;i_14 += 1)
                {

                    for (int i_15 = 2; i_15 < 21;i_15 += 1)
                    {
                        var_31 = (max(var_31, (!21022)));
                        arr_45 [i_15] [21] [i_4] [11] [20] = (((arr_8 [i_4] [i_14] [i_15]) ? ((((var_10 == (arr_16 [i_15] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]))))) : (arr_34 [i_3] [i_3] [4] [i_3])));
                        arr_46 [i_3] [i_3 - 3] [i_3] = (((arr_1 [i_15]) != 65535));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_32 = ((arr_16 [i_17] [4] [4] [20] [i_3]) ? (arr_0 [i_17] [i_17 - 2]) : var_2);
                                arr_53 [i_3] [i_3] [i_3] [i_16] [i_17] [i_14 - 2] [2] = (arr_6 [i_17] [i_3 + 2] [i_4] [i_3 + 2]);
                                var_33 |= (arr_51 [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 3] [i_14] [i_14 - 1]);
                                var_34 &= ((!(221 || var_7)));
                            }
                        }
                    }
                }
                var_35 = ((var_5 ? ((((((arr_5 [i_4] [i_3] [i_4]) % var_9))) ? var_13 : (((arr_28 [i_3 + 3] [i_4] [i_3 + 2]) % var_7)))) : -115));
                arr_54 [i_3] |= (~var_15);
            }
        }
    }
    var_36 = 1;
    var_37 -= (var_9 != var_12);
    #pragma endscop
}
