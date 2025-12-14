/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((((((~(arr_0 [i_0])))) ? ((min(14, -33))) : (14 / var_15))) + 2147483647)) >> ((((((~(arr_0 [i_0])))) < var_12)))));
        arr_2 [i_0] = min((((arr_1 [i_0]) ? ((((14 || (arr_1 [i_0]))))) : (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0]))));
        var_21 = (8 / -13);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            {

                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_22 = ((-8 ? 2 : -1));
                    arr_12 [i_2] [i_2] |= -8;
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = (((((15 ? (arr_14 [i_1] [i_4] [i_4]) : var_3)) | (var_14 <= 8))));
                                var_24 = -3;
                            }
                        }
                    }
                }
                var_25 = ((var_14 ? -13 : 5));
            }
        }
    }

    for (int i_7 = 4; i_7 < 19;i_7 += 1)
    {
        var_26 = ((~(max(2, var_12))));
        arr_23 [i_7] [i_7] = ((((((arr_4 [i_7 - 2] [i_7 - 1]) ? -8 : (arr_18 [i_7] [i_7 - 2])))) ? ((~((max(-3, 2))))) : (((0 ^ -23) ? (7 & var_15) : (~21)))));
        arr_24 [i_7] [i_7] = (((((((min(11, (arr_7 [i_7] [7])))) ? (~-1) : (arr_15 [i_7] [i_7 - 3] [i_7] [i_7])))) ? (((!(8 & -3)))) : (((-1 + 2147483647) << (13 - 13)))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
        {
            var_27 = ((-11 ^ (arr_25 [i_8] [i_9])));
            var_28 = (arr_11 [i_8] [i_9 + 2] [i_8]);

            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                var_29 = ((22 ? var_6 : var_12));
                var_30 = (((arr_31 [i_10 - 2] [i_9 + 3] [i_9 + 2] [i_9 + 1]) && (arr_31 [i_10 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                var_31 |= (((arr_26 [i_9 - 1]) ? ((17 << (((arr_1 [i_10]) - 11183200092063282717)))) : (var_13 < -1)));
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_36 [i_8] [i_11] [i_11] = (((17 / -8) ^ (((arr_0 [i_9 + 1]) ? var_16 : (arr_19 [i_8] [i_9] [i_9] [i_11] [i_11])))));
                arr_37 [2] [i_9] [i_11 - 1] |= (((arr_25 [4] [i_9]) ? var_7 : (arr_25 [2] [i_8])));
            }
            var_32 = (arr_32 [i_8] [i_9] [i_9]);
            var_33 = (((arr_11 [i_8] [i_9 + 2] [i_8]) ? var_6 : (arr_0 [i_9 - 1])));
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
        {
            var_34 = var_1;
            arr_42 [i_8] [i_8] [1] |= (arr_10 [i_8] [i_8] [12] [i_12]);
        }
        var_35 = (max(((max((arr_20 [i_8]), (arr_10 [i_8] [i_8] [i_8] [i_8])))), (((arr_10 [i_8] [i_8] [i_8] [i_8]) | (arr_20 [i_8])))));
        var_36 = (((((19 ? 33 : -9))) ? ((-(((arr_13 [i_8] [i_8]) ? (arr_32 [i_8] [i_8] [i_8]) : -17)))) : ((((arr_21 [i_8] [i_8]) ^ (arr_10 [i_8] [i_8] [i_8] [i_8]))))));
        arr_43 [i_8] = -12;
    }
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        var_37 |= ((((max((arr_45 [i_13 + 1] [i_13]), (arr_45 [i_13 - 1] [i_13 + 2])))) ? (((arr_45 [i_13 + 2] [i_13]) ? 8 : (arr_47 [i_13]))) : (((arr_47 [i_13]) ? (arr_47 [i_13 - 1]) : (arr_47 [i_13])))));
        var_38 |= (((46 - ((-8 ? (arr_44 [i_13 - 1]) : -1)))));
    }
    #pragma endscop
}
