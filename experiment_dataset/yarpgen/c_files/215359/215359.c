/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = ((var_4 >= (arr_4 [i_0] [i_0])));
            var_13 = (min(var_13, var_1));
        }
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (((var_3 ? (arr_7 [i_0]) : 4)));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_0] [i_3] [i_0] = (arr_3 [i_4]);
                            var_15 = ((~((((max(var_10, -6978722670173505935))) ? (((var_0 ? 12 : var_10))) : (min((arr_10 [i_0] [5] [i_0] [2]), 6978722670173505935))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_2] [0] [i_3] [i_2] [i_2] = ((~(((arr_5 [1] [1]) ? (arr_3 [i_2]) : (arr_4 [i_0] [i_6])))));
                            var_16 = (((((arr_18 [i_4] [i_2 - 3] [i_3 + 2] [i_2 - 3] [i_6] [i_6] [i_2]) << (((arr_2 [i_0] [i_2 - 1]) - 69)))) != (arr_14 [i_0] [i_2 - 2] [i_3] [i_3] [i_4] [i_2 - 2] [i_6])));
                            var_17 = ((var_8 ? 11 : 3067220196));
                            var_18 = (min(var_18, (((var_1 ^ (~var_5))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_19 = var_2;
                            var_20 = (var_10 & var_10);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_29 [i_0] = ((1 ? -12 : var_3));
                            arr_30 [i_0] [i_0] [i_2 + 2] [5] [0] [i_9] [5] = (((arr_10 [i_0] [i_9] [i_0] [i_2 - 1]) ? 255 : (arr_19 [i_0] [i_8] [i_2] [i_2 - 2] [i_2 - 2])));
                            var_21 = (min(var_21, ((((((7 + var_9) ? ((var_6 ? 3841798807 : 3841798814)) : var_11)) > (arr_3 [i_0]))))));
                            var_22 |= (((((var_6 ? ((-(arr_3 [i_2]))) : -var_6))) > ((((arr_4 [i_2 + 2] [i_2 + 2]) ? 11 : 21559)))));
                        }
                    }
                }
            }
            var_23 += (var_4 >= 35116);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_33 [i_0] [i_0] [i_11] = var_3;
            var_24 = 1271995352;

            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_25 = (max(var_25, (((((172 ? var_6 : (arr_34 [i_11]))) & ((1 ? var_1 : (arr_15 [i_0] [i_11] [i_0] [i_11] [i_0]))))))));
                var_26 = (min(var_26, ((((arr_15 [i_0] [i_11] [i_11] [i_11] [i_0]) ? 84 : ((var_6 ? var_3 : -5)))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_27 = (((arr_35 [i_13] [i_13]) / var_5));
                arr_38 [i_11] [i_11] [i_11] [i_0] = var_7;
            }
            for (int i_14 = 3; i_14 < 12;i_14 += 1)
            {
                var_28 = ((1227747100 != (arr_37 [0] [i_11] [i_11] [i_11])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_29 ^= (((((arr_8 [i_11] [i_0] [i_15] [i_11]) > 21)) ? var_9 : -var_10));
                            arr_45 [5] [i_11] [i_15] [i_15] [i_11] [5] [i_11] = (((65535 ? var_8 : 0)));
                            var_30 = 1;
                            var_31 = (max(var_31, (arr_15 [i_14 - 1] [i_14] [i_14] [i_16] [i_14 - 2])));
                        }
                    }
                }
                var_32 += (!-6978722670173505910);

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_48 [i_17] [i_17] [i_17] [i_17] = var_6;
                    arr_49 [i_0] [i_0] [i_0] [i_17] [10] = var_11;
                    var_33 = ((var_7 * (arr_15 [i_14 - 1] [i_17] [i_14 - 2] [i_17] [i_11])));
                    var_34 = ((((var_5 ? 1 : 3632250439)) << (((arr_34 [i_17]) - 1590302116))));
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_35 = (+-20);
                    var_36 -= ((var_7 - (arr_23 [i_0] [1])));
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    arr_57 [i_0] [12] [i_14] [i_19] = (var_11 ? 0 : (arr_47 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14 + 1]));
                    arr_58 [9] [i_11] [i_11] [i_11] [i_19] = (~-1);
                }
                var_37 = var_3;
            }
        }
        var_38 = ((((var_7 <= var_1) != ((0 / (arr_41 [6] [6] [i_0] [i_0]))))));
        arr_59 [i_0] = var_5;
        var_39 = ((-(((17 && (((var_6 ? var_2 : 1))))))));
        var_40 *= ((!((!((min(6978722670173505935, (arr_32 [i_0]))))))));
    }
    var_41 = (((((var_8 & ((var_1 ? 162 : var_2))))) ? ((162 ? var_11 : var_4)) : var_6));
    var_42 = var_1;
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            {
                var_43 = (min((((arr_63 [i_20]) >> ((((92 ? 2811076871 : (arr_65 [i_20] [i_20]))) - 2811076833)))), var_8));

                for (int i_22 = 1; i_22 < 21;i_22 += 1)
                {
                    arr_69 [i_22] [i_21] [i_22] = ((!((max((arr_63 [i_20]), 63)))));
                    arr_70 [i_20] [i_22] [i_20] = ((+((var_2 << ((var_6 << (((arr_62 [i_21]) - 3614997123))))))));
                    /* LoopNest 2 */
                    for (int i_23 = 4; i_23 < 23;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 0;i_24 += 1)
                        {
                            {
                                var_44 = (((((var_9 ? (arr_64 [i_24 + 1] [i_23 - 1] [i_22 - 1]) : var_7))) ? 1964549599 : (((((var_9 ? var_11 : var_3))) ? (var_4 > var_1) : var_6))));
                                arr_77 [i_22] = (max(-13, ((((var_2 > (-127 - 1))) ? 0 : (max(var_1, var_10))))));
                            }
                        }
                    }
                    var_45 *= (min(var_9, ((((arr_62 [i_22 + 3]) & (arr_62 [i_22 + 2]))))));
                }
                arr_78 [i_20] [14] = ((-(max((arr_72 [i_20] [i_21] [i_21] [i_21] [i_21]), -var_9))));
            }
        }
    }
    #pragma endscop
}
