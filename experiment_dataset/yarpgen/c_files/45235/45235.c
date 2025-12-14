/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = -1;
                    var_13 &= ((-((((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 1]))))));
                }
            }
        }
    }
    var_14 = var_8;
    var_15 = ((((max((max(17179869176, -1949787802)), ((max(var_2, -1949787828)))))) ? 0 : ((+(((-6660199616608601999 + 9223372036854775807) >> (150 - 138)))))));
    var_16 -= var_10;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_12 [i_3] = (max((var_11 | var_3), ((min(((2031616 ? (arr_8 [i_4]) : var_2)), (((32 ? (arr_10 [i_4] [i_4] [i_3]) : var_0))))))));
                var_17 = (max((((var_0 ? (max(126, -542174120)) : (var_7 - var_0)))), 279830866));

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    var_18 = ((max((((arr_8 [i_4]) ? var_3 : (arr_13 [i_3] [i_4] [i_5 + 1]))), (((!(arr_0 [i_3])))))));
                    arr_15 [i_3] [i_4] |= -2031616;
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_19 = (arr_18 [4] [i_3] [1] [i_3]);
                        var_20 = (((arr_13 [i_6] [13] [6]) ? (!2) : var_5));
                    }
                    var_21 |= (((((1 ? 1949787801 : -36))) ? (((arr_2 [i_4] [i_6]) / (var_11 | var_5))) : ((((-9727 ? -2777618489738842850 : var_1))))));
                    arr_22 [i_4] = (min((((150 ? 37350 : 37348))), (max((arr_21 [i_3] [i_4] [i_3] [i_4] [i_3] [1]), 125))));
                    var_22 |= (((((~var_7) ? (((var_2 ? var_11 : 1949787814))) : (((arr_6 [i_3]) ? (arr_1 [i_3]) : (arr_18 [i_3] [7] [7] [7]))))) % (((((((arr_13 [i_3] [i_3] [i_3]) ? (arr_16 [i_6] [i_3] [i_3]) : var_1))) ? ((var_6 ? (arr_19 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6]) : 1959721156)) : (arr_4 [i_4]))))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_23 = (arr_19 [i_3] [i_10] [i_8] [i_8] [i_10] [i_4]);
                                var_24 = ((+(((arr_28 [i_8] [i_9 + 1] [i_10 + 1] [i_10] [i_10] [i_10]) ? (arr_28 [i_8] [i_9 - 1] [i_10 - 1] [5] [5] [i_8]) : (arr_18 [i_9 - 1] [i_9 - 1] [i_10 + 2] [12])))));
                            }
                        }
                    }
                    var_25 = (arr_23 [i_3] [i_4] [i_4] [i_8]);
                }
                var_26 |= var_6;

                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        arr_36 [14] [i_12] = (arr_4 [i_12 + 1]);

                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_27 = (min(var_27, var_7));
                            var_28 = -3562724328657745193;
                            arr_40 [i_12] [i_11] [i_12] = (((arr_19 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12]) ? var_7 : var_8));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_44 [i_12] = ((arr_43 [i_14] [i_14] [i_14] [i_12 + 1] [1]) ^ 1);
                            var_29 += ((var_0 - (var_8 == 6)));
                            arr_45 [i_3] [i_3] [i_11] [i_12] [i_3] [i_12] = ((~((6 ? (-2147483647 - 1) : 1))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_52 [i_3] [i_4] [i_11] [i_11] [1] [i_16] = (((arr_28 [i_3] [16] [16] [16] [i_15] [i_15]) ? (arr_2 [0] [i_3]) : (!var_4)));
                                var_30 = (((arr_42 [i_15] [i_15] [i_15] [15] [i_15 - 1] [i_15]) | (arr_50 [1] [2] [i_16] [2] [i_15 - 1] [8])));
                            }
                        }
                    }
                }
                for (int i_17 = 4; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_31 &= (max(-1, (max(var_7, var_2))));
                                var_32 = (((arr_19 [i_17 + 2] [13] [16] [i_17 - 3] [i_17 - 3] [i_17 + 2]) >> (var_5 + 6080041225886009387)));
                            }
                        }
                    }
                    var_33 |= (((((-(((arr_5 [10] [i_4] [i_4] [i_17]) / var_4))))) ? 65525 : (arr_46 [i_17 - 1] [i_17] [i_17] [i_17] [i_17 + 4])));
                    arr_59 [17] [17] = (min(((((max(127, var_3))) >> (((arr_41 [i_17] [i_17] [i_17] [i_17 + 1] [i_17] [i_3] [i_17]) - 13889)))), var_11));
                }
                for (int i_20 = 4; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, (((-(max((arr_62 [i_20 - 2] [i_20 + 3] [i_20]), var_5)))))));
                    var_35 = (min((arr_16 [i_3] [i_4] [i_20]), (((((var_11 ? (arr_24 [i_20]) : 54907))) ? ((2810098894528065908 ? 457156938 : -3671507057655401808)) : var_5))));
                }
            }
        }
    }
    #pragma endscop
}
