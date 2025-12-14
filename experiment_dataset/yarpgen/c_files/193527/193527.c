/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((var_8 ? var_2 : 0));
                var_11 = (max(var_11, (((20 ? 42 : -17)))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_12 = (max(var_12, ((max(34, var_4)))));
                    var_13 = 1907751995;
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_14 = (max(var_14, -20));
                    arr_12 [i_3] [4] [4] [i_3] = (~-var_4);

                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_15 = (arr_2 [i_0 - 2] [i_1] [i_3]);
                        arr_15 [i_0 + 2] [i_3] [i_0 + 2] [i_0] = ((!((((arr_3 [i_4 - 3] [i_4 - 2]) / (arr_10 [i_4 + 3] [i_0]))))));
                        var_16 = var_8;
                        arr_16 [i_0] [15] [15] [i_0] [i_3] = (((((((((var_0 + 2147483647) >> (((arr_14 [i_0] [i_0 + 1] [i_0 + 2]) + 351821986))))) ? var_5 : (!-1507209776)))) ? (min((((var_4 ? var_0 : var_7))), var_2)) : ((max((min((arr_13 [i_4] [12] [i_0] [i_1] [12] [i_0]), var_3)), ((var_8 ? var_3 : var_3)))))));
                    }
                    arr_17 [i_0] [i_1] [i_0] &= (!511);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_17 = ((2147483647 ? (~-511) : ((var_9 ? var_3 : (arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_18 |= ((-22 | (!var_1)));
                                arr_27 [i_0] = var_8;
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        var_19 = (max(var_19, (((((max(-2147483647, 1393146664921579892))) ? (((arr_29 [i_0 - 1] [i_0 - 1] [9] [i_0 - 1] [i_0]) | (arr_19 [i_1] [i_1] [i_1] [i_1]))) : (!var_0))))));
                        arr_32 [i_5] = ((var_9 ? ((var_6 ? (arr_4 [9] [i_1]) : var_4)) : (((-2147483647 - 1) ? 2147483647 : 2147483647))));
                    }
                    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_9] = ((-var_2 ? var_4 : (max(var_2, -var_9))));
                            var_20 ^= ((-(max((((arr_35 [i_0] [i_0 - 1] [2] [i_0 - 1] [i_0] [i_0] [i_0]) ? var_2 : var_8)), ((max(var_7, var_0)))))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_21 = (max(var_21, (9223372036854775800 / 65535)));
                            var_22 -= (((((var_3 >> (var_7 - 65)))) ^ (arr_28 [i_0 + 1] [i_1] [i_1] [i_1] [i_11])));
                            arr_41 [i_0] [i_1] [i_0] [5] [i_11] |= (((max(-var_8, (max((arr_4 [i_1] [i_9]), var_0)))) >= (((!((max(-108, 9223372036854775807))))))));
                        }

                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            var_23 *= ((!(((2251662374731776 ? 2147483646 : (min(-31, -120)))))));
                            var_24 = ((-((-110 ? -929322173 : (arr_34 [i_12 - 2] [i_12] [i_12 + 3] [i_12 + 2] [i_9 - 2] [i_9 + 1])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_25 = (var_0 ? (arr_45 [i_0 - 2] [i_0] [i_0 - 2] [i_13 - 2]) : var_1);
                        var_26 = ((-(!var_1)));
                        var_27 = ((-(((arr_31 [i_0 + 1] [i_0 + 1] [i_5] [i_13]) ? var_1 : var_8))));
                    }
                    for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_14] [i_14] = ((((max((arr_49 [i_14] [i_14 + 1] [2] [i_14]), var_6))) ? (arr_2 [i_1] [i_5] [13]) : (((arr_31 [i_0 + 2] [i_1] [i_14 + 1] [17]) ? var_5 : var_9))));
                        var_28 = (((max((arr_22 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 + 2]), (arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))) ? ((-103 ? -1507209776 : 511)) : var_8);

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_29 = (min(var_29, (((1 ? (!var_1) : (!1672401660098870345))))));
                            var_30 = (max(var_30, (((((((min(var_6, var_2)) % (((var_6 ? var_4 : var_4)))))) ? (((arr_31 [i_0] [i_14 - 3] [i_5] [i_0]) ? (arr_31 [i_0] [i_1] [i_14 + 1] [i_15]) : var_6)) : (((max(var_1, var_7)))))))));
                        }
                        for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                        {
                            var_31 = (+(((arr_7 [i_16 + 1] [i_14 + 1] [i_14 - 3] [i_0 + 2]) ? var_6 : (arr_7 [i_16 + 2] [i_16 - 1] [i_14 - 2] [i_0 - 1]))));
                            var_32 -= var_4;
                            var_33 = (min(var_33, (((var_8 ? ((((var_1 ? var_4 : var_8)))) : (~var_8))))));
                        }
                        for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
                        {
                            var_34 = var_8;
                            var_35 = (min(var_35, (((((((arr_57 [i_0] [i_1] [i_5] [i_14] [3] [15]) ? (arr_57 [i_17 + 2] [i_14 + 1] [i_5] [i_5] [i_1] [i_0 + 2]) : var_8))) ? var_8 : var_2)))));
                        }
                        var_36 = (((var_2 ? var_2 : (arr_0 [i_14 - 1]))));
                    }
                    var_37 = ((!(((~(arr_53 [2] [16] [i_0 + 1] [i_1] [2] [i_5]))))));
                    var_38 = (min(var_38, (max(-2147483639, -2147483647))));
                }
                arr_59 [i_0 - 1] [i_1] [i_0 - 1] = ((((105 ? (arr_47 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) : 18446744073709551615)) | var_2));
            }
        }
    }
    var_39 = (((!2147483644) ? 20 : var_6));
    var_40 = (var_7 ? var_5 : (!var_0));
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 8;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            {
                arr_68 [i_18 - 1] [i_19] = (max((arr_2 [i_18 - 2] [i_18 - 1] [i_18]), var_9));
                var_41 = var_1;
            }
        }
    }
    #pragma endscop
}
