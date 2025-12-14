/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = ((var_3 ? ((((var_1 > (arr_1 [i_0 + 2] [i_0]))))) : (arr_0 [i_0] [i_0 + 2])));
        var_19 = (i_0 % 2 == zero) ? ((((arr_1 [i_0 - 1] [i_0]) < (((((arr_0 [i_0] [i_0]) + 9223372036854775807)) << (var_12 - 2170811213)))))) : ((((arr_1 [i_0 - 1] [i_0]) < (((((((arr_0 [i_0] [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (var_12 - 2170811213))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [13] = (min((max(var_16, (var_15 * var_0))), (((var_0 >= ((max((arr_4 [i_1 + 1]), var_9))))))));
        var_20 -= ((((min((arr_2 [i_1 - 1]), ((-(arr_2 [i_1 - 2])))))) < (min(23276, var_5))));
        var_21 = ((var_0 & (arr_2 [i_1 + 3])));
        arr_6 [i_1] = (!10793476317138431950);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_22 = (arr_9 [i_2]);
            var_23 = ((((var_16 <= (arr_9 [i_3]))) ? (((((var_15 ? var_2 : var_8))) / (arr_9 [i_2]))) : var_17));
            var_24 = (((var_0 ? 3195255307 : (var_14 ^ 52149))));
            var_25 ^= ((+(min((arr_11 [i_3] [i_3] [i_2]), var_1))));
        }
        arr_13 [18] = (min(((var_0 ? (arr_12 [i_2] [i_2] [i_2]) : (arr_7 [i_2]))), (arr_7 [i_2])));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_26 = ((!((!(arr_14 [i_4 - 1])))));
        var_27 = ((var_12 + ((((var_8 >= var_16) | (arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1]))))));
        var_28 = (arr_11 [i_4] [i_4] [i_4]);
        var_29 = (min(var_29, (((((~(var_11 <= var_11))) | 218)))));
    }
    var_30 = var_17;

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_31 = (((-(arr_21 [13] [13]))));
            var_32 &= ((3195255286 | -1806198731617914914) ? ((min(((-121 ? 7999164937041191408 : (arr_21 [i_6] [i_6]))), ((max((arr_20 [12] [i_5] [i_6]), var_17)))))) : var_5);
            var_33 = var_7;
        }
        arr_22 [i_5] = var_4;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_26 [i_7] = (+(max((arr_25 [i_7]), (arr_24 [i_7]))));
        arr_27 [i_7] [i_7] &= ((var_11 < (~var_16)));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_34 = (arr_28 [i_7] [i_8] [i_7]);
            arr_32 [i_7] [i_8] = (((-(arr_24 [i_7]))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                arr_35 [16] [20] [i_9] = (((arr_34 [i_7] [i_8] [i_9]) ? (arr_31 [i_7] [i_7]) : (arr_34 [i_7] [i_8] [i_9])));
                var_35 = 1;
                var_36 = (max(var_36, (arr_23 [i_7])));
                var_37 = (((var_16 + 2147483647) >> (((arr_33 [i_8] [i_9]) - 36352))));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
            {
                arr_38 [i_10] [i_8] [i_8] [i_10] = (((((arr_24 [i_8]) - var_5)) | var_7));
                arr_39 [i_7] [9] [i_10] = ((!(((+(((arr_23 [i_7]) ? var_0 : var_1)))))));
                var_38 = min(((-((var_2 ^ (arr_25 [i_7]))))), var_17);
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                arr_42 [i_7] [i_7] [19] [i_7] = (((arr_31 [i_8] [i_8]) ? (arr_31 [i_8] [i_8]) : 100));
                var_39 = (max((((var_10 || (arr_31 [i_7] [i_8])))), (max((224 || 13393), var_16))));

                /* vectorizable */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    arr_47 [i_8] [i_8] [i_8] = (arr_34 [i_12] [i_7] [i_7]);
                    arr_48 [i_7] [i_7] [i_7] [i_7] = (arr_40 [1]);
                }
            }
        }
    }
    #pragma endscop
}
