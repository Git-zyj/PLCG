/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_19 = min(var_1, (min((arr_7 [10] [i_1] [i_2] [i_0]), 0)));
                        var_20 -= ((var_14 ? var_4 : (arr_6 [i_3] [i_1] [i_2] [i_3] [i_3])));
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_3] = max((((-(arr_1 [i_0])))), (arr_2 [i_1]));
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_3] = (((arr_7 [i_0] [i_1] [i_2] [i_0]) ? (((arr_7 [i_0] [i_1] [i_2] [i_0]) ? (arr_1 [i_0]) : (-30827 * var_11))) : (~var_0)));
                        var_21 = (max(var_21, (((((min(-30821, (arr_5 [i_0] [i_1] [i_0])))) & (max((arr_0 [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_2]))))))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_22 -= ((var_8 * (((((!(arr_0 [i_0] [i_0])))) << (9223372036854775807 - 9223372036854775776)))));
                        var_23 = (((((~(max(26, var_10))))) ? (arr_3 [i_0] [i_1] [i_2]) : (((arr_5 [i_4 - 1] [i_4 - 1] [15]) ? (arr_10 [i_2] [i_4 + 1] [i_4 + 1] [6]) : (arr_6 [i_0] [i_0] [i_2] [i_2] [i_4 - 2])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_24 = (((((var_5 / (arr_12 [i_0] [i_2] [i_0])))) ? (((30820 ? 48368 : (arr_0 [i_0] [i_1])))) : (((arr_5 [i_0] [i_2] [i_2]) ? 708425967 : 18446744073709551613))));
                        var_25 = (var_1 - -105);
                    }
                    var_26 = (min(var_26, (((((!42555) || (((-(arr_2 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_27 *= ((((var_0 != (arr_7 [i_1] [i_6 + 3] [i_6] [8]))) ? var_7 : ((min((arr_11 [4] [i_1] [i_2] [i_2] [i_7 - 3]), 30802)))));
                                arr_19 [i_0] [i_2] [i_6 + 1] [i_0] = var_15;
                                var_28 *= (max((((((max(var_9, 0))) ? (arr_7 [i_6 + 1] [1] [i_6 + 1] [4]) : ((((arr_17 [i_0] [i_0] [2]) >= (arr_0 [i_0] [i_0]))))))), ((-((var_12 ? -113 : var_11))))));
                                arr_20 [i_0] [i_1] [i_0] [i_6] [i_1] [13] [i_0] = -var_2;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_23 [i_0] [9] [9] = ((((-2147483647 - 1) ? -30820 : 30820)));
                    arr_24 [i_0] [i_0] [i_0] = arr_4 [i_0];
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_29 = (((arr_3 [i_0] [i_1] [1]) ? (arr_3 [i_0] [i_1] [14]) : (arr_3 [i_0] [i_1] [i_9])));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = ((-2112493033 ^ (arr_31 [i_0] [i_1] [i_1] [1])));
                        var_31 = ((arr_30 [i_0] [i_0] [i_9] [i_0]) ? 17931 : (arr_6 [i_0] [i_1] [i_9] [i_0] [13]));
                        var_32 = var_13;
                        arr_33 [14] [i_10] [5] [i_0] = ((-94 ? (((arr_29 [i_9]) ? var_7 : var_14)) : 16128));
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        var_33 = ((((((arr_3 [i_0] [i_1] [i_9]) >= var_14))) + (arr_3 [i_11 + 2] [i_11 + 2] [2])));
                        var_34 = (var_6 ^ 1);
                        var_35 *= 8706984940252016864;

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_36 = -30814;
                            var_37 *= (17130791398457946423 <= -68);
                            arr_40 [i_0] = 1881749207;
                        }
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_38 = -var_13;
                        var_39 = (max(var_39, (arr_13 [14])));
                        var_40 = (arr_13 [i_0]);
                        arr_43 [i_0] [i_1] [i_9] [i_9] [i_1] = ((((((arr_26 [i_0]) ^ -2112493033))) ? var_4 : (var_3 < var_2)));
                        arr_44 [i_0] [12] [i_1] [i_9] [i_0] = -98;
                    }
                    var_41 = 20;
                    var_42 = 27;
                }
                arr_45 [i_0] [i_0] [i_0] = (~(max(2, (max(1, 0)))));
                arr_46 [i_0] = ((max((arr_14 [i_0] [i_0]), -9223372036854775801)));
            }
        }
    }
    #pragma endscop
}
