/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~-4685603007205282005);
        var_12 = 0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_13 = (max(((var_0 ? 0 : 255)), 53));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_14 = (min((3304256515100163607 && var_6), (max(var_10, (arr_1 [i_3])))));
                arr_13 [i_3] [i_2] [i_2] [i_3] = (!var_1);
                arr_14 [i_3] = -889048535;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_1] [4] [i_1] [i_3] [i_3] [i_1] = (max((max((arr_21 [i_5 - 2]), (var_2 && 249))), ((((var_3 + 2147483647) << (5 - 5))))));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] [i_3] = (((max(9223372036854775807, var_10) * 1)));
                            var_15 = var_4;
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                arr_26 [i_6] [i_2] = (arr_25 [i_1] [i_1] [i_1] [i_1]);

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_16 = (max(var_16, (((!(((-1285358893 % 1) == (((arr_1 [i_6]) ? var_5 : 1)))))))));
                    var_17 = 12775278985153289278;
                    var_18 = (max(var_18, var_6));
                    arr_29 [i_1] [i_2] [i_6 - 2] [i_7] = (((((max(12775278985153289278, (arr_4 [i_2] [i_6 - 2])))) && var_11)));
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_32 [3] [7] = (~(((arr_8 [i_1]) * 2147483647)));
                var_19 = (max(9223372036854775807, 65515));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_20 = (max(var_20, (((!((min(65535, var_3))))))));

                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    var_21 = (arr_10 [i_1]);
                    arr_39 [i_9] = (((((((var_6 | var_1) ? (min((arr_30 [i_1] [i_2] [i_9] [i_10]), var_10)) : var_2)) + 9223372036854775807)) >> (((~65535) + 65598))));
                    var_22 = ((!(arr_38 [i_10 + 1] [i_10] [i_10 - 2] [4])));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_23 ^= (arr_24 [i_1] [i_1] [i_1] [i_1]);
                        var_24 = ((var_3 ? var_5 : ((min((var_7 != 2223), ((-(arr_28 [i_1] [i_1] [i_9] [i_10 + 1] [4] [i_2]))))))));
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        var_25 = (min(var_25, (((!((((((!(arr_28 [i_1] [i_1] [i_2] [i_9] [i_10 + 2] [i_12])))) << ((((var_2 ? var_11 : var_9)) + 22808))))))))));
                        arr_45 [i_1] |= arr_15 [i_2] [i_10 - 1] [i_12] [i_12 - 1];
                        var_26 = (min(var_26, ((min((arr_43 [i_1] [i_2] [i_9] [i_9] [i_12 - 1]), ((((((arr_31 [i_12] [i_2] [i_9] [i_1]) ? 1 : var_6))) ? (max(-1, 0)) : var_4)))))));
                    }
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        arr_48 [i_2] [i_2] [i_13] [i_13] = var_10;
                        var_27 = (arr_41 [i_1] [i_2] [i_9] [i_10] [i_13]);
                        arr_49 [i_1] [i_2] [i_9] [i_10] [i_1] = (arr_44 [i_13] [i_10 + 3] [i_9] [i_2] [i_1]);
                    }
                    arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((~((max((arr_12 [i_1] [i_2] [i_9]), 0)))));
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    {
                        var_28 = ((var_8 >= var_1) | (9223372036854775794 - 59));
                        var_29 = (min(var_29, ((max((((!(((~(arr_25 [i_1] [i_1] [i_14] [i_15]))))))), (max(((max(-84, (arr_10 [i_2])))), 137438953471)))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            var_30 = (arr_30 [i_1] [i_1] [i_1] [i_1]);
            arr_57 [i_1] [i_16] = 3257127165316720429;
            var_31 = (!var_3);
        }
        arr_58 [i_1] = ((!(~-var_4)));
        arr_59 [i_1] = max((((arr_53 [5] [i_1] [i_1] [5]) ^ 9223372036854775801)), (((arr_30 [i_1] [i_1] [i_1] [i_1]) ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_8)));
    }
    var_32 = -1285;
    #pragma endscop
}
