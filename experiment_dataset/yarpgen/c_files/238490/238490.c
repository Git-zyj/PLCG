/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 ? (!var_0) : var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min((min((max((arr_10 [i_3] [i_3] [i_1] [i_0]), var_5)), ((min(var_12, var_8))))), var_9));
                                var_15 = ((!(((((max(var_7, var_9))) ? (min(var_5, var_5)) : ((((arr_3 [7] [i_2]) ? (arr_0 [i_1] [i_4]) : (arr_2 [i_3])))))))));
                                var_16 += ((((arr_6 [i_4]) >> (((arr_4 [i_4]) + 31272)))) == ((((min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2]), var_0))) ? (((var_3 ? (arr_4 [i_0]) : var_4))) : ((var_8 ? (arr_6 [i_3]) : (arr_2 [i_1]))))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (arr_8 [i_1] [i_1] [1] [i_0] [i_0])));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_18 -= (arr_11 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5]);
                    arr_15 [i_0] [i_0] [i_1] [i_5] = (min(((max((arr_10 [8] [i_0] [i_1] [i_0]), var_4))), (min(-var_1, (((-(arr_12 [i_0] [i_1] [i_5]))))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_26 [i_0] [10] [i_0] [i_6] = (((arr_19 [i_0] [i_7]) | var_1));
                            arr_27 [i_6] [i_7] = arr_2 [i_1];
                        }
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            var_19 = ((~(arr_22 [i_0] [i_9 - 1] [i_0] [i_7] [i_9] [i_9 - 1])));
                            arr_30 [i_6] [i_1] [i_6] [i_6] [i_1] [i_0] [i_6] = -var_0;
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_20 -= (((((var_8 << (var_8 - 16)))) ? ((((arr_18 [4] [i_7]) ? var_6 : var_1))) : var_5));
                            var_21 = var_6;
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_22 += (((arr_10 [4] [4] [i_7] [i_11]) ? (arr_10 [i_0] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_11])));
                            var_23 = (((arr_21 [i_0] [i_6] [i_7] [i_11]) ? var_4 : (arr_12 [i_0] [i_7] [1])));
                            var_24 = ((arr_5 [i_0] [i_1] [i_6] [i_7]) > (arr_5 [i_0] [i_0] [i_0] [i_0]));
                            var_25 = ((!((((arr_28 [i_6] [i_1] [i_6] [8] [i_11]) ? var_0 : var_1)))));
                        }
                        var_26 = (max(var_26, (((((var_5 ? var_3 : var_6)) > (arr_12 [6] [i_6] [i_7]))))));
                        var_27 = (((((((arr_17 [i_0] [i_1] [i_6]) || var_11)))) / (var_10 & var_12)));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_6] = arr_24 [i_6] [i_1] [i_1] [5] [3] [i_1];

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_43 [i_13] [i_6] [i_6] [i_6] [i_1] [i_6] [i_0] = ((!((max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), var_8)))));
                            var_28 -= (min(((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_1])));
                            var_29 *= (((min((arr_6 [i_0]), (arr_18 [i_0] [i_12])))) * (var_11 >> var_8));
                            var_30 ^= (max((max(var_1, -var_12)), (min(((var_3 ? (arr_39 [i_6] [i_6] [i_1] [i_0]) : var_12)), (var_12 + var_2)))));
                            var_31 = (max(var_31, (arr_22 [i_0] [4] [i_6] [4] [i_0] [3])));
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            var_32 -= (((((arr_23 [i_0] [i_1] [i_6] [i_12] [i_14]) ? (arr_23 [i_0] [i_1] [i_6] [i_12] [i_14]) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((max((arr_17 [i_0] [i_0] [i_12]), ((((arr_4 [i_0]) % (arr_20 [11] [1] [1] [i_12] [i_14])))))) - 18446744073709551591))));
                            arr_46 [i_0] [i_1] [i_12] [i_6] = (((((((((arr_44 [i_0]) ? var_9 : var_6)) | (((arr_36 [i_1] [2]) ^ (arr_19 [4] [8]))))) + 2147483647)) >> (((max((arr_12 [i_0] [i_1] [i_14]), (arr_14 [i_0] [i_1]))) - 18446744073709551588))));
                            arr_47 [i_0] [i_14] [i_14] [i_6] [i_14] [i_12] = var_2;
                        }
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_52 [i_0] [i_6] [i_0] [i_6] = ((+(((arr_11 [i_0] [i_1] [i_1] [i_12] [i_12] [i_15]) ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : (arr_38 [i_15] [5] [i_0] [i_12])))));
                            var_33 -= (((var_6 != var_1) << ((((-(arr_14 [i_6] [i_12]))) - 811127274795732413))));
                            arr_53 [i_6] = ((((((arr_21 [i_0] [i_6] [i_6] [i_12]) ^ (arr_37 [i_0] [7] [i_0] [i_0] [1])))) || ((min((arr_2 [i_0]), var_1)))));
                        }
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            var_34 = ((!((min((arr_17 [i_0] [10] [i_6]), (arr_57 [6] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                            var_35 = (((arr_8 [i_0] [i_6] [i_6] [i_12] [i_16]) - ((var_11 ^ (arr_4 [i_12])))));
                            var_36 *= ((((-var_2 >> (min(var_3, var_8)))) > var_9));
                        }
                        var_37 = ((((((var_4 ? var_12 : (arr_8 [i_0] [i_1] [i_6] [6] [i_12]))) >= (((var_12 && (arr_56 [i_0] [i_6] [2])))))) ? (min(var_1, var_1)) : var_8));
                        var_38 = (((~(arr_4 [i_0]))));
                    }
                    var_39 |= min((arr_22 [i_0] [10] [i_1] [i_1] [i_6] [i_6]), (((var_1 << (arr_7 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_40 = (max(var_40, (max((max((var_2 >= var_8), (min(var_11, var_7)))), (var_5 & var_3)))));
                                var_41 *= (arr_54 [i_0] [i_0] [7] [i_6] [11] [i_17] [i_18]);
                                var_42 = (arr_25 [i_6]);
                            }
                        }
                    }
                }
                var_43 ^= (min((((arr_29 [i_0] [0] [i_0] [i_1] [i_1] [i_1] [6]) ? -var_11 : ((((arr_13 [3]) - var_2))))), ((max((arr_31 [i_1] [i_1] [i_1] [i_1] [i_0]), var_4)))));
            }
        }
    }
    var_44 = ((~(((var_4 ^ var_9) << (((var_10 ^ var_5) - 13033693880529443985))))));
    #pragma endscop
}
