/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 ^= -8160839003187629646;
        var_14 = ((122 ? 94 : 66));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (((arr_4 [i_1] [18]) >> (-66 + 128)));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_15 ^= (((var_5 ? var_0 : var_8)));
                    var_16 = (~var_2);
                    var_17 |= arr_5 [i_1 + 3] [i_1 + 1];
                }
                var_18 = (min(var_18, (((~(arr_7 [i_2]))))));
                var_19 = (~-55);
                var_20 = ((var_3 | (((arr_5 [i_1] [i_2 - 1]) >> (1125899906842624 - 1125899906842595)))));
            }

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_21 = ((!(((arr_10 [i_1] [i_2] [i_2]) >= (arr_10 [i_1] [i_1] [i_1 - 1])))));
                var_22 = ((-(arr_15 [i_1 - 2] [i_1 - 1] [i_1 + 2])));
            }
            var_23 = (arr_15 [i_1] [i_2 - 1] [i_2 - 1]);
        }
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            var_24 = (arr_7 [i_1 - 2]);
            var_25 = (arr_11 [i_1] [i_1 + 3] [i_6 - 1] [i_6]);
            var_26 = (483539272 != 2924);
            arr_18 [i_1] [3] [i_1] = (((arr_4 [i_1] [i_1]) > (min((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_6 - 2] [3])))));
        }
        arr_19 [i_1] [i_1 + 1] = ((19 ? -12928 : 63));
        arr_20 [i_1] [i_1] = 192;
    }

    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        var_27 = ((((arr_23 [i_7 + 2]) ^ (arr_22 [i_7 + 1]))));
        arr_24 [i_7 + 3] = ((((+((var_7 ? (arr_21 [i_7 + 1]) : var_10)))) >> ((((((min((arr_21 [1]), (arr_22 [i_7 + 1])))) ? ((min(65535, (arr_23 [i_7])))) : -63)) - 3334))));

        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_28 = -95;
                    var_29 &= (((arr_30 [i_7 + 1] [i_8] [i_8] [i_9] [i_10] [i_8]) && (arr_21 [i_8 + 1])));
                    arr_33 [i_10] = (arr_23 [i_7 + 2]);
                }
                var_30 = var_11;
            }
            var_31 ^= (arr_31 [i_7] [i_8] [i_8] [i_7] [i_8]);
            arr_34 [i_7 + 2] [i_7] [i_8] = (arr_30 [i_7 + 2] [i_7 + 2] [i_8] [i_8] [i_8 + 2] [5]);
        }
    }
    #pragma endscop
}
