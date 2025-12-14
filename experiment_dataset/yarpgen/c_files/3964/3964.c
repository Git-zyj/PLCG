/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_17 = var_9;

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = var_1;

                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_18 = ((-361727589 ? (arr_4 [i_0]) : (arr_7 [i_2] [15] [i_0])));
                        var_19 = (~201);
                    }
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_20 = (arr_7 [i_0 - 1] [i_3 - 2] [i_0]);
                        var_21 = 1;
                        var_22 = var_9;
                        var_23 = var_0;
                    }

                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        var_24 = (45 - 361727576);
                        var_25 = var_13;
                        arr_21 [i_0] [i_1] [i_2] [i_3 - 1] [5] [5] = ((361727591 >> (((arr_3 [i_0 - 1]) - 1626896614))));
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_26 = (((!var_4) ? (((arr_5 [i_0]) | var_14)) : 32640));
                        var_27 = (arr_5 [i_0]);
                    }

                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_28 = ((((((arr_25 [i_0] [i_0] [i_2] [i_3] [i_0]) % 1184203674))) ? var_11 : (~4294967295)));
                        var_29 = 184;
                        var_30 = (((arr_18 [i_0] [i_1] [i_2] [i_3 - 1] [i_0]) + (((arr_6 [i_0] [i_0] [i_8]) ? -582017971301606803 : var_13))));
                    }
                }
            }
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_32 [i_0 - 1] [i_0] = var_5;

                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_31 = ((-582017971301606803 ? 0 : (arr_34 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0])));
                    var_32 = 0;
                    arr_35 [i_0 - 1] [2] [i_9] [i_0] = (((arr_22 [i_0] [i_0 + 1] [13] [i_0 + 1] [i_0 + 1] [i_9 + 2] [13]) % (arr_22 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_9 + 1] [6])));
                    arr_36 [i_0] [i_1] [i_9 - 1] [i_0] = ((((((-1917097905 + 2147483647) >> (-120 + 129)))) ? (arr_20 [i_0]) : -1522644291));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_33 = (((arr_25 [17] [i_1] [i_9 + 1] [i_1] [i_9 + 1]) >> 0));
                        var_34 = ((-1 >= (arr_37 [i_0 + 1] [i_0 + 1] [i_9 - 1] [i_11] [i_12])));
                        var_35 = (((arr_33 [i_0 - 2] [i_0] [i_9 + 3]) ? (arr_33 [i_0 + 1] [i_0] [i_9 + 2]) : var_11));
                    }
                    for (int i_13 = 2; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_36 = var_13;
                        var_37 = (var_13 ? (arr_6 [i_0 + 1] [i_0] [i_11]) : 201);
                        arr_44 [i_0] [i_9] [i_11] = (arr_23 [i_0]);
                        var_38 = (-9223372036854775807 - 1);
                    }
                    for (int i_14 = 2; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        var_39 = ((var_14 - (arr_29 [i_0])));
                        var_40 = ((((((arr_11 [i_0] [i_0] [i_11] [i_0]) ? -1522644299 : (arr_10 [i_11])))) ? (var_2 < -1) : ((var_7 ? (-9223372036854775807 - 1) : (arr_37 [i_0] [i_0] [11] [23] [i_14])))));
                        arr_47 [i_0] [i_0] = ((10242 * (arr_39 [i_0 - 1] [i_1] [i_1] [i_1] [i_0] [i_14 + 1])));
                        var_41 = (4294967285 % -20959);
                    }
                    var_42 = -780776456;
                }
            }
            for (int i_15 = 2; i_15 < 24;i_15 += 1)
            {
                var_43 = (((arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_15]) ? (arr_22 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_15] [i_15]) : var_11));
                var_44 = ((var_5 || (arr_24 [22] [11] [i_0] [i_0 - 2] [i_15 - 2] [i_15 - 2])));
            }
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
        {
            var_45 = (~var_9);
            var_46 = (((arr_29 [i_0]) ? 48 : (arr_50 [i_0] [i_16] [i_16])));

            for (int i_17 = 2; i_17 < 22;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_47 = ((((var_12 ? var_15 : 4294967295))) ? ((1 ? (arr_0 [i_0] [9]) : (arr_3 [i_18]))) : 55);
                    var_48 = (arr_34 [i_0] [i_0] [i_0] [i_17] [i_0]);
                    var_49 = var_15;
                }
                arr_58 [i_0 - 2] [i_0] [i_16] [i_17] = (~6);
            }
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                var_50 = (((var_12 ? var_0 : var_4)));
                var_51 = (((var_10 ? 0 : (arr_0 [i_0 - 2] [i_0 - 2]))));
            }
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                var_52 = ((-(((arr_40 [1] [1] [i_0] [7] [7] [i_20]) ? 201 : var_2))));
                var_53 = ((1 >= ((var_11 ? 16 : 65535))));
            }
            for (int i_21 = 3; i_21 < 23;i_21 += 1)
            {
                var_54 = 4294967290;
                var_55 = (var_9 % var_0);
                var_56 = -var_11;
                arr_66 [18] [i_0] [i_0] [i_21] = var_2;
            }
        }
        var_57 = ((2048 ? 18939 : 25));
    }
    var_58 = (!249);
    #pragma endscop
}
