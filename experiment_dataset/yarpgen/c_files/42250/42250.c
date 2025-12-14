/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(0, 127));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_1 [i_0 - 3])));
            var_20 = (((arr_4 [i_0] [i_0] [i_1]) / (((arr_0 [i_0] [i_0]) ? (arr_1 [i_1]) : (arr_3 [i_0] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] = (~(((arr_6 [i_0] [i_0 + 3] [i_0]) - (arr_6 [i_0] [i_0 - 2] [i_0]))));
            var_21 = ((-(arr_3 [i_0 - 2] [i_0 + 3])));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_22 = (((-(arr_2 [i_3]))));
                arr_10 [i_0] = (max((((!(((~(arr_4 [i_0 - 2] [i_2] [i_3]))))))), (~174)));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_2] [i_3] [i_4] [i_5] = (((min((arr_13 [i_5] [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]), ((1022932242 ? 174 : 2147483642)))) * ((-(arr_0 [i_0] [i_2])))));
                            arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] = ((-(((arr_14 [i_4 - 2] [i_2] [i_3] [i_0 - 1] [i_5]) << (arr_14 [i_4 - 2] [i_2] [i_0] [i_0 + 3] [i_5])))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_4 + 1] [i_0 + 3]);
                        }
                    }
                }
                arr_19 [i_0] [i_2] = (min(1, (((arr_3 [i_0 + 1] [i_2]) ? (arr_3 [i_0 - 1] [i_2]) : (arr_3 [i_0 - 2] [i_2])))));
                var_23 = ((-(((((~(arr_3 [i_3] [i_3])))) ? ((~(arr_2 [i_0]))) : (arr_12 [i_0] [i_2] [i_3] [i_3] [i_3] [i_3])))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                arr_24 [i_6] [i_2] = -0;
                var_24 = (arr_1 [i_2]);
                var_25 += (+-379288268);
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_27 [i_7] = (arr_21 [i_7] [i_7] [i_7] [i_7]);
        arr_28 [i_7] [i_7] = ((arr_26 [i_7] [i_7]) % (((arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_5 [i_7] [i_7]) : (arr_9 [i_7] [i_7] [i_7] [i_7]))));
        var_26 = (((arr_2 [i_7]) ? 12140 : (arr_0 [i_7] [i_7])));
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        arr_32 [i_8] = ((((arr_14 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1]) ? (arr_14 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 2]) : (arr_14 [i_8 + 1] [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 2]))));
        arr_33 [i_8] = ((+(((arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) + ((((arr_29 [i_8]) != (arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
        var_27 = ((!((((((-(arr_14 [i_8] [i_8] [i_8] [i_8] [i_8])))) * (arr_3 [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_28 = ((!(arr_6 [i_9] [i_9] [i_9])));
        arr_37 [i_9] = ((-(((arr_8 [i_9] [i_9] [i_9]) ? (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_5 [i_9] [i_9])))));
    }
    var_29 = (((-var_10 | -var_4) >= ((~(max(var_6, var_5))))));
    #pragma endscop
}
