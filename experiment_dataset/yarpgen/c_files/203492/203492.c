/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_3;
    var_13 = ((var_5 ? var_1 : (max(((35941 ? 127 : 9223372036854775807)), var_4))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [6] = 128;
        var_14 = ((var_1 ? ((((max(var_10, var_2))) ? (((max(var_0, var_7)))) : ((var_2 ? (arr_0 [1] [11]) : var_5)))) : (((arr_0 [8] [0]) ? (arr_0 [14] [2]) : (((arr_1 [10]) ? var_9 : 9223372036854775797))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 = (max((((!((min(var_9, var_9)))))), ((8502378529496392964 ? (arr_4 [i_0] [i_1]) : var_0))));
            var_16 = (arr_1 [13]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] = (min((arr_4 [1] [14]), ((-((((arr_0 [14] [14]) || (arr_0 [i_0] [6]))))))));
            arr_9 [7] [0] = (min((arr_3 [i_0] [1]), ((((arr_4 [i_2] [i_0]) <= (arr_3 [i_0] [i_2]))))));
            arr_10 [i_2] [9] = var_4;
            var_17 = (arr_4 [i_0] [0]);

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_19 [i_3] = arr_0 [7] [i_2];
                            var_18 = ((((min((arr_16 [1] [2] [i_3]), (((arr_12 [i_3] [1] [i_3] [i_3]) >> (((arr_5 [i_5] [6] [5]) - 198))))))) ? (((!((max((arr_15 [9] [5] [4] [9] [1]), (arr_6 [9]))))))) : ((min((arr_12 [i_3] [i_3 - 3] [i_4 - 1] [i_5 - 1]), (arr_15 [1] [i_4 - 1] [i_5 + 4] [i_5] [6]))))));
                            arr_20 [1] [4] [i_3] [3] [12] = (min(var_7, var_3));
                        }
                    }
                }
                var_19 ^= ((-((max((arr_11 [10] [6] [2]), ((max(-113, (arr_16 [0] [i_2] [1])))))))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_23 [14] [8] [8] [14] = ((!(((var_2 ? -12 : (arr_12 [2] [14] [1] [4]))))));
                var_20 = var_7;
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_26 [3] [i_7] = (((((9223372036854775807 ? 118 : 97))) ? (max(var_3, (arr_18 [i_0] [i_0] [i_0] [1] [i_7]))) : (arr_25 [10] [i_7] [i_7])));
            var_21 += (min((((arr_3 [11] [7]) ? (arr_1 [i_7]) : (arr_3 [1] [7]))), (!var_6)));
            arr_27 [i_7] = max((max(var_5, ((max(129, 0))))), (((~(arr_4 [12] [i_7])))));
            var_22 = max((max((arr_18 [i_0] [8] [i_0] [0] [i_0]), var_2)), ((((arr_18 [7] [13] [11] [i_7] [i_7]) ? var_10 : (arr_16 [i_7] [1] [i_7])))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_23 = (max(var_23, ((((((var_2 ? 109 : (max((arr_14 [i_8]), var_9))))) ? (max((((arr_24 [13]) ? var_2 : var_4)), (arr_24 [i_0]))) : var_4)))));
            arr_30 [i_0] [1] = ((((min((arr_1 [i_0]), (arr_13 [i_0])))) ? (((arr_21 [10] [i_8] [5]) ? (arr_12 [i_8] [4] [i_0] [i_0]) : (arr_4 [i_0] [5]))) : (arr_3 [1] [9])));
            var_24 |= (arr_13 [11]);
            var_25 = 106;
        }
        arr_31 [10] [i_0] = ((-1 ? -456967438 : 0));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        arr_40 [i_0] [9] [i_0] [i_0] [14] [3] &= ((var_9 ? var_4 : (arr_29 [12] [13] [i_11])));
                        var_26 = (max(var_26, (arr_33 [2] [i_9])));
                        var_27 += (((arr_35 [5] [12]) ? (arr_21 [7] [0] [10]) : (((arr_28 [i_9] [1] [8]) ? var_7 : (arr_36 [9] [1])))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_44 [7] [4] [13] [10] [2] |= var_8;
                        var_28 = (arr_32 [8] [i_12]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_53 [8] [1] = max(653599599, 96);
                                arr_54 [5] = (((var_4 / (arr_47 [i_0]))));
                                var_29 = (max(var_29, (arr_16 [i_9] [i_10] [i_9])));
                            }
                        }
                    }
                    var_30 -= var_7;
                }
            }
        }
    }
    for (int i_15 = 4; i_15 < 10;i_15 += 1)
    {
        var_31 = (max(var_31, (arr_46 [1] [1] [i_15 + 1] [1])));
        var_32 = (min(var_32, ((((arr_51 [1]) ? var_6 : ((((max(var_4, (arr_52 [8] [11] [i_15] [5] [7] [14])))) ? (((152 ? 248 : 23))) : var_4)))))));
    }
    for (int i_16 = 3; i_16 < 16;i_16 += 1)
    {
        arr_59 [i_16] = (arr_58 [i_16 - 3]);
        arr_60 [i_16] [1] = arr_58 [4];
        arr_61 [1] = (arr_57 [14] [8]);
    }
    #pragma endscop
}
