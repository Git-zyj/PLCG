/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_1 - 2] [i_0] [i_3] [i_4] [i_0] = var_10;
                            var_13 = (min(var_13, (min((!-var_9), (arr_7 [i_3] [i_3] [i_3])))));
                            var_14 *= ((((var_12 == (arr_1 [i_3])))));
                        }
                        arr_15 [i_0 + 1] [i_0] = ((-((max((-32767 - 1), (((!(arr_5 [i_0])))))))));
                        arr_16 [i_0] [i_0] [i_2] [i_3] = (((((min(var_2, -26095)) ^ (var_1 & 29985)))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_15 = (min((((~(arr_18 [i_2] [i_0] [i_0] [i_0])))), var_3));
                        var_16 += (max((((-(arr_7 [i_5] [i_2 - 1] [i_5])))), -6597069766656));
                        var_17 = ((((((((var_1 ? (arr_4 [i_0] [i_5]) : 75))) ? 75 : (~var_0)))) ? 1 : (var_5 != var_4)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_18 = ((~(-31108 <= 29)));
                                var_19 = (~9223372036854644736);
                            }
                        }
                    }
                    arr_27 [i_2] [i_2] [i_0] = (((arr_1 [i_0]) ? -29 : (arr_24 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((-(arr_35 [i_0] [i_0] [i_8] [i_8 - 1] [i_9] [i_10] [i_10]))) * (arr_32 [i_10] [i_8 - 1] [i_8] [i_0 - 1] [i_0])))));
                                arr_36 [i_0] [i_0] = 10;
                                arr_37 [i_0 + 2] [i_0 + 1] [i_1] [i_8 - 1] [i_8] [i_0] [i_10] = -var_4;
                                arr_38 [i_1 - 1] [i_8] [i_0] [i_10] [i_1] [i_8] [i_10] = (i_0 % 2 == zero) ? ((((((arr_4 [i_0] [i_1 + 1]) + 2147483647)) << var_8))) : ((((((((arr_4 [i_0] [i_1 + 1]) - 2147483647)) + 2147483647)) << var_8)));
                                arr_39 [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_0] = ((((arr_11 [i_1] [i_8] [i_0] [i_1]) << (var_11 - 12726))));
                            }
                        }
                    }
                    var_21 += var_9;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_22 += (~(var_12 / var_3));
                    var_23 = (min(var_23, ((((var_8 % (arr_9 [i_0 + 2])))))));
                    var_24 -= ((min(((-(arr_28 [i_0] [i_1] [i_1] [i_0]))), var_11)));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_25 = ((~(((var_3 == (-32767 - 1))))));
                        var_26 ^= (((arr_0 [i_0 - 1] [i_1 - 1]) <= (((min(1, (arr_19 [i_0 - 1] [i_0] [i_1] [i_0 + 1])))))));
                    }
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_27 = ((-(arr_3 [i_15] [i_14 + 1])));
                                var_28 = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_29 = ((min((arr_54 [i_0] [i_1] [i_16 + 3] [i_17 - 1] [i_0 + 1] [i_1]), (arr_54 [i_0] [i_0] [i_16 + 1] [i_17 - 1] [i_0 - 1] [i_0]))));
                                var_30 *= (arr_11 [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1]);
                                arr_61 [i_0] [i_0] = ((-((~(!var_1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 23;i_19 += 1)
                        {
                            {
                                var_31 = (min((((!((min(var_1, var_1)))))), (((arr_65 [i_0] [i_1] [i_0] [i_19 - 1]) | (((max(var_0, var_8))))))));
                                arr_69 [i_0] [i_13] [i_13] [i_0] [i_0] [i_0] = (max((var_0 * var_5), (min((((var_9 ? 2147483645 : (arr_51 [i_0])))), (((arr_57 [i_0] [i_1] [i_0] [i_19]) ? 3935886555 : var_8))))));
                                var_32 = ((((min(var_2, var_2)))));
                                var_33 *= ((((((max(15048230468619650524, 172)) * (arr_4 [i_13] [i_0 + 1])))) ? ((var_3 << (arr_49 [i_1 - 1] [i_1] [i_0 + 2] [i_1] [i_0 + 2] [i_19 + 1]))) : (-78 > var_8)));
                            }
                        }
                    }
                    var_34 = (min((!var_5), ((~(arr_67 [i_13] [i_0] [i_13] [i_13] [i_13] [i_13])))));
                }
                arr_70 [i_0] [i_0] = (((~(arr_18 [i_0] [i_0] [i_0 - 1] [i_0]))));
                var_35 = var_0;
                var_36 = ((((((max((arr_18 [i_0] [i_1] [i_1] [i_0]), var_9))) ? var_7 : ((var_9 | (arr_35 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1]))))) * var_9));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_37 = ((~((var_10 ? var_10 : (max(var_6, (arr_31 [i_20])))))));
                            var_38 = ((!(((arr_21 [i_0] [i_1 - 1] [i_1 - 1] [i_0]) || (arr_21 [i_0] [i_1 + 1] [i_1 - 1] [i_0])))));
                            var_39 += (((-(((-20 + 2147483647) >> var_4)))));
                        }
                    }
                }
            }
        }
    }
    var_40 -= var_9;
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            {
                var_41 = ((((((min(1, 1)) ? (arr_9 [i_22]) : (arr_52 [i_23] [i_23] [i_22] [i_23] [i_22])))) || (((((!(arr_46 [i_23] [i_23] [i_23] [i_23]))) ? (arr_77 [i_22] [i_23]) : var_8)))));
                var_42 = (!(((var_0 * var_8) || (arr_62 [i_23]))));
            }
        }
    }
    var_43 += (~var_5);
    #pragma endscop
}
