/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max((max((((~(arr_2 [i_1] [i_0])))), var_4)), (((((max((arr_1 [i_0] [i_0]), (arr_3 [i_0])))) && ((max(var_3, (arr_2 [i_1] [i_0])))))))));
                var_18 = arr_4 [i_0] [i_1];
                var_19 = (max(var_2, -var_5));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_20 ^= var_12;
            var_21 ^= (arr_9 [i_2]);
            arr_11 [i_2] [i_3] = (arr_8 [i_2] [i_3] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_22 ^= (arr_7 [i_5] [i_3]);
                        var_23 &= var_0;
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_24 = (arr_15 [i_2] [i_2]);
            arr_23 [i_6] = (((!var_0) ? (((arr_16 [17] [i_6] [7] [i_2] [i_6]) ? (arr_14 [i_6]) : var_11)) : -var_9));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 -= (var_9 % var_4);
                            arr_33 [i_7 + 1] [i_8] [i_7] [i_10] = ((((((arr_30 [i_7] [i_7] [23] [i_7]) > var_15))) / var_16));
                            var_26 = ((~((~(arr_31 [18] [i_7] [i_7] [i_7] [i_7 + 1])))));
                        }
                    }
                }
            }
            var_27 = (((((var_2 ? (arr_18 [i_7] [i_7] [i_2] [i_2]) : var_9))) ? ((13933 ? 14757689411899029336 : 8191)) : var_15));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_42 [i_13] [i_12] [i_7] [i_7] [3] = -var_16;
                            var_28 = ((~(arr_41 [i_7] [i_7] [i_11 + 2] [i_12] [i_13] [i_7] [18])));
                            var_29 = 18446744073709551609;
                            var_30 = (((arr_30 [i_7] [i_2] [i_11 + 1] [i_11 + 1]) & -14757689411899029336));
                            var_31 = ((2082 ? -29416 : 32767));
                        }
                        arr_43 [i_2] [i_7] [i_11] [i_2] = 8198;
                        arr_44 [i_7] [i_11] [i_7] = (!var_14);
                        arr_45 [i_11] [i_12] [i_11] [i_11] [i_7 + 2] [i_11] &= ((-(!var_10)));
                    }
                }
            }
        }
        arr_46 [i_2] = ((((var_7 ? (arr_27 [i_2] [i_2] [i_2]) : (arr_19 [i_2] [i_2]))) - (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    {
                        var_32 &= ((~(min((((var_0 ? (arr_51 [i_14] [i_15] [i_16 - 1]) : var_4))), (max(var_2, var_0))))));
                        var_33 = (arr_39 [i_14] [i_14] [i_15] [i_15] [i_14] [i_17]);
                    }
                }
            }
            var_34 = (min(((min(1, 63453))), ((((((arr_40 [i_14]) ? (arr_36 [i_14] [i_14] [i_14]) : (arr_13 [i_14] [i_15])))) ? (((arr_21 [i_14] [i_14] [i_14]) ? (arr_38 [i_14] [i_15]) : (arr_50 [i_14]))) : var_6))));
            arr_55 [i_14] = (((~(arr_24 [i_14]))));
            var_35 = var_6;

            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                arr_60 [i_14] [i_14] [i_14] = ((~(max((~14757689411899029325), (max(var_5, (arr_32 [i_14] [i_15] [i_18] [16] [i_18] [i_14])))))));
                var_36 = (arr_24 [i_14]);
                var_37 = ((((min(((-(arr_7 [i_18] [i_15]))), var_16))) ? var_4 : (arr_52 [i_18] [15] [i_14] [i_14])));
            }
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
        {
            arr_63 [i_14] [i_14] [i_14] = ((-((var_6 ? (arr_59 [i_19] [i_19] [i_19] [i_19]) : (arr_30 [i_14] [i_14] [i_19] [i_19])))));
            arr_64 [i_14] [i_14] = (((arr_40 [i_14]) | ((var_11 ? (arr_20 [i_14] [i_14]) : var_7))));
            var_38 ^= (arr_32 [i_14] [i_14] [i_14] [i_14] [i_19] [10]);

            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                arr_67 [i_14] [i_19] [i_20] [i_14] = var_0;
                var_39 = (!(((-(arr_21 [i_14] [i_14] [i_19])))));
                arr_68 [i_14] [i_19] [i_20] = (arr_29 [15] [i_19] [i_20] [i_20]);
            }
            for (int i_21 = 1; i_21 < 18;i_21 += 1)
            {
                arr_71 [i_19] [i_19] [10] &= ((var_0 < var_2) ? (arr_47 [16]) : ((~(-9223372036854775807 - 1))));
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            var_40 = (var_4 ? var_5 : (((1 & (arr_34 [i_14] [i_14] [i_21] [i_22])))));
                            var_41 -= (arr_1 [i_14] [i_14]);
                        }
                    }
                }
                arr_78 [i_14] [i_19] [i_14] [i_21] = 32767;
            }
            for (int i_24 = 1; i_24 < 18;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                {
                    var_42 = ((var_11 ? var_6 : 94));
                    var_43 *= ((((arr_2 [i_14] [i_25]) ? var_5 : var_9)));
                }
                for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
                {
                    var_44 = (~var_0);
                    var_45 = (arr_31 [i_14] [i_19] [i_14] [i_24 + 1] [i_26]);
                    var_46 ^= var_2;
                }
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 19;i_28 += 1)
                    {
                        var_47 = (((arr_2 [i_14] [i_19]) ^ var_1));
                        var_48 = ((~(arr_21 [i_14] [i_24 + 1] [i_28])));
                        var_49 = var_4;
                        arr_91 [i_14] = -var_15;
                    }
                    var_50 += (~3689054661810522279);
                }
                var_51 ^= var_6;

                for (int i_29 = 0; i_29 < 19;i_29 += 1)
                {
                    var_52 = (((arr_49 [5]) ? var_16 : (arr_56 [i_14] [i_14])));
                    arr_96 [i_14] = ((-42765 ? var_13 : (arr_84 [i_14] [i_14] [i_14] [i_29] [i_29] [i_14])));
                }
                arr_97 [i_14] [i_19] [i_14] [i_14] = (((-(arr_47 [i_14]))));
            }
            for (int i_30 = 1; i_30 < 18;i_30 += 1)
            {
                var_53 = ((var_11 ? var_10 : ((((arr_5 [i_14] [i_14]) ? (arr_36 [i_30] [i_19] [i_14]) : 2082)))));
                var_54 = 29941;
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 19;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        {
                            arr_106 [i_14] [11] [i_30 + 1] [i_19] [i_14] = var_11;
                            arr_107 [i_14] [i_14] [i_30] [i_31] [i_32] = var_4;
                        }
                    }
                }
                var_55 *= (arr_92 [i_14] [i_19] [i_30] [i_19] [i_30]);
            }
        }
        for (int i_33 = 0; i_33 < 19;i_33 += 1) /* same iter space */
        {
            arr_111 [i_14] = ((var_7 ? ((22770 | ((-9820 ? 1 : -5)))) : (((arr_69 [i_14] [i_14] [i_14] [i_33]) >> (63454 - 63449)))));
            var_56 = ((((arr_73 [i_33] [i_14] [i_14]) - ((min(63443, 94))))));
        }
        arr_112 [i_14] = (((((var_3 ? var_8 : var_3))) ? ((~(((arr_110 [i_14] [i_14] [i_14]) << (((arr_4 [i_14] [i_14]) - 32078)))))) : (((((-(arr_103 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))) ? var_15 : var_8))));
        arr_113 [i_14] [i_14] = (arr_103 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
        var_57 = arr_108 [1];
    }
    #pragma endscop
}
