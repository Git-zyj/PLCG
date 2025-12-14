/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_0 [i_0] [i_0]) == (arr_1 [i_0]))))));
        var_17 += arr_2 [i_0] [i_0];
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_18 += ((-(arr_4 [i_1] [i_1 - 1])));
            arr_10 [i_2] [1] = (((arr_2 [i_1 + 1] [i_1 + 2]) >= (arr_2 [i_1] [i_1 + 2])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 = ((-(arr_2 [i_1 - 1] [i_1])));
            var_20 = (max(var_20, ((((arr_5 [i_1 - 2] [i_3]) / (arr_13 [i_1 + 2]))))));
            var_21 = (max(var_21, (((~(arr_11 [i_1] [i_1]))))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 -= (((arr_11 [i_5] [i_1]) - (arr_11 [i_5] [i_5])));
                            var_23 = (max(var_23, (((arr_20 [i_1] [i_1 - 1] [i_1 - 2] [i_5] [i_1]) - (arr_7 [i_1 - 2])))));
                            arr_21 [1] [i_3] [1] [i_5] [i_5] [4] [i_5] = (arr_1 [i_1 - 1]);
                        }
                    }
                }
                var_24 -= (arr_13 [i_1 + 1]);
                var_25 = ((~((~(arr_5 [1] [i_3])))));
                var_26 = (((arr_17 [i_3] [i_3]) / (arr_11 [i_1 + 1] [i_3])));
            }
        }
        var_27 &= ((((((arr_0 [i_1] [i_1]) > (arr_1 [i_1])))) | ((((arr_6 [i_1]) || (arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [9]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 = (arr_16 [i_1] [1] [i_1 + 2] [i_1] [i_1 + 1]);
                        var_29 = (((arr_13 [i_1 + 2]) | (arr_13 [i_1 - 2])));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_30 = (((arr_11 [i_1 + 1] [i_1]) || (arr_2 [9] [i_1 - 2])));
                        var_31 = (min(var_31, ((!((((arr_13 [i_10]) ^ (arr_7 [i_1]))))))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_33 [i_7] [i_8] [i_7] [8] = (arr_27 [i_8] [3] [i_1 - 1] [i_1 - 1]);

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            arr_36 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] = (-(arr_7 [i_1 - 1]));
                            arr_37 [8] = (((arr_4 [i_12] [i_1 + 2]) & (arr_4 [i_1] [i_1 - 1])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_32 = (arr_14 [i_1] [14] [i_1 + 2]);
                            arr_40 [i_1] [i_1] = (arr_8 [i_8]);
                            arr_41 [i_1] [i_7] [i_7] [i_11] [i_13] = ((!((((arr_30 [i_1] [i_7] [i_7] [i_11] [i_11] [i_1]) >> (arr_13 [i_13]))))));
                            arr_42 [i_13] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] = ((arr_30 [i_8] [6] [i_8] [i_8] [i_8] [i_8]) == (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_33 = (!(arr_44 [i_1 - 1] [i_7] [i_8] [i_7]));
                                var_34 = (max(var_34, (arr_5 [i_8] [i_14 + 1])));
                            }
                        }
                    }
                    var_35 -= ((~((((arr_6 [i_8]) == (arr_28 [i_1] [i_7] [i_8] [i_1]))))));
                }
            }
        }
        var_36 += (arr_0 [i_1] [i_1 + 1]);
    }

    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        arr_51 [i_16] = ((!(((~(arr_50 [i_16 - 1]))))));
        arr_52 [i_16] = (((arr_50 [i_16 - 1]) <= (arr_50 [i_16 - 1])));
        arr_53 [14] = (arr_48 [i_16] [i_16]);
        arr_54 [i_16 - 1] = (max((arr_48 [i_16 - 1] [i_16 - 1]), (arr_49 [i_16 - 1] [i_16 - 1])));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        arr_59 [i_17] [i_17] = (((arr_56 [i_17]) || (arr_58 [i_17])));
        arr_60 [i_17] [i_17] = (((arr_56 [i_17]) * (arr_57 [i_17])));

        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                arr_66 [i_17] = ((arr_58 [i_18]) && (arr_58 [i_17]));
                var_37 = (max(var_37, (((~(arr_63 [i_19] [i_18] [i_17]))))));
                var_38 = (arr_49 [i_19] [i_17]);
                arr_67 [i_18] = (arr_55 [11]);
            }
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                var_39 = ((-(arr_65 [i_17] [7] [i_20])));
                var_40 = ((((((~(arr_58 [i_18]))) + 2147483647)) << ((((((~(arr_57 [i_17]))) + 14)) - 12))));
                arr_71 [i_20] [i_17] [i_17] = ((~(arr_64 [i_17] [15] [i_17])));
            }
            for (int i_21 = 0; i_21 < 0;i_21 += 1)
            {
                var_41 = arr_63 [i_21] [i_21] [i_21 + 1];
                var_42 = (max(var_42, ((((arr_65 [i_21 + 1] [i_18] [4]) ^ (arr_75 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]))))));
            }
            var_43 = (min(var_43, (((arr_50 [i_17]) == (arr_69 [i_17] [i_18])))));
            var_44 &= (((!(arr_63 [i_17] [i_18] [i_18]))));
            arr_76 [i_17] [i_18] = (arr_58 [i_17]);
        }
        arr_77 [i_17] = (((!(arr_63 [i_17] [i_17] [i_17]))) || ((((arr_73 [i_17] [i_17]) ^ (arr_61 [i_17] [i_17])))));
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 18;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                {
                    var_45 = min(((~(arr_83 [i_23] [i_24] [i_23]))), (((!(((arr_80 [i_24]) || (arr_86 [i_22])))))));
                    arr_87 [i_22] [i_23] [i_23] [i_24] = (arr_85 [3] [i_23] [i_24]);
                }
            }
        }
    }
    #pragma endscop
}
