/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = ((min(var_3, -29674)));
    var_17 *= 69;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [6] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_18 = ((var_1 ? ((var_6 & (arr_6 [i_2] [1]))) : var_6));
                var_19 = (arr_2 [i_0]);

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 *= (arr_0 [i_0]);
                    arr_12 [i_1] [i_2] [i_1] [i_1] = var_4;
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_21 = ((~(arr_14 [i_4] [i_4] [i_4] [i_4] [i_4])));
                    arr_17 [i_1] = 29674;
                }
            }
            var_22 = (((arr_7 [i_1] [i_0]) * (!1131377932)));
            var_23 = ((((var_3 ? var_12 : var_11)) >= var_9));
            arr_18 [6] [i_1] [6] &= (arr_16 [14] [i_1] [i_0] [i_0] [12]);
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_21 [i_5] = (15104 / var_8);
            arr_22 [i_0] [i_5] [i_0] = (var_0 - 1087726033);
            var_24 = (max(var_24, (arr_2 [i_0])));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = var_7;
            var_26 = 1540622561;
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_27 [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_0] [i_0]) ? var_12 : -1540622561));
            var_27 = (min(var_27, ((((var_2 + 2147483647) >> (var_6 + 11921))))));
            var_28 &= ((var_3 <= (~29674)));
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = var_7;
        var_29 = var_4;
        var_30 = var_10;
    }

    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        arr_34 [i_9] = (min(((+(((arr_33 [i_9 - 1] [16]) ? 46602 : var_1)))), var_10));
        var_31 = var_2;
        var_32 = var_14;
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_33 = 1152921504338411520;
        var_34 = (max(var_34, var_13));
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        arr_41 [i_11] = (min((((!((min(29674, 520192)))))), (min((((!(arr_28 [i_11])))), (min(var_0, var_10))))));
        var_35 += ((var_12 >> ((((((var_1 ? 29674 : var_7)) - var_11)) + 23663))));
    }
    #pragma endscop
}
