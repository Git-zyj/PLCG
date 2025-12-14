/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(65521, var_19);
    var_21 = (((min((var_18 == var_17), (8935141660703064064 * 9511602413006487549))) < (8935141660703064067 >= 9511602413006487542)));
    var_22 = (max(var_22, (((((-(max(8935141660703064079, 10515440385772324159)))) * (((9511602413006487537 + 8935141660703064045) ? (8935141660703064061 >= var_3) : (var_3 / var_7))))))));
    var_23 = var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_24 += ((2147483647 >> (9511602413006487523 - 9511602413006487507)));
        var_25 = (-9223372036854775807 - 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_26 = (min(var_26, 8935141660703064071));
        var_27 = (((arr_2 [i_1]) & (arr_2 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_28 = (max(var_28, (((+(((-26106 + 2147483647) >> (7931303687937227446 - 7931303687937227444))))))));
                        var_29 = 8935141660703064064;
                        var_30 |= (((arr_6 [13] [i_2]) ? (arr_6 [i_3] [i_4]) : (arr_14 [i_1] [i_2] [i_3] [i_4])));
                        var_31 = (((-(arr_8 [15] [i_1]))));
                        var_32 = (((((var_16 * (arr_4 [i_3])))) ? (arr_11 [i_2] [i_2]) : (arr_12 [i_1] [i_1])));
                    }
                }
            }
        }
        var_33 = (max(var_33, (arr_12 [i_1] [12])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_34 = var_4;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_35 = (min(var_35, var_6));
                            var_36 = (max(var_36, var_15));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_37 = ((var_13 ? 7931303687937227425 : 32767));
                            arr_31 [i_6] [i_5] [i_5] [i_7] = (((arr_5 [i_5]) ? (arr_2 [i_6 - 1]) : (arr_26 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [0])));
                            arr_32 [i_6] [i_9] [i_9] [6] [i_9] = ((7931303687937227456 ? (arr_10 [i_6]) : (arr_10 [i_6])));
                            var_38 = arr_25 [i_5];
                            var_39 = var_10;
                        }
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_36 [i_5] [i_6] [i_6] [12] [i_5] = var_1;
                        var_40 = (max(var_40, ((((arr_17 [i_5]) < ((((arr_35 [8] [i_5] [8]) ? (arr_3 [i_5] [i_10]) : var_16))))))));
                        var_41 = (-32767 - 1);
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_42 = ((~(arr_16 [i_11 + 3] [i_11] [i_6 - 1])));
                        arr_40 [i_1] [16] [i_6] [i_11] = (-(arr_27 [i_11 + 1] [i_11] [i_11] [i_11]));
                    }
                    for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_43 = (~var_8);
                        var_44 = 12514256574032229140;
                        var_45 = (arr_20 [i_1] [i_1] [8] [i_6] [i_12]);
                        var_46 = (arr_30 [15] [15] [15] [i_5] [i_1]);
                    }
                    var_47 = (min(var_47, (9511602413006487541 - var_15)));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        var_48 -= ((((-(min(9511602413006487527, 16878))))) ? (max(var_5, (arr_45 [i_13]))) : (((((18446744073709551615 ? 4160749568 : var_1))))));
        var_49 = (max((max(var_10, ((((arr_46 [2]) != var_8))))), ((((((arr_46 [i_13]) && var_16)) ? ((((var_5 <= (arr_44 [3] [i_13]))))) : 9223372036854775807)))));
        var_50 = (~((5932487499677322472 ? (min(var_5, var_16)) : (arr_43 [i_13]))));
        arr_47 [i_13] &= max((arr_44 [17] [17]), -32745);
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] = var_5;
        arr_51 [2] = (var_12 / -3079);
    }
    #pragma endscop
}
