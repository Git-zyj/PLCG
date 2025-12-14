/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((6 >> (var_9 - 802167222501056563))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_0 [i_0]) <= ((-(arr_0 [i_0]))))))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_18 = (min(var_18, ((max((min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))), (min((arr_1 [i_0 - 1]), var_2)))))));
            var_19 = ((var_3 < 242) | (arr_0 [i_1 - 2]));
            arr_5 [i_0] [i_0] [i_0] = ((((arr_3 [i_0]) / (arr_3 [i_0]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = (max(var_20, 664197991));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = (min(var_21, (~3)));
                arr_12 [i_0] [i_0] [i_0] = ((((((arr_6 [i_0] [i_2] [i_0]) - 2184))) ? (arr_0 [i_0]) : ((-(arr_7 [i_0] [i_0])))));
                arr_13 [i_0] [i_2] [i_3] [i_2] = (arr_10 [i_0 + 1] [i_0 - 3] [i_0]);
            }
            var_22 = ((var_13 ? var_6 : (var_7 < var_13)));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = (-32761 && var_9);
        var_23 = (min(var_23, (((((((arr_3 [8]) + var_14))) ? 0 : var_8)))));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] = ((5968 - (max((arr_14 [i_5 + 2]), (arr_1 [i_5])))));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_24 *= (((var_0 / (arr_25 [i_5 - 1]))));
            var_25 = (((((((32757 | (arr_9 [1])))))) != var_14));
            arr_26 [i_5] [i_5] [i_5] = var_10;
            var_26 ^= 1876125504;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_30 [i_7] [5] [5] = (min((+-31498), (((!(((1 ? 5968 : -9))))))));
            var_27 = (min(var_27, (((min(16, 32752))))));
            var_28 = (min(31478, var_11));
        }
        var_29 = (((((min(((((arr_14 [i_5]) <= var_2))), (arr_9 [18]))))) + (min(((var_11 ? 2360023923 : var_15)), 249))));
        arr_31 [i_5] = var_4;
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_36 [i_8] &= (-1 & var_6);
        arr_37 [12] [12] = var_11;
        arr_38 [i_8] = ((9223372036854775807 - ((((!(arr_11 [4] [i_8] [i_8] [i_8])))))));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        arr_42 [i_9] = (~(min(((-(arr_35 [i_9] [i_9]))), (~32752))));
        arr_43 [i_9] = ((!(var_3 / var_0)));
    }
    #pragma endscop
}
