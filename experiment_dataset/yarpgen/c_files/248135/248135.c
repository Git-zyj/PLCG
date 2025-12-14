/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0] = 18446744073709551606;
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [13] [i_1] = (((var_12 || 85) + 0));
                                var_21 = (((arr_0 [i_3 - 1]) - (arr_4 [i_0] [i_1])));
                                var_22 = -1841874269781383630;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 = (arr_0 [i_0]);
                                var_24 = (arr_14 [i_5 + 1] [i_1]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = (min((var_13 ^ -85), -301123099));
                                arr_28 [i_1] = (arr_3 [i_9] [i_1]);
                            }
                        }
                    }
                    arr_29 [i_0] [12] [i_1] [i_7] = var_11;
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_37 [i_1] [i_1] = (((min((arr_7 [i_12 - 2] [i_12 - 1]), ((1841874269781383630 << (((arr_1 [i_1]) - 14007782114336802700)))))) % (arr_19 [i_12] [i_11])));
                                arr_38 [i_12] [i_1] [i_10] [i_1] [i_0] = arr_16 [i_0] [i_1] [i_11] [i_12];
                                var_25 = (arr_34 [i_0] [i_0] [i_0] [i_11] [0]);
                            }
                        }
                    }
                }
                arr_39 [i_0] [i_1] [i_0] = ((min(0, (arr_30 [i_0]))));

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_26 = ((min((arr_11 [i_15 + 1] [i_14 + 1] [i_14] [4] [i_14 + 2] [i_0] [i_0]), var_6)));
                                arr_48 [i_1] = (arr_42 [i_1]);
                            }
                        }
                    }
                    var_27 = 19873;
                    arr_49 [i_13] [i_1] [i_1] [i_0] = 600478079642152566;
                    arr_50 [i_0] [i_1] [i_1] = (max(var_7, (arr_11 [i_0] [i_0] [i_0] [i_1] [i_13] [i_13] [i_13])));

                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        arr_54 [i_1] [i_13] [i_0] [i_1] = (-78 % 84);
                        arr_55 [i_1] [i_1] = (((var_16 / (arr_43 [i_0] [i_16 + 1] [i_13] [i_13] [i_13]))));
                        arr_56 [i_1] [i_0] [i_0] [i_1] = 447337622;
                        arr_57 [i_1] [i_1] = (arr_44 [i_0] [i_0] [i_13] [i_16] [8] [8]);
                    }
                    for (int i_17 = 4; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        var_28 = (arr_45 [i_0] [i_0] [i_0] [5] [i_0] [i_1] [i_1]);
                        arr_60 [i_0] [i_1] [i_13] [i_1] [i_17] = (max((arr_43 [8] [8] [i_17 - 2] [i_17 - 4] [i_17 - 2]), (arr_43 [i_13] [i_13] [i_17 - 2] [i_17 - 4] [i_17 - 2])));
                        var_29 = ((var_15 == (arr_23 [i_17 - 4] [i_17 - 1] [i_17 - 4] [i_17 - 4])));
                    }
                    for (int i_18 = 4; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_1] [10] [i_1] = 28759;
                        arr_64 [i_1] [13] [i_13] [i_13] = (arr_0 [i_18 - 1]);
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        arr_67 [5] = (4519029325050256728 < -74895657);
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 18;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                {
                    arr_73 [i_20] [i_21] = var_1;
                    /* LoopNest 2 */
                    for (int i_22 = 4; i_22 < 20;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            {
                                arr_79 [i_19 - 1] [i_20] [i_21] [i_21] [i_20] = (arr_69 [i_22 + 1]);
                                arr_80 [6] [i_20] [6] [6] [i_20] = ((-21 || (((arr_68 [i_19] [i_20]) || var_16))));
                                arr_81 [i_19 - 1] [6] [18] [i_20] [i_23] = (((arr_69 [i_19 - 1]) || ((((arr_78 [i_23] [i_23]) << (var_4 - 1554))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = -26358;
    #pragma endscop
}
