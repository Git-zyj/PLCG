/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = (arr_3 [i_1]);
            arr_6 [i_0] [i_0] [i_0] = var_6;
        }
        arr_7 [i_0] [i_0] = arr_0 [i_0];
        arr_8 [i_0] = (((~(arr_1 [i_0]))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_0] = (-9223372036854775807 - 1);
            var_14 = 2;
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = arr_13 [i_3];

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_4] = (+((var_7 >> (((arr_4 [i_4] [i_4]) / 1013217167)))));
            var_15 ^= ((((((arr_3 [i_3]) ? (arr_1 [i_3]) : (arr_1 [i_4])))) && (((-(((!(arr_14 [i_3] [i_3])))))))));
            var_16 = (max(((-(arr_3 [i_3]))), (((min((arr_0 [i_4]), 199))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_23 [i_3] = var_5;
            var_17 ^= ((var_3 ? (arr_2 [i_3] [i_3]) : 176));
            var_18 = (max(var_18, (((((var_2 ? (arr_20 [i_3] [i_3]) : (arr_14 [i_3] [i_3]))) * -var_6)))));
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_28 [i_3] [i_3] [i_3] = (((arr_3 [i_6 + 1]) != var_11));
                var_19 = (((arr_17 [i_6 - 2] [i_6 - 1] [i_6 - 2]) / (arr_19 [i_6 - 2])));
                arr_29 [4] [i_6] [i_7] = var_6;
            }
            var_20 -= (((-(arr_0 [i_6 - 2]))));
            arr_30 [i_3] [i_3] [i_3] = ((57 ? (((arr_9 [i_6 - 1] [i_6 + 1] [i_6]) ? (min((arr_21 [i_6]), 8634075203926440589)) : ((min((arr_27 [i_3] [5] [5] [i_3]), 1))))) : ((((min((arr_26 [i_3] [i_6] [i_6]), (arr_3 [i_3]))))))));
            var_21 ^= ((-((((var_4 && 2044) < (((arr_19 [i_3]) ? (arr_0 [i_3]) : 164)))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    var_22 -= ((+(((arr_9 [i_9 - 2] [i_9 - 3] [i_9 + 1]) & (arr_1 [i_3])))));
                    arr_37 [i_3] = ((-(((arr_24 [i_9 - 3] [i_9] [i_9 - 1]) ? 0 : var_6))));
                    arr_38 [i_3] [i_3] [i_3] [i_3] = (((-(arr_16 [i_9 - 1] [i_9 - 3] [i_9 - 2]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_42 [i_10] = var_4;
        arr_43 [i_10] = (((arr_1 [i_10]) & (arr_1 [i_10])));
        var_23 -= ((-1964798532134358293 ? (arr_2 [i_10] [i_10]) : var_5));
    }
    var_24 = var_5;
    var_25 = ((((5302712385952476511 ? ((var_13 ? var_11 : 63)) : var_9))) ? (((min(8388592, var_7)))) : (max((var_6 != var_13), (var_10 + var_6))));
    var_26 = (min(var_3, var_3));
    #pragma endscop
}
