/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = var_9;
                                var_18 = ((~((87 ^ (arr_0 [i_0])))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = (max(var_19, 9));
                                var_20 = (arr_10 [i_0] [i_0] [3] [i_7]);
                            }
                        }
                    }
                }
                var_21 = (arr_16 [i_1]);
                var_22 = ((3378597973453288595 > (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_23 &= min(var_14, var_11);

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_24 = (arr_3 [i_8]);
        var_25 = ((var_8 < (arr_6 [i_8] [2] [7] [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_26 = var_0;
                    var_27 = (((((arr_17 [i_10]) || 3378597973453288595)) ? 161 : (min((arr_4 [i_8] [i_8] [i_10]), (arr_14 [i_10])))));
                }
            }
        }

        for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
        {
            arr_30 [i_11] = var_1;

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_39 [i_11] [2] [i_14] [i_14] [2] = (((((arr_37 [i_11]) + (max((arr_7 [i_11] [i_12] [i_14]), 1)))) ^ (arr_9 [i_11 + 3] [i_11 + 2] [i_11] [i_11] [i_11])));
                            var_28 = (((arr_2 [i_8] [i_8] [i_8]) ? (((var_2 & (arr_18 [i_8] [i_11 - 1] [i_11] [i_11 + 2] [i_14])))) : (min((arr_17 [i_11]), (arr_15 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11])))));
                            var_29 &= ((!((((arr_20 [i_11 + 3] [i_11 + 2]) ? var_3 : (arr_20 [i_11 + 1] [i_8]))))));
                        }
                    }
                }
                arr_40 [i_11] = ((~(((arr_6 [11] [i_11] [i_12] [i_11 + 1] [i_8]) ? (arr_3 [i_12]) : 7889464686105829529))));
                arr_41 [8] |= (arr_0 [i_8]);
                arr_42 [i_8] [i_11] = (max(var_0, (~87)));
            }
            arr_43 [i_11] [i_8] [i_11] = (arr_2 [i_8] [1] [i_8]);
            var_30 = (((~(arr_35 [i_8] [i_8] [i_8] [i_11 + 1] [i_11 + 1]))));
            var_31 = ((~((~(arr_14 [i_11 + 2])))));
        }
        for (int i_15 = 2; i_15 < 7;i_15 += 1) /* same iter space */
        {
            var_32 = ((var_14 << (var_7 - 9032)));
            arr_46 [i_8] [i_15 + 2] = var_1;
            arr_47 [i_8] = ((!(((~(arr_44 [i_15 + 1] [i_15 - 1]))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 8;i_17 += 1)
                {
                    {
                        var_33 = 15068146100256263021;

                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            var_34 = (((arr_0 [i_16]) ? (arr_38 [i_18] [i_17 - 1] [i_15] [9] [i_15] [i_8]) : (!var_10)));
                            var_35 = (max(var_35, ((((((var_10 ? 57486 : (arr_20 [i_17] [i_8])))) | (!var_10))))));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
                        {
                            var_36 = (((arr_29 [i_15 + 3] [i_15 + 2]) + (arr_28 [i_15 + 1] [i_17] [i_17 + 2])));
                            var_37 = (arr_51 [i_17] [i_17]);
                            var_38 = (((arr_24 [i_16]) ? (arr_0 [i_17 - 1]) : (arr_25 [i_15 - 2] [i_16] [i_17 - 2])));
                            var_39 = ((-(((arr_34 [i_17] [i_8] [i_8] [i_16] [i_8] [i_17]) ^ var_1))));
                        }
                        for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
                        {
                            var_40 = (((var_1 ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : var_7)));
                            var_41 = var_9;
                        }
                    }
                }
            }
            var_42 = ((-((~(arr_32 [8] [i_15 - 1] [i_15 + 3])))));
        }
        for (int i_21 = 2; i_21 < 7;i_21 += 1) /* same iter space */
        {
            arr_68 [i_8] = 3128900226;
            arr_69 [i_8] = ((~(~var_8)));
        }
        var_43 = ((((arr_37 [2]) / var_4)));
    }
    var_44 = var_9;
    var_45 = ((-var_9 + (~var_11)));
    #pragma endscop
}
