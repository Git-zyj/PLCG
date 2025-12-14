/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_0 ? var_1 : var_0)))));
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 -= (((((((~(arr_3 [1])))) ? ((max(25, (arr_2 [18])))) : (((!(arr_1 [i_2])))))) / (65534 <= 1704558082569454773)));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (2147483646 ? (arr_2 [i_0]) : var_3);
                        var_18 = (min(var_18, var_3));
                        var_19 &= (arr_2 [10]);
                        var_20 = ((!(!var_8)));
                        var_21 = (((arr_1 [i_3 + 1]) ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 - 3])));
                    }
                    var_22 &= -1704558082569454760;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    var_23 = (arr_5 [i_0] [3] [i_4]);
                    var_24 -= (((arr_4 [1] [i_4 + 1] [1]) ? (arr_1 [i_4 + 1]) : (arr_4 [1] [i_4 - 1] [i_4])));
                    var_25 = ((var_3 ? (arr_2 [i_0]) : ((730668442 ? 1 : 1))));

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_12 [10] [i_0] [14] [14] [i_4] [14] = ((!(arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1])));
                        arr_13 [i_0] [i_0] = var_3;
                        var_26 = (min(var_26, (arr_7 [16] [16])));
                        var_27 = 11;
                    }
                }
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_28 -= (!(((arr_2 [i_6]) >= (arr_9 [i_6 + 3] [i_6 + 3] [i_0 - 1]))));
                    arr_16 [i_0] [i_1] [i_0] = (max(((max(44, var_4))), 20));
                }
                var_29 = (min(var_29, -var_11));
                var_30 = ((((!var_8) && var_0)) ? (((arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 2]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : var_9)) : (!var_5));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_31 = ((var_8 & (((3404576827 ? var_0 : var_5)))));
                        arr_23 [i_0] = var_5;
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        var_32 = (max(var_32, (((~(arr_24 [i_7] [i_0] [i_1] [i_1] [i_9 - 1] [i_9]))))));
                        var_33 -= (arr_14 [i_0] [i_0] [i_7] [i_7]);
                    }
                    var_34 &= ((((((arr_22 [i_7] [i_7] [i_1] [i_7] [i_0]) ? var_12 : 1))) + (arr_6 [i_0] [i_0] [i_0 + 2] [i_7] [i_0] [18])));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_35 = (max(var_35, (arr_7 [i_7] [i_7])));
                        var_36 = var_1;

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_37 -= (!var_11);
                            var_38 = var_10;
                        }
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            arr_34 [i_12] [i_1] [i_12] [i_12] |= (((arr_21 [i_12 - 1] [i_7] [i_7] [i_0 - 1]) * var_9));
                            arr_35 [i_0] [5] [i_7] [i_7] [i_0] [i_0] [i_1] = (((arr_3 [i_0]) ? ((var_3 ? var_13 : (arr_8 [i_0] [i_0] [8]))) : (((53 && (-2147483647 - 1))))));
                            var_39 = (((arr_28 [i_0] [i_1] [i_7] [3] [i_12] [1]) || (2147483633 || 16383)));
                        }
                    }
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        var_40 = var_5;
                        arr_40 [i_0] [18] [i_7] [i_7] &= ((arr_0 [i_7]) ? (!895433585) : (var_8 ^ var_7));
                        var_41 -= (arr_30 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13 - 1]);
                    }
                    for (int i_14 = 3; i_14 < 23;i_14 += 1)
                    {
                        var_42 -= (((arr_8 [i_14] [i_7] [i_0 + 2]) ? (arr_22 [i_1] [i_7] [10] [i_7] [1]) : (arr_9 [i_1] [i_1] [i_14 - 1])));
                        var_43 = (min(var_43, 1704558082569454789));
                        var_44 = arr_33 [i_0 - 1] [i_0 - 2] [i_0];
                    }
                    var_45 -= (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_46 |= var_6;
                    var_47 = (max((arr_28 [i_0] [i_0] [1] [i_1] [i_0] [i_1]), (((10 || (var_3 >= var_9))))));

                    for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
                    {
                        var_48 = ((((~(arr_9 [i_16 + 2] [i_0 - 1] [i_0]))) != var_11));
                        var_49 ^= var_8;
                        arr_48 [i_1] [i_0] = 1;
                    }
                    for (int i_17 = 2; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        var_50 = (!var_3);
                        var_51 ^= 3318759877;
                    }
                    var_52 = arr_2 [i_0];
                }
                for (int i_18 = 2; i_18 < 23;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            {
                                var_53 = ((arr_21 [i_1] [i_0] [i_1] [i_1]) ? (min(var_0, ((var_12 ? var_2 : var_10)))) : var_8);
                                arr_58 [i_0] [i_0] [i_0] [16] [i_0] [i_0] = ((((((((var_5 ? var_7 : (arr_10 [i_0] [i_0] [i_0] [i_20])))) ? ((var_11 ? var_0 : var_3)) : -var_9))) ? (((max((var_9 || var_4), (!var_9))))) : ((-((var_6 ? var_9 : 1))))));
                                var_54 -= (max(var_11, (((!(!var_11))))));
                                var_55 ^= var_13;
                                var_56 = (~1960710087852943811);
                            }
                        }
                    }
                    arr_59 [7] [i_0] [i_18] = var_5;
                    arr_60 [i_0] [i_1] [i_1] [i_18 - 1] = (min(((var_8 ? (arr_22 [1] [i_0] [i_0] [i_0] [i_18]) : var_0)), (max(var_11, (~var_10)))));
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        for (int i_23 = 1; i_23 < 22;i_23 += 1)
                        {
                            {
                                var_57 = (arr_69 [8] [i_23] [i_0] [i_22] [i_23] [i_22] [i_23]);
                                var_58 = (min(var_58, 6393930505712603426));
                            }
                        }
                    }
                    var_59 = (arr_39 [9] [i_1] [i_21] [i_0]);
                    var_60 ^= (((arr_55 [i_0] [i_0] [i_1] [i_0]) == var_2));

                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        var_61 ^= arr_11 [i_0 + 2] [i_1] [i_21];
                        var_62 = (max(773875672, -1817491074));
                        var_63 = (((((-1704558082569454777 ? var_10 : (((arr_51 [i_0] [2] [i_0]) ? var_7 : var_8))))) ? (((((-(arr_26 [i_0] [i_0] [i_0] [9])))) ? ((-(arr_41 [i_0] [i_0] [23] [i_21] [i_24]))) : ((((arr_15 [i_1] [i_24] [i_21]) ? 19677 : var_2))))) : (arr_69 [i_24] [i_24] [i_0] [i_21] [i_0] [i_0 - 1] [i_0 + 1])));
                        var_64 = var_10;
                    }
                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        var_65 ^= (var_12 ? (arr_20 [i_25] [i_1]) : 1);
                        var_66 = (((!var_4) ? (((!(arr_7 [i_0 - 2] [i_0])))) : var_5));
                        var_67 = (arr_54 [i_0] [18] [18]);
                        var_68 = (min(var_68, ((min((arr_5 [i_25] [i_25] [i_25]), (arr_72 [3]))))));
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        arr_77 [i_0] [i_0] [i_21] [i_26] [i_26] [2] &= ((var_4 ? (((max(46268, var_4)))) : (~4294967287)));

                        for (int i_27 = 1; i_27 < 1;i_27 += 1) /* same iter space */
                        {
                            var_69 = var_4;
                            var_70 = (arr_37 [i_27] [i_0] [i_21]);
                            var_71 &= 1704558082569454788;
                            var_72 -= (((arr_4 [22] [i_1] [22]) || var_4));
                            var_73 = (arr_19 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_28 = 1; i_28 < 1;i_28 += 1) /* same iter space */
                        {
                            var_74 = (max(var_74, (arr_7 [8] [0])));
                            var_75 ^= (((arr_38 [i_28] [i_28] [i_28 - 1] [i_0 + 1]) ? (arr_82 [i_28 - 1] [4] [i_0 - 1] [4] [i_0 - 1]) : var_2));
                            var_76 = (max(var_76, ((((var_11 && 33185) == var_2)))));
                        }
                        arr_83 [i_0] [i_1] [i_21] [9] = var_2;
                        arr_84 [i_0] [i_0] [i_0] [i_21] [i_21] [i_26] = var_6;
                    }
                }
            }
        }
    }
    var_77 = (max(var_77, -1678308279));
    #pragma endscop
}
