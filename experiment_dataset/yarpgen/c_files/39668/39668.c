/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        var_16 -= ((-(((-115 && 0) - (max(var_10, var_13))))));
        var_17 = (min(var_17, ((((((((arr_0 [i_0]) | (arr_0 [i_0])))) && ((((arr_1 [9] [9]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))))));
        arr_3 [14] [14] = ((((!(arr_0 [i_0]))) ? (((arr_0 [i_0]) | (arr_1 [i_0] [i_0]))) : ((((arr_0 [i_0]) * (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((var_6 ? var_2 : var_6))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 *= (131071 & 3702700955);

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_20 = (max(var_20, -var_13));
                        var_21 *= ((-(var_9 & var_4)));
                    }
                    var_22 = (arr_12 [i_2 + 1] [i_2 - 2]);
                    arr_14 [i_1] = (((arr_1 [i_2] [i_2 - 1]) || ((max(var_6, (arr_1 [i_2 + 1] [i_2 + 1]))))));
                }
            }
        }
        var_23 = (((arr_5 [11]) ? (((max(var_1, (arr_6 [i_1]))) - (arr_5 [i_1]))) : (((((((-127 - 1) ? 13657 : 0))) ? (18446744073709551615 || 5) : var_8)))));
        var_24 = 0;
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_25 = (~3753727778);
                        arr_24 [i_6] = (arr_15 [i_5] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_26 = (min(var_26, ((((arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) / var_9)))));
                        arr_29 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((~(arr_5 [i_5 - 1])));
                        var_27 = (((-115 ? 0 : var_14)) | var_1);
                        var_28 = ((342109186 ? 25048 : 131071));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_33 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] = arr_25 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_7];
                        arr_34 [i_5 - 1] [i_6] [7] [i_10] [i_10] = (((arr_31 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) & (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                        arr_35 [i_5 - 1] [i_5] [6] [i_5] = ((0 && (arr_13 [i_5 - 1])));
                        var_29 = (((arr_7 [i_7]) ? (arr_7 [i_10]) : (arr_7 [i_10])));
                        arr_36 [i_5] [i_6] [i_7] [i_5] = ((var_8 % (23507 && 127)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_30 *= var_3;
                                var_31 = ((((((~(arr_4 [i_5] [i_5 - 1]))) ^ (((max(var_9, var_1)))))) >> (var_12 - 1293295322)));
                                var_32 += (arr_6 [i_11]);
                            }
                        }
                    }
                    arr_43 [i_5 - 1] [i_5 - 1] = var_15;
                    arr_44 [i_5] [i_6] [i_7] = (16 ? (-127 - 1) : ((((min(var_15, (arr_37 [i_5] [i_5] [i_7] [2])))) ? (~var_4) : (arr_22 [i_6] [i_6] [5] [5]))));
                    var_33 = (-127 - 1);
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_52 [i_5] [2] [2] [i_5] [i_13] = (((2045270356 / 127) / 8880477517467794167));
                                var_34 ^= var_9;
                                arr_53 [i_13] = (((((~(arr_49 [i_5] [i_5] [i_13] [i_5 - 1] [i_5 - 1] [i_5])))) ? ((~(arr_46 [8] [i_6]))) : (min(137371844608, 0))));
                            }
                        }
                    }
                }
                arr_54 [1] [i_6] [i_6] = (((23356 && 0) ? ((min((arr_49 [i_5 - 1] [i_5 - 1] [6] [i_5 - 1] [i_5] [i_5 - 1]), (arr_49 [i_5 - 1] [i_5 - 1] [8] [i_5 - 1] [i_5] [i_5 - 1])))) : (arr_49 [i_5 - 1] [i_5 - 1] [6] [i_5 - 1] [6] [i_5 - 1])));
            }
        }
    }
    var_35 = ((-((-115 ? 18446744073709551615 : (!0)))));
    #pragma endscop
}
