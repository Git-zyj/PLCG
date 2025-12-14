/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_7, (var_6 <= var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] [i_1] [1] = (min(-36, 34));
                    var_20 = var_4;
                    var_21 = var_4;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_13 [8] &= var_3;
                        var_22 = (max((min((arr_0 [i_0] [i_2]), var_9)), ((min((arr_8 [i_1] [i_2] [i_3]), ((max(var_1, var_16))))))));
                        var_23 ^= (min((arr_6 [2] [i_1]), (((arr_8 [0] [i_2 - 3] [i_2 + 1]) + 11))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_24 ^= (arr_6 [1] [i_2]);

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_25 = (max(var_25, (arr_17 [i_2] [i_2] [i_2])));
                            arr_18 [12] [12] [i_1] [i_4] [13] [i_5] = arr_15 [i_2] [i_2 - 3] [i_5 + 1];
                            var_26 ^= (((arr_15 [i_0] [i_2 - 1] [i_5 - 1]) ^ (arr_15 [i_5 + 1] [i_4] [i_1])));
                        }

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_27 ^= var_10;
                            var_28 ^= (113 && -58);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_29 = (((arr_3 [i_7] [i_4] [i_1]) <= ((var_4 - (arr_4 [i_2])))));
                            var_30 = (arr_22 [i_0] [i_4] [i_2 - 3] [i_0] [i_0]);
                            arr_24 [i_7] [i_1] [i_1] [i_0] = (((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2]) * var_0));
                        }
                        for (int i_8 = 4; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [10] [i_2] [i_8] [i_1] = (arr_20 [i_0] [i_8] [1] [i_1] [17]);
                            arr_28 [i_1] [i_1] [i_1] = (2302822556762987221 >= var_2);
                            arr_29 [i_0] [i_1] [i_2] [i_4] [i_1] = (arr_17 [i_8] [i_4] [i_2]);
                            arr_30 [i_4] [i_4] [i_4] [16] &= var_6;
                        }
                        for (int i_9 = 4; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_1] [i_2] [1] [i_1] = var_7;
                            var_31 = var_2;
                        }
                        var_32 ^= var_6;
                        arr_36 [i_0] [i_0] [i_1] [i_4] = (arr_32 [i_2] [i_4] [i_2] [23] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_33 &= var_6;
                        var_34 = var_13;
                    }
                }
            }
        }
    }
    var_35 = (min((((var_4 > (((min(var_3, var_1))))))), var_9));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                {
                    arr_48 [i_11] = (min((max(0, 0)), (arr_23 [i_11] [i_11] [i_12] [7] [i_13 + 1])));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_36 = (((((arr_25 [i_13 + 1] [i_13 + 1] [i_15 + 1]) / (arr_25 [i_13 + 1] [i_13 + 1] [i_15 - 1]))) <= var_16));
                                arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = var_3;
                                var_37 = (arr_1 [i_11]);
                                arr_55 [i_15 - 2] [i_11] [i_11] [i_12] = (((max((arr_16 [i_15 + 2] [i_15] [i_15] [i_15 - 1] [i_14] [i_13 + 1]), (arr_39 [i_13 + 1])))) | (((arr_50 [i_13] [i_13] [i_13]) >> (min((arr_39 [i_11]), var_14)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_38 = (arr_34 [i_11] [i_11] [1] [i_11] [i_11]);
                                arr_62 [i_11] [i_12] [i_11] [i_16] [i_17] = ((((((arr_31 [i_11] [7] [7] [16] [i_11] [i_11]) == (max(var_5, (arr_46 [i_11]))))))) != (max((arr_14 [i_17] [i_17 + 1] [i_17 - 1] [15]), (arr_60 [i_11] [i_11] [i_13 + 1] [i_16] [i_17 + 1]))));
                                var_39 = (min(var_39, ((var_3 && (((min(11615900700416582137, 2761425743)) < ((min((arr_51 [i_11] [i_11] [i_17] [i_16]), (arr_38 [i_11] [i_12] [i_13] [i_11] [i_17] [i_11]))))))))));
                                var_40 = (max((max((arr_37 [i_13 + 1] [i_11] [i_16] [i_13 + 1]), 0)), (((3014490017 && (arr_37 [i_13 + 1] [i_11] [21] [i_13 + 1]))))));
                            }
                        }
                    }
                    var_41 ^= (arr_23 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 1]);
                    var_42 &= (min((var_8 || var_2), (((arr_3 [1] [i_13 + 1] [i_13 + 1]) >> (((arr_3 [i_11] [i_13 + 1] [i_13]) - 45))))));
                }
                for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
                {
                    var_43 &= (max(((((arr_57 [i_11] [i_11] [i_18] [i_12] [i_18] [i_18]) >= (arr_64 [i_11] [i_12] [i_12] [i_18])))), (min((arr_11 [i_11] [i_11] [i_11] [i_18 + 1]), (arr_11 [21] [i_12] [i_18] [i_18 + 1])))));
                    arr_66 [i_11] [i_11] [i_11] [i_11] = (min((max(-109, 2302822556762987221)), (((((var_18 && (arr_16 [i_18] [17] [i_12] [17] [i_11] [i_11]))) && (arr_20 [i_11] [i_12] [i_12] [i_11] [i_18]))))));
                }
                for (int i_19 = 1; i_19 < 1;i_19 += 1) /* same iter space */
                {
                    var_44 = (arr_63 [i_11]);
                    var_45 = var_5;
                }
                for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    var_46 &= ((var_2 / (min(47, 2099645609))));
                    arr_72 [i_11] = ((((((var_18 ^ var_1) || ((min(119, 16106628214013864214)))))) - (arr_15 [i_20 - 1] [i_20 - 1] [11])));
                    var_47 ^= (((arr_0 [i_11] [i_12]) % var_14));
                }
                var_48 = (max(var_48, (arr_43 [i_11] [i_11] [i_11])));
                var_49 = var_15;
                var_50 = (max(var_50, (arr_6 [i_12] [i_12])));
            }
        }
    }
    #pragma endscop
}
