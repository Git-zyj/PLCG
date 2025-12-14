/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(var_21, var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = ((((((arr_5 [i_0] [i_2] [i_1] [i_0]) ? ((var_8 ? 1 : (arr_4 [i_0]))) : (arr_0 [i_0] [i_0 - 1])))) ? (max(((max(1, (arr_6 [i_0] [i_3])))), (max(1, 306236072811849517)))) : (((((-2147483647 - 1) > 1))))));
                            var_23 = ((1 ? 1 : 1));
                            var_24 = ((-((-((1 ? 1 : 1))))));
                            var_25 = ((((!(~1))) ? (min(var_10, (((~(-2147483647 - 1)))))) : ((((var_9 && (((-(arr_4 [i_0]))))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] = (((var_6 <= (~255))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = (((arr_11 [i_4]) <= var_5));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_26 = ((!(arr_18 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_4])));
                        var_27 += 255;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_21 [i_8] = ((~(((var_2 <= (max((arr_18 [i_8] [i_8] [i_8] [i_8]), var_4)))))));

        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            var_28 = (!540431955284459520);
            arr_24 [i_8] [i_8] [i_9] = ((-(min((((1 != (arr_19 [i_8])))), (((arr_19 [i_8]) ? var_18 : var_15))))));
        }

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_29 = (((((((max(2, (arr_26 [i_10] [i_10])))) ? ((var_6 ? var_1 : (arr_25 [i_11]))) : (arr_32 [i_8] [i_10] [i_10])))) ? (((((1 ? 192 : (arr_31 [i_10])))) ? (!255) : (~9223372036854775807))) : ((((!var_13) ? (~196) : -var_17)))));
                        arr_36 [i_10] = ((((((!(arr_32 [i_10] [i_10] [i_10]))) ? ((var_9 ? 6052516582419793474 : 141)) : (max((arr_15 [i_8] [i_11] [i_11]), var_5))))) ? var_19 : var_10);
                        arr_37 [i_8] [i_10] [i_11 + 2] [i_10] = ((((max((max(81, var_15)), ((((arr_30 [i_11]) <= 1)))))) ? 141 : (((arr_10 [i_11 + 2]) ? (arr_13 [i_11 - 2] [i_11 + 2]) : (arr_10 [i_11 - 3])))));
                    }
                }
            }
            var_30 = ((((-(arr_18 [i_8] [i_8] [i_10] [i_10]))) < (((arr_31 [i_10]) ? (arr_18 [i_8] [i_8] [i_8] [i_10]) : (arr_18 [i_8] [i_8] [i_10] [i_10])))));
        }
        var_31 = (min(var_31, (!1)));
        var_32 = ((!(((~((((arr_32 [i_8] [i_8] [i_8]) < 1))))))));
    }
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        var_33 = var_0;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    arr_46 [i_13] [i_14] [i_14] [i_13] = (~144);

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_34 = (max(var_34, (((~1) ? (((-79 ? var_16 : (min((arr_49 [i_13] [i_13 + 1]), 1))))) : (!var_0)))));
                        var_35 = (max(var_35, (((((min((arr_50 [i_13] [i_14] [i_14] [i_16]), 1536)) <= (var_12 == 1))) || (((((-(arr_47 [i_16] [i_15] [i_13]))) | var_3)))))));
                        var_36 = ((-((var_11 ? var_17 : var_16))));
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_37 = (((max(0, ((-(arr_41 [i_17])))))) ? ((+(((arr_50 [i_17] [i_17] [i_17] [i_17]) / var_4)))) : var_9);
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    {
                        arr_63 [i_17] [i_18] [i_17] [i_17] [i_17] = (min((arr_16 [i_17] [i_18] [i_19]), (min(1, 63488))));
                        var_38 = (((-454191770 % (arr_4 [i_17]))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 2; i_21 < 11;i_21 += 1)
    {
        for (int i_22 = 1; i_22 < 14;i_22 += 1)
        {
            {
                var_39 = ((-((((arr_25 [i_22 - 1]) == (arr_66 [i_21 + 3] [i_21] [i_22 - 1]))))));
                var_40 = (((max((arr_11 [i_21]), (arr_11 [i_21]))) != (arr_30 [i_22 + 1])));
            }
        }
    }
    #pragma endscop
}
