/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_3 ? ((3134891071357240422 ? (var_14 && var_15) : (18446744073709551615 || var_5))) : var_8));
    var_19 = 288230376151711743;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((((arr_2 [i_0] [i_1] [i_1]) ? (arr_2 [9] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_1])))) ? (min(77279144, (arr_2 [i_0] [i_0] [i_1]))) : (((arr_4 [i_0] [i_0] [i_1]) ^ (arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((-(((arr_4 [i_0] [i_1] [i_0]) - ((-77279159 ? (arr_4 [i_0] [i_2] [i_0]) : (arr_6 [i_0])))))))));
                                var_22 += var_2;
                                arr_12 [7] [i_1] [3] [i_1] [i_2] = ((-77279159 ? (-77279159 == 2147483647) : var_5));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    var_23 = var_1;
                    var_24 = (arr_14 [7] [i_5 - 2] [i_5]);
                }
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    arr_19 [i_6] = (arr_18 [i_0] [i_1] [7] [i_6]);
                    var_25 -= (((arr_6 [i_1]) >= (((((((arr_1 [i_0] [i_1]) ? var_12 : (arr_16 [i_0] [i_1] [i_6 - 1])))) ? var_17 : var_14)))));
                    var_26 *= var_12;
                    var_27 = (((arr_8 [i_6 - 3] [i_6] [i_6] [i_6 - 1] [i_0]) ? ((-(arr_5 [i_0] [i_0] [i_1] [i_6]))) : var_17));
                }
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_22 [i_0] = ((0 > ((((((arr_18 [i_7] [i_7] [3] [i_0]) | (arr_6 [i_7]))) < var_9)))));

                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [i_8] = ((max(var_17, var_13)));
                        var_28 -= ((!(((arr_24 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]) > (arr_24 [i_7 - 1] [i_7 - 1] [1] [i_7] [i_7 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_29 = (((arr_18 [i_7] [i_7] [i_7 - 1] [i_7 + 1]) / 32754));
                        var_30 = (~(arr_29 [i_0] [i_0]));
                        var_31 = (min(var_31, (-2147483647 - 1)));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_35 [i_1] [i_0] [i_10] [i_10] [i_1] [i_0] = (((((min(var_5, (arr_0 [i_0])))) && (var_3 || var_5))) ? (arr_28 [i_0] [i_1] [i_0] [i_1]) : ((((!(var_15 && 51073))))));
                        arr_36 [1] [i_1] [i_10] [i_1] [i_1] [i_10] = (((((((((arr_23 [i_0] [i_1] [6] [i_10] [i_10] [i_0]) >= 7058)))) & var_12)) ^ -30495));
                        var_32 = (max(var_32, var_10));
                    }
                }
                var_33 = (min(var_33, (((var_3 > (((arr_5 [i_0] [i_1] [i_1] [i_1]) & (((-(arr_2 [i_0] [2] [i_1])))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            {
                var_34 -= var_3;
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_51 [i_11 - 3] [5] [i_12] [i_14] [i_15] [i_13] [i_13] = -5;
                                var_35 = (((arr_41 [i_11] [i_11 + 1] [i_11 - 4] [17]) ? (arr_49 [i_11] [i_12] [i_14]) : (((max((arr_41 [i_14] [1] [i_12] [i_11]), 2065284860)) - (arr_39 [i_13] [i_12 + 1] [i_14])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_36 = (max(var_36, ((((arr_45 [i_11] [i_11] [i_16] [i_17]) - (-64 || -3425))))));
                            arr_60 [i_12] [i_12] [i_16] [i_17] = (((!32765) ? (((((arr_59 [i_11 + 2] [i_11 + 2] [i_12] [i_17]) + 2147483647)) << (var_1 - 9995415615798383800))) : (~1)));
                            var_37 = 2147483647;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
