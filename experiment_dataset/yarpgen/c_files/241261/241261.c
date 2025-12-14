/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_1] [i_1] &= -191;

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = var_7;
                    arr_11 [2] [2] [i_2 - 2] [i_2 - 2] = -var_12;

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_16 = (((arr_2 [i_1] [i_3]) == (arr_12 [i_2 - 2] [i_3] [i_4 - 1])));
                        arr_14 [i_0] [11] [2] [i_3] = (((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [i_1]) : 16502808026572117553));
                        var_17 = ((101 ? 1 : 16502808026572117553));
                        var_18 *= ((arr_0 [13] [i_1]) ? var_2 : (arr_0 [i_4 + 1] [i_0]));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0] [1] [i_2] [i_3] [i_5] = (((arr_8 [i_0] [i_2]) ? ((12769627803228105165 ? 12161936950166293222 : 15)) : 1));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(var_5 ^ 1)));
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (arr_2 [2] [i_1])));
                        var_20 = (arr_17 [i_0] [i_1] [i_2] [i_0] [i_6 - 1]);
                        arr_23 [i_0] [i_1] [i_1] [i_6] [i_0] = (var_7 ? 18446744073709551614 : ((((arr_2 [i_2] [1]) ? 154 : var_14))));
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_21 = var_3;
                        arr_28 [i_7] [i_7] [16] [i_2 - 2] [i_3] [i_7 - 3] = 49600;
                    }
                    var_22 = (!123);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_23 = (min(var_23, ((var_7 ? var_5 : (arr_29 [1] [i_2 - 2] [i_2 - 2] [1])))));
                    var_24 = (min(var_24, ((((arr_2 [i_0] [i_1]) | (((arr_4 [10] [16]) | 1)))))));
                }
            }
            var_25 &= min(var_4, (89 & 12161936950166293222));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            arr_34 [i_9] = 1;
            arr_35 [i_0] [i_0] [i_9] = ((var_5 ? var_1 : (var_3 + 1)));
        }
        var_26 &= (max(-12334412513013088134, (arr_20 [i_0] [1] [i_0] [1] [i_0])));
    }
    var_27 = var_7;
    var_28 = (max((1 * 0), (max(((12073583142778366132 ? 50244 : 12161936950166293228)), var_10))));
    #pragma endscop
}
