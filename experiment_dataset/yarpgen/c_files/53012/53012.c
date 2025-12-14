/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 31683;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_17 = (min(var_17, (((((196147701365899552 | (-127 - 1)))) ? -1915738554 : 1915738568))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = ((((((-127 - 1) ^ 24))) % (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = (((arr_0 [i_1]) ? var_4 : var_15));
                    var_20 = (max(var_20, var_9));
                    arr_12 [i_3] [i_2] [i_3] = var_2;
                }
            }
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_4] [i_4] [i_1] &= (var_4 >= var_1);
            var_21 = (arr_8 [i_1] [i_4] [i_4]);

            for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
            {
                arr_20 [i_5] [i_5] = ((!(((~(arr_7 [i_1] [i_5]))))));
                arr_21 [i_5] [i_1] = 134184960;
            }
            for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_25 [11] [11] [i_6 + 1] = (((arr_7 [i_4] [i_6 + 2]) ? var_8 : ((~(arr_17 [i_1] [i_1] [i_1])))));
                var_22 = (-50 / 11356302062870819784);
                arr_26 [i_1] [i_1] [i_1] [i_6 + 1] = (var_13 >= 952326726);
            }
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                arr_30 [i_1] [i_1] [i_7 + 1] = -1603459397954069762;
                var_23 = (max(var_23, var_1));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_37 [i_1] [i_4] [i_7] [i_8] = ((!(arr_0 [i_4])));
                            arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] |= (arr_31 [i_7 + 2] [i_7 + 2] [i_8] [i_9] [i_9] [i_9]);
                            var_24 = (((((arr_35 [i_4] [i_4]) - -1915738536)) + (((var_4 ? 115 : var_4)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_44 [i_1] [i_4] [i_10] = (arr_16 [i_1]);
                        var_25 = (((-32767 - 1) && 192));
                        var_26 ^= (((arr_40 [i_1] [i_11 + 3] [i_4] [i_10 - 1]) ? (arr_40 [i_1] [i_11 + 1] [i_1] [i_10 - 1]) : (arr_40 [6] [i_11 + 2] [i_4] [i_10 - 1])));
                        var_27 = ((-1915738536 ? 49 : 64));
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 11;i_12 += 1)
        {
            var_28 = (((((233 ? var_13 : var_10))) ? -116 : 63));
            arr_47 [i_1] |= ((211 ? var_9 : (arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 2])));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_29 = (min(var_29, (((~(arr_14 [i_1] [i_13] [i_13]))))));
            var_30 -= var_5;
            var_31 = (arr_31 [i_1] [i_1] [i_1] [i_13] [i_13] [i_13]);
            arr_51 [i_1] = (arr_33 [i_1] [i_13] [i_13] [i_1]);
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_56 [i_1] &= (6980182686920338807 / 1915738563);
            var_32 = ((var_2 ? 18446744073709551597 : (arr_53 [i_1] [i_14] [i_14])));
        }
        arr_57 [i_1] |= -1915738536;
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        arr_62 [i_15] = -65;
        arr_63 [i_15] [i_15] = ((209 | (min((var_4 / var_6), (14 && var_7)))));
    }
    var_33 |= (((9658 >> (6980182686920338807 - 6980182686920338782))));
    #pragma endscop
}
