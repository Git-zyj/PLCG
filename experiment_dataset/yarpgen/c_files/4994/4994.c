/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_3 [i_0 - 3]) * (arr_3 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = (4563525068646832367 + var_1);
                        var_15 = (max(var_15, 211586282));
                        var_16 = ((~(arr_1 [i_3 - 1])));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_17 &= arr_12 [i_0 - 2] [i_1];
                            var_18 = 0;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, (~var_3)));
                            arr_17 [i_3] = 211586291;
                            var_20 = var_9;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_21 = (((211586282 - (arr_5 [i_0]))));
                            arr_20 [i_0] [i_2] [i_2] [i_3] [i_0] &= (arr_0 [i_0 + 1]);
                        }
                        var_22 = (max(var_22, 1));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_28 [i_7] [i_7] [i_7] [i_7] = var_8;

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_23 = (((arr_29 [i_7] [i_8] [i_9] [i_10] [i_11] [i_8]) ? ((((((arr_32 [i_7] [i_8] [i_9] [18] [i_11]) + 2147483647)) << (((var_11 + 2286911) - 5))))) : (~18446744073709551615)));
                        var_24 = (((!var_10) ? (arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : ((var_8 ? (arr_24 [i_7] [18] [i_7]) : var_7))));
                    }
                    var_25 = (14546780264676948457 && 3271505471);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_38 [i_7] [i_8] [i_9] [i_12] [i_7] [21] = (arr_26 [i_12] [i_12] [i_12]);

                    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_26 = (arr_41 [i_7] [i_8] [i_8] [i_13 + 1]);
                        arr_42 [i_13 - 2] [i_8] [i_8] [i_9] [i_8] [i_7] = ((~(arr_32 [i_13 + 3] [0] [0] [0] [i_12])));
                        var_27 = (((arr_36 [i_7] [i_7]) + var_1));
                    }
                    for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_28 = ((!(arr_27 [i_7] [i_8] [i_9] [i_14])));
                        var_29 = (max(var_29, (((var_12 / (arr_33 [i_14 - 3] [i_8]))))));
                        var_30 = (((arr_22 [17] [i_14 - 1]) % (arr_40 [i_14] [i_7] [i_14 - 3] [i_14 + 2] [i_7])));
                    }
                    for (int i_15 = 3; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_8] [i_9] [i_12] [i_15 + 2] = (((arr_40 [i_15 - 3] [7] [i_15 - 1] [i_15 + 4] [i_15 + 4]) | (arr_37 [i_15 + 3])));
                        var_31 = (arr_35 [i_15 + 3] [i_15 + 4] [i_15 + 4] [i_15 + 3] [i_15 + 3] [i_15] [i_15]);
                    }

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_32 ^= var_2;
                        var_33 = (arr_29 [i_16] [i_9] [i_9] [i_8] [15] [i_7]);
                    }
                    var_34 *= ((~(255 + var_3)));
                }
                var_35 = var_11;
            }
            var_36 = ((((-(arr_33 [i_7] [i_7]))) ^ ((~(arr_31 [20] [i_8] [20] [20])))));
            var_37 = (max(var_37, 9007701307887925160));
        }
        for (int i_17 = 3; i_17 < 21;i_17 += 1) /* same iter space */
        {
            var_38 = 16387365376649825178;
            var_39 ^= (~-var_10);
        }
        for (int i_18 = 3; i_18 < 21;i_18 += 1) /* same iter space */
        {
            var_40 = (min(var_40, (((~(arr_52 [i_18 - 1] [i_18 - 1] [i_18 - 3] [i_18] [i_18]))))));
            var_41 = (arr_45 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 - 2] [i_18]);
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    {
                        var_42 = var_1;
                        var_43 += ((var_10 ? var_1 : 3271505471));
                        arr_66 [i_20] [10] [i_18] [i_18] [i_18] [i_7] = (var_5 + 198);
                        var_44 = ((-544 && (((979883536 ? var_5 : var_11)))));
                    }
                }
            }
            var_45 += (((arr_40 [i_7] [i_7] [i_7] [i_7] [i_7]) & (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7])));
        }
        for (int i_21 = 3; i_21 < 21;i_21 += 1) /* same iter space */
        {
            var_46 = 31;

            for (int i_22 = 2; i_22 < 22;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {
                    var_47 += (((arr_68 [i_21] [i_21 - 3]) || (arr_68 [i_21] [i_21 - 2])));
                    arr_75 [i_7] [i_21 + 2] = var_10;

                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        var_48 += (((arr_45 [i_21 - 2] [i_21 + 1] [i_22 - 2] [i_23] [i_24]) ? (~var_7) : (((arr_68 [i_7] [17]) | (arr_37 [i_7])))));
                        arr_78 [20] [i_21 - 3] [i_22 + 1] [i_23] [i_24] = (arr_63 [i_23] [i_23] [i_23]);
                        var_49 = (arr_49 [i_24] [i_22 + 1] [i_22 - 1] [i_21 + 2] [i_21 + 2]);
                    }
                    for (int i_25 = 1; i_25 < 1;i_25 += 1) /* same iter space */
                    {
                        var_50 = ((-(arr_24 [i_21 - 3] [i_21] [i_21 - 2])));
                        arr_82 [i_25] = ((1 ? var_0 : (arr_72 [i_21 - 1] [i_22 - 1] [i_22 - 1])));
                        var_51 = (((var_4 << (10882 - 10866))));
                    }
                    for (int i_26 = 1; i_26 < 1;i_26 += 1) /* same iter space */
                    {
                        var_52 = (min(var_52, -1471));
                        var_53 ^= var_5;
                        arr_85 [i_7] [i_7] [i_7] [i_7] = (arr_32 [i_21 - 2] [i_21 - 2] [i_22 - 2] [i_22 - 1] [i_26 - 1]);
                        var_54 -= var_5;
                    }
                    var_55 = (min(var_55, 39));
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 23;i_28 += 1)
                    {
                        {
                            var_56 = (min(var_56, (((9223372036854775807 ? 56657 : 0)))));
                            var_57 = -161;
                        }
                    }
                }

                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {

                    for (int i_30 = 3; i_30 < 22;i_30 += 1)
                    {
                        arr_96 [8] [i_30] [i_22 - 1] [i_30] [i_7] = ((arr_55 [i_21 + 1] [i_30 - 3]) >> (((arr_55 [i_21 + 1] [i_30 + 1]) - 21979)));
                        var_58 = (max(var_58, ((((arr_45 [i_22] [i_22 + 1] [1] [1] [1]) % (arr_45 [i_30 - 1] [i_22 + 1] [i_7] [i_7] [i_7]))))));
                        var_59 = (~3772949044918020259);
                    }
                    for (int i_31 = 1; i_31 < 22;i_31 += 1)
                    {
                        var_60 = (min(var_60, 65535));
                        var_61 = (min(var_61, var_6));
                    }
                    var_62 = (!4294967295);
                }
                var_63 = (max(var_63, ((((arr_25 [i_21 + 1] [i_22 + 1]) == (arr_54 [i_22 - 2] [i_22 - 1] [i_22 - 1]))))));
            }
            for (int i_32 = 0; i_32 < 23;i_32 += 1)
            {
                var_64 *= 2760147014;
                arr_101 [i_7] [i_21] [i_32] = (((arr_41 [i_32] [i_7] [i_7] [i_7]) + (arr_81 [i_7])));
                arr_102 [i_7] [i_21] [i_7] [i_7] = (((((var_6 ? (arr_21 [i_21]) : var_0))) ? ((4021572527 ? var_5 : 2992152395)) : var_4));
            }
            var_65 = 1086354210;
        }
        arr_103 [i_7] = (((arr_63 [i_7] [i_7] [12]) ? (arr_27 [i_7] [i_7] [i_7] [i_7]) : (arr_27 [i_7] [i_7] [i_7] [i_7])));
    }
    var_66 = var_5;
    var_67 &= (!var_0);
    #pragma endscop
}
