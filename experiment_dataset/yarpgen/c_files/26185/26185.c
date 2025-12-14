/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((!1) ? ((18446735277616529408 ? var_10 : (arr_1 [i_0]))) : -461672814));
        arr_3 [i_0] |= (((1 || var_8) * ((1 ? 1768642232 : 127))));
        var_12 = var_7;
        arr_4 [i_0] = ((var_8 % (arr_1 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((var_7 ^ (arr_6 [i_1])));
        arr_8 [i_1] = ((((var_7 ? var_2 : 32767)) | ((((arr_5 [i_1]) ? 4433230883192832 : (arr_6 [i_1]))))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_13 |= ((!(arr_0 [i_1] [i_2])));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_14 = ((32767 || (arr_1 [i_2 - 1])));
                var_15 = (arr_13 [i_1]);
                arr_14 [i_1] [i_1] = (((arr_5 [i_1 - 4]) != (arr_13 [i_1])));
            }
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_16 = (((var_0 & var_3) ^ var_5));
            arr_19 [i_1] [i_1] [i_1] = (--7);
            var_17 |= (((arr_5 [i_1 - 2]) != (~1768642232)));
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            arr_22 [i_1] [14] [i_1] = 9173455927375213777;
            arr_23 [2] [i_1] = ((+(((arr_20 [i_1] [i_5] [i_5]) ? var_0 : var_4))));
            var_18 = (((arr_13 [i_1]) > 1768642232));
            arr_24 [12] [i_5] &= ((27626 ? (arr_1 [i_1]) : (arr_1 [i_1 + 1])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_19 = (((arr_9 [i_1 - 3] [i_1 - 2]) ? (arr_6 [i_1]) : ((((arr_0 [i_1] [i_6]) && var_6)))));
            var_20 = (max(var_20, (((+(((arr_16 [6] [6] [6]) << (var_1 + 9868))))))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_7] = (arr_1 [i_1 - 2]);
            var_21 -= (((arr_16 [18] [i_1 - 2] [18]) ? (arr_16 [6] [i_1 - 4] [6]) : (arr_16 [16] [i_1 + 1] [16])));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_35 [i_1] [i_1] [i_1] = (arr_10 [i_8]);
            var_22 ^= (((arr_16 [2] [2] [i_1]) & (arr_33 [i_8] [i_8] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_39 [i_9] [i_9] = (i_9 % 2 == 0) ? ((((var_10 + 2147483647) << (((arr_36 [i_9]) - 28))))) : ((((var_10 + 2147483647) << (((((arr_36 [i_9]) - 28)) - 81)))));
        arr_40 [i_9] = (((arr_36 [i_9]) && var_1));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_23 = (max(var_23, ((max((((!(((var_1 ^ (arr_10 [i_10]))))))), 37910)))));

        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
        {
            arr_47 [0] [0] &= ((+(((arr_42 [i_10]) - (arr_42 [i_10])))));
            arr_48 [8] [i_11] = (-((3 ? 1 : -31)));
            var_24 = (max(var_24, 56));
            var_25 = (((max(((max(var_5, var_7))), (arr_45 [i_10]))) + (((max(var_3, (arr_1 [i_10])))))));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                var_26 -= (max((arr_11 [i_13 - 2] [i_13 - 1] [i_13 + 2]), ((37910 & (arr_18 [i_10] [i_10])))));
                arr_55 [1] [i_10] = var_2;
            }
            var_27 = (min(var_27, 239));
        }
    }
    var_28 = var_5;
    #pragma endscop
}
