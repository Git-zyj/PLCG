/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = (((-9026438936634809760 ? 2837032038 : 16256)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((arr_8 [i_0] [i_2] [i_1] [i_0]) || ((((arr_0 [i_0]) ? (arr_9 [i_0 - 1] [15] [i_1 + 2] [i_0]) : var_5)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 *= (arr_1 [i_3]);
                        arr_13 [i_0] [7] [7] [i_0] [i_0] [i_0] = ((2837032038 ? (arr_3 [i_0]) : var_11));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_17 = (!var_3);
        var_18 *= ((((!(arr_14 [i_4 + 1]))) ? (arr_14 [i_4 + 1]) : (((((var_7 ? var_7 : var_1)) & (((min(var_6, -5303)))))))));
    }

    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        arr_18 [i_5] &= (min((var_9 != var_7), ((~(((arr_8 [i_5] [i_5] [i_5 - 3] [0]) << (var_13 + 24241)))))));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_19 = (arr_8 [i_5] [i_5] [i_5] [i_6]);
            var_20 = (max(var_20, var_7));
            var_21 -= ((-(arr_1 [14])));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_22 = (((var_4 ? (arr_27 [i_5 - 3] [i_7] [i_8] [i_8] [i_10]) : ((((var_1 <= (arr_15 [i_9]))))))));
                                var_23 = (arr_14 [i_10]);
                                var_24 = (arr_20 [i_9 - 1] [i_8]);
                                var_25 -= ((var_11 & (arr_26 [i_5] [i_7] [i_9 - 1] [1])));
                            }
                        }
                    }
                    var_26 = (min(var_26, var_0));
                    var_27 = (max(var_27, (((-((((((~(arr_10 [i_7] [i_7] [i_7])))) == (max(var_4, var_13))))))))));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_28 -= var_4;
                        var_29 = (max(var_29, (((((min(var_9, (arr_0 [i_11]))) - (var_3 - 0))) - var_9))));
                        var_30 -= var_7;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_31 = (arr_29 [i_7] [i_8 + 1] [i_8 + 1] [i_12] [i_12]);
                        var_32 = (max(var_32, ((((~var_2) < ((var_1 ? (arr_0 [i_7]) : (arr_26 [i_5] [i_12] [i_8 + 1] [i_8]))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    arr_46 [i_14] [i_14] = (((arr_15 [i_13]) ? ((0 ? 65535 : 0)) : ((((((!(arr_43 [i_13])))) < var_10)))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_52 [i_17] [i_13] [i_15] [i_15] [i_14] [i_13] [i_13] &= (var_2 == (arr_47 [i_13] [i_14] [i_15] [i_16] [i_17]));
                                var_33 = (max(var_33, (((~(!var_12))))));
                            }
                        }
                    }
                    var_34 = (((var_11 && (arr_15 [i_13]))) || (arr_14 [i_13]));
                }
            }
        }
    }
    #pragma endscop
}
