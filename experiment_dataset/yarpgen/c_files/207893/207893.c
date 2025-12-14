/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (min(((~(arr_3 [i_0] [0] [i_0 + 3]))), ((min(-4783960614101535746, (((!(arr_2 [i_3])))))))));
                                arr_13 [i_4] [i_4] [12] [i_2] [i_1] [i_4] [i_4] &= (min(255, (min((arr_8 [i_2] [i_0 + 3] [i_2] [i_3] [i_1]), (arr_0 [i_0 - 1] [i_0 + 2])))));
                                var_15 = (min((arr_4 [i_3 - 1] [i_0 + 2]), (arr_4 [i_3 - 1] [i_0 - 1])));
                                var_16 = (min(var_16, (((-9223372036854775807 - 1) / 18446744073709551609))));
                                var_17 = -4783960614101535746;
                            }
                        }
                    }
                    var_18 = (((((63 < 1740622937) ? 13353636325810623141 : (((min(9636, 11718)))))) / (((-(arr_2 [i_1]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_20 [i_5] = (arr_2 [i_6 + 2]);
            var_19 = (((~(arr_3 [i_6 + 3] [i_6 - 2] [i_6 + 2]))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_20 = ((~(((((min((arr_18 [i_7]), (arr_1 [i_5])))) && (arr_7 [i_5] [i_5] [i_5] [i_5]))))));
            var_21 = ((+(((arr_11 [i_5] [i_5] [8] [i_7] [i_7]) / (arr_5 [i_5])))));
            var_22 = 5580221633384223931;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_23 = (min(var_23, ((((arr_9 [i_8] [i_8] [i_8] [i_5]) * var_8)))));
            var_24 = (min(var_24, (-49 <= 53802)));
        }
        arr_28 [4] = (min(((~(min((arr_17 [1] [i_5]), var_3)))), (~3071786003003539322)));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        var_25 = (((((((arr_12 [i_9] [i_10] [i_11 - 2] [i_12] [i_12] [i_12]) ? var_4 : (arr_22 [i_9]))) & (9223372036854775805 || 1740622910))) + (((234881024 != (arr_19 [i_10 - 2]))))));
                        arr_38 [i_10] [i_10] [i_11 - 2] [i_11] = (min((((~9223372036854775799) / (min(var_12, (arr_29 [i_12]))))), ((min((!-234881026), var_11)))));
                        var_26 = min((((!(arr_8 [i_10] [1] [i_10] [i_10 + 1] [i_10])))), (((!(((~(arr_21 [8] [i_10]))))))));
                        arr_39 [i_9] [i_9] [6] [i_9] [i_9] &= (1086105269 - 1);
                    }
                }
            }
        }
        var_27 = ((((min((((arr_0 [i_9] [i_9]) * var_10)), var_5))) ? (((~(arr_19 [i_9])))) : (min((((arr_1 [i_9]) - (arr_21 [i_9] [i_9]))), (arr_16 [i_9] [i_9])))));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_28 -= (min(9223372036854775807, 744314873));
        arr_42 [7] = (((arr_4 [i_13] [i_13]) ? ((var_11 >> (((((arr_25 [i_13] [i_13] [i_13]) ? var_5 : var_2)) - 33)))) : (arr_11 [i_13] [i_13] [i_13] [i_13] [i_13])));
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            arr_48 [i_14] = ((!(arr_44 [i_15])));

            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_29 = (((arr_44 [i_14]) <= (arr_44 [i_14])));
                            var_30 = (min(var_30, ((((arr_53 [i_18] [i_18 + 2] [i_17 - 1] [i_17] [i_15]) << (((arr_53 [9] [i_18 + 2] [i_17 - 1] [i_16] [i_15]) - 2249690506)))))));
                        }
                    }
                }
                var_31 = (arr_46 [i_14] [i_14]);
                var_32 = (arr_52 [7] [i_15] [i_15] [i_15]);
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
            {
                arr_57 [i_19] [6] [i_14] = (arr_47 [i_19]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        {
                            arr_63 [i_14] = var_4;
                            var_33 ^= ((~(((arr_49 [i_14] [i_14] [i_14] [i_14]) ? (arr_54 [i_14]) : var_2))));
                        }
                    }
                }
                var_34 = ((-(arr_47 [i_14])));
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 17;i_23 += 1)
                    {
                        {
                            arr_71 [i_14] [i_14] [i_14] [i_14] [i_14] = ((!(arr_64 [i_22 - 2] [i_22] [i_23] [i_23 - 1])));
                            var_35 = (((arr_61 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_22 - 2]) / (arr_51 [8] [i_23 - 2] [i_23 - 3] [i_22 - 1])));
                        }
                    }
                }
                var_36 = (((arr_53 [i_14] [i_14] [i_15] [i_19] [i_14]) ? (arr_68 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_53 [i_14] [i_14] [i_14] [i_14] [i_14])));
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
            {
                var_37 |= (((arr_69 [i_14] [i_15] [i_14] [i_15] [i_24] [i_24]) >= -var_10));
                arr_74 [i_14] = (~9456);
            }
        }
        var_38 = var_1;
    }
    var_39 = var_6;
    #pragma endscop
}
