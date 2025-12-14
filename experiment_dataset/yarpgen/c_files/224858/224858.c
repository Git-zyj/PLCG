/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~var_5) && (var_6 / 2147483647))) ? var_7 : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_13 = (arr_8 [i_3] [10]);
                            var_14 = (arr_9 [i_2] [i_3]);
                            var_15 = (((((1 ^ (arr_8 [i_4] [i_4])))) ? (arr_13 [i_0] [i_4 - 1] [9] [i_4 + 2] [i_4 - 3] [i_4 + 2] [0]) : ((~(arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])))));
                        }
                    }
                }
            }
            var_16 = (arr_10 [i_0] [i_0]);

            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                var_17 = ((((arr_18 [i_5 - 2] [i_1] [i_0] [i_0]) > -2144250493)));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_18 = ((((((arr_2 [i_6]) % (arr_10 [i_0] [i_0])))) ? (arr_1 [i_5 - 2]) : (arr_10 [i_1] [i_5 - 2])));
                    var_19 = ((((((arr_13 [i_6] [i_6] [i_5 + 1] [i_0] [i_1] [i_1] [i_0]) ? (arr_1 [i_6]) : 1))) ? ((var_8 ? 1 : (arr_17 [i_5] [i_1]))) : ((var_9 ? (arr_13 [i_0] [i_0] [i_0] [i_5] [i_0] [0] [i_5]) : 2147483647))));
                    var_20 = var_10;
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_21 = -1;
                    var_22 = (arr_3 [i_7] [i_7]);
                }
                var_23 = (((arr_7 [i_0] [i_0] [i_5 - 3] [i_0]) ? (arr_7 [i_5] [i_5 + 1] [i_5 + 1] [i_5]) : ((8 ? 0 : 2147483647))));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_31 [0] [i_9] = 2147483641;
                            var_24 = 8;
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_10] &= (((arr_7 [i_10 + 2] [8] [i_10 - 1] [i_10 - 1]) != 8));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_25 = ((-(arr_16 [i_0] [i_0] [i_0])));
                    var_26 = var_6;
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_1]);
                        arr_42 [i_0] [i_0] [6] [i_0] [i_0] = ((~(arr_1 [i_12])));
                        var_27 = (arr_4 [i_0] [i_12] [i_13]);
                        var_28 = (1 ? (arr_25 [i_0] [i_0] [i_12] [i_13]) : (arr_28 [i_0] [i_0] [5]));
                    }
                    var_29 = -1;
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_47 [i_0] = ((-(arr_9 [i_14] [i_1])));
                            var_30 = ((arr_19 [10] [i_0] [i_0] [i_8] [i_14] [i_15]) ? (arr_19 [i_15] [2] [i_14] [i_8] [i_1] [i_0]) : (arr_19 [i_0] [i_1] [i_8] [0] [i_8] [0]));
                            arr_48 [i_0] [i_1] [i_1] [i_0] [i_15] = (((arr_7 [i_0] [i_0] [3] [3]) ? ((18446744073709551608 ? 14 : var_10)) : (~28933)));
                        }
                    }
                }
            }
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                arr_51 [i_0] [i_0] [i_0] [i_0] = (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_16 - 1]) ^ (arr_44 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1])));
                var_31 = (max(var_31, (arr_45 [i_16] [i_16 + 2] [i_16] [11] [i_16 + 3])));
                var_32 = (((((arr_33 [1] [i_16] [i_1] [i_0]) + 2147483647)) << (6 - 6)));
                var_33 = ((var_7 ? 22 : var_2));
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] = (arr_29 [i_1] [i_1] [i_1]);
                        arr_58 [i_18] [4] [i_1] [i_0] = ((32742 ? ((var_5 ? var_9 : (arr_56 [6] [i_1] [i_1] [i_1]))) : var_4));
                        var_34 = arr_24 [i_1] [i_1];
                        var_35 -= ((var_7 ? (((!(arr_17 [i_17] [7])))) : ((~(arr_29 [i_0] [i_1] [i_17])))));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
        {
            var_36 = (arr_56 [i_0] [i_0] [i_0] [i_0]);

            for (int i_20 = 3; i_20 < 9;i_20 += 1) /* same iter space */
            {
                var_37 = (arr_50 [i_0] [i_19] [i_19] [i_20 - 1]);
                var_38 = (((var_6 ? (-9223372036854775807 - 1) : (arr_20 [i_0] [i_0] [i_0] [i_0] [11]))));
                var_39 = (arr_62 [i_0] [i_19] [i_20]);
            }
            for (int i_21 = 3; i_21 < 9;i_21 += 1) /* same iter space */
            {
                arr_68 [i_19] = ((-(((arr_12 [i_19] [i_19] [i_19] [i_19] [i_0] [i_21 - 1]) ? 4294967287 : -1))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        {
                            arr_73 [i_0] [i_19] = (((arr_63 [i_23] [i_0] [i_0] [i_0]) ^ (((arr_60 [i_21] [i_22] [i_22]) ? (arr_52 [i_22] [i_19] [i_22] [i_22]) : (arr_4 [i_0] [i_19] [i_0])))));
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0] = var_5;
                            arr_75 [i_0] [i_19] = ((~((var_11 ? var_11 : (arr_30 [i_19] [i_21] [i_21] [i_19] [11])))));
                            arr_76 [i_0] [i_19] [i_0] [1] [i_22] [i_23] = (~-1);
                        }
                    }
                }
                var_40 = (-127 - 1);
                var_41 = (-1 ? (arr_3 [i_0] [i_0]) : (((-1 ^ (arr_60 [i_0] [4] [i_0])))));
                var_42 = (~(arr_25 [i_0] [i_19] [i_19] [i_21 - 3]));
            }
            for (int i_24 = 3; i_24 < 9;i_24 += 1) /* same iter space */
            {
                arr_80 [i_19] [i_19] [i_0] = var_8;
                var_43 = ((~(arr_43 [i_24] [i_24 - 1] [i_24] [i_24 - 3])));
                var_44 = (var_3 ? var_7 : (arr_20 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 3] [i_24 + 3]));
            }
        }
        for (int i_25 = 1; i_25 < 10;i_25 += 1)
        {
            var_45 = (!(!var_6));
            var_46 = var_11;
        }
        var_47 = (-127 - 1);
    }
    for (int i_26 = 0; i_26 < 18;i_26 += 1)
    {
        arr_87 [i_26] [i_26] = -1;
        arr_88 [i_26] = ((~(min((((~(arr_85 [i_26])))), (arr_86 [i_26])))));
    }
    #pragma endscop
}
