/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max((max(var_11, var_16)), ((((((var_16 ? var_1 : var_6))) > var_13))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (((((var_16 ? (arr_3 [i_0] [i_0] [i_2]) : ((((var_11 + 2147483647) << (var_1 - 94))))))) ? (max(((((arr_4 [i_0] [i_0] [i_2] [i_3 - 2]) ? var_15 : 6749368938678681286))), ((var_5 ? (arr_7 [i_0] [i_1] [i_1] [i_3]) : 18014398509481983)))) : var_1));
                                var_19 = (max(var_19, var_16));
                            }
                        }
                    }
                }
                var_20 = (((((max(18428729675200069618, var_16)))) % (arr_6 [i_0] [0] [1] [i_1] [i_0])));
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        var_21 *= ((~((var_14 - (var_9 * 0)))));
                        var_22 *= (max((var_11 + var_12), var_1));
                        var_23 = (max(var_23, ((min((((arr_10 [i_8 + 1]) ? (arr_10 [i_8 + 1]) : var_6)), (arr_11 [i_6]))))));
                    }
                }
            }
        }
        var_24 *= (18428729675200069633 != 2147483647);
        arr_19 [i_5] = var_11;
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_23 [i_9] = (max((arr_14 [i_9] [i_9]), var_14));
        arr_24 [i_9] = ((max((max(5369174658090370400, 18428729675200069642), (((var_1 <= (arr_18 [i_9] [12] [12] [i_9]))))))));

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_27 [i_9] [i_10] [i_10] = (max((((var_9 <= var_11) ? (max(1870304822, var_11)) : (arr_10 [i_9]))), 1));
            var_25 *= var_2;
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            var_26 = (((((var_2 ? (arr_12 [i_11 - 1] [i_11]) : (arr_12 [i_11 - 1] [i_11])))) ? (((((arr_26 [i_11 - 1]) <= (arr_20 [i_11 - 1] [i_11 - 1]))))) : ((((((((arr_18 [i_9] [i_9] [12] [i_9]) + 2147483647)) >> (var_4 - 1109842124)))) ? ((var_14 ? var_9 : var_9)) : (((var_3 ? var_2 : var_7)))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_13] [i_12] [i_13] = (max(((~(arr_16 [i_9] [i_11 - 1] [i_11] [6] [i_11 - 1] [i_11 - 1]))), (((arr_16 [i_9] [10] [i_11 - 1] [16] [i_12] [i_13 + 1]) ? (arr_16 [i_11 - 1] [i_11] [i_12] [4] [4] [i_13]) : var_15))));

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            arr_37 [i_9] = (~var_2);
                            var_27 = (((~(arr_15 [8] [16] [i_12] [i_13]))));
                            var_28 = (((min((arr_29 [i_11 - 1] [i_11 - 1] [i_13 + 1]), var_4)) <= (((var_9 + (~var_16))))));
                            arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] [15] = (-95 * var_7);
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            arr_43 [i_9] [i_9] [i_9] [9] [i_9] = (max((max((((var_6 && (arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))), var_4)), (((!(!var_6))))));
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_12] [i_12] = (((min((arr_26 [i_12]), var_8)) | (((arr_26 [i_15]) ? var_12 : var_8))));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                        {
                            var_29 = var_1;
                            var_30 = var_2;
                            arr_48 [i_9] [i_16] [i_12] [i_13] [i_16] = var_14;
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_31 = ((var_15 ? (~var_10) : var_13));
                            arr_52 [i_9] [i_12] [i_12] = ((~((min((arr_51 [i_11 - 1] [i_11] [i_11 - 1]), var_15)))));
                            var_32 = (((((((max(var_4, 1))) ? var_3 : (arr_11 [i_12])))) ? (((max(((max(var_2, 1))), (min(var_11, var_1)))))) : (((arr_13 [i_11 - 1] [i_13 - 1] [6]) ? ((var_9 ? var_14 : var_6)) : var_7))));
                        }
                    }
                }
            }
            var_33 = (max(var_33, (((!(~var_15))))));
            arr_53 [i_9] [i_11] [i_11 - 1] = ((((((arr_16 [16] [16] [i_9] [20] [i_9] [i_9]) ? var_0 : (arr_20 [i_9] [i_11 - 1])))) ? (~var_12) : (arr_31 [i_11 - 1] [i_11 - 1] [i_11 - 1])));
            var_34 = (max((((~1) ? var_9 : ((var_14 ? var_3 : (arr_28 [i_9] [i_9]))))), -var_2));
        }
        for (int i_18 = 1; i_18 < 14;i_18 += 1)
        {
            var_35 = ((~(~var_12)));

            for (int i_19 = 2; i_19 < 13;i_19 += 1)
            {
                arr_61 [i_9] [10] [i_19 + 3] [i_19] = (((((((min(var_8, var_8))) ? ((var_11 ? (arr_54 [i_18] [i_18] [i_9]) : var_16)) : (((arr_32 [i_9] [i_9] [i_19]) * var_16))))) ? var_6 : (((255 * 5127324325709174507) ? (((var_14 ? 149 : var_11))) : ((var_1 ? var_13 : (arr_58 [i_9] [1])))))));
                arr_62 [i_19] [i_19] [i_19] |= (min(((((arr_42 [i_9] [i_9] [14] [i_9] [i_9] [i_9]) + (arr_42 [i_9] [i_9] [i_9] [i_18 + 1] [i_19] [0])))), (((arr_45 [i_9] [i_18 - 1] [i_9] [0] [6]) % (arr_13 [i_9] [i_9] [20])))));
                arr_63 [i_9] [i_9] [i_19] [i_19] = (min((max(0, (!var_5))), (min((((var_10 ? 1 : var_10))), ((var_12 ? var_6 : var_8))))));
            }
            for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
            {
                arr_67 [i_9] [i_20] [i_20] = (min(var_10, ((var_13 ^ (((var_7 ? (arr_42 [i_9] [i_18 + 1] [i_20] [i_20] [i_9] [i_20]) : (arr_13 [i_20] [i_9] [i_20]))))))));
                arr_68 [i_20] [i_20] [i_18] [i_18] = ((~(arr_65 [i_9] [i_18 + 2] [1] [i_18 - 1])));
                arr_69 [10] |= (((arr_29 [i_20] [i_9] [i_9]) * (max(var_4, (max(var_13, var_12))))));
                arr_70 [i_20] [i_20] = var_6;
                arr_71 [i_20] = ((((max(var_14, var_0) % (~var_15)))));
            }
            for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
            {
                var_36 = ((max(var_5, var_12)));
                arr_75 [i_9] = (max(1870304822, 1));
            }
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                arr_78 [i_9] [i_18 + 2] [i_9] = (((((((max(var_11, var_16))) ? ((((arr_74 [i_22] [i_9] [i_9]) && 104))) : var_5))) ? (((var_1 ? var_5 : var_0))) : var_11));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 16;i_24 += 1)
                    {
                        {
                            var_37 = ((((min(105, -0))) ? var_4 : var_9));
                            arr_84 [i_9] [i_24] [i_22] = var_3;
                        }
                    }
                }
            }
            var_38 -= ((((min(((255 ? 109 : 1)), var_15))) ? (max(3129121938, 1810180433)) : 1));
        }
        for (int i_25 = 3; i_25 < 13;i_25 += 1)
        {
            arr_88 [i_25 + 2] = (~var_6);
            arr_89 [9] [i_25] = ((~(min(((1 ? 115 : 1508871326)), var_15))));
            var_39 = (max(var_39, (((((((arr_58 [i_25 + 3] [i_25 + 2]) ? (((max(var_2, var_1)))) : var_9))) ? var_4 : (((135 ? var_9 : var_15))))))));
        }
        var_40 |= ((var_10 ? ((min((arr_56 [i_9] [i_9] [i_9]), var_7))) : ((max(var_7, var_5)))));
    }
    var_41 = (!(~157));
    var_42 = ((-((var_15 ? var_16 : var_2))));
    var_43 = (((var_8 != var_14) << (var_12 - 1402318047)));
    #pragma endscop
}
