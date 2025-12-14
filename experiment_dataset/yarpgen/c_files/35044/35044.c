/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(var_8, var_12));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = var_16;
        arr_2 [i_0] = (arr_0 [9] [1]);
        var_21 = (max(var_21, ((min((min(-80, -44036364)), var_8)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (arr_3 [i_1] [6]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_2] = (((arr_3 [i_1] [i_1]) >> (((arr_5 [i_1] [i_2] [i_1]) - 74))));
            var_23 = (min(var_23, 53));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_24 = (((arr_3 [i_1] [i_3 - 1]) ? (arr_9 [i_1] [i_1]) : (arr_5 [i_3 + 1] [i_3 - 1] [i_3 - 2])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_3] = (arr_14 [i_3] [i_3] [i_4]);
                        var_25 = (9223372036854775807 ? (arr_10 [i_5] [i_3]) : (arr_13 [i_3 + 1] [i_5 + 1]));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_26 = (min(var_26, ((7532683017991775417 && (arr_10 [i_6] [i_1])))));
            var_27 = arr_11 [i_1] [i_1] [i_6] [i_6];
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_25 [i_8] [i_1] [i_8] = (7886614537721449676 <= 1);
                        var_28 *= (((arr_12 [i_1] [i_1] [i_7 + 1] [i_6]) / (arr_4 [i_7 + 2])));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_29 = (((arr_21 [0] [i_7] [i_7 + 2]) ? (arr_5 [i_6] [i_6] [i_7 + 1]) : (arr_5 [i_6] [i_6] [i_7 + 1])));
                            var_30 = (arr_8 [i_1] [i_6]);
                            var_31 = (!9223372036854775792);
                            arr_29 [i_1] [i_6] [i_7] [i_8] [i_8] [i_1] [9] = (((-9223372036854775807 - 1) ? -2147483628 : -9223372036854775801));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_32 = (((arr_3 [i_7 + 2] [i_7 + 2]) ? (arr_11 [i_1] [i_6] [i_7] [i_8]) : (arr_19 [i_7 + 3])));
                            var_33 = (-2147483635 / 9223372036854775807);
                            arr_33 [i_1] [i_6] [i_8] [i_8] [i_10] = arr_14 [i_8] [i_8] [i_8];
                            arr_34 [i_1] [5] [i_8] [i_8] [i_10] = (arr_24 [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_34 |= ((((var_3 >= (var_3 | var_4))) ? var_0 : ((var_3 ? var_4 : ((var_1 ? var_5 : var_8))))));
    var_35 = (!var_3);
    #pragma endscop
}
