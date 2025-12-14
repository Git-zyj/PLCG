/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = ((min(-7883883715983739113, var_1)));
                    arr_8 [i_1] [i_1 - 1] [i_1] = (max((((((max(1, (arr_5 [i_1] [i_1]))))) + 1)), 576179277326712832));
                }
            }
        }
        arr_9 [i_0] = (((max(((~(arr_3 [2] [i_0]))), (arr_4 [10] [i_0]))) < (min(((~(arr_3 [6] [6]))), var_3))));
        var_11 = (max((arr_6 [i_0] [i_0] [i_0]), (arr_5 [i_0] [1])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_12 = (i_3 % 2 == 0) ? ((min((min(255, (arr_2 [i_3]))), ((((arr_12 [i_3] [i_4 - 1]) << (((arr_12 [i_3] [i_4 - 1]) - 3962820387)))))))) : ((min((min(255, (arr_2 [i_3]))), ((((arr_12 [i_3] [i_4 - 1]) << (((((arr_12 [i_3] [i_4 - 1]) - 3962820387)) - 2055919908))))))));
            var_13 &= (min(var_9, var_9));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_14 = (max(((max(var_4, (min((arr_5 [i_3] [i_5]), (arr_1 [i_3])))))), (max((arr_17 [i_3] [i_5 - 1]), (arr_17 [i_3] [i_3])))));
            var_15 = (min(((~(min((arr_16 [3] [7]), var_7)))), ((min(30, var_0)))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        var_16 = (max(((((arr_18 [i_3] [i_5] [i_6] [i_7]) > var_4))), (max((-9223372036854775807 - 1), 34845))));

                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            var_17 = min((((((var_3 ? (arr_13 [i_3] [i_5]) : var_0))) ? 1 : (arr_7 [i_7] [i_7 - 1] [i_7] [i_7]))), (((((var_0 ? var_0 : var_2))) ? (((arr_21 [i_3] [i_5] [i_6] [i_3] [1]) - (arr_18 [i_3] [i_3] [i_3] [i_3]))) : (((arr_5 [i_5] [i_8]) ? (arr_21 [i_5] [i_5 + 3] [i_6 - 1] [i_3] [2]) : 27541)))));
                            var_18 = (arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        }
                    }
                }
            }
            var_19 = ((((~(min((arr_19 [6] [9] [i_3] [0]), (arr_11 [i_3]))))) > (arr_24 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_3])));
            var_20 = (max(3355541963, ((max(var_4, (arr_0 [i_5 + 3] [i_5 + 3]))))));
        }
        var_21 |= (max(((((max(var_8, 9))))), (min(125829120, (arr_20 [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 14;i_9 += 1)
    {
        var_22 = (arr_26 [i_9 - 2]);
        arr_29 [i_9] |= (arr_28 [i_9]);
        var_23 = (arr_28 [8]);
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        var_24 = var_5;
                        var_25 = (min(var_25, (((((((1359286433 <= -122) ? 28 : (((arr_30 [i_10]) % (arr_37 [i_10] [i_11] [i_12] [i_13] [i_13 + 1])))))) ? (max((1 <= 1418112688), (max((arr_30 [i_12]), (arr_37 [i_10] [i_11] [i_12] [i_10] [i_11]))))) : (arr_30 [i_10]))))));
                    }
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        var_26 *= var_3;

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_27 = (~2935680863);
                            var_28 &= 2935680863;
                            var_29 = (min(var_29, 57029));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            arr_48 [i_10] [i_10] [i_10] [3] [3] [i_14] = max((arr_38 [i_10] [i_14 + 1] [i_12] [i_12] [i_16]), ((-(~0))));
                            var_30 = (max(var_30, ((((((-(max(var_1, 9223372036854775807))))) <= (((arr_39 [i_10 + 1]) * (((var_6 + (arr_42 [i_10] [i_10] [i_14] [9])))))))))));
                            var_31 = ((-((var_0 ? (((arr_37 [i_11] [i_14] [i_12] [i_11] [13]) + (arr_40 [i_14] [i_11] [i_11]))) : 17))));
                            var_32 = (max(-8, ((1 ? var_9 : (arr_30 [i_12])))));
                            var_33 = (max(((245 & (arr_45 [i_10] [1] [i_16]))), (arr_38 [i_14 - 1] [i_14] [i_14 - 1] [i_14] [i_14])));
                        }
                    }
                    var_34 = (arr_47 [i_10] [i_10]);
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_35 ^= (arr_49 [i_10 + 1] [13] [1] [i_18]);
                            var_36 = (arr_53 [i_18]);
                        }
                    }
                }
            }
        }
    }
    var_37 &= var_5;
    #pragma endscop
}
