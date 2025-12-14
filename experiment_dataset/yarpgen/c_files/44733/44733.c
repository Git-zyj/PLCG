/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_13;
                arr_7 [i_0] = ((((((arr_4 [0]) != (arr_1 [i_0])))) != (!var_1)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (min(((min((max((arr_9 [i_0] [0] [i_1] [i_0]), var_14)), (min(var_2, -1))))), (min((min(var_8, (arr_3 [i_0] [i_2]))), ((min(-1, (arr_8 [1] [i_1] [1] [9]))))))));
                    var_18 = ((-(arr_0 [i_0] [4])));
                    var_19 = var_1;
                    arr_12 [2] [i_1] [i_0] [2] = ((((var_12 < (arr_0 [i_0] [i_0])))) != var_6);
                    arr_13 [i_0] [i_1] [i_0] = (!var_14);
                }

                for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_3] [i_3] = (~var_13);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((arr_5 [i_3 - 1] [i_4 - 1] [i_4]) ? (((var_6 ? 16711680 : 16711680))) : (max(0, 2864677993)))), var_15));
                                arr_22 [i_0] [i_1] [i_0] [0] [1] = (arr_15 [0] [6] [i_5]);
                                var_20 *= ((((min(var_12, (arr_15 [i_0] [i_0] [0])) * ((((arr_15 [8] [10] [i_0]) ? (arr_5 [i_0] [i_4 - 1] [i_5]) : var_2)))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = (((min(var_10, 0))));
                            }
                        }
                    }
                    var_21 *= (((((!(arr_17 [i_3 - 1])))) >> (((arr_18 [i_3 - 1] [7] [i_3] [i_3]) - 2144325002))));
                    var_22 -= ((var_7 || (arr_0 [2] [1])));
                    var_23 -= (((((min((arr_4 [1]), var_13))) && ((min(6447495958892161527, var_2))))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_28 [5] [i_0] [i_0] [5] = (min((((arr_14 [i_0] [i_0]) != (arr_1 [i_0]))), (var_1 == 6447495958892161527)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_24 = ((((arr_29 [i_0]) + ((1 ? var_16 : var_14)))));
                                var_25 = (min(var_3, ((((((max((arr_1 [i_0]), 1)))) < var_16)))));
                            }
                        }
                    }
                    var_26 = (-(arr_27 [i_6 - 1] [i_6 - 1] [i_1]));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 = ((-7608389690251404019 ? (arr_24 [i_0] [i_0] [i_9] [2]) : (arr_20 [i_0] [i_9 - 1] [i_9 - 1])));
                        var_28 += var_0;
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 9;i_12 += 1)
                        {
                            var_29 = (arr_40 [i_9] [i_9 - 1] [i_9 - 1] [i_9]);
                            var_30 = (((-(arr_43 [i_12]))));
                            var_31 += (((((7 ? (arr_10 [4]) : var_4))) == (arr_26 [i_9] [i_9 - 1] [i_9 - 1])));
                            arr_46 [i_0] [i_11] [i_0] [6] [i_0] &= -var_5;
                        }
                        for (int i_13 = 1; i_13 < 9;i_13 += 1)
                        {
                            arr_49 [i_0] [i_1] [i_1] [1] [i_13] = ((((arr_38 [i_0] [i_1] [i_0] [i_0]) ? var_3 : 536870912)));
                            var_32 = (max(var_32, ((((arr_15 [i_0] [i_1] [i_9 - 1]) ? (arr_15 [i_0] [i_1] [i_9 - 1]) : var_16)))));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_33 |= (((arr_42 [i_11] [i_1] [i_9 - 1] [i_11] [4]) ? (arr_42 [i_11] [i_11] [2] [i_11] [i_14]) : (arr_42 [i_11] [i_9 - 1] [4] [0] [i_14])));
                            var_34 = var_12;
                            arr_53 [i_0] [i_1] = ((5796197941289081322 ? 950725109 : -686062989));
                            var_35 = var_2;
                        }
                        arr_54 [7] [7] [i_0] [i_11] = ((-(2095125061 <= var_14)));
                        arr_55 [3] [i_0] [i_9] [i_11] = (arr_9 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0]);
                        var_36 = var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 9;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                arr_62 [i_0] [i_0] [i_0] [i_1] [0] [i_15] [i_16] = (((arr_15 [i_9 - 1] [i_9 - 1] [i_15 - 4]) ? (arr_50 [i_16] [i_16] [i_0] [0] [i_0] [i_0] [i_0]) : var_9));
                                var_37 = (arr_41 [i_0] [i_1] [i_9] [i_15]);
                            }
                        }
                    }
                    var_38 ^= var_3;
                    arr_63 [i_0] = (((767778091 ? var_9 : var_10)));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    var_39 = (((((arr_24 [i_0] [i_0] [i_1] [i_17]) ? var_5 : (arr_38 [10] [10] [10] [4]))) * (arr_64 [i_0] [1] [i_0])));
                    arr_66 [i_0] [i_0] [10] = (var_7 && var_12);
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            {
                                var_40 = -var_4;
                                arr_72 [i_0] [i_0] [5] [1] [10] [8] [1] = ((!(arr_19 [i_1] [i_1] [2])));
                                var_41 = (max(var_41, (arr_58 [i_0] [i_17])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_42 = var_4;
    var_43 += var_10;
    #pragma endscop
}
