/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_8));
    var_12 = var_9;
    var_13 = var_7;
    var_14 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_15 |= var_1;
            var_16 = (((arr_0 [i_0] [i_0]) > (((arr_3 [i_0] [i_0]) * var_8))));
            var_17 *= var_10;
            var_18 = ((var_4 ? ((45814 ? 19710 : (arr_1 [i_0] [i_0]))) : (~var_10)));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_19 = ((var_6 || (arr_3 [i_0] [i_2 + 1])));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, 14959));
                    var_21 = (min(var_21, (arr_1 [i_0] [i_3])));
                    arr_10 [i_2] = (var_7 / var_4);
                    var_22 &= ((var_0 % (arr_0 [i_2 - 2] [i_2 - 2])));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (!var_7)));
                    var_24 = (max(var_24, (((-(((arr_9 [i_0] [i_2 - 2] [i_2 - 2] [i_5]) + 18446744073709551615)))))));
                    var_25 += (arr_12 [i_5]);
                    var_26 = ((-(arr_3 [i_0] [15])));
                    var_27 *= (arr_2 [i_2 - 1] [i_2 + 1]);
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_28 = 32757;
                        var_29 = (min(var_29, (!-115)));
                        var_30 = (min(var_30, ((((((var_3 + (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? 127 : var_3)))));
                        var_31 += var_5;
                        arr_17 [i_0] [6] [i_0] [i_3] [i_0] [i_2] = (((1 & 126) | (arr_3 [i_2 - 2] [i_2 - 2])));
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_21 [20] [i_0] [i_3] [i_0] [i_0] [i_6 - 1] |= (((arr_7 [i_6 + 1] [i_3] [i_3] [i_3]) > (arr_7 [i_6 + 1] [i_3] [i_3] [i_3])));
                        var_32 = (~var_5);
                        var_33 += var_3;
                    }
                    var_34 = 126;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_35 = (min(var_35, (((var_9 ? var_7 : var_8)))));
                    var_36 = (min(var_36, (arr_15 [i_0] [i_0] [i_3] [i_0] [i_2 - 1] [0])));
                    var_37 = (min(var_37, (((+(((arr_16 [i_3] [i_3] [i_3] [i_0] [12] [i_0]) ? -61 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_24 [i_2] [i_2] = var_0;
                }
                var_38 |= (((!var_0) ? ((var_0 ? 0 : var_6)) : var_6));
                arr_25 [i_2] [i_2] [7] [i_2] = (arr_14 [i_3] [i_2] [i_2] [i_2]);
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_39 += (((arr_4 [i_2] [i_2]) ? (arr_4 [i_0] [i_2]) : (arr_23 [i_2] [i_2 - 2] [i_10] [i_10])));
                arr_28 [i_2] = var_1;
                arr_29 [i_2] [i_0] [i_2] = (((((var_0 ? 104 : (arr_12 [i_0])))) ? (1 / 227) : var_4));
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_40 = -77;
                        var_41 = ((var_9 ? (arr_23 [i_0] [i_2 - 1] [i_2] [i_0]) : var_6));
                        arr_34 [i_0] [i_12] [i_12] [i_0] |= var_8;
                        var_42 *= var_1;
                        var_43 = ((var_0 ? (arr_6 [i_11] [i_11] [i_11]) : 28));
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_44 = (min(var_44, var_2));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_45 = (max(var_45, (arr_30 [i_14 - 2] [i_14])));
                        var_46 = (min(var_46, (arr_39 [i_0])));
                        arr_42 [i_13] [i_0] [i_0] [i_13] = (arr_30 [i_13] [i_13]);
                        arr_43 [i_0] [i_0] [i_13] [3] = (((arr_6 [i_13 - 2] [i_13 + 1] [i_13]) ? var_1 : (arr_6 [i_13] [i_13 - 2] [12])));
                    }
                }
            }
            arr_44 [i_0] |= (!var_9);
            arr_45 [14] [i_13] [i_13] = (((arr_12 [i_0]) ? (arr_26 [i_13] [i_13 + 1]) : var_6));
            var_47 = (max(var_47, -var_5));
        }
        var_48 -= ((var_0 ? 562949416550400 : 44609825));
        arr_46 [i_0] [7] = (var_4 >= var_9);
        var_49 = (min(var_49, var_3));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
    {
        arr_49 [i_16] [i_16] = ((var_4 ? -114 : (arr_7 [20] [i_16] [i_16] [20])));
        var_50 = (max(var_50, (((-(arr_41 [i_16] [0] [i_16]))))));
        var_51 = (min(var_51, (!var_9)));

        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                var_52 *= (((arr_23 [i_16] [i_16] [i_16] [i_16]) ? (arr_23 [i_17] [i_17] [i_18] [1]) : 29));
                var_53 = (arr_32 [i_16] [i_16] [i_16] [i_16] [i_17]);
            }
            for (int i_19 = 2; i_19 < 19;i_19 += 1)
            {
                var_54 -= (arr_47 [i_16]);
                var_55 = (arr_30 [i_19 - 2] [i_16]);
                var_56 &= ((var_6 ? (arr_22 [i_16] [i_16] [i_19 + 1]) : (((var_4 >> (var_7 - 22051))))));
            }
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                arr_60 [12] [i_16] [2] [2] = ((388695124 ? -61 : (arr_39 [i_16])));
                var_57 &= (((arr_11 [i_16] [i_16] [i_16] [i_16] [i_20]) ? 18446744073709551615 : (arr_32 [i_16] [i_16] [i_17] [i_20] [i_20])));
                arr_61 [i_17] = var_1;
                var_58 += var_10;
                var_59 += 45832;
            }
            var_60 += (((arr_48 [i_17] [i_17]) | var_1));
        }
        for (int i_21 = 4; i_21 < 19;i_21 += 1) /* same iter space */
        {
            arr_65 [i_16] |= (arr_54 [i_16] [i_16]);
            var_61 = (min(var_61, (~14)));
            var_62 = (max(var_62, (((~(arr_62 [i_21]))))));
            var_63 -= (((~var_1) ? 0 : (arr_15 [i_16] [i_21 - 3] [i_16] [i_21] [i_21 - 3] [i_21])));

            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_64 = ((((((var_4 >= (arr_23 [i_16] [i_16] [i_21] [i_22]))))) < (arr_30 [i_16] [i_21])));
                var_65 = ((var_0 ? (arr_52 [i_21 - 2] [i_21 - 3]) : (arr_52 [i_21 - 2] [i_21 + 1])));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        {
                            arr_72 [i_21] [i_21] [i_21] [i_23] [i_21] [i_24] = (((arr_18 [i_16] [i_21] [i_16] [i_16] [i_16]) + ((1022 ? (arr_33 [i_21] [i_21] [i_23] [i_21] [10]) : (arr_48 [i_16] [i_21 + 1])))));
                            var_66 = ((-(arr_70 [i_16] [i_21] [i_21 - 1] [i_21] [i_16] [i_16])));
                        }
                    }
                }
            }
            for (int i_25 = 0; i_25 < 21;i_25 += 1)
            {
                var_67 -= (~var_7);
                var_68 *= (arr_74 [i_16] [i_25] [i_16]);
            }
        }
        for (int i_26 = 4; i_26 < 19;i_26 += 1) /* same iter space */
        {
            var_69 -= ((-var_3 != ((30 ? 65535 : var_3))));
            var_70 = arr_58 [i_16];
            arr_78 [19] [19] [19] = ((var_6 ? var_0 : (arr_66 [i_26 - 2] [i_16] [i_26 + 2])));
            var_71 = (max(var_71, (((((var_10 << (((arr_69 [i_16] [i_16] [18] [i_16] [i_16] [i_16]) - 57607)))) < var_10)))));
        }
    }
    for (int i_27 = 0; i_27 < 14;i_27 += 1)
    {
        /* LoopNest 3 */
        for (int i_28 = 3; i_28 < 12;i_28 += 1)
        {
            for (int i_29 = 1; i_29 < 13;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 14;i_30 += 1)
                {
                    {
                        var_72 = ((((!(((37105 ? 242 : (arr_8 [i_27])))))) ? ((var_7 ? (arr_35 [i_27] [i_29] [i_27]) : (arr_62 [i_27]))) : (((!((!(arr_16 [i_30] [9] [i_27] [i_27] [8] [i_27]))))))));
                        var_73 *= 1069547520;
                    }
                }
            }
        }
        var_74 = (min(var_74, ((((((((var_7 << (4294967295 - 4294967290)))) ? ((((arr_1 [i_27] [i_27]) ? 1018 : var_9))) : ((0 ? 18446744073709551615 : var_8))))) ? var_1 : var_9))));
    }
    for (int i_31 = 0; i_31 < 25;i_31 += 1)
    {
        var_75 -= (((((~(arr_89 [i_31])))) & (((284723789 ? var_9 : (arr_89 [5]))))));
        var_76 = (max(var_76, ((((arr_89 [i_31]) < -var_6)))));
        var_77 = (max(var_77, ((((((var_4 & var_1) ? var_5 : ((var_6 ? var_4 : 4)))) * (~var_10))))));
        var_78 = (min(var_78, ((((((-118 / (var_2 * 3)))) ? (var_3 < var_3) : (((arr_89 [i_31]) | var_0)))))));
        var_79 = (max(var_79, (arr_89 [i_31])));
    }
    #pragma endscop
}
