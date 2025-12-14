/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_1] = 14;
            var_19 -= (((~5) / (arr_5 [i_0] [i_1 - 2])));
        }
        var_20 ^= (arr_6 [i_0] [i_0]);
        var_21 = (arr_0 [i_0]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_22 = (arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_23 = ((+(max((arr_5 [i_3] [i_3]), (arr_8 [i_2])))));
                    arr_14 [i_2] [i_2] [i_3] [i_2] = max((min((arr_13 [i_4]), (arr_13 [i_2]))), (arr_13 [i_3]));
                }
            }
        }
        arr_15 [i_2] [i_2] = ((((arr_12 [i_2] [i_2] [i_2]) ? ((249 ? 18446744073709551600 : var_8)) : (arr_8 [i_2]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] &= ((-(arr_13 [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_24 = (arr_29 [i_8] [i_8] [i_8]);
                        var_25 -= (arr_1 [i_6]);
                        arr_30 [i_6] [i_8] [i_7] [i_6] = var_10;
                        arr_31 [i_5] &= (((((var_2 ? (arr_25 [i_5] [i_5] [i_7 - 2] [i_7 - 2]) : (arr_17 [i_8])))) ? (arr_28 [i_5] [i_6] [i_7 + 1] [i_5]) : -126));
                    }
                }
            }
        }
        var_26 = var_7;
        arr_32 [i_5] &= 133651938;
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] [i_9] = 179;
        var_27 = (max((max((((!(arr_25 [i_9] [i_9] [i_9] [i_9])))), 251)), 1));
        var_28 ^= (arr_10 [i_9] [i_9]);
        var_29 = (min(var_29, 8128));

        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            arr_40 [i_9] [i_10] [i_10] = (((!19) ? (arr_28 [i_9] [i_9] [i_9] [i_9]) : (max(((5 ? 11581849147350245030 : 127)), -4294967295))));
            var_30 = (max(var_30, (((((max((arr_2 [i_10]), (arr_20 [i_10])))) & (((arr_2 [i_9]) + (arr_2 [i_9]))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            var_31 = (min(var_31, ((((arr_17 [i_11]) ? (arr_17 [i_11]) : (arr_9 [i_9] [i_9]))))));
            var_32 |= ((-(arr_38 [i_11] [i_9] [i_9])));
            arr_43 [i_11] [i_9] = ((!(arr_33 [i_11])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_52 [i_14] [i_14] = 18446744073709551601;
                            arr_53 [i_9] [i_9] [i_9] [i_9] [i_14] = -1;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 4; i_15 < 23;i_15 += 1)
        {
            var_33 = (arr_20 [i_15 - 4]);
            var_34 = ((-((11581849147350245021 ? 1 : 0))));
            arr_56 [i_15] [i_9] = 251;
            var_35 = ((-(arr_33 [i_15 + 1])));

            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_36 = (arr_51 [i_15 - 4] [i_15 + 2] [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 - 3]);
                var_37 = (var_1 >= 11581849147350245030);
            }
            for (int i_17 = 3; i_17 < 24;i_17 += 1)
            {
                arr_62 [i_9] [i_15 - 2] [i_17] = (arr_50 [i_9] [i_15 + 1]);
                var_38 = (1843119507 >= 2254507925673686277);
                var_39 = (!2484118042);
                var_40 = (max(var_40, var_7));

                for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                {
                    arr_65 [i_9] [i_15] [i_17] [i_15] &= (arr_0 [i_17 - 1]);
                    var_41 = ((18501 ? (arr_46 [i_9] [i_17 - 3] [i_17] [i_18]) : 8118));
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
                {
                    arr_68 [i_9] [i_17] [i_9] = ((1 ? 1 : 18));
                    var_42 = (arr_67 [i_15 + 1] [i_17 - 1]);
                    var_43 = (((!1843119521) ? 1 : (((arr_16 [i_9]) ? var_3 : (arr_36 [i_9])))));
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                {
                    var_44 *= (((arr_72 [i_9] [i_15] [i_15 - 1] [i_9]) ? 1 : (arr_72 [i_15] [i_15] [i_15 - 2] [i_15])));

                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        var_45 *= 1;
                        var_46 ^= var_0;
                        var_47 = (arr_72 [i_15 - 1] [i_15 - 1] [i_17 - 1] [i_17]);
                        var_48 *= (~(arr_50 [i_17] [i_9]));
                        var_49 += (((arr_66 [i_9] [i_15] [i_15 - 2] [i_15 - 3] [i_15 + 1]) ? (arr_66 [i_15] [i_15] [i_15] [i_15] [i_15 - 3]) : var_12));
                    }
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        var_50 = var_8;
                        var_51 = (min(var_51, (~2080374784)));
                        arr_77 [i_22] [i_22] [i_17] [i_17] [i_15 - 2] [i_9] [i_9] = 2219646833;
                        var_52 = (arr_38 [i_9] [i_22] [i_15]);
                        var_53 = (max(var_53, 18502));
                    }
                    for (int i_23 = 3; i_23 < 24;i_23 += 1)
                    {
                        var_54 = 115;
                        arr_80 [i_17] [i_17] = (arr_79 [i_17] [i_15 - 4] [i_15 - 4] [i_15 - 3] [i_15 - 3] [i_15 - 2]);
                    }
                    arr_81 [i_9] [i_15] [i_17] [i_17 - 1] [i_20] = (arr_48 [i_9] [i_15] [i_17 - 1] [i_20]);
                    arr_82 [i_15] [i_9] [i_17] [i_15] = ((+((114 ? (arr_23 [i_15] [i_15]) : var_4))));
                }
                for (int i_24 = 0; i_24 < 25;i_24 += 1)
                {
                    var_55 = arr_44 [i_9] [i_15] [i_17] [i_24];
                    var_56 &= (((arr_58 [i_9] [i_15 - 2] [i_17 - 1]) - (arr_44 [i_9] [i_17 - 3] [i_15 + 1] [i_15 + 1])));
                }
            }
            for (int i_25 = 2; i_25 < 24;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 25;i_26 += 1)
                {
                    var_57 = arr_72 [i_9] [i_15 - 3] [i_25 - 1] [i_26];
                    var_58 = (min(var_58, ((((arr_78 [i_9] [i_25 - 1] [i_9] [i_26] [i_9] [i_9] [i_26]) >= (arr_59 [i_9] [i_15 + 1] [i_25 - 1]))))));
                    var_59 = ((-18 == (arr_26 [i_9] [i_15] [i_25 + 1] [i_26])));
                }
                arr_89 [i_25] [i_15 - 1] [i_9] = ((64 ? 14137731415007622589 : 11581849147350245025));
                var_60 += (arr_17 [i_25 + 1]);
                var_61 = (~2398659857);
            }
        }
    }
    var_62 = 69;
    var_63 = var_10;
    #pragma endscop
}
