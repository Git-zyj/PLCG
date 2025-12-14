/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 += ((var_15 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [9] [i_1] = (184 >> 0);
                    var_20 = (~0);
                }
            }
        }
        var_21 = ((!var_6) ? (((1 ? 0 : 1))) : 1);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_22 = var_0;
        arr_14 [i_3] = 1;
        arr_15 [i_3] = ((~(((arr_8 [22] [i_3] [22]) ? var_1 : var_10))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = var_7;
                            var_24 = 194;
                            var_25 -= (((-127 - 1) ? var_8 : (((var_14 >= (arr_2 [i_4]))))));
                            var_26 = (min(((max((arr_2 [i_7]), 184))), (min(0, 1))));
                        }

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((((max((1 || 495842577), ((15 ? (arr_25 [i_4] [i_5] [7] [7]) : var_12))))) || ((((((166 ? 3799124728 : 1))) ? 1 : 495842585))))))));
                            var_28 = 198;
                            var_29 = (arr_30 [i_5] [i_5]);
                            var_30 += (min(var_12, (arr_30 [i_6] [i_9])));
                            arr_32 [i_4] [i_4] [i_6] [i_7] [2] = 1;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_31 = (arr_30 [9] [i_10]);
                            arr_35 [i_4] [i_4] [i_7] [i_7] = ((201 ? 89 : 1));
                            var_32 = ((4193280 ? 75 : 1));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_33 = (((((arr_24 [10] [i_5] [10] [i_11] [i_7]) >> (((((arr_25 [i_4] [i_5] [i_4] [i_7]) ? (arr_21 [i_4] [i_5]) : var_13)) - 8674378537940812608)))) + 32767));
                            arr_39 [i_11] [i_11] [i_6] [i_11] [i_4] = 0;
                            arr_40 [i_7] [i_6] [i_11] [i_11] [i_11] = arr_2 [6];
                            arr_41 [i_4] [i_4] [i_6] [i_11] = (((1 ^ (arr_11 [i_4] [i_5]))));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_34 = (6 + (16 - var_12));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_52 [i_4] [i_14] [i_12] = (((((255 ? var_9 : 95))) ? (arr_31 [i_4] [i_12] [i_12] [i_4] [i_14] [i_15] [i_15]) : var_8));
                            arr_53 [i_12] [i_14] [i_12] [i_12] = 1;
                            var_35 = (1 * var_4);
                            var_36 = 1;
                        }
                    }
                }
            }
            arr_54 [i_12] = ((var_1 ? (arr_4 [i_12] [i_12]) : var_15));
        }
        for (int i_16 = 2; i_16 < 11;i_16 += 1)
        {
            var_37 |= (((27261 + -var_0) ? (((~1) ? 222 : var_13)) : var_11));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        arr_63 [i_4] [i_16] [i_16] [i_17] [i_17] [i_18] = (min((arr_24 [i_4] [i_4] [i_17] [i_4] [i_18]), (min(var_14, ((var_10 >> (arr_17 [i_17] [i_16 - 2])))))));
                        var_38 ^= (((((~((max(var_2, var_16)))))) ? ((var_5 ^ (arr_48 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2]))) : ((((255 >= 18446744073709551608) ? ((min(var_0, 27285))) : var_3)))));
                    }
                }
            }
        }
        for (int i_19 = 2; i_19 < 11;i_19 += 1)
        {
            var_39 = (max(var_39, var_17));
            var_40 = var_0;
            arr_66 [i_19] = ((~(78 / 1)));
        }
    }
    var_41 = -25831;
    var_42 = (((((min(1317655159655242336, var_1) < var_13)))));
    #pragma endscop
}
