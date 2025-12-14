/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((9223372036854775807 ? -4617423490321617068 : 2147483634));
    var_20 = (min(var_0, var_6));
    var_21 = ((var_10 ? -1 : (min(127, 469762048))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (~-41);
        var_22 = arr_2 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_23 ^= (((arr_1 [i_1 - 2]) == ((((arr_0 [i_1]) <= var_2)))));
        var_24 = (min(var_24, (((((((arr_1 [i_1]) & var_18))) ? (-1 || var_18) : -1505278707)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                var_25 = (arr_6 [i_1] [i_2] [i_3 + 2]);
                var_26 = (((((586262356 ? -6241064531898792891 : -33))) && -127));
                arr_13 [i_1] [i_2] [4] [i_1] = (((arr_12 [i_1 + 2] [i_1 + 1] [i_3 - 1] [i_1]) ? 2147483634 : 2147483634));
                var_27 = (-(arr_1 [i_1 + 1]));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] = var_18;
                            arr_24 [i_1] [i_2] = ((var_1 == (((arr_21 [i_1] [i_2] [i_4] [i_5] [i_6] [i_6]) / (arr_6 [i_1] [i_1] [i_1])))));
                            var_28 = (max(var_28, var_11));
                        }
                    }
                }
                var_29 = (min(var_29, (((-var_13 + ((-2147483634 ? 3560622451584166034 : -97)))))));
            }
            var_30 = ((var_11 ? var_15 : var_16));
            var_31 = (min(var_31, ((-(arr_14 [4] [i_1 - 2] [4])))));
        }
    }
    var_32 = (((var_2 + 9223372036854775807) << (((((((var_8 ^ var_10) | ((var_6 ? var_5 : var_12)))) + 33)) - 28))));
    #pragma endscop
}
