/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = var_5;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_20 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
                arr_10 [i_0] [i_0] [i_2] [i_2] = (arr_7 [i_0 + 1]);
                arr_11 [i_0 - 1] [i_2] [i_2] [7] = (248 * 24016);
            }
            for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_3 - 2] = -0;
                var_21 = var_3;
                var_22 *= (((arr_4 [i_0 - 1] [i_1]) ? ((((arr_0 [i_1]) ? var_6 : var_11))) : ((var_6 ? 18 : var_9))));
            }
            for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_23 = var_15;
                var_24 = ((var_16 ? (((var_8 * (arr_2 [i_1] [i_4])))) : var_17));

                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [12] [i_4] [i_5] [i_6] = (!19);
                        var_25 = (((arr_21 [11] [i_1] [i_4 + 2] [i_5] [12] [i_0 - 1]) == var_11));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = -24017;
                        arr_28 [i_0 + 1] [i_1] [i_1] [i_5] = (var_12 != 91679226750844042);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_32 [i_0 + 1] [i_1] = 24016;
                        var_26 += ((46 ? 24 : -1));
                        var_27 = -var_18;
                    }
                    var_28 ^= (arr_26 [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 2] [3]);

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_29 = (arr_33 [i_0] [i_1] [i_4 - 2] [i_5]);
                        arr_37 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] = (2 >> (((!(arr_23 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_9])))));
                        var_30 = 21988;
                        arr_38 [3] [3] [i_4] [i_5] [i_5] = ((((18446744073709551595 ? 9 : -5081356653699588290)) / ((24032 ? -91679226750844028 : 1))));
                        arr_39 [i_0] [i_0] [i_0] [10] [i_0] = (arr_1 [i_1]);
                    }
                    var_31 ^= -91679226750844042;
                    var_32 = var_0;
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_33 = ((5352402267898814906 ? (arr_19 [i_4 - 2] [i_4 + 2] [i_4] [i_0 + 1]) : (arr_19 [i_0] [i_4 - 1] [i_4] [i_0 + 1])));
                    arr_43 [2] [i_1] [i_10] = (arr_21 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1]);
                    var_34 ^= (((arr_26 [13] [i_1] [0] [13] [i_0 + 1] [i_0] [i_4 - 1]) * (arr_26 [i_0] [i_1] [i_4] [i_10] [i_0 - 1] [i_1] [i_4 - 1])));
                    var_35 = (var_17 ? (!127) : (arr_31 [i_4 - 1]));
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, (((-(arr_21 [i_11] [i_11] [i_4] [i_1] [i_1] [i_0 - 1]))))));
                    var_37 = (-(arr_25 [i_0] [i_1] [i_1] [i_4] [i_11]));
                }
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_12] [i_12 - 1] [i_12] = (((arr_6 [i_12] [i_1] [i_12 + 2] [i_12 + 2]) ? (arr_6 [i_12] [i_12] [i_12 + 1] [i_12 + 1]) : 121));
                arr_49 [i_0] [i_12] [i_0] = var_16;
                var_38 = ((var_8 ? ((0 ? 108 : 4294967287)) : 4294967286));
            }
            var_39 = (max(var_39, ((((arr_25 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? ((-8718459975021426970 ? 7529817594835657731 : 344)) : (210 & 65535))))));

            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_40 ^= (-1 ? ((((arr_6 [i_13] [i_1] [i_1] [i_13]) <= 26))) : (~-22143));
                arr_52 [i_13] [7] [7] [i_0 + 1] = (((arr_25 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ? var_14 : var_8));
            }
        }
        var_41 ^= (((((((arr_35 [15] [i_0 + 1] [15] [i_0] [i_0 - 1] [1] [i_0 - 1]) ? var_1 : var_11))) ? (arr_35 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [9] [i_0]) : (arr_30 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))));
    }
    var_42 = (((!((min(var_11, var_18))))));
    #pragma endscop
}
