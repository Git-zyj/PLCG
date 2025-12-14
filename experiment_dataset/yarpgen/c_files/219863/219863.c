/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, (((((arr_1 [i_0]) | 1749434418))))));
        var_15 = (min(var_15, var_1));
        var_16 = (arr_1 [i_0]);
        arr_2 [i_0] = var_8;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_5 [i_1 - 2] [i_1] = ((min(var_2, -1931001775)));
        var_17 = (((((arr_1 [i_1 + 2]) * (arr_4 [i_1]))) - 148));
        var_18 = min(((var_10 ? ((var_3 / (arr_0 [i_1]))) : ((var_4 ? (arr_1 [i_1]) : -2)))), (var_4 - var_2));
        arr_6 [i_1] [i_1] = ((-1749434419 <= (((max(var_6, (arr_3 [i_1]))) / ((((arr_4 [i_1]) <= -813230368)))))));
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = (((var_12 - ((min(var_4, (arr_11 [i_2] [i_3])))))));
            var_19 = (max(var_19, var_0));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((min(12328432645864535831, -1983424068)) == 1453263978)))));
                        arr_19 [i_2] [i_3] [i_4] [i_2] = ((+((var_11 ? (arr_17 [i_2] [i_5 - 1] [i_5 + 1] [i_4]) : (arr_17 [i_3] [i_5 - 1] [i_4] [i_5 - 1])))));
                        arr_20 [i_2] [1] = (((((arr_17 [i_5 - 1] [i_5] [13] [i_5 - 1]) ? (arr_17 [i_5 - 1] [18] [i_5 + 1] [i_5 - 1]) : (arr_17 [i_5 - 1] [i_5] [i_5] [i_5 - 1]))) <= var_5));
                        arr_21 [i_2] [i_2] [i_2] [13] = ((((((var_1 ? var_0 : (arr_14 [i_2] [6] [11]))) - 32617)) <= ((((min(-22814, var_0))) ? (arr_18 [i_4] [15] [i_2] [i_5 + 2] [i_5 + 1] [i_5 - 1]) : (((arr_11 [i_3] [6]) / (arr_16 [10] [i_4])))))));
                        var_21 = (max(var_21, var_10));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            arr_24 [i_2] = (arr_18 [i_6 - 1] [i_6 + 1] [i_2] [i_6] [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        var_22 = (min(var_22, 1749434418));
                        var_23 ^= ((var_8 | ((((-14563 > (arr_8 [i_8])))))));
                        var_24 = var_6;
                        var_25 = (26660 / -1749434419);
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            arr_32 [i_2] [i_9] = arr_18 [i_9 + 2] [i_9 + 2] [i_2] [9] [i_9 + 2] [i_9 + 1];
            arr_33 [i_2] = (~(((arr_26 [i_2]) ? (-1931001783 - var_1) : 2067348291)));
            var_26 = max(1040384, (((((1749434418 ? -1749434411 : 12))) ? 1725811055 : 2147483136)));
            arr_34 [i_2] [i_9] = (max((((arr_15 [i_2] [i_9 + 2]) ? (arr_15 [i_2] [i_9 - 1]) : (arr_15 [i_2] [i_9 + 2]))), (arr_15 [i_2] [i_9 - 1])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_27 = ((!(arr_43 [i_13] [i_12] [i_2] [i_10] [i_2])));
                            var_28 = (max(var_28, (arr_38 [i_13] [i_12] [i_11] [7])));
                        }
                    }
                }
            }
            arr_44 [i_2] [i_2] [i_2] = (((((1931001775 ? var_7 : var_9))) ? (arr_22 [i_2] [i_10] [i_2]) : (-1148438250 / var_7)));

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            var_29 = ((20379 <= ((var_1 / (arr_26 [i_2])))));
                            var_30 -= var_5;
                            arr_54 [i_2] [i_2] [i_10] [i_2] [i_2] [i_16] = -1148438250;
                            var_31 ^= (arr_30 [i_14] [i_16] [20]);
                        }
                    }
                }
                arr_55 [1] [i_10] [i_2] = ((arr_13 [i_14] [i_2] [i_2]) + ((58906077 ? 1730761155 : -1931001776)));
            }
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {

                for (int i_18 = 1; i_18 < 21;i_18 += 1)
                {
                    var_32 = (min(var_32, (arr_50 [i_2] [i_2] [i_10] [i_17] [i_18])));
                    var_33 = (~(arr_57 [i_2] [i_2] [i_18 + 1] [i_18]));
                    var_34 = (min(var_34, (((!(arr_8 [0]))))));
                }
                arr_60 [i_2] = -28873;
                var_35 = ((((233251515 / (arr_16 [i_2] [i_2]))) - (arr_57 [i_2] [i_10] [i_17 + 2] [i_17 - 1])));
            }
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                var_36 = (max(var_36, (((arr_46 [i_2] [i_10] [i_19]) ? -1983424068 : (arr_48 [7])))));
                arr_65 [i_2] [i_2] [i_2] = (((arr_46 [i_19] [i_19] [i_10]) == (arr_46 [i_2] [i_19] [i_19])));
            }
        }
        var_37 |= ((((min((arr_7 [4]), (arr_7 [18])))) ? (arr_9 [i_2] [7] [i_2]) : (((arr_64 [i_2] [12]) ? (arr_36 [4]) : (arr_62 [i_2] [i_2] [i_2])))));
    }
    #pragma endscop
}
