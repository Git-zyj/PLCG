/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 1028071591836370533;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (min(var_19, var_16));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((~((var_3 ? var_11 : (arr_6 [i_0] [i_0 + 1] [16]))))))));
                                var_21 = (max(var_21, var_16));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_22 = ((!(arr_0 [i_0 + 1])));
                        var_23 = var_11;
                        var_24 = (!0);
                        var_25 = (~7);
                    }
                }
            }
        }
        var_26 = (arr_5 [10] [10]);
        var_27 = ((var_0 ? (arr_14 [i_0] [10] [i_0] [i_0] [i_0 + 1]) : var_2));
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                {
                    var_28 = (min(((~(var_1 & var_3))), var_1));
                    arr_25 [i_8] = ((((((arr_24 [i_8 + 2] [18] [6]) ? 126 : (arr_24 [i_8 - 1] [i_7] [i_8])))) ? var_11 : ((((arr_24 [i_8 - 1] [i_7] [1]) != -90900674)))));
                }
            }
        }
        var_29 = (min(((max(var_1, (arr_1 [i_6 + 1])))), (((arr_1 [i_6 - 1]) ? var_0 : (arr_1 [i_6 - 2])))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_30 ^= ((153 ? ((-(arr_19 [i_10] [6]))) : (var_5 >= 170)));
                                var_31 = -2;
                                var_32 = ((!(((~((var_16 ? (arr_9 [i_6 - 1] [i_10] [i_11] [i_12]) : (arr_13 [i_6] [i_11]))))))));
                            }
                        }
                    }
                    var_33 = (max(var_33, ((((((((57 ? 2147483647 : -1552723123403043175))) ? (arr_8 [i_9]) : (min((arr_30 [i_6]), var_2)))) % ((max(((-98 ? 250 : var_5)), (arr_14 [i_10] [i_6] [i_10] [i_6] [i_6])))))))));
                    arr_38 [i_10] [i_9] [i_9] [i_6] = (((((max((arr_12 [i_6]), (arr_32 [i_6 - 2] [i_9] [i_10]))))) & (((arr_6 [i_6 + 1] [i_9] [i_6]) ? var_15 : var_4))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 22;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 4; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    {
                        var_34 = ((!((((arr_46 [i_13] [i_14] [i_15] [i_15]) ? var_6 : 18446744073709551615)))));
                        arr_48 [2] [i_14] [i_15] [i_15] = 661149747;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 4; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 21;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 23;i_20 += 1)
                        {
                            {
                                var_35 &= (((arr_49 [i_13]) != ((var_14 ? var_14 : (arr_3 [i_18] [i_17])))));
                                var_36 -= ((-(arr_42 [i_13 - 3] [i_13 - 2])));
                                var_37 = (arr_54 [14] [i_20] [i_20]);
                                var_38 = (((((-(arr_11 [i_13] [i_17] [23] [i_19])))) ? -var_16 : (arr_5 [i_17] [i_19])));
                            }
                        }
                    }
                    var_39 = (max(var_39, var_3));
                    var_40 ^= (arr_0 [i_17]);
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 3; i_22 < 21;i_22 += 1)
                        {
                            {
                                var_41 = (arr_58 [i_13 + 1] [i_17] [11] [i_21 - 1] [i_21]);
                                var_42 = (min(var_42, ((((arr_62 [i_17] [i_18 + 2] [i_18 + 1] [i_18 + 2] [i_17]) ? var_1 : (arr_62 [i_17] [i_18] [i_18 + 2] [i_18 + 2] [i_17]))))));
                                var_43 &= 47;
                                var_44 = (max(var_44, (~var_6)));
                                var_45 = ((((1 * (arr_61 [i_17] [i_18] [i_21]))) ^ 0));
                            }
                        }
                    }
                    var_46 &= (((var_1 ^ -85) % ((var_16 ? (arr_61 [i_18] [i_17] [15]) : var_5))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_23 = 1; i_23 < 23;i_23 += 1)
        {
            for (int i_24 = 4; i_24 < 23;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 23;i_25 += 1)
                {
                    {
                        arr_71 [i_25] [18] [18] [i_23] [i_13] [i_13] = ((~(((arr_6 [i_13] [i_13] [i_24]) ? (arr_58 [i_13] [i_13] [i_13] [i_13] [i_24]) : 1))));
                        var_47 |= (arr_3 [i_25] [i_24]);
                    }
                }
            }
        }
        var_48 = (min(var_48, (((var_10 ? (arr_55 [i_13] [6] [0] [i_13]) : (arr_66 [i_13 - 3] [i_13]))))));
    }
    for (int i_26 = 1; i_26 < 16;i_26 += 1)
    {
        var_49 &= ((((((((var_8 ? 0 : 61105))) ? (var_9 || 117) : ((4430 ? 344303151 : 344303159))))) ? var_15 : ((~(arr_65 [i_26 - 1] [i_26])))));
        /* LoopNest 2 */
        for (int i_27 = 2; i_27 < 14;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 1;i_28 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 1; i_29 < 15;i_29 += 1)
                    {
                        for (int i_30 = 3; i_30 < 13;i_30 += 1)
                        {
                            {
                                var_50 = var_1;
                                var_51 = ((-((((arr_46 [i_27] [i_26 - 1] [i_28 - 1] [i_26]) < (arr_41 [i_30 - 1] [i_29 + 1]))))));
                                var_52 = (((!var_10) ? (~var_3) : -var_0));
                                var_53 = 2053189556;
                            }
                        }
                    }
                    arr_84 [i_26] [4] [i_26] [i_26] = ((((var_13 ? (((arr_45 [i_26] [i_28 - 1]) ? var_16 : 8725663046302253841)) : (min((arr_35 [i_26] [i_26] [i_27] [i_28] [i_26]), var_6)))) > ((((min(117440512, 32760)))))));
                    /* LoopNest 2 */
                    for (int i_31 = 4; i_31 < 15;i_31 += 1)
                    {
                        for (int i_32 = 3; i_32 < 15;i_32 += 1)
                        {
                            {
                                var_54 = 1;
                                var_55 -= (max((((~((~(arr_81 [2])))))), ((((max(40191, 142))) ? (max(var_2, var_3)) : (((min(19610, 32596))))))));
                                var_56 = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
