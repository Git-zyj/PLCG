/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                var_19 = var_7;
                var_20 = (min(var_20, (~var_7)));
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
            {
                arr_9 [9] [i_3] [9] [i_3] = (arr_5 [i_3 + 2] [i_3 + 1]);
                var_21 &= ((~((var_8 ? (arr_1 [i_1]) : var_5))));
                arr_10 [i_3] [11] [i_1] [14] = (arr_4 [6] [i_3 + 1] [i_1]);
                arr_11 [i_3] [6] [i_3] = var_13;
            }
            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_0] [i_5] = var_2;
                    var_22 = ((~(-9223372036854775807 - 1)));
                    var_23 -= var_17;
                }
                arr_19 [i_1] [i_1] [i_0] = (arr_17 [i_0] [i_1] [i_0] [15] [i_0]);
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_22 [12] [i_1] [i_1] [i_6] = arr_20 [i_0] [1] [i_0] [i_0];
                arr_23 [0] [0] [i_1] [i_0] = var_7;
                var_24 = var_17;
                arr_24 [i_0] [1] [i_0] [1] = var_12;
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_25 = var_17;

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_26 += ((15629 ? (arr_15 [12] [i_8 - 1] [6] [i_8 + 1] [1] [i_8 + 2]) : (0 * 1152921504606846976)));
                    var_27 = (max(var_27, ((-((var_9 ? (arr_2 [i_0] [i_1]) : var_11))))));
                }
            }

            for (int i_9 = 4; i_9 < 15;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_35 [i_0] [i_1] [i_0] [i_10] [i_10] [i_1] = arr_6 [i_0] [i_1];
                    var_28 -= (arr_0 [i_1]);
                    var_29 += 8415440639950947819;
                    arr_36 [i_10] [1] [i_0] = -8128;
                }
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_30 = (arr_26 [i_0] [i_1] [i_11]);
                    var_31 = (((arr_31 [i_0] [i_9 - 2] [i_1]) ? var_4 : -var_13));
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [2] &= ((!(arr_6 [i_0] [i_0])));

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_32 = ((arr_39 [14] [0] [i_9 - 4] [i_9 + 1] [i_13]) ? (arr_25 [i_13] [i_12]) : (((-16132 ? var_3 : (arr_20 [2] [6] [i_9] [i_13])))));
                        var_33 = (((arr_34 [i_0] [i_1] [i_0] [i_12] [i_0]) ? (arr_43 [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2] [i_13]) : var_18));
                    }
                    arr_44 [i_12] [i_0] [i_0] [i_0] = (((((!(arr_12 [13] [13] [13] [i_12])))) >> (!var_18)));
                }
                var_34 = (arr_31 [i_0] [i_1] [i_9]);

                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    var_35 = var_9;
                    arr_47 [i_14] = var_14;
                }
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_36 = var_18;

                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_37 -= ((var_9 ? var_2 : -15601));
                        var_38 ^= (((arr_21 [i_9 - 4] [i_15]) ? 23555 : 12434579824158472639));
                        var_39 = (arr_6 [9] [i_16]);
                        var_40 -= ((-(arr_29 [i_15] [i_15])));
                        arr_53 [i_0] [i_0] [i_0] [i_0] [0] = (-(arr_1 [i_15]));
                    }
                }
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    var_41 = -31129;
                    arr_56 [i_0] [i_1] [i_0] [i_0] = (var_9 & var_4);
                }
                var_42 = (((arr_49 [i_9 - 4] [i_9] [16] [i_9 - 4] [i_9] [i_9 - 2]) ? (arr_49 [i_9 - 1] [i_9 - 2] [i_9] [i_9 + 1] [i_9] [i_9 + 2]) : (arr_49 [i_9 - 1] [i_9] [i_9] [i_9 - 3] [4] [i_9 - 2])));
            }
            for (int i_18 = 4; i_18 < 15;i_18 += 1) /* same iter space */
            {
                var_43 = (arr_17 [i_0] [i_1] [i_18 + 2] [i_18] [14]);
                var_44 = (0 ? var_4 : (arr_4 [i_0] [i_1] [i_18]));
                arr_61 [i_0] = (((((arr_3 [i_18 - 2] [i_18 - 2] [1]) + 9223372036854775807)) >> (var_18 + 7783328857285612308)));
                var_45 = (arr_52 [i_0]);
                arr_62 [i_0] [i_0] [i_0] [i_0] = (arr_20 [i_18] [i_0] [i_18 + 1] [12]);
            }
            for (int i_19 = 4; i_19 < 15;i_19 += 1) /* same iter space */
            {
                var_46 = (15320460045996929144 ? 0 : (arr_52 [i_1]));
                var_47 = 3936736922181762179;
            }
            for (int i_20 = 4; i_20 < 16;i_20 += 1)
            {
                var_48 = (arr_20 [i_20 + 1] [i_20 + 1] [6] [i_1]);
                arr_68 [i_0] [i_20] = ((var_7 & (arr_27 [i_0] [i_0] [6])));
                var_49 = var_0;
            }
            var_50 = ((~((((arr_55 [i_0]) && var_17)))));
            var_51 |= ((7923817933364660972 ? var_5 : var_9));
        }
        var_52 = (((arr_7 [i_0] [5]) / (max(var_11, -9223372036854775795))));
        arr_69 [6] = ((arr_26 [i_0] [i_0] [i_0]) + 7127642434746234373);
    }
    for (int i_21 = 0; i_21 < 16;i_21 += 1)
    {
        var_53 = ((((((arr_2 [i_21] [i_21]) ? (arr_3 [i_21] [11] [i_21]) : (arr_3 [i_21] [i_21] [i_21])))) ? (arr_3 [i_21] [i_21] [i_21]) : (arr_3 [i_21] [i_21] [i_21])));
        var_54 = -18446744073709551615;
    }
    for (int i_22 = 0; i_22 < 20;i_22 += 1)
    {
        arr_76 [i_22] [15] = (((~(arr_75 [i_22]))));
        var_55 = (!14656500816720980185);
    }
    var_56 = var_11;
    #pragma endscop
}
