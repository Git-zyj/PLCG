/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [9]);
        arr_3 [8] = ((((min((arr_1 [i_0]), var_17))) ? ((((((var_8 ? var_3 : (arr_0 [i_0] [i_0])))) && var_18))) : (((((var_12 >> (var_6 - 2590890098)))) ? var_15 : ((min((arr_0 [1] [i_0]), var_15)))))));
        var_20 = (((((max(1, -537)))) / ((-(max(var_5, (arr_0 [i_0] [i_0])))))));
    }
    var_21 = (min((var_14 / var_3), ((~(max(var_2, var_0))))));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = (((-(arr_7 [i_1]))));
        arr_8 [i_1] = (((~-525) && ((((var_8 + (arr_4 [i_1])))))));
        arr_9 [i_1] [i_1] = (-(~var_18));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_2] = ((+(max(((((var_11 + 2147483647) >> (((arr_4 [i_1]) - 106))))), var_18))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_15 [i_3] [0] [i_1] [14] = ((((((arr_5 [i_2]) & var_15))) == var_5));
                arr_16 [i_2] [8] = ((-(!var_10)));
            }
            var_23 = (max(-var_16, (((var_0 - (arr_11 [1] [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_24 = (!1239);
                    arr_25 [i_5] [i_4] = ((var_6 ? (arr_24 [i_4] [i_4 - 1] [i_4 - 1] [15]) : (arr_22 [i_4 - 1] [i_4])));
                    var_25 += 1;
                    var_26 = var_19;
                }
                arr_26 [i_4] = (((!var_19) << var_3));
            }
            var_27 = ((~(((arr_17 [i_1] [i_1] [i_4]) ^ (arr_20 [i_1])))));
            var_28 = ((-(arr_6 [i_4])));
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_29 = var_5;
            arr_29 [i_1] &= (((!var_0) && -0));
            arr_30 [i_1] [i_7 + 1] [17] |= ((min(var_3, (((arr_19 [1] [12]) <= var_15)))));

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_30 = ((!(((~(((arr_28 [i_1] [2] [11]) << (((arr_31 [i_1] [i_7] [i_8] [i_7]) - 13808745981770974031)))))))));
                arr_33 [7] = ((var_19 >> (((arr_32 [i_1] [i_7] [i_8]) - 10355045799092789526))));
                arr_34 [i_1] [i_1] [9] = (((((arr_7 [i_7 + 1]) ^ (!var_3)))));

                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    arr_37 [i_1] [i_7] = ((+(((((arr_6 [5]) % (arr_7 [1])))))));

                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        arr_41 [5] [7] [i_10] [15] [7] = (min((max((((arr_23 [i_1] [i_8] [i_9] [i_10 + 2]) * var_5)), (arr_4 [i_1]))), ((min((min(var_2, var_11)), (((64295 ? -10520 : -525))))))));
                        arr_42 [i_1] [i_7] [i_8] [i_9] [i_10] [i_10] [12] = arr_20 [i_9];
                        arr_43 [i_1] [4] [i_10] = (arr_7 [i_1]);
                    }
                    arr_44 [i_1] [7] [i_1] [i_8] [i_9] = var_16;
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    arr_48 [6] [i_7 - 1] [i_11] [6] [i_11] = var_7;
                    arr_49 [i_11] [i_7 - 1] = ((arr_47 [i_11] [i_11]) & (arr_47 [i_11] [i_11]));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    arr_53 [i_1] [i_7] [17] [i_7] [1] [17] = var_16;
                    arr_54 [i_1] [i_7] [i_7] [i_8] [i_7] [i_12] = (var_3 % var_15);

                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        arr_59 [i_1] [i_13] [6] = arr_36 [i_7 - 1] [i_13 + 3] [i_13] [13];
                        var_31 = (arr_23 [i_13 + 3] [i_8] [i_1] [i_1]);
                    }
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    arr_62 [i_8] [1] [i_8] [i_14] = (max(((((arr_11 [i_1] [i_7] [i_1]) ? 127 : var_0))), ((((((arr_5 [9]) ? var_15 : var_14)) / (((arr_60 [i_1] [i_7 + 1] [i_8] [i_14] [i_14]) / (arr_17 [14] [i_7] [i_8]))))))));
                    var_32 = (max(var_32, var_1));
                }
            }
            var_33 ^= ((var_13 ^ ((var_11 + (arr_28 [i_1] [i_7] [i_1])))));
        }
    }
    #pragma endscop
}
