/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= max(((var_11 ? 18446744073709551607 : 1)), (((~((min(255, var_9)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((((min((arr_1 [i_0] [i_0]), var_1))) ? ((min(var_3, (arr_1 [i_0] [i_0])))) : ((((arr_1 [i_0] [i_0]) && var_5)))));
        arr_5 [i_0] [i_0] = (min(((((var_11 ? 0 : 1)) / (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [3] [i_2] [18] = ((~((((!(arr_2 [5] [i_2]))) ? var_12 : (min(511, 1))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_2] [i_1] [i_4] = (1 + 18446744073709551104);
                        arr_19 [i_1] [i_2] [i_3] [i_3] [i_4] [i_1] = ((((min((arr_14 [18] [i_2] [1] [i_2]), var_2))) ? var_3 : (((arr_14 [i_1] [i_1] [5] [5]) - 0))));
                        arr_20 [i_1] [i_1] [i_1] [7] = ((65507 ? 1 : (min((arr_17 [i_4]), (255 % 1)))));
                        arr_21 [i_1] [i_2] [21] = (arr_0 [i_1] [i_2]);
                    }
                }
            }
        }
        arr_22 [i_1] = (((((var_1 ^ 18446744073709551592) ? (((min(247, var_4)))) : (arr_10 [i_1]))) >> (var_6 - 11806290565001060023)));
        arr_23 [i_1] [i_1] = ((min(var_3, 2147352576)));
        arr_24 [i_1] [17] = (var_9 ? (((min(var_8, var_9)))) : ((1 ? 16256 : (arr_16 [i_1] [i_1] [i_1] [i_1]))));

        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_28 [i_1] [i_5] = -16;
            arr_29 [i_5] [i_1] = 18446744073709551614;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_34 [2] [i_6] [2] [5] = (((arr_16 [1] [i_6] [i_7] [1]) ? (arr_1 [i_1] [i_6]) : var_5));

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_37 [i_1] [i_7] [i_7] [i_8] [i_7] = (arr_2 [i_1] [i_7]);
                    arr_38 [i_8] [i_7] [i_6] [i_1] [10] = (((arr_8 [i_6] [i_7]) ? (arr_31 [i_6]) : var_1));
                    arr_39 [i_1] [i_6] [i_7] [1] = (arr_36 [i_7] [i_7]);
                    arr_40 [17] = (arr_13 [i_1] [23] [i_1] [i_1]);
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_45 [1] [1] [i_9] = ((arr_15 [i_6] [i_7] [i_9]) - (arr_15 [11] [12] [i_1]));
                    arr_46 [i_1] [i_6] [i_7] [i_9] [i_6] = (((arr_0 [i_1] [i_1]) % (arr_2 [i_1] [i_6])));
                }
                arr_47 [i_7] [20] [i_1] = 1;
                arr_48 [i_7] [i_7] [i_1] [i_1] = ((-(arr_33 [i_1])));
            }
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                arr_51 [i_1] [i_1] [i_1] = (arr_50 [i_10 + 1] [i_10] [i_10 + 1] [i_1]);
                arr_52 [i_1] [i_1] [i_6] [i_10] = 0;
            }
            arr_53 [i_1] [i_6] = 0;
            arr_54 [i_1] = (((arr_43 [i_1] [i_6] [i_1] [i_1]) ? (arr_43 [4] [i_6] [i_6] [4]) : (arr_43 [4] [i_1] [i_1] [i_6])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_57 [i_1] = var_0;
            arr_58 [i_1] [i_11] [i_1] = 249;

            for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
            {
                arr_62 [i_1] [i_11] [i_12] [i_11] &= ((var_11 - (~1)));
                arr_63 [i_1] [14] [i_12] = ((arr_10 [i_12 + 1]) + 18446744073709551615);
            }
            for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
            {
                arr_67 [21] [i_13] [i_13] = 241;

                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    arr_70 [i_1] [i_13] [i_13 - 1] [i_11] [i_13] = (arr_17 [i_1]);
                    arr_71 [i_11] [i_11] = (-(arr_32 [i_13] [i_13 + 2] [i_13 - 1] [i_13 - 1]));
                    arr_72 [i_1] [1] [i_13 + 1] [i_13] = (arr_2 [i_13] [i_13 - 1]);
                    arr_73 [i_13] [i_13] [i_13] [i_14] [i_14] = ((arr_42 [22] [i_13 + 1] [i_13 + 1] [22] [1] [i_13 + 1]) >> (((arr_42 [i_1] [i_13 + 1] [i_13 - 1] [i_1] [4] [i_14]) - 10856996476202139114)));
                    arr_74 [i_13] = ((var_5 < (arr_6 [i_1])));
                }
                arr_75 [i_13] = 1;
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
        {
            arr_78 [12] = var_8;
            arr_79 [7] [7] = (!8064);
        }
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        arr_83 [21] [i_16] = 1;
        arr_84 [i_16] = ((((((0 ? var_7 : var_2))) % (0 ^ 18446744073709551615))) - 0);
        arr_85 [i_16] = (max(31744, (((((241 ? 3 : -1)) != 0)))));
        arr_86 [i_16] [9] |= 0;
        arr_87 [i_16] = (max(0, -18446744073709551586));
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        arr_90 [i_17] = (max(var_6, ((max(4294967295, (arr_88 [i_17]))))));
        arr_91 [i_17] [i_17] = 0;
        arr_92 [i_17] = (((arr_88 [i_17]) ? 19 : (((~((4294967295 ? 0 : -1)))))));
        arr_93 [i_17] [11] = (arr_88 [i_17]);
    }
    #pragma endscop
}
