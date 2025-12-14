/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= -var_13;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [8] = 2151350850;
        var_15 = ((max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
        var_16 = ((arr_4 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : var_5);
        var_17 ^= ((((((arr_5 [i_1]) ? var_3 : 2040453687))) && (arr_4 [2] [2])));
        arr_8 [i_1] = (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [19]) : var_11));
        arr_9 [i_1] = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_18 = (max(var_18, var_6));
        var_19 = ((-125 ? 40 : -112));
        var_20 *= ((+((((arr_6 [i_2 - 1] [i_2 - 1]) != 12)))));
    }
    var_21 = (((-(max(var_3, 2526978064)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_20 [i_3] [i_4] [i_4] &= 3498749635;
                    var_22 *= ((((arr_15 [i_5 + 1] [6] [i_3]) ? var_1 : var_1)));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_23 *= (((min((((arr_22 [i_3] [i_3]) ? 2027867740 : var_8)), (((arr_21 [i_3]) ? var_12 : var_10))))) ? (((arr_22 [i_3] [i_4]) ^ var_7)) : (max(3867785085, -var_12)));
                    var_24 = ((var_11 ^ var_7) - ((var_1 >> ((((var_3 ^ (arr_16 [i_3] [i_6] [i_6]))) - 1662637485)))));
                    arr_23 [i_3] [i_3] [i_3] = (max((max(var_7, (arr_17 [i_3]))), ((max((arr_17 [i_3]), (arr_17 [i_3]))))));
                    var_25 = (max(var_25, var_3));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_26 *= (((arr_16 [i_7 - 1] [i_7] [i_7 + 1]) ? (arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (arr_16 [i_7 - 1] [i_7] [i_7 + 1])));
                    arr_26 [i_3] = (((((arr_19 [i_3] [19] [i_3]) % 1884461683))) ? (arr_15 [i_7 + 1] [i_7 - 2] [i_7 - 2]) : ((4 ? (arr_25 [i_3] [i_4] [4] [i_7 + 1]) : var_3)));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_27 ^= max(-3857132688, (arr_24 [i_8] [i_4] [i_3] [i_3]));
                    var_28 = (min(var_28, ((min(((min(var_0, -32))), (arr_18 [6] [i_4]))))));

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        arr_32 [i_8] [i_4] [i_8] = (((2255297447 > var_0) + ((min(-89, ((((arr_14 [i_3]) && 95))))))));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_29 *= (((((((arr_14 [i_3]) ? (arr_30 [5] [17] [i_8] [i_8] [i_9] [i_10]) : var_7)) | (max(var_2, var_4)))) | (arr_15 [i_3] [i_3] [i_3])));
                            arr_36 [4] [i_8] [i_8] [i_9] [4] = arr_22 [11] [i_8];
                            var_30 *= ((~((max(-22, (arr_13 [i_9 - 1]))))));
                            arr_37 [i_3] [i_3] [i_8] [i_9] [i_4] &= ((-(((((arr_28 [i_3] [i_4] [i_8]) ? var_11 : 2531396477)) + var_13))));
                        }
                    }
                    var_31 ^= 2247371823;
                }

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_32 = (min(var_32, var_0));
                    var_33 = (min(var_33, (arr_17 [i_4])));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    arr_43 [5] [i_3] [i_3] [i_3] = ((((-(!-16))) * ((((((arr_35 [4] [2] [i_12] [20]) < 1767892738))) % (-105 && 83)))));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_34 += (arr_14 [i_3]);
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_4] &= (((((var_13 ? (arr_18 [i_4] [i_12]) : var_4))) ? (((arr_39 [2] [i_4] [i_12]) % (arr_39 [i_3] [i_4] [1]))) : ((1037629094 + (arr_22 [i_4] [6])))));
                        var_35 = (min(var_35, (max(1108699513, (-90 ^ 749597122)))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        arr_49 [i_3] [i_4] [i_4] [2] = var_8;
                        var_36 ^= (((arr_39 [i_3] [i_3] [i_12]) < (arr_15 [i_3] [13] [i_3])));
                        var_37 = (max(var_37, var_6));
                        arr_50 [i_3] [0] [i_12] [i_12] [i_14] [i_14] &= var_13;
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    arr_54 [i_3] [i_3] [i_4] [i_15] = ((var_1 << (((!(arr_52 [i_3] [i_3] [i_3] [i_3]))))));
                    arr_55 [i_3] [i_3] [7] [i_3] = ((-(var_6 & var_7)));
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_38 ^= ((arr_33 [i_4] [i_4] [18] [i_3] [i_4]) ? ((((!((min(-24, (arr_40 [i_3] [i_3] [i_4] [i_16])))))))) : (-80 % 2542887762));
                    var_39 |= ((+(min((((arr_39 [18] [i_4] [18]) - (arr_38 [i_16] [i_16] [i_3] [i_3]))), (var_1 ^ var_0)))));
                    var_40 += (arr_57 [i_3] [i_4]);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_41 = (min(var_41, ((((~var_5) * ((((!(arr_21 [i_3]))))))))));
                                var_42 = (min(var_42, ((((((((!(arr_30 [i_18 - 1] [i_17] [6] [i_16] [6] [i_3])))))) * var_8)))));
                                var_43 = (max(var_43, ((max(var_12, (arr_48 [i_18 - 1] [i_18] [i_18 + 1] [3] [i_18 - 1] [i_18 + 1]))))));
                                arr_65 [i_3] [i_4] [i_16] [i_16] [i_17] [i_3] = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_44 = (max(var_44, ((max((((min(117, var_4)) & 3430433932)), (-57 != 1331632789))))));
                            var_45 = ((~((var_4 ? (max(var_0, (arr_44 [17] [i_3] [i_3] [10]))) : (~var_13)))));
                            var_46 = (max(var_46, ((max(((max((arr_53 [i_3] [i_4] [i_20]), (arr_53 [i_3] [i_20] [i_3])))), var_0)))));
                            arr_73 [i_3] [i_3] [i_19] [i_20] [i_19] [i_19] = (((max((arr_68 [i_4] [i_20]), (((98 || (arr_63 [i_19] [i_4] [i_4] [i_19] [i_20] [i_20]))))))) ? ((2036771291 ? (var_12 ^ var_10) : (arr_71 [15] [i_4]))) : (arr_52 [8] [i_4] [i_19] [i_20]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
