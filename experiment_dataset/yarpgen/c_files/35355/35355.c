/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (((((((((arr_4 [i_1] [i_1] [i_0]) ? (arr_2 [i_0]) : var_11))) ? ((65528 ? 101 : 0)) : (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0] [i_1 - 1]) : var_11))))) ? ((((((arr_2 [i_0]) ? (arr_4 [9] [i_1 + 1] [9]) : -76))) ? (var_0 == var_0) : ((max(65526, var_14))))) : (((var_9 == ((var_10 ? 22 : (arr_4 [i_0] [i_0] [i_1]))))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_21 = (min((arr_2 [i_0]), (((((arr_6 [i_0] [i_1] [i_2] [i_0]) ? var_15 : var_15))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_0] = var_12;
                                var_22 = ((((-5078072997134742191 ? 9 : ((-1699186743579071700 ? 0 : var_2)))) != -1699186743579071700));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_5] = (((arr_3 [i_0] [i_1] [i_5]) + (520634446 - 2713506144)));
                    var_23 = (((((min(65533, 65524))) != -80)));
                }
                arr_18 [i_1 + 1] [i_0] = (((((((min(var_5, 1)))) != (min(-1699186743579071693, 9)))) ? (((+((min((arr_6 [i_1] [i_1] [i_1 - 2] [i_0]), 1)))))) : (min((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]), var_7))));
                arr_19 [i_0] [i_0] [i_1] = (min(((232 == (~2520131142))), ((((20 ? (arr_16 [i_0] [i_0] [i_1]) : var_10)) != var_6))));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] = (21014 ? (((arr_2 [i_0]) ? var_3 : var_14)) : (arr_6 [i_0] [i_0] [i_1 - 2] [i_6 - 1]));
                    var_24 = (((((var_10 ? 252 : (arr_7 [i_0] [i_1] [i_6])))) ? (~1) : var_3));
                    arr_23 [i_0] [i_1] [i_1 - 1] [i_0] = 0;
                    var_25 = (((15 ? 65508 : var_2)) == (arr_3 [i_0] [i_0] [i_0]));
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_26 = (max((min(14, (arr_5 [i_7 + 1] [i_1 - 2]))), (~2520131142)));
                                arr_31 [i_0] [i_7 + 1] [i_8] = (arr_9 [i_8] [i_1] [i_0]);
                                arr_32 [8] [i_1] [i_1] [i_0] [i_1] [i_1 + 1] = (arr_5 [i_1] [i_1]);
                                var_27 = (((((min((arr_11 [i_0]), var_14)))) ? (((arr_4 [i_0] [i_1 + 2] [i_7]) ? (arr_28 [i_7] [i_7 + 1] [i_7] [i_7 - 1]) : (((arr_13 [i_0]) ? (arr_30 [i_0] [i_1 - 1] [i_7] [i_8] [3]) : var_1)))) : (221 != 0)));
                            }
                        }
                    }
                    var_28 = (max((min(15, var_4)), (((65535 ? 2047 : 24)))));

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_29 = (((var_6 != 179) ? (var_11 || -51) : ((var_4 ? var_10 : var_0))));
                        arr_35 [i_0] = var_13;
                        arr_36 [i_0] [i_1] [i_0] [i_10 - 1] = ((var_5 != (arr_5 [i_7] [7])));
                        var_30 = (51 != -28994);
                        var_31 = ((((((arr_15 [i_7 - 3] [8] [i_7]) ? (arr_21 [i_7 - 3] [i_1]) : var_0))) ? ((var_10 ? var_16 : var_9)) : (!65532)));
                    }
                    arr_37 [5] [i_0] [5] [i_7 - 1] = var_6;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            {
                                arr_42 [i_0] [i_0] [i_0] [i_11] [i_12] [i_1 + 1] = (arr_33 [1] [i_1] [i_0] [1]);
                                arr_43 [i_0] [i_1] [i_0] = (min((((var_10 != (arr_10 [i_12] [i_12 + 1] [i_12] [i_1 + 1])))), (min(var_8, (min(235, var_6))))));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_54 [i_0] [i_1] [i_0] [7] [i_0] = ((-(((arr_21 [i_1 - 2] [i_1 + 1]) ? var_12 : (arr_21 [i_1 - 1] [i_1])))));
                                arr_55 [i_0] [i_1] [i_0] [i_15] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            {
                                arr_60 [i_16] [i_0] [i_13] [i_13] [i_17] [i_1 + 1] = arr_57 [i_17];
                                arr_61 [i_0] [i_1] [i_17] = (((((((((arr_24 [i_0] [i_1] [i_0] [i_17]) ? var_10 : var_4))) ? ((((0 || (arr_4 [i_1] [i_1] [i_13]))))) : ((10 ? var_5 : var_16))))) ? (((0 || var_4) ? (var_3 && var_11) : (max(-2018395534357650100, var_5)))) : ((min(0, (max((arr_20 [i_0] [i_1]), var_5)))))));
                                var_32 = (min(((var_11 ? (var_13 != var_7) : -51)), (arr_57 [8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
