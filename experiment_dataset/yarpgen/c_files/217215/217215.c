/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_9 [i_0] [i_1] [i_2 - 1]) ? 15383 : (arr_4 [i_0] [i_1] [i_2]))))) < (var_9 + 50152));
                    var_14 = ((var_1 ? (arr_1 [i_0] [i_1]) : (((!50152) ? (arr_4 [i_2] [i_2 - 2] [i_2]) : 1))));
                    var_15 = (arr_1 [i_1] [i_2]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_16 = (((((arr_12 [i_4 + 1] [i_4 + 1]) ? (arr_12 [i_4 + 1] [i_4 + 1]) : (arr_12 [i_4 + 1] [i_4 + 1]))) ^ (((arr_10 [i_3]) ? ((1 ? var_2 : (arr_10 [i_4]))) : (((15383 > (arr_14 [i_3]))))))));

            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                var_17 |= (((((arr_17 [i_3] [i_3] [i_4 + 1] [i_5]) ? ((30438 ? 250 : (arr_15 [i_3] [i_3] [i_3]))) : 1)) >> ((((((((arr_10 [i_5 - 1]) ? (arr_19 [i_3] [i_5]) : (arr_18 [i_3] [i_3] [i_3] [i_5 + 1])))) ? (arr_14 [i_3]) : (arr_18 [i_3] [i_3] [i_3] [i_5]))) - 37707))));
                var_18 -= (((((1 ? (arr_14 [i_4 + 1]) : (((((arr_10 [i_4 + 1]) + 2147483647)) >> (((arr_15 [i_5] [i_3] [i_4]) - 45122))))))) ? (((arr_13 [i_4 + 1] [i_4 + 1]) + (arr_13 [i_4 + 1] [i_4 + 1]))) : ((((((arr_12 [i_3] [i_5]) ? 77809304028940551 : -103)) / (((var_6 ? -115 : (arr_14 [i_5 - 2])))))))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_3] [i_4] [i_4] = arr_12 [i_4 + 1] [i_4 + 1];
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_27 [i_3] [i_4] [i_6] [i_7] [i_7] [i_8])));
                            var_20 = (98 < 41469);
                        }
                    }
                }
            }
            arr_31 [i_4] = 1;
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_21 = (((((arr_10 [i_9]) < 13950)) || (arr_10 [i_3])));
                    var_22 = (((((max((max((arr_32 [i_3] [i_9]), (arr_32 [i_3] [i_9]))), (arr_17 [i_3] [i_9] [i_9] [i_10]))))) + (max((max((arr_33 [i_3]), (arr_14 [i_3]))), 24066))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_45 [i_3] [i_10] [i_11] [i_12] = (((((-56128 ? (((arr_13 [i_9] [i_12]) ? (arr_41 [i_3] [i_9] [i_10] [i_11] [i_12]) : (arr_14 [i_3]))) : 6))) & ((((((arr_23 [i_3] [i_10]) / -492804955))) ? 128 : (((max((arr_38 [i_10] [i_9]), (arr_17 [i_3] [i_3] [i_12] [i_11])))))))));
                                var_23 = ((~(arr_41 [i_3] [i_9] [i_10] [i_11] [i_12])));
                                var_24 = (min(var_24, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 16;i_13 += 1)
    {
        var_25 = ((((((min(1, (arr_33 [i_13 + 3])))) ? (((arr_23 [i_13] [i_13]) ? 41 : 3870434617)) : 50154)) | (arr_10 [i_13 + 4])));
        var_26 = (arr_49 [i_13 - 2] [i_13]);
    }
    var_27 = ((+(((!74) << (((~var_10) - 2077357268))))));
    #pragma endscop
}
