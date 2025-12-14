/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~var_13);
                var_14 = ((((arr_2 [i_1 - 2]) && var_4)) ? ((max(3924321470556634969, (min((arr_2 [i_0]), var_1))))) : (((max((arr_0 [i_0]), var_9)) & (max(var_4, var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((var_0 ? var_0 : (max(var_5, var_2)))) ^ var_11);
                                var_16 = ((var_10 + (((var_4 & var_12) - (arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2])))));
                                var_17 = 539948155589016643;
                                var_18 = ((!(max((var_1 < var_11), ((var_8 > (arr_11 [i_4] [16] [i_1] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_19 ^= (((((var_7 ? var_3 : var_8))) / (((arr_18 [i_5 - 1]) ? (arr_18 [i_5 + 2]) : var_7))));
        var_20 = (((max(var_11, var_7)) << (((((arr_19 [i_5 - 2] [i_5 - 2]) ? var_1 : (arr_19 [i_5 + 3] [i_5]))) + 1223007436164430640))));
        var_21 = (min(var_21, ((max((3924321470556634961 >= -3924321470556634930), ((var_4 ? var_12 : var_11)))))));
        var_22 = ((var_12 | (((arr_19 [i_5 - 1] [i_5]) ? var_5 : var_13))));
        var_23 = (min(((((arr_19 [i_5] [i_5 + 2]) == (arr_18 [i_5 - 2])))), var_6));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6 + 2] [i_6] = (min((min(-3924321470556634959, -3924321470556634970)), (((((((arr_20 [i_6]) | (arr_20 [i_6])))) && (var_8 != var_10))))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {
                        var_24 = (min((((arr_19 [i_6 - 1] [i_6 - 1]) - (arr_19 [i_6 - 1] [i_7 + 3]))), (arr_17 [i_6 + 4])));
                        var_25 *= ((((arr_23 [i_6 - 2] [6] [i_8 + 1]) > (arr_23 [i_6 + 1] [4] [i_8 + 2]))) ? (((arr_23 [i_6 + 3] [1] [i_8 + 2]) ? (arr_20 [i_6 + 2]) : (arr_23 [i_6 + 3] [4] [i_8 + 3]))) : ((max((arr_20 [i_6 - 2]), var_0))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_26 = var_11;
                        arr_40 [i_6 - 2] [i_10 + 3] [i_11] [i_6] = (var_11 * var_6);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_27 = (var_4 >= var_8);
        var_28 = (((var_10 && var_6) && (!var_10)));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                        {
                            arr_55 [i_15] [i_17] [i_17] [i_17] [i_18] [3] = (((arr_50 [i_16 - 2] [i_15] [i_16 - 2]) + ((((((arr_54 [i_14] [i_15] [i_15]) ? var_5 : var_6))) ? 3 : ((var_2 >> (var_7 - 11646624159027046746)))))));
                            var_29 = (min((((((max((arr_50 [i_14] [i_15] [i_16]), (arr_50 [i_14] [i_15] [i_16 - 2])))) ? (arr_47 [20] [i_16 - 2]) : ((((var_10 < (arr_44 [i_15])))))))), (((17848982477618740138 <= 18446744073709551604) & (max((arr_48 [i_14] [i_15] [i_16 - 1] [i_17]), var_5))))));
                        }
                        for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
                        {
                            var_30 = min((arr_56 [i_14] [i_14] [i_14] [i_17] [i_19]), var_6);
                            arr_58 [i_14] [i_14] [i_16] [1] [i_17] [i_15] [i_19] = ((((((arr_44 [i_16 + 1]) >> (((arr_44 [i_16 - 2]) - 15513122760219505332))))) ? ((-(arr_53 [i_15] [i_15] [i_16 + 1] [i_16] [i_16 - 2]))) : ((-(arr_51 [i_15] [i_14] [i_14] [i_15])))));
                            var_31 = ((min(((var_8 ? (arr_43 [i_14]) : var_7)), var_8)));
                        }
                        var_32 = (max(var_32, (((((((var_12 != (max(2153667046865932270, (arr_52 [i_14] [i_15] [i_17] [i_15]))))))) * var_7)))));
                    }
                }
            }
        }
        var_33 = (((((((var_2 ? var_12 : var_13))) | ((var_2 ? (arr_56 [i_14] [11] [i_14] [i_14] [i_14]) : var_1))))) ? (((((arr_47 [i_14] [i_14]) ? (arr_57 [23] [i_14] [23] [i_14] [i_14]) : (arr_49 [i_14] [i_14] [i_14]))) / (arr_44 [i_14]))) : (min((((arr_43 [i_14]) & var_7)), (min(var_9, var_4)))));
    }

    /* vectorizable */
    for (int i_20 = 3; i_20 < 17;i_20 += 1)
    {
        arr_61 [i_20] [i_20] = -var_1;
        var_34 = (arr_52 [i_20] [i_20 - 1] [4] [i_20]);
        var_35 |= ((((((arr_56 [i_20] [i_20 + 2] [i_20 - 2] [19] [8]) << (((arr_44 [i_20]) - 15513122760219505373))))) ? (arr_54 [i_20 - 1] [12] [i_20 + 2]) : ((-26532 ? 3924321470556634976 : var_9))));

        for (int i_21 = 1; i_21 < 16;i_21 += 1)
        {
            var_36 = ((var_12 ? var_4 : (arr_46 [0])));
            var_37 = (((((arr_46 [8]) / 603481501)) + var_3));
        }
    }
    for (int i_22 = 0; i_22 < 18;i_22 += 1)
    {
        arr_68 [i_22] [11] = (((min(((((arr_47 [i_22] [i_22]) < var_11))), (((arr_66 [8]) - (arr_50 [i_22] [i_22] [i_22]))))) >> (((((arr_32 [i_22] [i_22] [i_22] [i_22]) & (arr_28 [i_22]))) - 3648508903543154815))));
        var_38 = (((var_4 <= var_13) ? ((max((arr_67 [i_22] [i_22]), (arr_67 [i_22] [i_22])))) : ((var_13 ? (arr_66 [i_22]) : var_8))));
        var_39 = (max((11082924451473579880 * 18446744073709551613), (((((var_0 ? var_4 : (arr_30 [i_22] [i_22])))) + (max(var_5, var_13))))));
        var_40 = ((((max((max((arr_42 [i_22]), var_5)), var_2))) ? ((((var_6 > (min(var_2, var_12)))))) : (max((arr_38 [i_22]), var_0))));
    }
    var_41 = ((var_10 / var_1) ? ((min(var_11, var_1))) : var_9);
    #pragma endscop
}
