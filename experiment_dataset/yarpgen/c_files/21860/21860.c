/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_3 ? (-9223372036854775807 - 1) : var_4))) ? ((var_6 ? var_10 : (-9223372036854775807 - 1))) : ((var_4 ? var_6 : var_12))))) ? (max((-9223372036854775807 - 1), (-9223372036854775807 - 1))) : var_1));
    var_15 = var_12;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = ((-1824313605 ? 575334852396580864 : var_2));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1] = ((var_10 ? ((((arr_1 [i_0] [1]) ? 1930751339 : var_3))) : ((var_4 / (arr_2 [i_1 + 2])))));
            arr_7 [i_1] [i_1] = var_5;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_17 = var_12;
            arr_11 [i_0] [i_2] = (arr_9 [i_0] [i_0] [9]);
            var_18 = (arr_3 [1] [i_2] [i_2]);
            var_19 = (((arr_2 [i_0 - 1]) ? (arr_8 [i_2]) : (9223372036854775807 ^ -951315905)));
            var_20 = ((-951315905 ? (!var_9) : var_2));
        }
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = (max((((!40) ? -9223372036854775807 : (arr_12 [i_3]))), ((((((var_13 ? (arr_13 [i_3] [6]) : var_2))) ? (-119 * var_1) : var_10)))));
        arr_14 [i_3] = (((((((215 && (arr_12 [i_3])))) != (arr_13 [i_3] [i_3]))) ? var_10 : -1));
        arr_15 [i_3] [i_3] = var_8;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((((!-119) << (((~var_13) + 12)))));
        var_22 = (min(var_22, 116));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_23 [i_4] [i_4] = ((var_7 ? (arr_13 [19] [i_5]) : var_7));
            var_23 *= ((-((((max(1, 215))) * ((-(arr_12 [2])))))));
            arr_24 [i_4] = ((((-57 + ((-(arr_12 [1])))))) ? ((((!(arr_22 [i_5] [i_5] [1]))))) : (((arr_16 [11]) ? ((1755875047 ? var_1 : (arr_19 [i_4]))) : (var_8 < 1))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = (!-1755875048);
        arr_27 [i_6] = (((arr_17 [i_6]) ? (arr_17 [15]) : (arr_20 [i_6] [i_6])));
        var_25 = (((arr_25 [i_6]) ? -95 : var_7));
        arr_28 [i_6] [i_6] = (((arr_12 [22]) ? (arr_12 [22]) : var_8));
    }
    var_26 = ((((((34 ? 34 : 9223372036854775789)))) ? ((((var_11 ? 4132304743082086733 : var_9)) + var_3)) : (!var_3)));
    #pragma endscop
}
