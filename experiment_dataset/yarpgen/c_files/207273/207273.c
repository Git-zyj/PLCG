/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = (-4476001905474327608 > 1150197383164936178);
                        arr_11 [i_1] [i_1] = (((((arr_6 [i_0] [i_1] [i_1] [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_6 [i_3] [i_2] [i_1] [i_0]))) < (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
        arr_12 [i_0] = (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])));

        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_16 = (min(var_16, ((((((~(arr_14 [i_0] [i_4 - 4] [i_4 - 4])))) ^ -1150197383164936159)))));
            var_17 = ((arr_9 [i_0] [i_0] [i_4]) - (((arr_8 [i_0] [i_4] [i_0] [i_0] [i_4]) ? (arr_1 [1] [1]) : (arr_4 [i_0] [i_0] [i_4 - 1]))));
            var_18 = (((((arr_0 [i_0]) * (arr_5 [i_0] [i_0]))) * (arr_0 [11])));
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_19 = var_4;
                        arr_23 [i_5] [i_6] [i_5] [i_5] = ((-(((arr_13 [i_0] [i_0] [i_6]) ? 288230238712758272 : (arr_19 [i_0] [i_0])))));
                        var_20 ^= (((arr_0 [i_6]) ? ((var_12 ? (arr_22 [i_5] [i_6]) : var_8)) : (arr_5 [i_0] [i_0])));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_21 = ((((((arr_25 [i_0] [i_5] [1] [i_7] [i_0] [i_5] [i_0]) ? var_4 : (arr_17 [11])))) ? (((arr_13 [i_8] [i_8] [i_8]) ? var_7 : 0)) : ((((arr_8 [i_0] [i_5] [i_6] [i_5] [i_6]) ? -1 : var_4)))));
                            arr_26 [i_0] [i_5] [i_5] [i_7] [i_8] = (~-var_11);
                            arr_27 [i_5] [i_5] = 0;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_30 [i_9] = (arr_1 [i_9 - 3] [i_9 - 1]);
        var_22 = (min(var_22, ((((((-1 ? 10 : 4476001905474327607))) ? 18446744073709551615 : (((1 ? 1150197383164936159 : (arr_17 [i_9])))))))));
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((((arr_41 [i_10 + 1] [i_10] [i_10] [i_11 - 1] [i_11]) / (arr_45 [i_10] [i_10] [i_14] [i_12 - 1] [i_14] [i_14]))) + 9223372036854775807)) >> (((max((max(var_12, (arr_34 [i_11] [2] [i_11]))), (arr_40 [8] [i_14] [i_14] [i_13]))) - 11575114708344650604)))))));
                                var_24 = (max((arr_34 [i_10] [i_10] [i_14]), ((((max((arr_32 [i_13]), 1150197383164936133))) ? (!18446744073709551615) : (arr_35 [i_10] [i_11] [i_12])))));
                            }
                        }
                    }
                    var_25 = (max(var_25, (((31428 ? 65509 : -1150197383164936178)))));
                }
            }
        }
        var_26 = var_12;
        var_27 = -var_2;
    }
    var_28 = var_8;
    var_29 *= ((((~((-2 ? var_1 : var_10))))) ? var_1 : (((((var_0 ? 288230238712758270 : var_3))) ? ((var_12 ? -2465685376410531466 : var_10)) : 17450)));
    #pragma endscop
}
