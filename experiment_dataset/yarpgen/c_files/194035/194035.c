/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(var_5, (((var_9 ? var_12 : var_9))))))));
    var_15 = (((58737 - var_6) * ((((!58737) / 58737)))));
    var_16 += (min((((((var_13 ? var_1 : var_4))) ? (var_3 | var_2) : 8339572547067910209)), ((((var_5 + 2147483647) << (((((min(var_12, var_5)) + 1327382489)) - 29)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_10 ? ((var_10 ? var_13 : var_3) : (!var_12)))));
        arr_4 [i_0] = ((((arr_0 [i_0 - 1]) ? ((var_1 ? var_12 : (arr_1 [i_0]))) : (min((arr_0 [i_0]), var_8)))));
        arr_5 [i_0] = (min(((var_0 ? 2408207776279053199 : var_0)), 4502864795215214645));
        arr_6 [i_0] |= var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = var_8;
        var_18 ^= (((arr_7 [i_1]) ? (((var_10 ? 65535 : (arr_8 [3])))) : (((arr_7 [i_1]) ? 4952268947226203222 : var_5))));
        var_19 = (max(var_19, (10319191473730565318 | 1850099738798027962)));

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_13 [19] [i_1] [13] = ((var_2 ? (arr_9 [i_2 + 1]) : (arr_10 [12])));
            var_20 = ((((var_5 ? var_5 : var_0)) > 47435));
            var_21 = (((arr_11 [i_2 - 1] [i_2]) ? (arr_11 [i_2 + 1] [i_2]) : var_11));
            arr_14 [i_1] = (((14766094122077100386 ? 2408207776279053199 : var_10)));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_18 [i_1] |= var_3;
            var_22 += (((arr_8 [i_3]) + -8691067637192769144));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_23 = ((((arr_9 [i_1]) + var_1)));
            arr_22 [i_1] &= (((arr_11 [i_4] [i_1]) << (((arr_16 [i_4] [i_1] [i_1]) - 424435854))));
            var_24 |= (((((var_8 ? var_10 : 8339572547067910207))) ? var_12 : -2408207776279053201));
        }
        arr_23 [i_1] [i_1] = (((((-32 + (arr_20 [i_1])))) ? var_2 : ((var_12 ? (arr_21 [i_1] [i_1]) : var_3))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_25 *= ((2147483647 ? (!var_12) : (var_0 / var_1)));
        arr_26 [i_5] [i_5 + 3] = (6458588464391631475 * 0);
    }
    var_26 += ((1380331234524860497 ? (min(var_12, -10307035864232984516)) : var_6));
    #pragma endscop
}
