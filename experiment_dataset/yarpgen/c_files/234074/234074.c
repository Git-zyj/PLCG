/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, 9304882576585469461));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (4133092897590198854 ^ 191);
                    arr_10 [i_0] [i_1] [3] [i_1] = ((!(((((var_1 > (arr_0 [i_0]))) ? (((-4133092897590198855 && (arr_7 [i_1] [i_1] [i_2] [2])))) : (((arr_0 [i_1]) & 15387)))))));
                    var_14 -= max(((((max(15387, (arr_4 [9] [5])))) ? 3355787038389265565 : (28978 > var_3))), (~var_4));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 = (max(1, (((arr_11 [i_3]) ? 5131 : 223))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_16 = (arr_13 [i_3] [i_3]);
            arr_15 [i_4] = (arr_14 [0] [i_3]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_13 [i_5] [8])));
                            arr_25 [i_3] [i_4] [i_7] [8] [i_7] = ((arr_20 [i_3] [i_4] [i_5] [i_6] [i_7] [i_4]) ^ (arr_20 [i_3] [i_4] [0] [i_4] [i_7] [i_6]));
                            var_18 = (((arr_12 [i_3] [i_4]) ? (arr_21 [i_3] [i_4] [i_5] [i_6]) : ((var_9 ? (arr_12 [i_6] [i_4]) : (arr_12 [5] [0])))));
                            var_19 = var_12;
                            var_20 ^= (~-8721525782013007883);
                        }
                    }
                }
            }
        }
        arr_26 [i_3] = var_7;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            {
                var_21 -= (-8721525782013007883 || 5741256193681182198);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_36 [i_8] [9] [i_11] = (((~(arr_27 [8] [i_8]))));
                            var_22 -= ((-(((arr_31 [i_9 + 1] [9] [i_9]) + (arr_30 [i_9 + 3] [i_9])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_23 = (((arr_39 [i_9] [6]) - var_3));

                            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                            {
                                var_24 -= (arr_39 [9] [i_9]);
                                var_25 = var_1;
                            }
                            for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                            {
                                var_26 = (arr_38 [13] [13] [i_13] [i_13]);
                                arr_45 [i_8] [i_15] [i_15] [i_8] [i_15] = (~var_12);
                            }
                            for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                            {
                                var_27 = ((+(max((arr_37 [i_8]), var_9))));
                                arr_49 [i_8] [i_9] [i_8] [6] [i_13] [14] [2] = (((arr_27 [i_8] [i_9 + 1]) ? ((max((arr_48 [i_8] [i_9] [10] [i_8] [5] [10] [i_12]), (!var_10)))) : -4133092897590198855));
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 1;i_17 += 1)
                            {
                                arr_52 [i_17] [i_12] [1] = ((~(((arr_40 [i_9] [i_12] [5] [i_17]) ? (arr_27 [i_12] [i_17]) : (arr_33 [i_8] [9])))));
                                arr_53 [10] [i_13] [i_8] [i_12] [i_9] [i_8] [i_8] = (arr_48 [1] [i_9] [7] [i_9] [i_9] [i_9] [i_9 + 4]);
                                var_28 ^= (arr_40 [6] [i_12] [i_9] [i_8]);
                            }
                            var_29 = ((((((arr_42 [i_13] [i_13] [i_12] [i_9 + 4] [i_8] [i_8]) | (arr_42 [9] [i_12] [i_12] [i_12] [i_12] [i_12])))) != (arr_42 [i_8] [i_8] [i_9 + 1] [i_12] [i_12] [i_13])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
