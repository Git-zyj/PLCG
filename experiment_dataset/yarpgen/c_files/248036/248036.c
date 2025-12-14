/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        var_11 = (((arr_3 [i_0] [i_1]) | 4262535833));
                        var_12 = 3596415745;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_13 = (arr_7 [i_0] [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_4] = ((arr_2 [i_2] [i_0]) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_1]) : (arr_11 [i_0] [i_1] [i_2] [i_4] [i_1]));
                    }
                    var_14 = (max(var_14, (arr_4 [i_0])));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_15 = max((max((min((arr_3 [i_0] [i_0]), (arr_18 [i_6] [i_5] [i_1] [i_0]))), 0)), (arr_8 [i_0] [i_1] [i_5]));
                        var_16 = (((arr_2 [i_5] [i_6]) ? (((arr_0 [i_0] [i_1]) + (arr_0 [i_0] [i_0]))) : ((((!(arr_21 [i_0] [i_0])))))));
                        var_17 = (!((max(-3648982689415272657, (((1 && (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));

                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            var_18 ^= ((((arr_24 [i_0] [i_1] [i_5] [i_6]) / (min((arr_12 [i_0] [i_1]), (arr_12 [i_0] [i_6]))))));
                            arr_27 [i_0] [i_5] [i_5] [i_5] [i_7 + 1] [i_7] &= (15699440682754429110 | 32767);
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_31 [i_0] [i_5] |= var_9;
                        var_19 = (arr_3 [i_0] [i_5]);
                        arr_32 [i_8] [i_1] [i_1] [i_0] = ((-(arr_22 [i_8] [i_1] [i_1] [i_0])));
                        var_20 = (((arr_7 [i_8] [i_8 - 1]) % (arr_21 [i_8] [i_1])));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_36 [i_1] [i_1] [i_1] = ((!(arr_11 [i_0] [i_1] [i_5] [i_8 + 3] [i_1])));
                            arr_37 [i_1] [i_8 + 3] [i_8] [i_5] [i_1] [i_1] [i_1] = ((((arr_30 [i_0] [i_1] [i_5] [i_9]) >> (-110 + 134))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_21 = (i_1 % 2 == zero) ? ((((((min((arr_28 [i_0] [i_1] [i_0] [i_0]), (arr_28 [i_10] [i_1] [i_1] [i_0]))) + 9223372036854775807)) >> (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? ((var_10 ? 1 : (arr_13 [i_0] [i_1] [i_5] [i_10]))) : ((max(var_3, var_3)))))))) : ((((((((min((arr_28 [i_0] [i_1] [i_0] [i_0]), (arr_28 [i_10] [i_1] [i_1] [i_0]))) - 9223372036854775807)) + 9223372036854775807)) >> (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? ((var_10 ? 1 : (arr_13 [i_0] [i_1] [i_5] [i_10]))) : ((max(var_3, var_3))))))));
                        arr_41 [i_0] [i_1] [i_1] [i_10] = (min((arr_1 [i_5] [i_1]), (1 / -8652739745013576455)));
                    }
                    arr_42 [i_1] = -18446744073709551615;
                    arr_43 [i_5] [i_5] [i_5] [i_0] |= (arr_7 [i_5] [i_0]);
                }
                arr_44 [i_0] [i_1] [i_1] = (((((arr_25 [i_0]) * (arr_25 [i_0])))) / 32431455);

                /* vectorizable */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_47 [i_1] [i_1] = ((!(var_0 | 17)));
                    var_22 -= ((arr_17 [i_0] [i_1]) ^ ((var_6 ? 4294967292 : (arr_8 [i_0] [i_1] [i_11]))));
                    var_23 = (((arr_8 [i_0] [i_0] [i_0]) & (arr_45 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_50 [i_1] [i_1] [i_12] [i_0] = ((var_4 ? var_3 : 1));
                    arr_51 [i_0] [i_1] [i_0] = (((arr_0 [i_12] [i_1]) % (arr_34 [i_0] [i_1] [i_12] [i_1] [i_12] [i_1] [i_1])));
                    arr_52 [i_1] [i_1] [i_1] [i_1] = (((arr_7 [i_0] [i_1]) % (1449666083 != 4169290550)));
                }
                var_24 = (min(var_24, 1));
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_56 [i_13] [i_13] = (((arr_54 [i_13]) % (arr_54 [i_13])));
        var_25 = (arr_55 [i_13] [i_13]);
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_26 = 1;
        arr_59 [i_14] = (arr_58 [i_14] [i_14]);

        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_27 += ((~((4169290550 ? -1954700723546880316 : 1))));
            arr_62 [i_14] [i_15] [i_14] = (((((arr_57 [i_15] [i_14]) + 2147483647)) >> (var_9 - 674928121)));
        }
        for (int i_16 = 3; i_16 < 17;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_28 = var_10;
                arr_70 [i_16] = (-(((arr_60 [i_16] [i_16 - 3] [i_16]) + (arr_67 [i_16 - 1] [i_16] [i_16] [i_16]))));
            }
            arr_71 [i_16] [i_16] = (arr_64 [i_16] [i_16 + 1] [i_16 - 1]);
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_29 = (((arr_81 [i_14] [i_18] [i_18] [i_19] [i_20] [i_21]) == var_1));
                            arr_84 [i_14] [i_18] [i_19] = min(var_5, (arr_54 [i_14]));
                            var_30 = ((-(arr_69 [i_14] [i_18] [i_19])));
                        }
                    }
                }
            }
            var_31 = ((+(max((arr_67 [i_14] [i_14] [i_14] [i_14]), (arr_76 [i_18])))));
        }
    }
    var_32 = var_3;
    #pragma endscop
}
