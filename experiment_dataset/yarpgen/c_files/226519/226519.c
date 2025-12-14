/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((arr_1 [10] [i_0]) ? (~var_3) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_3))));
        var_18 = (min(var_18, var_6));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_19 = (((arr_3 [i_2]) ? var_9 : 1743808808571153579));

            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_20 = 2150008870;
                var_21 = ((~(~4362243416259257029)));
                var_22 = (~1510821395);
                arr_10 [i_1] [i_2] [i_3] [i_1] = (arr_4 [i_1] [i_2 - 2]);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_23 = (((~-1) ? (var_1 ^ var_8) : (arr_1 [i_2 + 2] [i_4])));
                    var_24 = (var_16 <= var_10);
                    var_25 ^= ((~(arr_6 [i_5] [i_2 + 4])));
                }
                var_26 = (~32760);
                var_27 = ((var_0 ? ((~(arr_2 [i_1]))) : (arr_9 [i_1] [i_4])));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_28 += ((var_16 <= (arr_11 [i_1] [i_2] [i_6])));
                arr_19 [i_1] [11] [i_2] = (-1743808808571153581 ^ -28074);
                arr_20 [1] [i_2] [i_6] [i_1] = (~var_10);
            }

            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_29 = (arr_23 [i_2]);
                            arr_29 [i_1] [i_1] [i_1] [i_1] &= -30852;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_30 += (arr_24 [i_1] [10] [i_7] [i_11]);
                            var_31 ^= (arr_16 [i_1] [i_7 - 2] [i_7] [i_7 - 2] [i_11] [i_11]);
                            arr_36 [i_2] [i_2] [i_7] [1] [i_11] = var_14;
                        }
                    }
                }
            }
            for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    var_32 = (((arr_13 [i_2] [i_2 + 3]) ? var_6 : var_12));
                    var_33 = (min(var_33, (arr_23 [i_1])));
                    var_34 *= (((arr_30 [i_1] [i_1] [i_1] [i_13]) ? (arr_9 [i_2 + 2] [i_12]) : ((2144958406 ? var_10 : -32425))));
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_35 = var_3;
                            var_36 = ((var_7 ? (((var_14 ? var_3 : var_15))) : ((217 ? 1 : (arr_1 [i_2] [i_12 - 2])))));
                            var_37 = (arr_39 [i_2]);
                            var_38 = (max(var_38, (~2751886618170172767)));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            arr_50 [i_1] [i_16] = (((((var_2 ? var_16 : (arr_14 [i_16] [i_16])))) ? ((((arr_13 [i_1] [i_1]) ? (arr_24 [2] [i_1] [8] [i_1]) : 7))) : 9223372036854775807));
            var_39 = var_6;

            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_40 ^= ((var_2 ? (arr_47 [3] [i_17]) : var_7));
                    var_41 = (min(var_41, var_14));
                    arr_59 [i_17] [i_1] [i_16] [i_17] [i_17] [8] = var_10;
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_42 = (min(var_42, (arr_18 [10] [i_20] [i_20])));
                        var_43 = ((((arr_58 [i_1] [i_16] [i_17] [i_19]) ? var_15 : (arr_46 [i_1] [i_16] [i_16]))));
                    }
                    var_44 = (~var_9);
                }
                for (int i_21 = 1; i_21 < 12;i_21 += 1)
                {
                    var_45 = (var_2 % 10);
                    var_46 = (arr_0 [i_17] [i_1]);
                }
                var_47 = (var_3 ? (arr_37 [i_1] [12] [i_17] [i_1]) : (~-30852));
                arr_68 [i_1] [i_1] |= (~var_11);
            }

            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                arr_72 [11] = ((~(arr_67 [i_1] [i_16] [i_22] [0] [i_1])));
                var_48 = 32767;
                var_49 = var_0;
            }
        }
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            var_50 ^= var_7;

            for (int i_24 = 2; i_24 < 11;i_24 += 1)
            {
                var_51 = (((arr_75 [i_1] [i_1] [i_23] [i_24]) ? (((arr_37 [i_24] [i_1] [i_1] [i_1]) ? var_1 : var_7)) : var_2));
                var_52 *= ((((((arr_27 [i_23] [i_23] [i_23]) % var_5))) ? (-9223372036854775807 - 1) : ((var_15 ? (arr_39 [i_23]) : var_12))));
                arr_77 [i_24] [i_23] [i_1] = (arr_61 [i_24] [i_23] [i_1] [i_1]);
            }
            for (int i_25 = 1; i_25 < 9;i_25 += 1)
            {
                var_53 = (arr_25 [i_25] [i_25] [i_25] [i_25]);
                var_54 = (((arr_43 [i_25]) ? (arr_26 [i_25 - 1] [i_25 + 4] [i_25 + 1] [i_25] [i_25 + 1]) : (arr_43 [i_25])));
            }
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {

                for (int i_27 = 4; i_27 < 11;i_27 += 1)
                {
                    var_55 ^= (((((var_10 ? var_16 : var_1))) ? (((arr_9 [i_27] [i_23]) ? var_2 : var_5)) : 29123));
                    var_56 = (arr_17 [i_27] [i_26] [5] [i_1]);
                    var_57 = var_1;

                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        arr_88 [8] [i_26] [i_26] [i_26] [i_1] = (~var_11);
                        var_58 = var_2;
                    }
                    for (int i_29 = 1; i_29 < 11;i_29 += 1)
                    {
                        var_59 = ((~((6 ? (arr_75 [i_1] [i_26] [i_27] [i_29]) : (arr_79 [i_29] [i_27 - 4] [i_23])))));
                        var_60 = (0 ? (((((arr_28 [i_1] [i_23] [i_26] [11] [i_29]) <= 249)))) : ((var_7 ? var_0 : var_9)));
                        var_61 = 249;
                    }
                    for (int i_30 = 1; i_30 < 1;i_30 += 1) /* same iter space */
                    {
                        var_62 = ((arr_5 [i_1] [12]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_30 - 1] [i_26]));
                        arr_95 [8] [i_1] [1] [i_26] [i_1] = (((arr_83 [i_30 - 1] [i_26] [10] [i_26] [i_23]) ? var_8 : (arr_83 [i_30 - 1] [i_26] [i_26] [i_23] [i_30])));
                        var_63 &= var_7;
                    }
                    for (int i_31 = 1; i_31 < 1;i_31 += 1) /* same iter space */
                    {
                        var_64 = (max(var_64, (((((((arr_2 [i_1]) ^ (arr_78 [i_31 - 1] [i_26])))) ? ((var_2 ? var_6 : 42)) : (arr_33 [i_1] [i_31] [i_1] [i_27] [8] [i_1]))))));
                        var_65 = 7309876791970762864;
                        var_66 = ((var_12 / var_0) ? (~var_7) : (arr_34 [i_1] [i_23] [i_26] [i_26] [i_26] [i_27 + 2] [i_26]));
                    }
                }
                var_67 = -9223372036854775807;
                var_68 = (arr_41 [i_1] [i_26] [i_23] [i_26]);
                arr_98 [i_26] [i_26] = ((4440302581082320050 ? 3513678984587826470 : var_2));
                var_69 = (((arr_28 [4] [1] [i_26] [i_23] [i_1]) ? ((var_12 ? 3513678984587826459 : var_4)) : (arr_94 [i_1] [i_1])));
            }
        }
        arr_99 [i_1] = 1743808808571153577;
    }
    /* vectorizable */
    for (int i_32 = 0; i_32 < 13;i_32 += 1) /* same iter space */
    {
        var_70 &= ((65530 ? (((arr_65 [i_32] [i_32] [i_32] [i_32] [i_32] [10] [i_32]) ? var_2 : -3513678984587826452)) : ((((arr_54 [i_32]) ? var_2 : (arr_102 [i_32] [8]))))));
        var_71 = (arr_56 [i_32] [i_32] [i_32] [6]);
    }
    var_72 = (max(var_7, 214));
    #pragma endscop
}
