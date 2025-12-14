/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min(-255, var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((~(arr_3 [4] [i_0] [i_0]))))));
                var_20 = (min(var_20, ((-127 ? var_1 : ((min(var_13, (arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] |= ((-(((~-112) ? 119 : 2097148))));
                                var_21 |= (!0);
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((-(~255))))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_5] [i_1] [i_5] = (!-127);

                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        arr_19 [i_5] [i_5] = (min(1, -65));
                        var_23 = (max(-414198462, ((min(32766, 127)))));
                        var_24 = ((!(((~(-2147483647 - 1))))));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_25 ^= ((255 ? -13623 : 2097148));
                            var_26 = var_10;
                            var_27 = -var_10;
                        }
                    }
                    var_28 = 2097132;
                    var_29 |= (~-5648);
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_30 *= ((-(((arr_25 [i_8] [i_8] [i_8] [i_0]) ? var_9 : var_6))));
                    arr_27 [i_0] [i_1] [0] = var_3;
                    var_31 = var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_32 = (min(var_32, (min(var_11, (min((arr_37 [i_10 + 1]), (((arr_26 [i_9] [18]) ? var_9 : var_16))))))));
                    var_33 = (min((max(var_15, var_9)), (114 / 13)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_34 = (min(-32756, -44));
                                var_35 = max((arr_23 [i_11] [i_13]), (min(1, 24)));
                            }
                        }
                    }
                    var_36 |= ((max(4922254302504983670, 13608)));

                    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                    {
                        var_37 = (min(var_37, ((max((!117), var_16)))));
                        var_38 = (!var_3);
                        var_39 = ((~((13594 ? 222 : (arr_16 [i_9 - 1] [i_14] [i_9 - 2] [i_9 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_9] [i_10] [5] [i_15] [i_11] [5] = ((~(arr_1 [i_10 - 1])));

                        for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                        {
                            arr_53 [i_15] [i_10] [i_11] [i_11] [i_16] = ((var_8 ? (arr_8 [9] [1] [i_9] [i_15] [i_10 + 2]) : (arr_8 [i_9] [i_9] [i_11] [1] [i_10 - 2])));
                            arr_54 [22] [i_15] [22] [i_15] [22] = (((arr_22 [i_10 - 2] [i_9 - 2]) ? var_10 : var_14));
                        }
                        for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                        {
                            var_40 = (max(var_40, (((!(-9223372036854775807 - 1))))));
                            var_41 = ((!(!var_8)));
                        }
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                    {
                        var_42 = (!var_14);
                        var_43 = ((~((((((!(arr_52 [i_9] [i_10 - 1] [i_10 - 1] [i_18] [i_10] [i_11])))) != (arr_3 [23] [23] [i_18]))))));
                        var_44 = (max(var_44, (((((max((arr_21 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]), var_13))) ? var_15 : ((var_1 ? var_9 : var_15)))))));
                    }
                }
            }
        }
    }
    var_45 = (~255);
    #pragma endscop
}
