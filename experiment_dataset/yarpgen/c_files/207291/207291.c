/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((min((var_0 / var_11), (var_14 * var_2)))) ? (~var_10) : (min((arr_1 [i_0]), (arr_3 [i_1])))));
                arr_5 [i_0] [1] = var_12;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = (min(var_19, (((arr_6 [i_0] [4] [i_1] [i_2]) - (arr_6 [i_0] [i_1] [i_2] [i_2])))));
                    var_21 = (+-0);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_22 = var_13;
                                var_23 = (max(var_23, (arr_12 [i_0] [i_5] [i_0] [i_0] [i_5])));
                                arr_14 [i_4] = (!-65);
                            }
                        }
                    }
                    var_24 = (min(((-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((arr_13 [0] [i_1] [i_3] [i_3]) & var_0))));
                    arr_15 [i_0] [i_0] [i_0] = (min(((-(min(var_12, var_3)))), (arr_2 [i_3] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_25 = (arr_11 [i_0] [i_6 - 2] [i_3] [i_6 + 3]);
                                arr_22 [i_7] [i_6] [i_3] [5] [i_0] [i_1] [i_0] = ((var_16 ? ((((!(arr_10 [i_6 - 2] [2] [i_6 + 3] [i_6]))))) : (arr_3 [i_0])));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_3] = (max(((max((arr_18 [2] [12] [i_3] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))), (max(var_6, (arr_10 [i_0] [i_1] [i_3] [i_3])))));
                }

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    arr_27 [i_0] [i_0] [i_1] [3] = (arr_19 [i_0] [i_1] [i_8] [i_8 + 2] [i_0]);

                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_8] = (((~var_17) <= (max(2842236051, -6110295014822735794))));
                        var_26 = (max(2842236051, -1));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_37 [i_11] = arr_24 [i_0] [i_0] [i_8 - 1] [i_10];
                                arr_38 [i_11] [i_10] [i_11] [i_1] [i_0] = (min(((max(6110295014822735789, 2946340703))), var_3));
                                var_27 = (min(var_27, ((((var_0 ? ((~(arr_11 [i_1] [i_10] [i_8 + 2] [i_1])) : (arr_26 [i_8 + 1] [i_8 + 2] [i_8 + 2]))))))));
                                arr_39 [i_11] = (min((max((max((arr_35 [i_11] [i_10] [i_8] [i_1] [i_11]), var_1)), var_0)), (arr_6 [i_0] [i_1] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_40 [i_8 - 1] [i_8] [i_1] = (min(-442236710, (((((max((arr_11 [i_1] [i_1] [i_8] [i_8 + 1]), var_14))) < (max(var_3, var_9)))))));
                    arr_41 [i_8] [i_0] [i_0] [i_0] = -6110295014822735792;
                }
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    var_28 = (max(((((arr_11 [i_1] [i_1] [i_12] [i_1]) != (65534 != 6110295014822735790)))), (arr_9 [i_0] [i_0])));
                    arr_44 [i_0] [i_12] = (((((max((arr_17 [i_12 - 1] [3] [8]), (arr_17 [i_12 + 1] [i_1] [i_0]))))) < ((((max(var_11, var_0))) ? (arr_31 [i_12] [i_12] [1] [i_0] [i_0]) : var_5))));
                    arr_45 [i_0] [i_1] [i_0] = var_16;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_51 [i_14] [i_12] = var_4;
                                arr_52 [i_0] [i_0] [i_14] [i_0] = max((arr_6 [12] [6] [i_13] [i_13]), 85);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((min(var_19, var_13)));
    #pragma endscop
}
