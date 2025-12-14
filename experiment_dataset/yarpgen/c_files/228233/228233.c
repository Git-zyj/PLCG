/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_1, 0))) ? var_8 : ((((max(var_11, 0))) ? var_10 : 68))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1 + 1] [i_0] = 18446744073709551610;
                    var_13 = (arr_2 [i_0]);
                    var_14 = ((~(((min(var_11, (arr_1 [i_0] [i_0]))) ? (!var_3) : (!-4925393)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_3] = ((var_0 ? (((((max((arr_7 [5] [i_3] [i_3]), 0))) ? ((var_10 ? var_10 : (arr_10 [i_3]))) : (1509125947 * var_11)))) : (arr_2 [i_3])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_4] [i_4] [11] [i_5] [i_6] = var_4;
                            var_15 = (max(var_15, ((max(var_0, (!var_5))))));
                            var_16 = ((!(((~(arr_5 [i_6 - 1] [i_6 - 2]))))));
                            var_17 = (max(var_17, (((var_5 > (((arr_9 [i_0] [i_0]) ? (~-2349642009915328009) : (((var_5 ? var_5 : var_1))))))))));
                        }
                    }
                }
            }
            var_18 = ((((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_15 [i_0] [i_0] [i_0] [i_0])))) ? ((~(arr_16 [i_0]))) : ((min(8638, (arr_15 [i_0] [i_3] [i_0] [i_3]))))));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_19 = (((((0 ? (!var_1) : (min((arr_12 [i_0] [i_3] [i_3] [i_3]), -1509125948))))) ? (((~(((4294967295 == (arr_15 [i_0] [i_7] [i_7 - 2] [8]))))))) : (max(var_0, var_9))));
                        arr_26 [i_0] [i_3] [i_7] [i_8] = (!var_0);
                        var_20 = var_11;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_21 = (max(var_21, (arr_24 [i_0] [i_9] [i_0] [i_9])));
            arr_29 [i_9] = (~var_11);
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((var_9 ? (arr_5 [i_0] [i_10]) : (arr_5 [i_0] [i_10])));
            arr_33 [i_0] [i_0] [i_0] = (((((var_0 ? 8638 : 17710595833113578106))) ? ((0 ? var_4 : var_8)) : ((var_9 ? var_11 : var_11))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_22 = -var_7;
                            arr_45 [5] [i_11] [10] [5] [i_10] [i_11] [i_0] = ((var_8 ? (23307 < var_4) : var_6));
                            arr_46 [i_0] [i_11] [i_0] [i_12] [i_11] = ((((!(arr_28 [i_0] [i_0] [i_0]))) ? (arr_38 [i_13 + 3] [i_13] [i_13 + 2] [i_11] [i_13]) : 225));
                        }
                    }
                }
            }
            var_23 = (var_6 == (arr_21 [i_10] [i_0] [i_0]));
            arr_47 [i_0] [i_10] = ((+(((arr_39 [i_10] [i_0] [6] [i_0] [i_0]) * var_9))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
        {
            arr_51 [i_14] [i_0] [i_14] = (((((0 ? 4294967293 : 1))) ? (1 >= 1) : (-9223372036854775807 - 1)));
            arr_52 [i_14] [i_14] = arr_38 [i_14] [i_14] [i_0] [i_14] [i_0];
            var_24 = (((~var_5) & 62));
        }
    }
    for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                arr_60 [i_16] = (((arr_48 [i_16] [i_16 + 2]) < (arr_44 [i_16])));
                arr_61 [i_15] [i_16] [i_17] = ((((arr_10 [i_15]) ? var_2 : var_6)) & (((((arr_4 [i_15] [i_16] [15]) + 2147483647)) >> (var_10 - 1304641005))));

                for (int i_18 = 1; i_18 < 16;i_18 += 1)
                {
                    arr_66 [i_15] [i_15] [i_16] [i_18] = ((8595703058715348413 ? (arr_57 [i_16] [i_16]) : 1));
                    arr_67 [i_16] = (((arr_42 [i_16] [i_16 + 1] [i_15] [i_15 - 1] [i_15]) == (arr_30 [i_15 + 3] [6])));
                    arr_68 [i_15] [i_16] [i_15] [i_15] [i_15 - 2] [i_15] = (arr_39 [i_15] [i_16] [i_17] [i_18 - 1] [i_18 + 1]);
                }
                for (int i_19 = 1; i_19 < 15;i_19 += 1)
                {
                    var_25 = (((arr_62 [i_16 + 3] [i_16] [i_16] [i_15 + 1]) ? var_8 : (arr_62 [i_16 + 1] [i_16] [i_16] [i_15 - 1])));
                    var_26 -= ((0 ? 9223372036854775807 : 0));
                    var_27 = var_8;
                }
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    var_28 = ((~(arr_15 [i_16 + 3] [i_16] [i_16 + 3] [i_16])));
                    var_29 -= (arr_54 [i_15]);
                    var_30 = ((var_2 ? (1 != var_9) : var_4));
                }
            }
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        {
                            arr_82 [i_15] [i_16 + 3] [i_16] [i_22] = var_4;
                            arr_83 [i_15] [i_16] = 692230677758188869;
                            arr_84 [i_16] [i_16 - 1] [i_16 - 1] = (arr_2 [i_16]);
                            var_31 = (min(var_31, ((max(-1786944214, (arr_80 [i_15] [i_22] [i_21] [i_15] [i_23]))))));
                        }
                    }
                }
                var_32 ^= ((((!((max(692230677758188869, var_8)))))));
                var_33 -= (min(((((var_3 > (arr_43 [i_15] [i_15]))) ? ((min((arr_4 [i_15] [i_16 + 1] [i_21]), var_10))) : var_0)), 3));
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 0;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        {
                            arr_95 [i_15] [i_15] [i_15] [i_15] [i_16] = ((((((arr_81 [i_26] [i_25] [i_24] [i_15 + 3] [i_15 + 3]) | 9223372036854775793))) ? (((arr_7 [i_15] [i_15] [i_15 + 2]) ? var_5 : 15290141087444482454)) : 51));
                            var_34 = (min(var_34, (var_7 / var_7)));
                        }
                    }
                }
                var_35 = (arr_42 [i_15 + 2] [i_16] [i_24] [i_24] [i_15 - 1]);
            }
            var_36 -= (((arr_31 [i_16] [i_16]) ? (max(var_2, (arr_31 [i_16 + 1] [i_16]))) : ((((arr_31 [i_16] [i_16]) ? var_4 : (arr_65 [i_16] [i_16] [i_15] [i_16 - 1]))))));
        }
        arr_96 [i_15] = var_1;
    }
    /* vectorizable */
    for (int i_27 = 2; i_27 < 14;i_27 += 1) /* same iter space */
    {
        var_37 = (max(var_37, ((-491525398 / (arr_16 [i_27])))));
        var_38 -= (arr_80 [i_27] [i_27] [i_27] [i_27 + 1] [i_27]);
    }
    var_39 = var_6;
    var_40 -= (((((-18 ? 65528 : 65516))) ? (min(var_10, var_4)) : var_1));
    #pragma endscop
}
