/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((max(var_11, (max(var_0, var_9)))), var_2));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(-616156977, (var_5 + var_3)))) ? (((var_11 * ((var_2 ? 5108 : (arr_1 [i_0])))))) : (min((arr_1 [i_0]), var_3))));
        arr_4 [i_0] [i_0 + 2] = (((arr_1 [i_0 + 1]) ? (arr_1 [8]) : (var_9 - var_2)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_15 = var_8;
                var_16 = (max(var_16, (arr_8 [i_2] [i_1] [i_0])));
            }
            for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_17 -= 802262451302098096;
                var_18 = (((((((((arr_1 [i_0 - 1]) ? var_9 : 1))) || (arr_12 [i_0] [i_1] [2])))) != var_7));
            }
            arr_15 [i_0] [i_0] = (arr_0 [i_0]);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0 + 2] [i_4] = ((((((arr_10 [i_0 - 1] [i_4] [i_4] [i_4]) ? var_11 : (arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_4])))) ? (8 * var_0) : -1957715017));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_27 [3] = 3;
                        var_19 = (var_1 + var_7);
                        arr_28 [i_0 + 1] [i_4] [i_5] [i_6] = ((1 ? var_1 : ((((min(18, (arr_9 [i_0 + 1] [i_5] [14])))) ? (((arr_10 [4] [1] [14] [i_6]) ? var_1 : var_6)) : ((min(var_6, var_2)))))));

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            arr_31 [11] [9] [i_5] [i_7] [i_7] = ((~(arr_9 [i_0] [i_7] [i_5])));
                            arr_32 [i_0 - 3] [i_4] [i_5] [i_6] [i_7] = (arr_1 [i_0]);
                            arr_33 [i_0] [i_4] [i_6] [i_6] [i_6] [i_6] [i_4] = ((!(((16383 ? 44142 : 8)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_20 = (max(var_20, var_5));
                            var_21 = 2;
                            var_22 = (min(var_22, (((var_11 ? (arr_6 [i_0] [i_4]) : var_6)))));
                            arr_37 [i_0 - 1] [i_4] [i_5] [i_5] [i_8] [i_5] [i_4] = ((!(((-(arr_16 [i_8]))))));
                            var_23 = var_6;
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_40 [i_0] = var_2;
                var_24 += ((((((arr_12 [i_9] [i_4] [i_9]) ? (arr_12 [i_9] [i_4] [i_0 - 2]) : (arr_12 [i_0 - 3] [i_4] [i_9])))) && ((((arr_12 [i_0 + 2] [i_4] [i_9]) ? (arr_12 [i_0] [i_4] [i_9]) : 1)))));
                arr_41 [i_0] [i_4] [i_9] = ((var_11 ? ((((arr_36 [i_0 - 1] [i_4] [i_4] [i_0] [i_0]) > var_4))) : (((4294967278 == (arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_25 = 62168;
                            arr_48 [i_10] [i_10] = (((((((min(var_13, var_6))) ? ((var_13 ? (arr_24 [i_11] [0] [8] [i_0]) : 11639877850781671523)) : var_5))) ? ((min(118, var_6))) : (((var_11 == (arr_42 [i_0 - 1] [i_0 + 1] [i_0 + 2]))))));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_26 = var_4;
                    arr_53 [i_12] [0] [0] [i_12] = var_12;
                    var_27 = var_4;
                }
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    arr_56 [i_0] [i_4] [i_9] [i_13] = var_3;
                    arr_57 [i_13] = ((((((arr_0 [i_9]) ? 1 : (min(var_8, var_13))))) ? ((((!var_8) || (((arr_38 [i_4] [i_9]) || var_10))))) : var_7));
                    arr_58 [i_0 - 1] [i_13] [i_4] [i_9] [i_13] [i_13] = var_0;
                }
            }
            arr_59 [i_4] [i_0] = ((((((arr_49 [i_0 + 1] [i_0 - 3]) * (arr_39 [i_0 + 1])))) % var_9));
            arr_60 [i_0 + 2] = var_8;
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_28 = (((((arr_20 [i_0] [i_0 - 3] [i_0 - 3]) ? var_9 : (arr_20 [9] [i_0 - 3] [i_0]))) - ((((arr_44 [8] [i_14]) | (arr_44 [i_0] [i_14]))))));
            arr_65 [i_0] = (min((((arr_8 [i_14] [i_14] [i_14]) ? (arr_8 [i_0 + 1] [i_14] [i_14]) : (arr_8 [i_14] [i_14] [i_0 - 2]))), (min((arr_36 [i_0] [12] [4] [i_14] [i_14]), (arr_54 [i_0 + 1] [0] [i_14] [i_14])))));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            arr_68 [4] [i_0] &= var_4;
            arr_69 [i_15] [i_0] [i_0 - 3] = (((((17 ? 127 : 85))) ? (arr_14 [i_15]) : ((var_8 * (arr_14 [i_15])))));
            arr_70 [i_15] [i_15] [i_0 + 2] = (arr_43 [i_0] [i_15] [i_0]);
        }
        var_29 = (max((((arr_55 [i_0 - 1] [i_0] [i_0]) & var_0)), var_3));
        arr_71 [i_0] = (arr_21 [i_0] [i_0]);
    }
    var_30 = -65527;
    var_31 = ((var_5 >> ((var_5 * ((8 >> (9150688621513011879 - 9150688621513011868)))))));
    var_32 = var_3;
    #pragma endscop
}
