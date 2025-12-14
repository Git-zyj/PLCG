/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((1 ? 3830005822661844850 : 3830005822661844850));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (((((arr_0 [18] [i_1]) / (arr_1 [i_1])))));
        arr_6 [0] [i_1] = (((arr_4 [i_1]) != (arr_4 [i_1])));
        arr_7 [15] [19] = (max((((arr_1 [i_1]) ? (arr_5 [i_1] [i_1]) : var_7)), ((((((arr_4 [i_1]) * 3830005822661844830)) / (arr_1 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = (arr_0 [i_3] [i_3]);
            var_20 = var_1;
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_21 = (min(var_21, ((((((var_4 ? var_10 : var_13))) ? var_6 : (arr_16 [i_2] [i_4]))))));
            arr_17 [i_2] [i_4] [12] = var_11;
            arr_18 [i_4] |= -var_12;
        }
        arr_19 [i_2] = ((-3830005822661844845 ? 6202377121648473924 : ((1 ? 3830005822661844837 : 86))));
        arr_20 [i_2] = ((0 ? (((87 ? (arr_4 [i_2]) : 655653311))) : ((88 ? -101 : var_7))));
    }

    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_22 -= var_2;
        arr_23 [i_5] = var_8;

        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            arr_26 [i_6] = var_2;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 ^= ((((arr_1 [i_6 - 2]) ? (((arr_12 [i_5] [i_6]) / (arr_24 [i_8] [i_7] [i_6]))) : (arr_27 [i_8] [i_8] [4] [i_8]))));
                        arr_31 [i_5] [4] [i_5] [i_6] [i_5 + 1] [i_6] = ((-var_6 % (((arr_28 [i_6 + 1] [i_6] [i_5 + 1]) / var_10))));
                        var_24 = var_2;
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_43 [i_11] = (((((arr_37 [i_10 - 2] [i_10] [i_5]) / (arr_37 [i_10 - 2] [i_10] [0]))) != (max((arr_39 [1] [i_10 - 2] [i_10 - 1] [i_9]), (arr_37 [i_10 - 2] [i_9] [i_5])))));
                            var_25 *= (((var_10 ? (arr_30 [i_5 + 1] [i_11] [i_11] [i_12] [i_12] [i_12]) : (arr_30 [i_5 + 1] [i_9] [i_12] [i_12] [i_12] [7]))));
                        }
                    }
                }
            }
            arr_44 [i_5 + 1] [i_9] = ((var_7 ? ((-(max(var_7, (arr_11 [i_5 + 1] [i_5]))))) : ((min((arr_30 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1]), var_2)))));
        }
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        arr_48 [i_13] = (!var_4);
        arr_49 [i_13] [i_13] = var_15;
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_26 = (max(var_26, (((((arr_50 [i_14] [i_14]) ? var_11 : ((var_11 ? var_11 : var_5)))) % (arr_50 [i_14] [i_14])))));
        var_27 ^= (~1);
        var_28 = ((((max(var_1, (arr_51 [i_14] [i_14]))))) % (((((var_2 % (arr_50 [i_14] [i_14])))) % ((-655653325 ? 16046873047032341368 : 32767)))));
        arr_52 [i_14] = (((arr_51 [i_14] [20]) ? ((min((arr_51 [i_14] [i_14]), (arr_51 [i_14] [i_14])))) : (((arr_50 [i_14] [i_14]) ? -var_13 : 13814801002406486806))));
    }
    #pragma endscop
}
