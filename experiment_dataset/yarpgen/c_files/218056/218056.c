/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 ? var_17 : ((min(((var_11 ? var_15 : var_0)), var_5)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 *= (2147483648 ? 3646741050 : -22507);
        var_20 = ((95 / (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = ((-(~-1)));
            var_22 *= ((((~(arr_3 [i_1]))) < (arr_3 [i_1])));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_23 = (((5061619628406560982 | var_16) + -401944439));
            var_24 = (arr_8 [i_1] [i_3] [i_1]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_25 = -49;

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_16 [i_1] [i_1] [i_4] [i_1] = (((arr_5 [i_1] [i_1]) ? 120 : (arr_3 [i_1])));
                var_26 = (((arr_12 [i_5] [i_5] [i_4] [i_1]) * ((-78 * (arr_11 [i_4] [i_4])))));
            }
            arr_17 [i_4] [i_4] = (-78 ? var_15 : 0);
            var_27 = 52870;

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_27 [i_1] [i_4] [i_6] [i_4] [i_4] = (((arr_9 [i_4]) - (arr_9 [i_4])));
                            var_28 = (min(var_28, (((!((!(arr_7 [i_1] [i_8] [i_6]))))))));
                        }
                    }
                }
                arr_28 [i_1] [i_4] [i_6] [i_4] = var_12;
                var_29 = var_1;
                var_30 = (min(var_30, ((((var_16 ? var_11 : var_14))))));
                var_31 = (min(var_31, 594135992338404604));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_32 *= ((-(180 * 52883)));
                var_33 = ((16777215 || (47 || var_5)));
                var_34 = -8713409824567347902;
                var_35 |= (((var_3 - (arr_30 [i_1] [i_4] [14]))) % (arr_7 [i_1] [8] [i_1]));
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_37 [i_1] [i_1] [8] [i_1] |= 1;
                arr_38 [i_10] [i_10] [i_10] = ((15 >> (arr_30 [i_10] [i_10] [i_10])));
                var_36 = ((var_1 || (((arr_10 [i_1] [i_1] [i_1]) || 18446744073709551596))));
                var_37 |= 18446744073709551609;
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_38 = ((var_12 ? ((var_1 ? 210 : var_7)) : ((((arr_26 [i_1] [i_1] [i_1]) / -7512971612286007720)))));
                var_39 = -var_6;
                arr_42 [i_1] [i_10] [i_10] = ((11208 && (arr_11 [i_10] [i_10])));

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_40 = (min(var_40, ((((-4788117641833125955 ? var_8 : 17852608081371147011))))));
                    var_41 = ((42 | (arr_34 [i_1] [i_1] [i_12] [i_12])));
                    var_42 = (min(var_42, 1854127455018368120));
                }
            }
            var_43 = (!(var_17 * var_16));
            var_44 |= ((var_3 ? var_6 : 1851153878));
        }
        var_45 = (arr_36 [i_1]);
        var_46 = (((arr_24 [i_1]) ? (arr_19 [i_1] [i_1] [i_1]) : (arr_24 [i_1])));
        var_47 = (((var_3 & (arr_30 [i_1] [i_1] [4]))));
    }
    #pragma endscop
}
