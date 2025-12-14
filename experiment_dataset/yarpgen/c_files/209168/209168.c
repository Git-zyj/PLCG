/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, (((((min(var_12, (arr_0 [i_0 - 1])))) * (((((-8118864740409748076 ? (arr_1 [12]) : -2504))) ? (4294967272 != 167) : 8)))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_19 = ((~(!67)));

            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_0] [i_1 - 2] [i_2] |= (arr_0 [5]);
                arr_9 [17] [17] [i_2] |= (arr_4 [i_2] [i_0 + 2] [i_0 + 2]);
                var_20 = -255;
                arr_10 [i_0] = ((176 ? var_15 : var_7));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_21 = (arr_11 [i_0]);

                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 += (arr_17 [i_0] [i_0] [i_0] [i_4 - 2] [i_5] [i_5] [i_1]);
                        var_23 = var_8;
                    }
                    arr_18 [19] [i_3] [i_3] [i_3] = ((-(arr_4 [i_4 + 1] [i_0 + 2] [i_1 + 1])));
                    arr_19 [i_0] [i_1] [i_3] [i_3] [i_4 - 1] [i_4 - 1] = (arr_7 [i_0 - 3] [i_0 + 3] [i_1 - 2]);
                    arr_20 [i_0] [3] [i_3] [i_1] [i_3] = (((arr_6 [i_4 - 3] [i_4 - 2] [i_4 - 1] [i_4 + 1]) ? (arr_16 [i_4 - 3] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2]) : (arr_16 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 2])));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_23 [i_1] |= (600298318 % -88);
                    arr_24 [i_6] [i_6] [20] [i_3] [i_6] = 167;
                    var_24 = (min(var_24, (!88)));
                    arr_25 [i_0] [i_0] [i_0] [1] [i_3] = (arr_6 [i_0] [i_1 - 1] [i_3] [i_6]);
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_29 [i_3] = (arr_28 [i_0 - 1]);
                    arr_30 [i_7] [i_7] [i_7] [i_3] [i_7] = 135;
                    var_25 -= (((arr_11 [i_0 + 3]) == (arr_7 [12] [i_1] [i_1])));
                    var_26 -= (arr_4 [i_0 + 3] [i_0 + 3] [i_1 - 1]);

                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] &= (((var_9 % var_14) ? (88 * -88) : var_10));
                        arr_34 [i_8 + 2] [i_8 + 2] [i_3] [i_7] [i_8] [i_3] [i_3] = ((!(arr_6 [i_8 + 1] [i_7] [i_1] [i_1])));
                    }
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        var_27 = (min(var_27, (8521 || -1375034017)));
                        arr_37 [i_3] [i_7] [i_3] [23] [i_9 - 4] = (-800232421 / 255);
                        arr_38 [i_0] [i_1] [i_9] [i_3] [i_7] [i_9] &= var_5;
                        arr_39 [i_0] [i_0] [i_0] [i_1] [18] [i_7] [i_3] = (-var_13 > 1);
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_3] = var_16;
                        var_28 = 600298318;
                        var_29 -= (200 || 3101780191);
                    }
                    for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_47 [9] [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] = (arr_32 [i_11 - 1] [i_1 - 2] [i_3] [i_11] [i_11] [i_0]);
                        arr_48 [i_0] [13] [13] [i_3] [i_11 + 1] [i_7] = (arr_28 [i_11]);
                        arr_49 [i_3] [i_1] = (((arr_0 [i_3]) << (((arr_0 [i_0 + 4]) - 17804))));
                    }
                }
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    arr_52 [i_0] [i_3] = ((!(~11390310131723324234)));
                    var_30 |= var_8;
                }
                arr_53 [i_0] [i_3] [i_0] = (((((15202 ? 3694668982 : 11390310131723324229))) || var_4));
                arr_54 [i_3] [i_1] [i_0] [i_3] = (7056433941986227387 || var_9);
                arr_55 [i_3] [i_1] [i_3] = ((var_16 ? (((63587 ? var_1 : (arr_50 [i_0] [i_0] [11])))) : 18446744073709551615));
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_59 [i_13] [20] [i_0] |= -1375034031;
            arr_60 [i_13] [i_13] [i_13] = var_10;
        }
    }
    var_31 -= (((max(var_5, (min(var_3, var_16)))) + var_9));
    #pragma endscop
}
