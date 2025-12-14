/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_10;
        var_19 = (max(var_19, (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (127 || (((var_1 ? -2027564245 : (arr_0 [1] [i_1])))));
        arr_7 [i_1] [10] = ((var_12 + (arr_4 [i_1] [i_1])));
        arr_8 [i_1] = 127;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] |= 129;
        arr_12 [10] = (((((((arr_5 [i_2]) <= (arr_5 [i_2]))))) / var_14));

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            arr_16 [i_3] [i_3] = (-2147483633 & 8191);
            arr_17 [i_2] = var_2;

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_20 [5] [i_3] = ((-155 + (arr_13 [i_3])));
                arr_21 [18] [i_3 - 1] [24] [i_3] = ((!((((arr_15 [i_3] [i_3 + 1]) ? 7317 : (arr_15 [i_3 - 2] [i_3 - 1]))))));
                var_20 *= (((-((129 + (arr_15 [17] [0]))))));
                arr_22 [i_4] = ((-9223372036854775807 - 1) | 32767);
                var_21 = (((min((~3660290023), -8920)) >> ((((((2147483630 ? (arr_2 [i_3 - 1] [16]) : 1))) != ((2109825785 ? -8905 : 17516097242304883900)))))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_25 [i_5] [i_3] [i_2] [i_2] = (((arr_14 [i_2] [i_3 - 1]) ? var_17 : (((!(1 != 8064))))));
                var_22 = ((((min((arr_23 [i_5]), (arr_2 [i_3 + 1] [i_3 - 2])))) / var_14));
                arr_26 [i_2] [i_2] [11] [i_5] |= ((((~(2088960 != 1650044022))) + (arr_18 [i_2])));
            }
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_23 = (~var_16);
                arr_32 [i_7] &= 1;
            }
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                arr_35 [i_2] [i_6] [i_8] [1] = (arr_23 [i_6]);

                /* vectorizable */
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    arr_39 [3] [i_8] [3] [2] = arr_37 [i_2] [i_6] [i_9 - 1] [i_8 + 2] [i_8] [i_6];
                    var_24 = (arr_33 [i_2] [i_2] [i_2]);
                    var_25 = (arr_29 [i_2]);
                    arr_40 [i_9] [i_9] [i_9] [i_9] = 8922;
                }
            }
            var_26 = (((min(1758102621, ((min((arr_30 [i_2] [i_2] [i_2] [i_2]), 255))))) & ((((-119 || ((((arr_29 [i_6]) ? var_13 : (arr_19 [6] [i_6] [6] [6]))))))))));
            arr_41 [17] [1] = -5189252125018883923;
            arr_42 [i_6] = ((((max((arr_10 [i_2] [i_6]), (arr_24 [i_2] [i_6] [i_6] [i_2])))) || (arr_2 [i_6] [i_6])));
        }
        for (int i_10 = 4; i_10 < 23;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_27 = (arr_43 [i_2] [i_2] [3]);
                        var_28 = (min(var_28, ((((arr_31 [i_2] [i_2] [i_2] [i_2]) ? (arr_49 [i_2] [i_10 - 2] [i_11] [i_10 - 2] [i_2]) : (arr_43 [24] [i_10] [i_10]))))));
                        arr_50 [i_11] = ((-845422522 ? 5189252125018883923 : 142));
                    }
                }
            }

            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                arr_54 [i_2] [i_13] = (((7800 + -5189252125018883923) != (arr_29 [i_10 - 3])));
                arr_55 [i_13] [i_10 - 1] [i_10 - 1] [i_13 + 1] = max(var_5, (((var_2 ? (arr_19 [i_13 - 1] [18] [i_10 - 1] [3]) : var_11))));
                arr_56 [i_13] [i_13] = (((arr_24 [i_10] [i_10 + 2] [i_10] [i_10 - 2]) != 5977860664984300312));
            }
        }
    }
    #pragma endscop
}
