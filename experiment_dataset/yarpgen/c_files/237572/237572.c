/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1 - 1] = ((max(42143, ((var_8 ? 56 : (arr_6 [i_0]))))) > (arr_6 [i_0]));
                    var_20 = (max(var_20, var_2));
                    var_21 = (min((max(1260474430700601335, (arr_6 [i_2]))), 22314));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 = ((18446744073709551613 ? (arr_3 [i_3 + 1] [i_3 + 1]) : -122));
                        arr_21 [i_3] |= arr_2 [i_3] [i_4];
                        var_23 = (arr_11 [i_3 + 1]);
                        var_24 = ((56 ? 178 : 200));
                        var_25 = (min(var_25, (arr_0 [i_3 + 2])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (min(var_26, ((max(((max((((4294967286 && (arr_16 [i_3] [i_4] [i_5])))), (arr_24 [i_3] [i_4] [i_3 + 2] [i_4] [i_4] [i_3 - 1])))), (!var_11))))));
                        var_27 = ((((arr_9 [i_4] [i_4]) ? ((71 ? 0 : (arr_13 [i_3]))) : -var_0)));
                        arr_26 [i_3] [i_4] [i_4] [i_7] = (((((-(arr_17 [i_5])))) ? (((((arr_3 [i_3] [i_5]) + 9223372036854775807)) >> ((((var_9 ? var_17 : (arr_19 [i_7] [1] [1]))) - 2465027406)))) : (((((arr_0 [i_4]) && ((var_3 == (arr_0 [i_3])))))))));
                        var_28 = arr_11 [i_3];
                    }
                    var_29 = (min(var_29, ((((((-(((arr_17 [i_5]) ^ var_1))))) ? ((189 ? 11040974209914666213 : var_5)) : -var_4)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            {
                var_30 = (-(((var_10 && (arr_27 [i_8])))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_31 = ((-3841618331045753065 ? 77 : ((89 % (arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_32 = (max(var_32, 78));
                            arr_40 [i_8] [i_9] [i_10] [i_11] [i_12] = ((((var_17 ? 15539131155724852225 : 52667)) % (arr_36 [i_8] [i_8] [i_8 + 1] [i_8 - 3] [i_8 + 3] [i_8 + 1])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_9] [i_8] [i_13] [i_11] [i_8] = (((arr_32 [i_8] [i_9] [i_10]) ? 18446744073709551609 : 125));
                            arr_44 [i_8] = (((18446744073709551609 ? 3570287211 : (arr_34 [i_13] [i_13] [i_13]))));
                        }
                        for (int i_14 = 2; i_14 < 14;i_14 += 1)
                        {
                            var_33 = (var_11 > (arr_29 [i_9] [i_14 + 1]));
                            arr_47 [i_8] [i_9] [i_9] = (arr_27 [i_8]);
                            var_34 = ((-(arr_37 [i_8] [i_14 + 1] [i_8 + 1] [i_8 + 1])));
                            var_35 = (((arr_30 [i_10] [i_10] [i_8]) > -var_5));
                        }
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            arr_50 [i_15] [i_9] [i_10] [i_11] [i_15] |= ((!(arr_42 [i_15 - 2] [i_15 - 2] [i_15] [i_15] [i_15 - 2])));
                            arr_51 [i_8] [i_8] [i_10] [i_11] [i_8] = (((~var_17) ^ (arr_42 [i_8] [i_8 - 2] [i_8 - 2] [2] [i_8 - 2])));
                            var_36 = (arr_37 [i_8 - 2] [i_9] [i_10] [i_11]);
                            var_37 -= (arr_29 [i_8] [i_8]);
                        }
                    }
                    arr_52 [i_8] = (((((-1636698497 | (arr_46 [i_8] [i_9] [i_9] [i_9] [i_10] [i_8])))) ? ((var_16 ? (arr_38 [12]) : var_0)) : ((var_19 ? (arr_27 [i_8]) : (arr_31 [9] [9])))));
                    var_38 = ((~(4885 << 0)));
                }
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    var_39 = (max(var_39, (1999215122 && var_4)));
                    arr_57 [i_8] [i_16] = (-((34 % (arr_33 [i_16] [i_9] [i_9] [i_8 + 1]))));
                }
                var_40 = ((((min(((var_9 < (arr_53 [i_8] [i_8] [i_9]))), ((!(arr_53 [i_8] [i_8] [i_9])))))) != (max((arr_28 [i_8 + 3]), var_14))));
                var_41 = (max(var_41, (((var_18 ? (((arr_55 [i_9]) ? -1739271773 : 116)) : var_11)))));
            }
        }
    }
    var_42 = var_18;
    #pragma endscop
}
