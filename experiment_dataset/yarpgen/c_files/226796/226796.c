/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((~var_14) ? -var_9 : ((((var_14 && var_6) | ((80 ? var_13 : var_4))))))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = var_7;
        arr_4 [i_0] [i_0] = (min(((min(80, 83))), -80));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 ^= var_14;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_14 [i_2] [i_3] = var_4;
                        arr_15 [i_3] [i_3] [i_3] = (arr_6 [i_1]);
                    }
                }
            }

            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                var_18 = ((~var_12) ^ (arr_9 [i_1] [i_5] [i_5 + 1] [i_5]));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_27 [i_1] [i_2] [i_5] [i_1] [i_6] [i_5] = var_14;
                            arr_28 [13] [i_5] [i_1] [i_5] [i_1] = (i_5 % 2 == zero) ? ((((((var_3 == (arr_26 [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] [i_7])))) << (((((((arr_18 [i_5]) + 2147483647)) << (83 - 83))) - 2147483557))))) : ((((((var_3 == (arr_26 [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] [i_7])))) << (((((((((arr_18 [i_5]) + 2147483647)) << (83 - 83))) - 2147483557)) - 10)))));
                            var_19 |= ((4294967288 ? (arr_17 [i_7 - 2] [i_6 + 1] [10] [i_5]) : ((var_12 ? (arr_21 [i_1] [8]) : var_2))));
                            arr_29 [i_5] [i_2] [i_2] [i_1] [i_7] [i_7] = ((-(arr_18 [i_5])));
                        }
                    }
                }
                arr_30 [i_1] [i_2] [i_5] = ((!(arr_11 [i_5 - 2] [i_2] [i_5] [i_1])));
                var_20 = var_10;
                var_21 *= ((var_4 ? var_6 : var_7));
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_22 += (arr_10 [i_8 + 1] [i_8] [i_8 + 4]);
                arr_35 [i_1] [i_1] [i_1] [i_1] &= (((arr_13 [10] [i_8 + 2] [i_8 + 2] [i_8 + 2]) ? (arr_13 [8] [i_8 + 4] [i_8 - 1] [i_8 - 1]) : var_6));
                var_23 -= var_3;
                arr_36 [i_1] [i_1] [i_1] [8] = ((var_2 ? var_8 : var_3));
            }
            arr_37 [i_2] = ((-11 ? (arr_18 [8]) : (((var_5 < (arr_19 [6]))))));
            arr_38 [i_1] [i_1] [i_1] = (arr_32 [i_1]);
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_24 *= var_0;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_25 ^= (~var_0);
                            var_26 = (max(var_26, ((((arr_18 [i_11]) ? (!var_6) : (arr_44 [i_9 + 2] [i_9 + 4] [i_10] [i_11 - 1]))))));
                        }
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            var_27 = (((~var_15) | var_3));
                            var_28 = (~0);
                            var_29 -= var_4;
                            var_30 = 93;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_31 = (((((arr_8 [i_1] [i_9]) ? var_9 : -27)) <= (29 != var_8)));
                            arr_57 [i_1] [i_1] [i_10] [i_14] [i_14] [i_10] [i_10] |= var_7;
                        }
                        var_32 = (min(var_32, (((arr_10 [i_10] [i_9] [i_1]) <= (((var_6 - (arr_32 [i_1]))))))));
                        arr_58 [i_9] = (((((var_4 ? var_11 : var_6))) && var_1));
                        arr_59 [i_1] [i_9] [i_1] [i_11] [i_9] [i_9] = (((arr_39 [i_10] [i_9]) ? var_4 : (arr_48 [i_1] [i_1] [i_9] [i_1] [i_1] [7])));
                    }
                }
            }
            var_33 = var_11;
            arr_60 [i_1] [i_1] [0] &= ((11628907714614442681 >= (var_6 || var_6)));
        }
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            arr_65 [i_1] [i_1] = var_10;
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_71 [5] [i_15] [i_16] [i_17] = 3;
                        arr_72 [i_1] [i_15] [i_16] [i_17] = var_8;
                    }
                }
            }

            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                var_34 |= (((((-83 ? var_14 : var_5))) ? (arr_33 [3] [3]) : (((arr_25 [i_15] [i_15] [i_18] [0] [i_18]) ? (arr_11 [i_1] [i_15] [i_15] [i_18]) : var_11))));
                var_35 = (var_11 == var_13);
                arr_75 [12] [i_15] [i_18] [4] = 52176;
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                arr_78 [i_1] [i_15] = ((-58 ? -75 : -115));
                var_36 |= (((arr_8 [i_19] [i_19]) ? var_11 : (arr_12 [i_15 + 1] [i_19] [i_15 - 1] [i_15 + 1])));

                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        var_37 = var_0;
                        arr_86 [i_1] [i_1] [i_19] [i_20] [i_1] = (((arr_47 [i_20] [i_21]) | (((arr_25 [i_1] [i_20] [i_19] [i_20] [i_20]) ? var_12 : var_10))));
                    }
                    var_38 = (max(var_38, var_2));
                }
            }
        }
        for (int i_22 = 1; i_22 < 13;i_22 += 1)
        {
            var_39 = (min(var_39, ((+((var_9 ? (arr_51 [i_1] [10] [0] [0] [i_22]) : 21))))));
            var_40 = (18446744073709551607 || -30931228810688534);
        }
    }
    for (int i_23 = 4; i_23 < 16;i_23 += 1)
    {
        var_41 &= ((((((-93 | -13015) + 2147483647)) << (((((((arr_92 [i_23] [i_23]) ? var_8 : 65511)) + 1169996069939122390)) - 19)))));
        var_42 = (((~var_13) < (arr_92 [i_23] [i_23])));
        arr_93 [i_23 - 3] [i_23] = ((~(((arr_90 [i_23]) | var_12))));
        arr_94 [i_23] = ((((((arr_92 [i_23] [i_23 + 1]) ? 1 : var_9))) ? var_8 : -var_2));
        var_43 &= ((~((var_7 ? (~-4) : (arr_90 [i_23])))));
    }
    #pragma endscop
}
