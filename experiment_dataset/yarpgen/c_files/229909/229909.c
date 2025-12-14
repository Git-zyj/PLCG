/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_8 && (((var_6 ? 25 : var_4))))) && ((!(((var_3 ? 511 : 65025)))))));
    var_14 = ((var_0 < ((var_0 ? (var_10 && var_2) : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = -var_1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (var_3 ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_4]));
                                arr_14 [i_0] [i_0] [i_4] = var_5;
                                var_16 *= ((-(arr_13 [i_0] [i_4 - 1] [i_4] [i_4] [8])));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = (arr_12 [i_4] [i_0] [i_4] [i_4] [i_4]);
                                var_17 = var_5;
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] [i_1] = var_6;
                    var_18 = ((((((arr_4 [i_0] [1]) ? (arr_1 [i_0]) : (arr_6 [i_0])))) ? (arr_10 [i_2] [i_0]) : ((var_5 ? (arr_9 [i_0]) : var_6))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_0] = 65027;
                    var_19 = ((!((((((-(arr_11 [i_0] [i_0] [i_1] [5])))) ? ((~(arr_12 [7] [i_0] [i_5] [i_0] [i_0]))) : ((max(var_12, var_3))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = ((+((min((arr_22 [i_0] [i_1] [i_0] [i_7] [i_6 + 2]), (arr_22 [i_0] [i_1] [i_0] [i_1] [i_6 - 1]))))));
                                var_21 = ((31 ^ (min(((509 ? var_10 : var_4)), var_3))));
                                var_22 = ((~(((arr_24 [i_0]) ? ((-(arr_23 [i_0] [i_1] [i_5]))) : ((((arr_23 [i_0] [i_0] [i_0]) ? var_1 : 402431603)))))));
                            }
                        }
                    }
                }
                arr_26 [i_0] = var_11;
                var_23 = (-(arr_17 [5] [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_24 = ((((((arr_1 [i_0]) ? var_9 : (arr_1 [i_0])))) && (max((arr_25 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1]), (arr_25 [i_8 - 1] [i_8 + 1] [4] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                            var_25 = ((~(max((((arr_0 [i_1] [i_1]) + var_9)), (arr_8 [i_1] [i_9])))));
                            var_26 = var_11;

                            for (int i_10 = 3; i_10 < 7;i_10 += 1) /* same iter space */
                            {
                                arr_35 [i_0] [i_1] [i_0] [i_9] [i_10] = (arr_20 [i_0] [i_1] [i_8] [i_9] [i_10 - 3]);
                                var_27 = (max(var_27, (max((min((arr_1 [6]), ((((arr_7 [i_1] [i_8] [i_10]) != var_2))))), ((((((arr_10 [i_0] [i_10]) ? (arr_18 [i_0] [i_1] [1]) : (arr_31 [4] [8] [6] [i_9]))) != (((var_8 ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_3))))))))));
                            }
                            /* vectorizable */
                            for (int i_11 = 3; i_11 < 7;i_11 += 1) /* same iter space */
                            {
                                arr_38 [i_11] [i_0] [i_0] [9] = -var_0;
                                var_28 |= (((arr_1 [6]) ? var_5 : (arr_1 [8])));
                                var_29 = var_8;
                                var_30 ^= (((arr_34 [i_0] [2] [i_8]) ? 235 : (var_1 && var_2)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        arr_41 [i_12] = ((var_8 < ((((((arr_39 [i_12]) ? var_8 : var_6))) ? -0 : var_6))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_31 -= ((((!0) ? ((var_5 ? (arr_44 [2] [i_13] [i_13]) : var_11)) : (arr_43 [i_12]))));
                    var_32 |= var_10;
                    arr_47 [i_12] = ((arr_45 [i_12 + 1] [i_13 + 1] [i_14] [i_14]) ? (((var_8 << (((arr_45 [i_12] [i_12 - 1] [i_13 + 1] [i_14]) - 7579621112814099194))))) : (min(var_4, (arr_45 [i_12] [i_13] [i_14] [i_14]))));
                }
            }
        }
        var_33 = (((arr_39 [i_12]) > ((~(((arr_40 [i_12]) | (arr_42 [i_12])))))));
        var_34 = ((((max(var_12, (arr_43 [i_12])))) || (((var_10 ? (arr_43 [i_12 - 1]) : var_1)))));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_35 = var_1;
        var_36 = (511 + 3);
    }
    var_37 = (max(var_10, -var_10));
    #pragma endscop
}
