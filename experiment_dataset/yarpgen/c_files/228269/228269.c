/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = 730744618;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (((0 ? 2084377381 : -2084377396)));
                        var_22 = (((arr_2 [i_2 - 1] [i_3] [i_2 - 1]) + var_5));

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_23 = -730744619;
                            var_24 = (arr_8 [i_4 - 2] [i_2] [i_4 - 1] [i_4 + 1] [i_2] [i_2 + 1]);
                            var_25 = 1;
                            var_26 = ((var_12 ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_27 = var_8;
                            var_28 |= 2084377372;
                            var_29 = (min(var_29, -9219059374856442214));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_30 = -9219059374856442205;
                            var_31 = (((arr_10 [i_0] [i_0] [i_2 + 1] [i_6] [10] [i_1] [i_2 + 1]) + var_3));
                        }
                        var_32 *= arr_15 [i_2 - 1];
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_33 = (((!(arr_23 [1] [i_8]))));
                        var_34 *= -9219059374856442194;
                        var_35 = (((arr_18 [4]) ? var_9 : 0));
                    }
                }
            }
        }
        var_36 = ((var_18 ? (((max((arr_18 [i_7 + 1]), 51)))) : (2084377379 & 13)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_37 = (((arr_31 [i_11]) - -6819842799095842034));
        var_38 = var_8;
        var_39 = (max(var_39, (((arr_30 [i_11]) & var_8))));
        var_40 = ((~(arr_30 [i_11])));
        var_41 = 10272;
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            var_42 = (min(var_42, (((~(((0 < (var_15 && var_14)))))))));
            var_43 = (min((((((max(176, 19585))) & (((arr_35 [i_13]) / (arr_30 [i_12])))))), (max(9219059374856442187, (arr_32 [i_12])))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_44 = (max(-6819842799095842034, ((~(arr_38 [i_16 - 3] [i_12])))));
                            var_45 = (max(18446744073709551595, (((arr_39 [i_12] [i_16 - 1] [i_13 + 2] [i_15] [i_16 - 1] [i_16]) | (arr_37 [i_12] [i_16 + 2] [i_13 + 2])))));
                        }
                    }
                }
            }
            var_46 = ((7 - (((67108864 != (arr_41 [i_12] [i_12] [i_13]))))));
        }
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            var_47 &= (max(((var_14 ? var_3 : var_14), (((arr_36 [i_17] [i_12]) & var_14)))));
            var_48 = ((((~(arr_34 [i_12] [i_17]))) ^ ((13802 & (arr_34 [i_12] [i_17])))));
        }
        var_49 += (((((arr_32 [10]) < var_5)) || (var_17 <= 1)));
        var_50 = (max(var_50, (((~(~21))))));
        var_51 ^= ((var_16 ? 7218 : ((var_17 ? 187 : (arr_35 [i_12])))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                {
                    var_52 |= ((!((!(arr_45 [i_12] [10] [i_19])))));
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_53 *= (min(31, 0));
                                var_54 = max((max((93 / -2084377398), -23)), ((1 ? (arr_52 [i_12]) : (max(var_8, (arr_38 [2] [i_12]))))));
                                var_55 = var_5;
                                var_56 = -18446744073709551606;
                            }
                        }
                    }
                    var_57 = (min(var_57, 1114462776));
                }
            }
        }
    }
    var_58 = var_12;
    #pragma endscop
}
