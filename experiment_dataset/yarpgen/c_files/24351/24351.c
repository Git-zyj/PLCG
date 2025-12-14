/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 ^= 3409036460;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = ((var_0 != var_0) ? ((885930852 << (((arr_3 [i_1 + 1] [i_1 + 1]) + 28)))) : var_1);
            arr_4 [1] = (max(var_1, (arr_3 [i_0] [i_1])));
            var_14 = ((((((var_5 > (((4695990319733126805 / (arr_1 [i_1 + 3])))))))) & (min(var_6, 4695990319733126805))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 = ((arr_1 [i_2]) ? 885930835 : ((((max(var_1, 1039614746)) >> (-16384 + 16400)))));
            var_16 = (min(var_16, (((!((((arr_3 [i_0] [i_0]) ? (71 * var_0) : 3915540342444445461))))))));
            var_17 = (((max(((-98 ? 18446744073709551615 : 1527682797)), -9588)) == 1));
            arr_8 [15] = (((((var_2 >> (var_3 && 20626)))) ? 3581473858 : (((-((var_0 ? (arr_7 [i_0] [i_0] [i_2]) : -16384)))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_11 [19] [i_3] = 221;
            arr_12 [i_0] [i_0] = arr_7 [i_0] [i_0] [i_0];
        }
    }
    var_18 = (max(0, ((((var_6 - var_10) - var_7)))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_19 = ((((((arr_3 [i_4] [i_4]) + -98))) <= ((885930831 >> (18446744073709551615 - 18446744073709551586)))));
        arr_15 [i_4] [i_4] = var_3;

        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_18 [10] [i_5] = -5563330597336886091;
            arr_19 [9] = (var_11 <= -4695990319733126806);
            var_20 = 211;
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_21 = var_5;
            var_22 = ((4289 ? (arr_22 [i_6 - 2] [i_6 + 2]) : var_1));
            var_23 = arr_17 [i_4];
            arr_23 [i_4] = ((!(((var_8 ? 16362582075244759833 : var_4)))));
        }
        var_24 = var_7;
        var_25 = (min(var_25, 7));
    }
    var_26 ^= var_0;
    #pragma endscop
}
