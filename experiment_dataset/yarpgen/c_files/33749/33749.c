/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 = (arr_0 [i_1] [i_1]);
            arr_6 [i_1] [3] = ((((!(arr_1 [8]))) ? (((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_0]))) : (arr_4 [8] [8])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 *= ((44462 ? 0 : 66387959));
            arr_10 [i_0] |= (arr_1 [i_0]);
            var_20 += ((arr_0 [i_0] [i_0]) ? (arr_4 [i_0] [i_2]) : (arr_7 [i_2] [i_0] [i_0]));
            arr_11 [i_0] [i_2] = (arr_8 [i_2]);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_16 [i_0] [i_0] [i_3] = (arr_13 [i_3] [i_0]);
            arr_17 [i_0] [i_0] [i_0] = ((-(arr_14 [i_3])));
        }
        var_21 = ((-(arr_13 [i_0] [i_0])));

        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_26 [i_6] = (arr_13 [i_0] [6]);
                        var_22 -= (((((arr_5 [i_0] [i_4] [7]) ? (arr_18 [i_0] [6] [i_5]) : (arr_25 [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_4] [i_5] [i_4]));
                    }
                }
            }
            var_23 = (min(var_23, (arr_1 [10])));
            arr_27 [i_4] &= (arr_23 [i_0] [i_0] [1]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_24 = (min(var_24, ((((arr_28 [i_0] [9] [i_7]) ? (arr_28 [i_0] [i_0] [i_0]) : (arr_28 [4] [4] [i_0]))))));
            var_25 *= (((arr_20 [i_0] [7]) ? (arr_20 [i_0] [i_7]) : (arr_20 [5] [i_7])));
            var_26 = (((arr_18 [i_0] [i_0] [10]) ? (arr_22 [i_0]) : (arr_18 [i_0] [i_0] [i_7])));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_35 [i_0] |= (((arr_28 [i_0] [i_0] [i_0]) ? ((((!(arr_7 [i_0] [i_8] [i_0]))))) : (((arr_31 [i_8] [i_0]) ? (arr_28 [1] [i_8] [i_8]) : (arr_24 [i_0])))));
            var_27 = ((205 ? 239 : 2575995147));
            var_28 -= (((arr_24 [5]) ? (arr_32 [i_0] [i_8]) : (arr_2 [i_0] [5] [5])));

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_29 = (max(var_29, (arr_8 [i_8])));
                            var_30 |= (arr_38 [i_0] [i_8] [i_9] [i_10] [1]);
                            var_31 *= -66387960;
                            var_32 -= (arr_12 [i_9 + 1] [i_9] [i_9 - 1]);
                        }
                    }
                }
                var_33 = (min(var_33, (arr_12 [1] [i_8] [1])));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_34 -= (arr_7 [i_0] [i_8] [i_12]);
                var_35 = 17;
            }
            for (int i_13 = 3; i_13 < 10;i_13 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_0] [i_8] = (arr_18 [i_0] [i_8] [i_13]);
                arr_48 [i_0] [i_8] [i_0] = (((arr_33 [i_0] [i_8] [i_13 - 2]) ? (arr_24 [9]) : (arr_12 [10] [i_8] [9])));

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_51 [i_8] [i_0] = (-(arr_28 [5] [i_8] [i_13 - 1]));
                    arr_52 [i_13] [i_13] [i_13] [4] = ((-(arr_38 [7] [i_8] [i_8] [i_8] [i_8])));
                }
            }
            for (int i_15 = 3; i_15 < 10;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    var_36 = (arr_28 [i_0] [i_8] [i_16 - 3]);
                    var_37 *= (arr_55 [i_0]);
                    var_38 += (arr_40 [i_16] [i_0] [i_0] [i_0]);
                }
                var_39 *= (arr_32 [5] [5]);
                var_40 = (arr_28 [i_15 + 1] [i_15 + 1] [i_15 - 1]);
                var_41 = (arr_12 [2] [i_8] [i_8]);
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 24;i_17 += 1)
    {
        var_42 += (arr_58 [i_17] [6]);
        arr_59 [i_17 - 1] = (arr_58 [i_17] [i_17]);
        arr_60 [i_17] [1] = arr_57 [i_17] [i_17 - 2];
        /* LoopNest 3 */
        for (int i_18 = 4; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        var_43 ^= (((arr_67 [i_17 - 2] [i_17 - 2] [i_18 - 4] [i_18 + 1]) ? (arr_67 [i_17 - 1] [i_17 + 1] [i_18 - 2] [i_18 - 2]) : (arr_66 [i_17 + 1] [i_17 + 1])));

                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            var_44 &= (arr_57 [11] [i_18]);
                            var_45 = (!(arr_63 [i_17] [i_17] [i_17 - 1] [i_20]));
                            var_46 = (max(var_46, (arr_61 [23])));
                            var_47 = ((!(arr_57 [i_18 - 2] [i_18 - 2])));
                            arr_71 [i_21] [i_20] [i_19] [i_19] [i_17] [i_17] |= (arr_68 [i_17] [i_18 - 1] [i_19]);
                        }
                        var_48 = (min(var_48, (((!(arr_63 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 - 2]))))));

                        for (int i_22 = 3; i_22 < 24;i_22 += 1)
                        {
                            var_49 = (arr_73 [i_17] [i_22 + 1] [i_19] [i_18 + 1]);
                            arr_75 [7] [i_18 + 1] [i_22] [i_18 + 1] [i_22] = (((arr_72 [i_22] [i_18] [i_19] [i_17 - 2] [i_18 - 2] [i_19] [i_20]) ? (arr_72 [i_22] [i_18] [i_19] [i_17 - 2] [i_18 - 2] [i_20] [i_19]) : (arr_72 [i_22] [i_18] [13] [i_17 + 1] [i_18 + 1] [i_19] [i_18])));
                        }
                        for (int i_23 = 1; i_23 < 24;i_23 += 1)
                        {
                            arr_80 [6] [i_20] [i_19] [i_18] [11] = (arr_73 [i_17] [i_18] [i_20] [i_20]);
                            var_50 = (min(var_50, (arr_58 [i_17 + 1] [i_18 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 16;i_24 += 1)
    {
        var_51 = (min(((min((arr_58 [i_24] [i_24]), (arr_82 [i_24])))), (arr_73 [i_24] [i_24] [i_24] [i_24])));
        var_52 = min(229, (min(4068870953632997788, 6)));
    }
    var_53 *= (min((max(var_8, ((var_0 ? var_12 : var_16)))), var_15));
    /* LoopNest 2 */
    for (int i_25 = 2; i_25 < 12;i_25 += 1)
    {
        for (int i_26 = 4; i_26 < 11;i_26 += 1)
        {
            {
                var_54 &= (arr_64 [i_25]);
                var_55 = (arr_87 [i_26]);
            }
        }
    }
    var_56 = (min(var_56, (~var_9)));
    #pragma endscop
}
