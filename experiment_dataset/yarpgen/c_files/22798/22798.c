/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 ? (max(var_11, var_8)) : ((var_0 ? var_11 : var_12))));
    var_18 = (min(var_18, var_8));
    var_19 = ((!(var_12 + var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = var_5;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = var_8;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 = (arr_11 [i_0] [i_2]);
                            var_21 = (var_9 > var_0);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_2] [i_2] [18] = (arr_0 [i_0]);
                            arr_21 [i_0] [i_0] [i_5] [16] [17] [i_0] [i_2] = ((((arr_0 [i_5]) <= var_10)));
                            var_22 -= (((arr_4 [i_0] [i_2] [i_0] [i_5]) / (arr_4 [15] [i_1] [8] [i_3])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_2] = (((arr_5 [i_0] [i_0] [i_2]) ? (arr_24 [i_6] [i_2] [i_2] [i_0] [i_0]) : (arr_24 [i_0] [i_1] [i_2] [i_2] [i_6])));
                        var_23 = var_6;
                        arr_26 [i_6] [2] [2] [12] [i_6] [i_2] = var_14;
                        arr_27 [i_0] [i_2] [i_2] = (arr_4 [0] [i_1] [i_2] [i_6]);
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        arr_30 [9] [17] [i_2] [i_2] [9] = var_13;
                        var_24 = (((arr_24 [i_7 - 2] [17] [i_2] [i_7 + 1] [i_7 + 1]) ? var_2 : (arr_24 [i_7] [i_7] [i_2] [8] [i_7 + 1])));
                    }
                    var_25 = (arr_24 [i_0] [i_0] [i_2] [i_2] [i_2]);
                }
            }
        }
        var_26 ^= var_5;
        arr_31 [i_0] [i_0] = var_4;

        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_42 [10] [10] [10] [i_8] [i_11 - 2] = var_7;
                            arr_43 [i_0] [i_8] [i_0] [i_8] [i_8] = ((!((var_4 != (arr_19 [i_0])))));
                            var_27 ^= (((arr_34 [i_0]) ? (arr_34 [i_8 + 1]) : (arr_34 [i_0])));
                        }
                    }
                }
                arr_44 [i_0] [i_8] = var_12;
                arr_45 [i_0] [9] [i_8] = (((arr_6 [i_8 - 3] [i_8] [i_8] [i_8 - 3]) || (arr_6 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 3])));
            }
            arr_46 [i_8] = var_12;
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    {
                        var_28 = var_7;
                        var_29 |= (((arr_23 [i_13 + 1] [i_13 + 1] [i_12 + 1] [i_12 + 1]) > (arr_38 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 1])));
                        var_30 = (min(var_30, (((var_16 << (((((arr_38 [i_12 - 2] [i_12 + 2] [i_12] [16] [i_12]) + 81)) - 10)))))));
                    }
                }
            }
        }
    }
    for (int i_14 = 4; i_14 < 23;i_14 += 1)
    {
        arr_55 [i_14] &= (max(((((((arr_52 [i_14]) ? var_5 : var_15)) <= ((((!(arr_53 [i_14] [4])))))))), (arr_54 [i_14 - 2])));
        var_31 &= var_15;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    var_32 = (max(var_32, ((((var_3 + var_0) ? (arr_60 [i_14] [i_14 - 3] [i_14] [6]) : ((max(var_10, (arr_54 [13])))))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 22;i_18 += 1)
                        {
                            {
                                arr_67 [i_17] [i_18] [i_18] [i_17] [i_14] [i_17] [i_17] = min(((var_4 ? (((min((arr_58 [15] [15] [i_18]), (arr_57 [i_15] [i_18]))))) : (((arr_56 [i_14]) ^ var_11)))), var_8);
                                var_33 += max((arr_63 [i_14] [i_14 - 2] [i_18 + 1] [i_17]), var_3);
                                var_34 = (min(var_34, (arr_64 [i_15] [i_14 - 2] [i_16] [i_16] [2])));
                                var_35 &= ((var_3 ? ((min((arr_56 [i_14 + 1]), var_9))) : (arr_59 [i_15] [i_17] [i_18 - 1])));
                                var_36 = (min(((((arr_53 [i_14 - 4] [i_14 - 4]) < (arr_53 [i_14 - 4] [i_14 - 4])))), (arr_62 [i_14 - 4] [i_14 - 4] [i_14 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        var_37 = (max(var_37, var_3));
        arr_70 [i_19] [i_19] = ((var_12 ? var_9 : var_8));
        var_38 *= ((arr_53 [i_19] [i_19]) ? (var_3 && var_12) : (arr_60 [i_19] [i_19 + 2] [i_19] [i_19 - 1]));
    }
    #pragma endscop
}
