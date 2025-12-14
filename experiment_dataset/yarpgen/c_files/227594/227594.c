/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 *= (arr_1 [i_0]);
        var_12 = (min(var_12, ((((arr_1 [i_0]) < (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = (max(var_13, (~var_7)));
        var_14 = (arr_3 [i_1]);
        var_15 = (!-1515777562);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] = (arr_2 [i_1] [i_2]);

            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_3] [i_2] [i_1] = (arr_1 [i_3 + 1]);
                var_16 = (min(var_16, (((((((arr_5 [i_3]) ? var_4 : (arr_2 [i_1] [i_3 - 2])))) ? (arr_3 [i_1]) : (var_1 == var_7))))));
                var_17 = (((arr_4 [i_3 - 2] [i_3]) || (((var_7 ^ (arr_3 [i_1]))))));
            }
            var_18 |= (((arr_4 [i_1] [i_2]) * (arr_4 [i_1] [i_2])));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_19 = ((!(arr_14 [i_1])));
                var_20 = (var_2 || var_10);
                var_21 = arr_8 [i_1] [i_1];
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_22 ^= arr_4 [i_5] [i_2];

                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 *= (~-1515777564);
                        var_24 = (min(var_24, ((((arr_17 [i_5 + 3] [i_2] [i_5 + 3] [i_6] [i_6 + 1]) >> (var_4 + 818534940))))));
                        var_25 = (min(var_25, (((+(((arr_5 [i_6 - 1]) / var_9)))))));
                        var_26 = (arr_7 [i_5] [i_5 - 1] [i_6 + 3]);
                    }
                    var_27 = (min(var_27, (arr_2 [i_1] [i_1])));
                    var_28 = (min(var_28, ((((arr_10 [i_5 - 3] [i_6 + 1]) * (arr_10 [i_5 + 3] [i_2]))))));
                }
                var_29 = (min(var_29, ((((((arr_3 [i_1]) ^ var_6)) * var_0)))));
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_30 = ((-(arr_8 [i_8] [i_1])));
            var_31 *= var_1;
            arr_26 [i_1] = (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        arr_27 [i_1] [i_1] = (((arr_11 [i_1] [i_1] [i_1]) ? var_7 : var_10));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_32 *= (max(2405528852, ((max(6, (2147483647 <= -51))))));
        arr_30 [i_9] &= (1515777556 / -1515777574);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_33 = (min(var_33, (((~(arr_29 [i_10] [i_10]))))));
        var_34 = (((var_7 + 2147483647) >> (((arr_11 [i_10] [i_10] [i_10]) - 60508))));
        var_35 *= (arr_16 [i_10] [i_10]);
    }
    var_36 = (max(var_36, (((var_4 | (!var_7))))));
    #pragma endscop
}
