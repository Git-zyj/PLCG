/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-(min(-1583415612, (arr_0 [i_0] [i_0])))))) ? (((~var_2) ? (((var_7 ? 1 : 4294967295))) : (((arr_1 [i_0]) ? var_1 : -1025505533372312344)))) : ((((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? var_9 : (arr_0 [i_0] [i_0]))) : (((arr_1 [i_0]) >> (58728389 - 58728383))))))));
        var_11 = ((((~(arr_0 [i_0] [i_0])))) ? (max(-var_2, (((var_8 ? var_7 : -92))))) : var_4);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_12 = 29;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_7 [6] &= ((((var_9 ? (arr_3 [i_1]) : (arr_1 [i_1]))) < (((arr_5 [i_1]) ? (arr_3 [0]) : (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_16 [i_2] = (61364 | 1);

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_13 -= ((61364 ? (arr_14 [i_1] [i_3 - 1] [i_2 + 1]) : 1));
                            var_14 = (arr_12 [i_4] [i_2 - 1]);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_15 = (var_6 <= (~-92));
                            var_16 ^= (arr_0 [17] [5]);
                            var_17 = (((arr_13 [i_1] [i_1] [i_2 - 1] [i_3] [i_4] [i_6]) ? (((arr_21 [i_6] [i_4] [1] [i_2 - 1] [i_2 + 2] [i_1]) ? var_4 : 35)) : ((-118 % (arr_6 [i_1] [i_3 + 1] [i_3])))));
                            var_18 = (~1);
                            var_19 = (((((var_2 / (arr_0 [i_1] [i_3])))) ? 1 : (arr_20 [i_1] [i_2] [i_3 + 2] [i_4] [i_2] [i_2] [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_20 |= var_10;
                            arr_27 [5] [i_2] [5] [i_4] [5] = -1309066011;
                            arr_28 [i_2] [i_2] = ((+(((arr_22 [i_4] [i_1]) ? 65522 : 1))));
                        }
                    }
                }
            }
            arr_29 [i_2] = (arr_15 [i_2 + 3] [2] [i_2 + 3] [9]);
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_21 = (arr_0 [i_1] [i_8]);
            var_22 = ((1 | ((5247795470716598911 ? 1333617202099438071 : var_5))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_37 [i_9] [i_9] [i_9] = (arr_25 [i_1] [i_1] [i_1] [i_9] [i_9]);
            var_23 = (((((arr_8 [i_9] [i_1]) > 36047)) ? ((((((~(arr_3 [i_9])))) != (max(var_3, var_1))))) : var_1));
            arr_38 [i_9] = (((arr_32 [i_1]) > (arr_13 [0] [i_9] [i_9] [0] [i_9] [i_9])));
            arr_39 [1] [i_9] &= (arr_24 [8] [7] [i_1]);
        }
        var_24 = (max(((((min((arr_5 [i_1]), var_6))) ? ((1 ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : var_5)) : -8162751812163644069)), (((((min((arr_12 [i_1] [i_1]), (arr_24 [i_1] [i_1] [i_1])))) ? 81 : ((var_7 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_0 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        var_25 ^= (((arr_40 [i_10]) ? (arr_1 [i_10 + 1]) : ((-(arr_40 [i_10])))));
        var_26 = (((arr_1 [i_10]) ? (((~(arr_1 [i_10])))) : (((arr_1 [i_10 - 1]) ? (arr_1 [i_10]) : var_3))));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                arr_56 [i_11] = (max((max((max((arr_26 [i_11] [i_12] [i_13] [i_14] [i_12]), (arr_6 [i_15] [i_13] [8]))), ((((arr_44 [i_14] [i_11]) != (arr_21 [6] [i_14] [i_11] [i_13] [i_11] [i_11])))))), (~var_8)));
                                var_27 = ((((min((((6 ? 0 : 189))), ((var_0 ? -1 : -92))))) ? ((~(((var_7 > (arr_50 [i_14] [i_13])))))) : (arr_13 [i_15] [10] [1] [i_14] [i_15] [i_13])));
                            }
                        }
                    }
                }
                var_28 = (((~(arr_54 [i_12] [i_12] [i_11] [i_11]))) <= (arr_33 [i_11] [i_11]));
                arr_57 [8] = (-(((min(var_3, (arr_35 [i_12] [i_12] [i_11]))) % (((-(arr_50 [i_11] [i_11])))))));
            }
        }
    }
    var_29 = ((((((286191928 / var_0) ? ((var_10 ? var_5 : 65535)) : var_0))) ? var_9 : (max(((max(var_9, var_4))), (max(399724363, var_7))))));
    #pragma endscop
}
