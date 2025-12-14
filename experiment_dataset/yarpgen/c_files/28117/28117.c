/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [22] = -var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 |= ((~(min((arr_5 [i_2] [i_1] [i_4]), ((-(-127 - 1)))))));
                                var_15 = ((max(((-9 ? -78 : (arr_3 [i_0] [i_2])), (((!(arr_11 [i_0] [i_1] [i_2] [i_0] [19]))))))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_0] = ((((((min((arr_2 [i_0] [i_1]), var_9))) < ((((arr_7 [i_0] [i_0] [i_0] [i_0]) <= -114))))) ? ((((((arr_12 [i_0] [i_1] [i_0] [i_1] [i_5]) ? (arr_12 [1] [i_1] [i_2 - 1] [i_5] [i_5]) : (arr_10 [i_0])))) ? var_9 : ((min(-59, (arr_2 [i_0] [i_1])))))) : (max(((var_8 ? (arr_14 [i_0] [i_2 + 1] [i_1] [6] [i_0] [i_0]) : 13)), ((123 ? var_12 : var_7))))));
                        var_16 += ((-((var_13 + (arr_5 [i_1] [i_1] [i_5 - 3])))));
                        var_17 *= min(103, (min((arr_11 [i_1] [i_1] [i_2 - 1] [i_1] [i_0]), (arr_11 [12] [i_1] [i_2 - 1] [i_1] [i_0]))));
                        var_18 += ((((((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_1]), var_10))) ? (((arr_5 [i_0] [i_1] [i_2 - 1]) * var_3)) : var_12)) > ((max((arr_4 [i_0] [4] [i_2 + 1]), (arr_4 [i_1] [i_2 - 1] [i_5 - 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_19 = (min(var_19, -0));
                        var_20 = (max(var_20, ((min(((max((arr_15 [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_2 - 1] [i_1] [i_0])))), (min(((-(arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1]))), ((max(126, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [9] [i_0])))))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_0] = (max(var_11, (((arr_0 [i_0]) - ((max((arr_10 [i_0]), (arr_4 [i_0] [i_2 + 1] [i_6]))))))));
                    }
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] = (min((((max((arr_0 [i_0]), var_1)))), ((-((max((arr_24 [i_2] [i_8]), (arr_13 [i_0] [i_1] [i_2 - 1] [i_7] [i_8] [i_8] [i_8]))))))));
                            var_21 = arr_17 [i_0] [i_2] [i_8];
                            var_22 = (min(var_22, ((((!37) > (((!97) ? (arr_12 [i_8] [i_0] [i_0] [i_0] [i_0]) : (arr_24 [i_0] [i_1]))))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_7 + 1] [i_7 + 1] [i_9] = (min(((-((min(-23, (arr_13 [13] [i_1] [i_1] [i_1] [i_2] [i_1] [i_9])))))), (((((max((arr_19 [i_0] [i_0] [i_0] [i_0]), var_1))) >= var_6)))));
                            var_23 = (((((var_11 ? var_4 : (arr_32 [i_7] [i_7 - 2] [i_7] [i_0] [i_7 + 1])))) ? (((!(arr_19 [i_0] [i_0] [i_0] [i_9])))) : ((~((-(arr_4 [i_2 + 1] [i_1] [i_0])))))));
                            var_24 = min(var_11, ((min(var_3, var_5))));
                        }
                        var_25 -= ((~(min((var_8 - 123), (((arr_30 [i_2] [i_1] [i_2] [i_7] [i_0] [i_2] [i_0]) * var_1))))));
                        var_26 = (min(var_26, (((((((arr_2 [8] [i_1]) & ((min((arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]), var_4)))))) ? (arr_27 [i_7 + 1] [10] [i_2] [14] [i_7] [i_7]) : ((((max(var_8, (arr_25 [i_0] [i_1] [i_2 + 1] [i_7 + 1] [i_7])))) ? (arr_11 [i_0] [i_1] [i_2] [i_7] [i_2]) : ((max((arr_31 [i_0] [i_0] [i_1] [i_1] [i_1] [i_7]), (arr_25 [i_0] [i_0] [16] [i_2] [i_7 + 1])))))))))));
                        arr_34 [i_0] [i_0] [15] [i_7 - 2] = ((!(((var_5 ? ((min((arr_23 [i_0] [i_0] [i_7]), -5))) : (var_8 <= 109))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_39 [i_0] = (max((((!((min((arr_37 [i_11] [i_10] [i_0] [i_1] [i_0]), var_9)))))), (((arr_14 [i_0] [i_0] [i_0] [i_2 + 1] [i_10] [i_0]) ? (((-56 < (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((var_5 ? var_0 : 127))))));
                                arr_40 [i_0] = ((13 << ((((((arr_12 [i_10] [i_11 - 1] [i_2] [i_10] [i_11 - 2]) ? (arr_18 [i_0] [i_1] [i_2] [i_10] [i_11]) : (arr_12 [i_0] [i_0] [i_2] [11] [i_11 + 1]))) >= (((((arr_37 [i_11] [i_1] [i_10] [10] [i_11]) + 2147483647)) << (((-53 + 68) - 15)))))))));
                                arr_41 [i_0] = (((((arr_3 [i_0] [i_1]) * var_11)) - (arr_25 [i_0] [i_0] [i_0] [i_10] [i_11])));
                                var_27 = arr_29 [i_0] [i_1] [1] [i_2] [i_0] [1] [i_0];
                                arr_42 [i_0] [i_0] [i_0] [i_10] [i_11] = 112;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_9;
    #pragma endscop
}
