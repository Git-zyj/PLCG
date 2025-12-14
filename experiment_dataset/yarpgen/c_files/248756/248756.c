/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        arr_3 [i_0] = var_13;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] [i_2 - 1] [i_2] = (arr_6 [i_1]);
            var_18 = var_8;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_19 = var_14;
            var_20 = (arr_10 [i_1 - 1] [i_3] [i_1]);
            var_21 = (max(var_21, (arr_10 [i_1] [6] [i_1])));
            var_22 = (121 & -121);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_23 = ((((((arr_5 [i_4] [i_5]) % (arr_5 [i_5] [i_4])))) ? (arr_5 [14] [i_1 - 1]) : ((~(arr_5 [i_5] [i_4])))));
                arr_17 [i_5] [i_4] [i_1] [i_1] = var_13;
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_20 [i_4] [i_4] [i_4] = var_5;

                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    var_24 = (((arr_11 [i_1 - 1]) ? (-120919033 != -1) : (~-75)));
                    arr_24 [i_7] [i_1 + 1] [i_4] [i_1 + 1] = (~-114);
                    arr_25 [i_7] [i_1] [i_4] [i_1] = var_8;
                    arr_26 [5] [i_1] [i_1] = (arr_22 [i_7] [i_6] [i_4] [10] [i_1]);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_29 [i_1] [i_1] [i_6] [i_6] [5] = (arr_19 [i_1] [i_4] [i_6] [i_4]);
                    var_25 = ((((((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 - 1])))) && (arr_2 [i_1 + 1] [i_1 - 1])));
                    arr_30 [i_8] [i_1] [i_1] [i_1] = ((((~(arr_6 [i_1 - 1]))) <= ((var_0 ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 + 1])))));
                }
                var_26 += (((-(3072 > 18446744073709551615))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_27 = (min(var_27, (((0 ? ((((!(arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))))) : ((+((var_15 >> (((arr_0 [i_1]) + 53)))))))))));
                var_28 ^= arr_0 [i_4];
            }
            for (int i_10 = 4; i_10 < 16;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_29 -= ((var_15 <= (arr_18 [i_1] [i_10 - 3] [i_1 + 1])));
                            arr_42 [i_1] [i_11] [i_10 - 1] [i_10] [i_4] [i_1] = var_12;
                            arr_43 [i_12] [i_11 - 2] [i_11] [3] [i_10] [i_1] [i_1] = ((!(((((((arr_4 [i_1 - 1]) ? var_8 : (arr_6 [i_11])))) ? (arr_39 [i_10] [i_10] [i_10] [13] [i_4] [5]) : 3)))));
                        }
                    }
                }
                var_30 = (arr_31 [i_10 - 2] [i_10 - 1] [i_10]);
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_31 = (!var_4);
                            arr_49 [i_14] [i_13] [i_10 - 2] [i_13] [i_1] = ((var_3 / (((var_14 + 2147483647) << ((((((var_13 ? var_5 : (arr_13 [i_4] [i_10]))) + 28192)) - 10))))));
                        }
                    }
                }
                var_32 = ((!((!(arr_1 [i_1 + 1])))));
            }
            var_33 = (min(var_33, ((((((arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]) < (arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) ? (((arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? (arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) : (!var_13))))));
            arr_50 [i_4] = (!(((var_12 ? (arr_38 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_2 [i_4] [i_1])))));

            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                var_34 = (((((((var_15 ? var_6 : var_6)) > (arr_0 [i_1 + 1])))) & ((+(((arr_47 [i_15] [i_4] [i_4] [i_4] [i_1] [i_1]) ? var_5 : (arr_19 [i_1] [i_4] [i_15 + 4] [i_1])))))));
                arr_54 [i_15] [i_4] [i_15] [4] = ((~(((var_8 >= (arr_0 [i_1]))))));
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
            {
                arr_57 [i_1] [i_4] [7] [i_1] = ((((((((var_4 ? var_12 : var_3)) + 2147483647)) << ((((((arr_31 [i_16] [i_4] [i_1]) != var_5))) - 1))))) ? (((var_4 < (arr_16 [i_1 - 1])))) : ((((arr_11 [i_1 - 1]) && (arr_53 [i_4])))));
                arr_58 [i_1] [i_1 - 1] [i_1] = ((var_15 ? (((arr_13 [i_1 + 1] [i_1 - 1]) ? (arr_40 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 1]) : var_9)) : (arr_40 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
            {
                var_35 = (min(var_35, ((((arr_5 [i_1] [i_1 + 1]) ? (arr_5 [i_17] [i_1 + 1]) : (arr_34 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))))));
                var_36 = ((arr_52 [i_1 - 1] [i_1 - 1] [i_1 + 1] [2]) >= (arr_52 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]));
                arr_63 [i_17] [i_17] = var_13;
                var_37 |= 21;
            }
            var_38 = ((+(((arr_47 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4]) ? ((var_11 ? (arr_61 [i_4] [i_1] [i_1]) : (arr_5 [i_1] [4]))) : 1))));
        }
        var_39 = (((var_7 ? (arr_56 [i_1 - 1] [i_1] [0] [i_1 - 1]) : ((~(arr_12 [i_1]))))));
        arr_64 [i_1] = (arr_59 [i_1 - 1] [i_1] [i_1]);
    }
    for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
    {
        arr_67 [i_18 + 1] [i_18 - 1] = (~1);
        var_40 = ((arr_9 [i_18 + 1]) * (arr_28 [i_18] [i_18 - 1]));
        var_41 = 14256462836013745439;
    }
    var_42 = (!8606401744779217295);
    #pragma endscop
}
