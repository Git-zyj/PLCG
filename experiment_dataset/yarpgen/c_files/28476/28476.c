/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_13 [i_0] [5] [0] [i_3] [i_4] = (arr_7 [i_3 - 2] [5] [i_4] [i_4] [i_4]);
                                var_12 = 11590;
                                arr_14 [i_0] [i_1] [i_2] [i_0] = (((((-29676 / (arr_3 [i_2] [i_0])))) ? (255 * var_3) : ((var_0 ? 8545 : (arr_2 [i_0] [i_2])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_13 = var_6;
                                var_14 = 28672;
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                arr_22 [i_0] [i_3] [i_2] [i_2] [1] = (0 == 4294967295);
                                arr_23 [i_2] [i_1] [1] [1] [i_6] [i_0] = ((var_0 / ((((min(8545, 0))) ? (arr_4 [i_0] [i_1] [i_1]) : ((min(var_5, var_9)))))));
                            }
                            var_15 = ((((min(var_9, (min((arr_5 [i_0]), (arr_3 [i_0] [i_0])))))) ? (((arr_2 [i_2] [i_2]) ? (min((arr_21 [i_0] [i_2] [i_0] [4] [i_1] [i_0] [i_3]), var_9)) : (((((arr_10 [6] [i_3] [i_2] [i_1] [i_0]) <= 1)))))) : (((((((206794896 ? 1 : 105))) && (arr_15 [i_0] [i_1])))))));
                            arr_24 [i_0] [i_0] [i_2] [i_3 + 1] [i_1] = ((((max((arr_1 [i_2]), -1))) ? 15 : (!1)));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_31 [i_1] [i_0] [i_7] [i_8] = 1;
                        var_16 = (-12071 ? 127 : 3031635975);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_36 [i_10] [i_9] [1] [i_7] [i_1] [i_0] [i_0] = (((((65535 ? 1 : (arr_10 [i_7] [i_7] [i_7] [i_9] [i_7])))) ? 126 : var_8));
                            arr_37 [i_1] [9] [9] [i_7] [i_10] [i_7] = 1;
                        }
                        var_17 = ((-88 | ((21 ? 1 : (arr_28 [i_9] [0] [6])))));
                    }
                    arr_38 [i_0] [i_1] [i_7] = (63 & 1);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_18 = -61;
                            var_19 = (((1 ? (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1)));
                        }
                        for (int i_14 = 3; i_14 < 10;i_14 += 1)
                        {
                            var_20 = ((var_7 ? (arr_43 [i_12]) : var_5));
                            var_21 = (((arr_20 [9] [i_11] [9] [i_14 - 1] [i_14]) ? (arr_20 [0] [i_1] [i_12] [i_14 - 1] [2]) : (arr_20 [i_11] [2] [i_12] [i_14 - 2] [i_14])));
                            arr_48 [i_0] [10] [i_11] [10] [i_11] [i_12] [i_12] = ((1 ? -4 : -7151));
                            var_22 = 3707852795;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_23 = (((arr_35 [i_15] [i_1] [i_1] [i_1] [i_0]) ? var_0 : 1221246185));
                            var_24 = -67;
                            var_25 = 1;
                        }

                        for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
                        {
                            var_26 = (((arr_54 [i_0] [i_0] [i_12] [i_0] [i_0] [7]) & (arr_33 [5] [i_1] [i_16] [i_16 + 1] [i_16 + 2] [8])));
                            var_27 = ((-(arr_49 [i_0] [i_12] [i_11] [i_12] [i_16])));
                        }
                        for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
                        {
                            arr_58 [i_0] [i_1] [i_1] [i_11] [i_1] [i_12] [0] = 1;
                            var_28 = (((arr_12 [i_17 + 3] [i_17] [i_17 + 1] [i_17 + 3] [i_17 + 3]) - 191));
                            arr_59 [i_0] [i_1] [i_11] [i_12] [i_1] = (((arr_53 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 1] [i_12]) ? 4294967295 : (arr_20 [i_17 + 2] [i_17] [i_17 + 2] [i_17] [i_17])));
                            var_29 = ((-(arr_12 [i_0] [i_12] [i_11] [i_12] [i_17 + 2])));
                        }
                        for (int i_18 = 1; i_18 < 8;i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_11] [i_12] = var_1;
                            var_30 = (~var_2);
                            var_31 = (((arr_51 [i_18] [i_18] [i_18 + 2] [i_18 + 3] [i_18 + 1] [i_18 + 3]) ? (arr_51 [i_18 + 2] [0] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 2]) : 0));
                        }
                        var_32 = ((!(arr_17 [i_0] [i_1] [i_11] [i_11] [i_0])));
                    }
                    arr_63 [1] = 1;
                }
                for (int i_19 = 3; i_19 < 10;i_19 += 1)
                {
                    arr_66 [i_0] = ((3851469472 ? ((((8545 ? 1239 : 2147483643)))) : 10));
                    arr_67 [i_0] [10] = var_9;
                    var_33 = (max((arr_10 [i_0] [i_0] [3] [i_1] [i_19]), 101));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_34 = ((-(((arr_34 [i_1] [1] [i_1] [i_1] [i_1] [i_1] [1]) ? 8 : (arr_53 [i_0] [i_0] [i_1] [i_20] [i_20])))));
                    var_35 = 5456316;
                }
                arr_70 [i_0] [10] = (((((!(arr_35 [i_0] [i_0] [i_1] [i_0] [i_1])))) >= ((min((arr_39 [i_0] [i_0] [i_0] [i_0]), (arr_39 [i_0] [i_0] [i_1] [i_1]))))));
                arr_71 [i_1] [3] [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
