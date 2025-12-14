/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_8 ? var_6 : ((var_9 ? var_7 : var_14))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_16 = ((arr_2 [i_0]) <= 54778);
            var_17 = (arr_4 [i_0] [7]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_18 |= (arr_1 [i_0]);
            arr_10 [1] [i_2] [1] = (((var_2 ? (arr_9 [i_0] [i_2]) : var_10)) % (((arr_9 [i_0] [i_2]) ? var_6 : (arr_6 [i_0] [i_0] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_19 = 32767;
            var_20 = (min(var_20, (arr_9 [i_0] [i_3])));
            var_21 &= (18446744073709551615 > -548744082);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_19 [i_4] = ((var_14 ? (arr_16 [i_0]) : (((arr_5 [i_0] [i_4]) ? var_4 : var_6))));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_22 = ((arr_13 [i_0]) ? (arr_13 [i_7]) : (arr_13 [i_0]));
                            var_23 += (arr_16 [i_0]);
                            arr_28 [11] [i_4] [i_6] [i_6] [9] [i_6] = (((arr_13 [i_0]) ? (arr_14 [i_0]) : (arr_2 [i_0])));
                            arr_29 [i_0] [i_4] [i_5] [i_6] [i_7] [i_6] = 19796;
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_32 [i_4] [i_8] = ((163 >> (((arr_7 [i_0]) - 6))));
                    arr_33 [i_4] = 1;
                    var_24 = ((arr_25 [2] [i_4] [i_4] [i_4] [i_8]) / var_11);
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_25 += (arr_21 [i_0] [i_0] [i_0]);
                    var_26 = ((((((arr_26 [i_4] [i_4]) & var_12))) ? (arr_3 [i_0]) : var_10));
                    var_27 = (min(var_27, ((((arr_1 [i_0]) ? (((arr_27 [i_0] [i_4] [i_5] [i_9] [10]) ? 18446744073709551610 : var_8)) : (((var_1 ? var_2 : (arr_23 [i_9] [i_4] [i_5] [i_9])))))))));
                    arr_37 [i_0] [i_4] = ((((arr_6 [8] [3] [i_5]) | 6290321474834299973)));
                }
                var_28 = (min(var_28, var_14));
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_29 = var_14;
                            var_30 = (arr_21 [i_12] [i_10] [2]);
                        }
                    }
                }
                arr_45 [i_0] [i_4] [13] = ((var_5 * ((((arr_30 [i_0] [i_10]) ? var_9 : (arr_4 [i_4] [i_4]))))));
                arr_46 [i_4] [i_4] [i_4] = (((arr_15 [i_4]) ? (arr_20 [i_4]) : 18446744073709551610));
                var_31 ^= ((~(arr_16 [i_4])));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {
                arr_49 [11] [i_4] = (!var_10);
                arr_50 [i_4] [i_4] [i_4] [i_4] = (((((arr_39 [i_0] [13] [i_4] [i_0]) << (var_6 - 93))) < ((((arr_14 [i_0]) > (arr_34 [i_0] [i_0] [i_0] [i_0]))))));
                arr_51 [i_4] = (((((var_1 ? (arr_15 [i_4]) : var_9))) ? var_1 : (((((arr_22 [1] [i_4] [i_4] [i_13] [i_4] [i_4]) >= var_12))))));
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    arr_56 [i_0] [i_4] [i_14] [i_4] = (((65535 ? 6 : -7)));
                    var_32 += (((arr_7 [i_0]) && (((-640 ? var_9 : 18446744073709551610)))));
                    arr_57 [i_4] [i_4] [i_14] [i_15] = ((-(arr_20 [i_4])));

                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_60 [i_0] [5] [i_14] [i_14] [i_15] [i_4] [i_16] = var_14;
                        var_33 = (var_4 >= (((arr_9 [i_0] [i_0]) ? -513528420 : (arr_23 [i_4] [i_16] [10] [i_15]))));
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_34 = var_13;
                        arr_63 [i_4] [i_4] = ((var_0 ? (arr_15 [i_4]) : (arr_15 [i_4])));
                    }
                }
                arr_64 [i_0] [i_4] [i_4] [i_14] = (((((var_2 ? var_2 : 5895120581232661248))) ? ((81 ? 23437 : var_8)) : (arr_30 [i_0] [i_14])));
            }
            arr_65 [i_4] [i_4] = (((arr_42 [i_0] [i_4] [9] [i_4] [i_4] [i_0]) > 8007091482666041622));
        }
        var_35 += ((1 ? (arr_11 [i_0]) : (((arr_26 [i_0] [14]) | var_12))));
    }

    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        arr_69 [i_18] = ((((min(var_13, (((arr_66 [17] [i_18]) / var_4))))) ? ((((max(18446744073709551581, 216))))) : (max((var_10 * var_12), ((var_9 ? (arr_67 [0]) : (arr_68 [i_18])))))));
        arr_70 [i_18] = (max(((((((arr_66 [i_18] [i_18]) ? var_14 : var_9))) ? var_2 : 16376)), (((arr_68 [i_18]) / (arr_68 [i_18])))));
        var_36 = ((((max((arr_66 [i_18] [i_18]), (((1 ? 159 : 0)))))) ? (((!var_5) ? (max((arr_67 [i_18]), -5895120581232661249)) : ((var_14 ? var_10 : 9155912629439841672)))) : (max((min((arr_68 [i_18]), var_3)), ((((arr_68 [i_18]) >= var_9)))))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_37 += (((-20399 - -1) < var_5));
        arr_74 [i_19] = 0;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                {
                    var_38 = (((arr_1 [i_21]) ? (~var_0) : (((arr_42 [i_19] [i_19] [i_20] [i_19] [i_21] [i_21]) ? var_7 : (arr_15 [i_21])))));
                    arr_80 [i_21] = var_9;
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            {
                                var_39 += var_6;
                                arr_88 [i_21] [i_20] [i_20] [i_20] [i_20] = ((4068446710021514077 ? (arr_43 [i_23] [i_23] [i_22] [i_21] [i_20] [11]) : var_1));
                            }
                        }
                    }
                }
            }
        }
        arr_89 [i_19] = (((arr_18 [12]) ? ((var_9 >> (var_14 - 7589193489319258284))) : (arr_41 [i_19] [i_19])));
        arr_90 [0] = (((arr_67 [i_19]) & (arr_67 [i_19])));
    }
    for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
    {
        var_40 ^= var_13;
        arr_93 [i_24] = (min(-112701834, var_7));
        arr_94 [i_24] = arr_38 [i_24] [i_24] [i_24];
    }
    #pragma endscop
}
