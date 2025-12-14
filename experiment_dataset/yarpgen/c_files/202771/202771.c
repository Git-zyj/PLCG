/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = ((((15 && (((234 ? 5 : 18446744073709551604))))) ? (max(18446744073709551612, 139)) : ((18446744073709551611 << (18446744073709551604 - 18446744073709551601)))));
        var_14 = (((21 || 3240557450) ^ ((-(max(var_7, var_3))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = ((((((-9 + 2147483647) << (((((arr_0 [i_0]) + 7971185632731528437)) - 26))))) & (22 ^ 18446744073709551608)));
            var_16 = (arr_5 [i_0] [i_1]);
        }
        var_17 ^= -14;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_18 = (4294967287 ? (~31) : -539496053);
                    var_19 = (min(var_19, 20));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_3] [i_5] [i_3] [i_5] [i_5] = (arr_2 [i_5]);
                        var_20 = arr_5 [i_3] [i_2];
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_22 [i_2] [1] [i_3] [i_3] [i_4] [i_6 + 1] = (((((var_4 ? 212 : -77))) ? var_1 : ((1054409858 ? var_10 : var_12))));
                        var_21 = (-7 & var_3);
                    }
                }
            }
        }
        var_22 = (((arr_20 [i_2] [i_2] [7] [i_2]) / (arr_13 [i_2] [i_2] [i_2])));
        arr_23 [i_2] = ((var_3 % (arr_13 [i_2] [i_2] [i_2])));
        var_23 = (((9 << 1) == (((7577060039399540474 ? var_11 : 0)))));
        arr_24 [i_2] [i_2] = -17;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = var_12;
        var_24 = (arr_0 [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_25 = (var_5 ? (arr_6 [i_9 - 1] [i_9 + 1]) : var_3);
                        var_26 = arr_0 [i_9 - 1];
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_44 [i_13] [i_12] [i_10] [i_9] [i_8] = (~32373);
                            var_27 -= var_10;
                        }
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            var_28 = (((arr_40 [i_9 + 1]) | (arr_40 [i_9 + 1])));
                            var_29 ^= (((arr_29 [i_9 + 1]) ? (arr_7 [i_14 - 2]) : -77));
                        }
                        var_30 = ((1 ? 6356836119905288291 : 9));

                        for (int i_15 = 3; i_15 < 19;i_15 += 1)
                        {
                            var_31 = (!-65536);
                            var_32 *= 5;
                        }
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        var_33 = (~((67 << (((arr_43 [i_16] [i_9]) - 12288)))));
                        var_34 = 19230;
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, (((-(arr_55 [i_8] [i_8] [i_17] [i_17] [i_9]))))));
                        arr_56 [i_17] = (((((-74 ? 3240557446 : -19228))) / (((arr_26 [i_17]) ^ (arr_7 [i_8])))));
                    }
                    var_36 = var_1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                {
                    var_37 = var_11;
                    var_38 = (((~(arr_39 [13] [i_18] [i_18] [i_19] [i_18]))));
                    arr_63 [i_8] [i_18] = 6356836119905288284;
                    arr_64 [i_19] [i_18] [i_8] = ((var_9 ? (arr_53 [i_8] [i_8]) : (arr_53 [i_18] [i_18])));
                }
            }
        }
    }
    var_39 = var_5;
    #pragma endscop
}
