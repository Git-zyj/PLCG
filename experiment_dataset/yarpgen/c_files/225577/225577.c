/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_1] [i_1]) : ((-(arr_1 [i_0])))));
            var_15 = (max(var_15, (((((var_12 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_1]))) / var_14)))));
        }
        var_16 = (min((((var_14 ? var_1 : (arr_4 [i_0] [i_0] [i_0])))), ((-(8588093413096991804 / var_4)))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 = var_1;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = (arr_8 [i_2] [i_2]);
                    arr_13 [i_2] [i_2] = (((var_12 * var_3) ? ((((var_5 * (arr_9 [i_3 - 1]))) / (((min(-9803, var_4)))))) : var_3));
                    var_19 = (max(var_19, (((!(((~(arr_11 [i_2] [i_2] [i_3 - 1] [i_3])))))))));
                    arr_14 [i_2] [i_3] [i_4] [i_4] = (((1688518272434838404 < 1977350702) ? var_4 : (min((min(9822, 9223372036854775807)), var_5))));
                }
            }
        }
    }
    var_20 = (min((((!(((var_2 ? 2940552628 : var_13)))))), (min(var_4, ((3148014183590640530 ? var_12 : var_6))))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 = (max(var_21, (arr_16 [i_5] [i_5])));
        var_22 *= ((8588093413096991784 ? 221 : 9824));
        var_23 = (min(var_23, var_3));
        var_24 ^= ((((var_1 ? 1977350703 : -8588093413096991812)) | (~1977350702)));
        var_25 -= (arr_17 [i_5]);
    }

    /* vectorizable */
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        var_26 -= (var_4 / var_8);
                        var_27 -= -32;
                    }
                }
            }
        }
        arr_28 [i_6] = ((var_6 ? 2122221080 : (~8588093413096991804)));
        var_28 = (!9824);
        arr_29 [i_6] = (((var_7 == var_12) ? ((((arr_20 [i_6]) ? var_6 : 23008))) : ((-(arr_18 [i_6] [i_6])))));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_36 [i_11] [i_11] = (((min(var_8, var_5)) <= (!243)));

            /* vectorizable */
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                var_29 = var_0;
                arr_39 [i_10] [i_10] [i_10] [i_10] = ((-1 != ((-(arr_18 [i_10] [i_11])))));
                arr_40 [i_10] = ((!4294967295) && -var_6);
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_30 *= ((-(((163 * 44) ? var_13 : var_3))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_31 = (min((((!(var_12 && 9223372036854775807)))), (((arr_41 [i_10]) ? (var_0 && -13481) : ((var_1 ? 9181164099798464920 : 196))))));
                            var_32 = (max(var_32, (!31)));
                            var_33 = var_8;
                            arr_48 [i_10] [i_11] [i_10] [i_13] [i_13] [i_14] [i_13] = ((59 ? 2317616593 : ((min((72 ^ var_1), (!var_1))))));
                        }
                    }
                }
            }
        }
        arr_49 [i_10] = ((!((min((var_5 / 4294967295), 1977350717)))));
        /* LoopNest 3 */
        for (int i_16 = 4; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 19;i_18 += 1)
                {
                    {
                        arr_60 [i_17] [i_16] [i_17] [i_18] = ((-9223372036854775805 ? ((min(((min((arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_57 [i_10] [8] [i_10] [16] [i_10] [i_18])))), ((var_11 ? var_12 : var_5))))) : (min(-4294967282, -76))));
                        arr_61 [i_10] [i_16] [i_16] [i_17] [i_17] [i_18] = (arr_58 [15] [i_16] [15] [i_18]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        arr_64 [i_19] [i_19] = ((((((!(arr_47 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))) & (-9223372036854775807 - 1)));
        var_34 &= ((!(arr_45 [i_19] [i_19] [i_19] [i_19] [i_19])));
    }
    #pragma endscop
}
