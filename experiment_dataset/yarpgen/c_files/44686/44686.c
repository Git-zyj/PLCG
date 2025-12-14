/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min((max(var_10, (~40499))), var_2)))));
    var_14 = ((var_9 ? var_3 : -14165));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min((!var_1), var_10)))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = (~1622860829);
                    arr_9 [i_0] = (max(((max(1, 1476109752))), (max((arr_7 [i_2] [i_1] [i_0]), var_5))));
                }
                for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, -27));
                    arr_14 [i_0] [i_1] [i_3] = -11462;
                    var_18 = (min(var_18, (((-27 ? var_5 : -27)))));
                    var_19 = (max(var_19, (arr_1 [14])));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_20 -= ((var_11 ? 1095896884 : 4));
                        arr_22 [i_0] [i_1] [i_1] [1] [i_4 - 2] [i_1] = ((69818988363776 && var_5) && (arr_21 [i_0] [i_1] [i_4]));
                        var_21 = (((((arr_10 [i_0] [i_0] [i_0]) - -27)) - ((var_10 ? -27 : 20))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, ((((arr_12 [i_4 - 3] [i_4 - 2] [i_4 - 1]) ? 18917 : 3760856897354470584)))));
                        var_23 = (min(var_23, 1));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = (max(var_24, -3760856897354470585));
                            var_25 *= var_4;
                            var_26 |= (((48913 | -8733212191136087287) ? (arr_13 [i_0] [i_0] [i_0]) : -2158126204091507154));
                            var_27 = ((var_1 ? 8137453232307190225 : -67));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_28 = (max(var_28, 3760856897354470599));
                            arr_29 [i_0] [17] [i_4] [i_6] [i_8] [i_6] = ((((59 + (arr_17 [i_0] [i_0] [i_0])))) | 659938199441825575);
                            var_29 = var_10;
                        }

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_30 = (var_6 && (var_9 < 281474976710400));
                            var_31 &= ((((-11372 ? (arr_24 [i_0]) : var_2)) / var_11));
                        }
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_38 [i_0] [0] [i_4] [12] [12] = (255 && 63);
                            var_32 = 3760856897354470575;
                            arr_39 [i_0] [16] [i_4] [16] [9] [i_11] = (252 || -27);
                        }
                        arr_40 [i_0] [i_4] [i_10] = (arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4 - 2]);
                    }
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        var_33 = ((((-21 ? 0 : var_11))) < (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_34 = var_8;

                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            var_35 &= ((var_6 ? var_0 : -13));
                            var_36 = (max(var_36, 1424152822));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_37 = ((28685 <= (arr_44 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_12 - 1] [i_12 - 2] [i_12 - 2])));
                            arr_52 [1] [11] [i_14] = (~var_0);
                            var_38 = var_11;
                            var_39 = var_12;
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_11 [i_4] [i_4 + 2] [i_12 - 2] [4]) * -21));
                        }
                        var_40 -= ((!(arr_48 [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 2] [i_12] [i_12] [19])));
                    }
                    var_41 += -16;
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_62 [19] [i_1] [i_15] [i_16] [19] [i_17] = (((((min(var_1, var_11)) ? (arr_57 [i_0] [i_1] [i_16]) : var_10))));
                                var_42 = (min(var_42, var_8));
                                arr_63 [i_0] [i_1] [i_15] [i_16] [i_17] [i_0] [4] |= (-3760856897354470585 / 44483);
                                var_43 = ((+(((((~21068) + 2147483647)) << (((max(58561, var_7)) - 1138587242352967843))))));
                                var_44 += (((18446744073709551615 + 9223372036854775807) << (199 > 18446744073709551615)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
