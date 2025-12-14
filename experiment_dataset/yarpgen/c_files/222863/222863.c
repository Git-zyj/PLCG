/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((-0 ? var_13 : var_9)) << ((((max(var_7, 8)) > var_3))))))));
    var_17 = (max((max(var_8, (!60))), (max(var_5, (max(var_10, 466616631))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 ^= ((!(arr_0 [i_0 + 1] [i_0 + 1])));
        arr_2 [i_0 - 1] = ((-(((((var_12 ? -47 : var_2))) / var_4))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 ^= (((-var_2 ? var_7 : (arr_4 [i_1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = (!0);
            var_21 = (arr_3 [i_1]);
            var_22 = (max(var_22, (((-(arr_3 [i_1]))))));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            arr_11 [i_1] [i_1] [i_3] = ((((max((arr_3 [i_3 - 3]), (arr_4 [i_1])))) ? (arr_8 [i_3 + 4]) : var_8));
            arr_12 [i_1] = (~var_3);
            arr_13 [i_3 - 1] [i_1] = 18446744073709551591;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_23 = (var_8 & 196);

            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                arr_20 [i_5] = ((((((arr_6 [i_1] [1]) ^ var_1))) ? ((var_0 ? var_13 : 16742)) : var_7));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_24 = (14 > var_13);
                            var_25 *= ((((((arr_3 [i_5]) ? (arr_24 [8] [10] [i_5] [4] [i_7]) : 2328001275))) ? (var_14 % var_3) : var_3));
                            arr_25 [i_1] [i_4] [i_5] [i_6] [i_5] = (-38 ? (arr_7 [i_5 + 2] [i_5 + 1]) : var_15);
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                var_26 = (((-(arr_8 [i_1]))));
                var_27 = (~var_15);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_37 [1] [5] [i_8 - 2] [i_9] [i_10] [i_8] = 0;
                            var_28 = (i_9 % 2 == zero) ? ((((arr_22 [i_9] [i_8 + 2] [i_8 + 3]) << (((arr_22 [i_9] [i_8 + 1] [i_8 + 2]) - 12766))))) : ((((arr_22 [i_9] [i_8 + 2] [i_8 + 3]) << (((((arr_22 [i_9] [i_8 + 1] [i_8 + 2]) - 12766)) - 12581)))));
                            var_29 *= ((-((0 / (arr_31 [i_9] [1] [i_1])))));
                            arr_38 [i_1] [i_1] [i_10] [i_9] [i_10] [i_9] = (arr_24 [i_10] [i_9] [i_8] [i_9] [i_1]);
                        }
                    }
                }
                var_30 += ((-(arr_4 [i_8 + 1])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_42 [i_11] [i_4] [i_1] = -var_4;
                arr_43 [i_1] [6] [i_1] = (arr_28 [i_1]);
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                arr_47 [i_1] [1] [i_1] = 0;
                var_31 += -22600;
            }
            arr_48 [i_1] [i_1] = 37922;
            var_32 = (11062 / var_14);
        }
        arr_49 [14] = ((var_15 ? (arr_19 [i_1] [14] [14] [i_1]) : ((~((-59 ? var_14 : var_0))))));
        var_33 ^= (max(((-(arr_36 [i_1] [6] [i_1] [i_1]))), (((arr_36 [i_1] [6] [i_1] [i_1]) ^ (arr_36 [i_1] [8] [i_1] [i_1])))));
    }
    for (int i_13 = 3; i_13 < 9;i_13 += 1)
    {
        var_34 = (arr_39 [i_13] [i_13] [i_13]);

        for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
        {
            arr_56 [i_13] [i_13 + 2] [i_13] = -327;
            arr_57 [i_13 - 2] [i_14] = (((min((var_3 + var_2), (((arr_36 [i_13] [8] [i_14] [i_14 + 2]) ? 0 : 27614)))) <= (((max(var_9, -16742))))));
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        {
                            arr_67 [i_17] [i_16] [i_15] [1] [i_13] = (arr_32 [i_13] [i_13] [i_15] [i_17 - 2]);
                            arr_68 [i_13] [1] [i_15] [i_13 + 3] = ((max(-16728, (arr_41 [i_13 - 1] [i_17 - 2] [i_15 + 1]))));
                            arr_69 [i_13 - 2] [i_14 - 2] [i_15] [i_15] [i_14] = 14;
                        }
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 10;i_18 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                var_35 = ((((arr_45 [i_19] [i_19]) ? 38 : 19069)) << (((((~0) + 30)) - 14)));

                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    var_36 *= ((((((arr_45 [11] [i_18 - 1]) ? (arr_75 [0] [6] [0]) : var_9))) ? (arr_10 [i_13 + 2] [i_18 - 1] [i_19]) : (arr_10 [i_13 + 3] [i_18 - 2] [i_19])));
                    arr_77 [i_13] [i_19] [i_13] [i_20] = (!123);
                }
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    arr_81 [i_19] [i_18] [i_18] [i_18 - 2] [i_18] = (!33457);
                    var_37 = -var_2;
                }
            }
            arr_82 [i_13 + 3] [i_13] [0] = ((var_0 ? (((var_4 <= ((var_2 ? (arr_7 [i_13] [i_18 + 1]) : -17572))))) : (min(((((arr_41 [i_13 + 3] [i_13] [i_13]) && (arr_50 [5])))), (((arr_71 [i_13] [i_18 + 1]) * var_12))))));
            arr_83 [10] = ((var_12 > ((-(arr_60 [i_18] [i_18 + 2] [i_18 + 2])))));
        }
    }
    var_38 = 11212899272437607101;
    #pragma endscop
}
