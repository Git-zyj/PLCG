/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_3 <= (min(var_11, ((var_11 ? var_4 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= (min((min((arr_4 [i_1] [i_0]), -1)), ((-(arr_0 [i_0] [i_1])))));
                arr_6 [i_1] |= 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_17 = ((-(((max(var_9, 1))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = 107;
                                var_19 |= ((-(((arr_20 [i_3]) * (arr_20 [i_3])))));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_20 = (max((arr_7 [i_2]), (arr_7 [i_2])));
                    arr_25 [i_2] [i_2] [i_2] = (min(-108, -77));
                    arr_26 [i_3] [i_7] = arr_23 [i_2] [i_7];
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_30 [i_2] [i_3] [0] |= ((max(((31 ? 249 : 38), -1))));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_33 [i_2] [i_3] [0] [i_8] [i_9] [i_9] = max(var_2, ((((arr_13 [i_2] [i_8]) <= (arr_10 [i_8] [i_9])))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_21 = (min(var_21, ((((max((~0), var_14)) & ((-(arr_19 [i_9] [i_8] [1]))))))));
                            var_22 = (arr_14 [i_10] [i_8] [i_10]);
                        }
                        for (int i_11 = 2; i_11 < 24;i_11 += 1)
                        {
                            var_23 ^= (!1);
                            arr_40 [i_3] [2] [i_8] &= (max((arr_32 [i_3] [i_9] [i_8] [i_3]), ((-110 ? (arr_9 [i_8]) : (arr_37 [i_2] [i_3] [i_3])))));
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_44 [i_2] [1] [i_8] [i_9] [i_9] = (((arr_35 [i_2] [i_2] [i_8] [i_9] [i_8] [i_12 - 1] [i_8]) * (arr_35 [i_2] [i_2] [i_9] [i_9] [i_12] [i_12 - 1] [6])));
                            arr_45 [i_2] [1] [1] [i_9] [i_9] [i_9] = ((((1 ? 1 : (arr_35 [1] [i_3] [i_8] [i_9] [1] [i_3] [i_3]))) / (arr_34 [i_2] [i_3] [i_8] [i_12 - 1] [i_12 - 1])));
                        }
                        var_24 ^= ((((0 ? var_1 : -13)) / (((arr_21 [i_2] [i_3] [i_3] [i_8] [i_9]) ? -1 : (arr_21 [i_9] [i_3] [i_3] [i_2] [i_2])))));
                        var_25 = (((arr_27 [i_2] [i_2] [i_2] [i_2]) * (!var_4)));
                        arr_46 [1] [i_3] [i_8] [i_8] = ((((min((arr_41 [i_2] [i_3] [i_2] [i_9] [i_9]), (arr_41 [i_2] [i_2] [i_2] [i_8] [i_9])))) ? (((arr_41 [i_2] [i_3] [i_3] [i_8] [i_9]) ? (arr_41 [i_2] [1] [i_9] [i_9] [i_9]) : (arr_41 [i_2] [1] [i_8] [1] [i_9]))) : -24));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_26 = (((arr_35 [i_2] [i_3] [1] [i_8] [1] [1] [i_14]) ? ((((((arr_9 [i_13]) ? 1 : 225))) ? (arr_13 [1] [i_3]) : 1)) : ((max((arr_17 [1] [i_13 + 2]), (arr_17 [i_2] [i_13 - 1]))))));
                                var_27 = (min(var_27, ((max((min(var_10, 58)), (arr_48 [i_8] [i_13] [i_13]))))));
                                arr_52 [i_2] [i_2] [i_2] = min(var_12, (arr_28 [i_2] [i_13 + 3]));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_55 [19] [1] [i_3] [i_2] = (((arr_29 [i_2] [i_3] [i_3]) ? (arr_29 [i_8] [i_3] [i_2]) : (arr_29 [i_15] [i_8] [i_3])));
                        var_28 = ((-(arr_21 [i_15] [i_15] [i_8] [1] [1])));
                        var_29 = ((1 + ((-(arr_12 [1] [i_8] [i_15])))));
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        arr_59 [i_2] [i_2] [16] [i_2] [i_2] [i_2] = ((var_1 ? ((-(arr_31 [1] [14] [i_16 + 3]))) : ((59 ? (arr_31 [i_2] [1] [i_8]) : 122))));
                        arr_60 [15] [i_8] [i_16 - 1] &= ((-(arr_27 [i_16 + 3] [0] [0] [0])));
                        var_30 *= (((arr_21 [i_16] [1] [1] [i_2] [i_2]) ? (arr_23 [i_3] [i_16]) : (arr_8 [i_16 + 2] [i_2])));
                        var_31 = (arr_23 [i_16 - 1] [i_16 + 3]);
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 23;i_19 += 1)
                        {
                            {
                                arr_70 [i_2] [1] [i_17] [i_18] [i_2] = (arr_14 [i_18] [i_19 - 1] [i_19 + 1]);
                                var_32 = (max(var_32, (((!(((var_7 ? 31 : (arr_42 [i_19] [19] [i_18] [i_17] [6] [6])))))))));
                            }
                        }
                    }
                    var_33 = (arr_62 [i_2] [i_3] [1] [i_17]);
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                {
                    arr_74 [9] = (1 > var_14);
                    var_34 = (max(var_34, ((((((((arr_37 [i_2] [i_2] [i_3]) ? var_3 : var_8)))) - (((((~(arr_22 [i_2] [i_2] [i_2] [i_20])))) ? (arr_11 [i_3]) : var_4)))))));
                }
                var_35 = (arr_68 [i_2] [i_3] [i_3]);
            }
        }
    }
    var_36 ^= 68;
    #pragma endscop
}
