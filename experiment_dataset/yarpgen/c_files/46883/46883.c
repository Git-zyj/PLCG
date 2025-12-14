/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 += arr_3 [2];
        var_11 |= (min(4349, (min(((min(1, 1))), (arr_3 [0])))));
        var_12 = ((((max((max(var_9, 4239574998)), -1))) ? 16380 : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_13 += (arr_1 [1]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-14936605583653838342 ? (arr_3 [i_0]) : 2083753266589645157));
                            var_14 *= (arr_11 [i_1] [i_2] [2] [i_1]);
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] = (arr_5 [13] [i_0] [i_1]);

            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] [i_1] [i_0] = (((arr_8 [i_0]) ^ 16362990807119906459));

                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_15 = 54907;
                        var_16 = (max(var_16, (((((arr_12 [i_7 - 3] [i_6] [i_5] [i_1] [i_0]) ? (arr_5 [7] [i_5] [i_5]) : var_9)) ^ (arr_10 [8] [i_6 - 1] [i_7 - 2] [0] [i_7] [i_7 - 2])))));
                        var_17 = (max(var_17, (((-(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    arr_27 [i_0] = (((arr_26 [i_0] [i_0]) ? (arr_10 [i_6] [i_6 - 1] [i_6 + 1] [i_0] [i_6 + 1] [i_6 - 1]) : (-9223372036854775807 - 1)));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_29 [i_0] [i_8]) < (arr_20 [i_5] [i_8])));
                    arr_31 [i_5] [i_0] = ((-(arr_20 [i_0] [i_5])));
                    var_18 = (arr_23 [i_0] [i_0] [i_1] [i_0] [i_8] [i_1]);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_35 [i_0] [i_0] [i_0] [i_9] [i_0] = ((54907 ? (arr_12 [i_0] [i_1] [i_5] [i_9] [8]) : (arr_26 [i_0] [i_1])));
                    arr_36 [i_0] [0] [i_5] [i_0] = ((!(arr_9 [i_0] [i_5] [i_9])));
                    var_19 = (max(var_19, ((((arr_6 [i_0] [i_0] [i_5]) ? (arr_4 [i_9] [i_9]) : -6585)))));
                }
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_46 [6] [i_11] [i_0] [i_0] [i_1] [i_0] = ((1 & (arr_10 [i_0] [i_1] [i_1] [i_0] [i_11] [i_12 - 1])));
                            var_20 = ((~(((arr_7 [i_0] [i_1]) ? (arr_34 [i_0] [i_0] [i_10] [i_10] [i_12]) : (arr_29 [i_0] [i_10])))));
                        }
                    }
                }
                var_21 = (!31);
                arr_47 [i_0] [i_1] [i_0] = (((~(arr_3 [i_0]))));
                var_22 += -5433119358268987371;
            }
            for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] = -61;
                arr_51 [i_0] = (~5433119358268987371);
                arr_52 [i_0] [i_0] [i_0] = (-(arr_23 [i_0] [i_0] [i_1] [i_13] [i_13] [i_13]));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                arr_55 [i_0] [i_1] [i_1] = -8128;
                var_23 += 1;
            }
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            var_24 |= (((arr_56 [i_15 - 3]) / var_7));
            /* LoopNest 3 */
            for (int i_16 = 2; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_25 = (((arr_33 [i_16 - 2] [1] [i_16 + 1] [i_15 + 1]) == (arr_2 [i_16 + 2])));
                            arr_65 [3] [i_15 + 1] [i_15] [i_16 - 1] [i_0] [i_18] = (((((arr_49 [i_17]) && -7109777203218650173)) ? 127 : (arr_29 [i_0] [i_18])));
                            var_26 *= 13250168412085835878;
                            var_27 = (arr_37 [i_15 - 2]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 12;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 12;i_21 += 1)
                    {
                        {
                            var_28 = ((~(arr_28 [i_15] [i_0] [i_15] [i_15 - 3])));
                            var_29 = (arr_38 [i_0] [i_15 + 1]);
                            arr_72 [i_0] [i_15 + 1] [10] [i_19 - 1] [i_20 - 1] [i_19 - 1] |= (arr_20 [i_15] [i_15]);
                        }
                    }
                }
            }
        }
    }
    var_30 = ((-(!var_5)));

    for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
    {
        var_31 &= (-1 * 54920);
        var_32 *= (min(((min(1, (max((arr_73 [i_22]), (arr_74 [6] [i_22])))))), (((arr_73 [i_22]) - 63604))));
    }
    for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
    {
        arr_79 [i_23] [i_23] = 0;
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 24;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 23;i_26 += 1)
                {
                    {

                        for (int i_27 = 4; i_27 < 21;i_27 += 1) /* same iter space */
                        {
                            arr_92 [i_23] [1] [1] [i_26] [i_23] = ((((((((arr_78 [i_23]) + 2147483647)) << (6 - 6))) != (((arr_74 [i_23] [i_27]) ? 1 : (arr_85 [i_23] [i_24]))))));
                            var_33 -= 32768;
                            var_34 = (max(var_34, (!140737471578112)));
                        }
                        for (int i_28 = 4; i_28 < 21;i_28 += 1) /* same iter space */
                        {
                            var_35 *= ((-(((arr_75 [i_23] [i_24]) ? 13630011326832853570 : ((var_8 ? (arr_81 [i_24] [i_24]) : (arr_83 [i_23] [i_26 + 1] [i_28])))))));
                            var_36 = 7388432556783941338;
                        }
                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            arr_98 [i_24] [i_23] [i_23] [i_23] [i_23] = (arr_78 [i_25]);
                            var_37 ^= ((-13 | ((1 ? 6596988339734877823 : ((min(1622213234, 10628)))))));
                        }
                        var_38 = (max(var_38, 1));
                        var_39 -= (arr_87 [i_24]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
