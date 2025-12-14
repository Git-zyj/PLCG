/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [0] &= var_15;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_8 [i_1] [i_0] [i_0] = ((((((((var_1 ? var_1 : var_19)) < (((var_1 ? (arr_5 [i_0 - 2] [i_0] [i_0 - 1]) : var_9))))))) + (arr_6 [i_0 - 2])));
            var_20 = (max(var_20, (arr_7 [i_0] [11] [11])));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_21 = (14336 | 14349);
                    var_22 ^= (((arr_2 [i_2 + 1]) >> (((arr_11 [i_0] [i_2 - 1] [i_3 + 1]) - 6220))));
                    var_23 = var_7;
                    var_24 = var_3;
                }
                var_25 += 16384;
            }
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                arr_19 [i_2] [i_2 + 1] [i_2] = var_8;
                var_26 += (65535 | 51193);
                arr_20 [i_2] = (arr_14 [i_0] [i_0] [i_0]);
            }
            var_27 = (max(var_27, ((max(-1092844221, var_7)))));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_28 = (((((!(arr_22 [i_6 + 1] [i_6 + 1])))) + (!-414131491)));
            var_29 ^= (((((((max((arr_1 [i_0]), (arr_9 [i_0 - 1] [i_0] [2])))) ? ((var_10 ? (arr_15 [i_0] [i_6]) : var_3)) : ((((arr_5 [i_0] [i_6] [i_6]) ? (arr_23 [i_0 + 1] [i_6]) : (arr_9 [i_0 + 1] [i_0] [i_6]))))))) ? -9223372036854775801 : (arr_1 [i_0])));
        }
        arr_25 [i_0] = (min((arr_22 [i_0 - 2] [i_0 - 2]), (((arr_4 [i_0] [i_0]) ? var_14 : (arr_4 [i_0 + 1] [i_0 - 2])))));
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        arr_28 [i_7] = (arr_26 [i_7]);
        var_30 = (((arr_26 [i_7 + 1]) ? -1382286710477314654 : (((((arr_26 [i_7]) == var_16))))));
    }
    var_31 = var_11;
    var_32 = (max((var_0 && var_12), (!-689149759)));
    var_33 = (min(var_33, var_11));
    #pragma endscop
}
