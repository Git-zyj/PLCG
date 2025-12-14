/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((((((arr_7 [i_2] [i_1] [i_0]) ? (arr_7 [i_0] [i_2] [i_2]) : (arr_7 [i_2] [i_1] [i_2])))) ? var_4 : (min((arr_7 [i_0] [i_1] [1]), var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = ((((!(((4250673718320663544 ? 0 : 0))))) ? ((((-(arr_9 [1]))) ^ var_7)) : ((var_9 ? (max(var_5, (arr_13 [i_4] [i_2] [i_0]))) : 1))));
                                arr_17 [i_3] [i_3] [i_2] [i_3] &= ((var_4 ? 0 : (arr_6 [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_13 -= ((((((arr_13 [12] [i_5] [i_5]) ? 164 : (arr_18 [5])))) ? (arr_15 [i_5] [i_5] [i_5] [14] [i_5] [i_5]) : (arr_9 [i_5])));
        arr_20 [i_5] = (((((246 ? var_10 : (arr_6 [i_5])))) ? var_2 : (arr_5 [1])));

        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            arr_23 [i_5] [i_6 - 1] = (((((arr_18 [i_5]) ? var_2 : 164)) + (arr_6 [i_5])));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [i_6] [i_7] [i_8 - 2] [i_9] = (((arr_13 [i_8] [5] [i_5]) ? (((arr_0 [i_6 + 1]) / var_10)) : (arr_27 [i_5] [i_6] [i_7] [i_8 - 1] [i_9])));
                            var_14 -= 6;
                        }
                    }
                }
            }
            arr_32 [i_5] = 164;
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        arr_40 [i_5] [i_11] [i_11] [i_5] = var_3;
                        arr_41 [i_11] [i_10] [i_11] = ((-(var_3 << 0)));
                        arr_42 [i_5] [i_11] = (arr_25 [i_11] [i_11] [i_11]);
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_15 += -9223372036854775807;
                var_16 = (var_9 ? (((-(arr_6 [18])))) : (((arr_45 [i_13] [i_13] [i_13]) ? var_8 : var_7)));
                arr_50 [i_13] [i_13] [i_15] = ((~((var_4 ? 164 : var_0))));
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_17 = (max(var_17, ((((arr_26 [8]) ? var_1 : (arr_12 [i_13] [i_13] [8] [2]))))));
                var_18 = (min(var_18, (((((((((arr_30 [i_13] [6] [i_13] [i_14] [4]) ? 255 : var_7))) || ((max((arr_25 [i_13] [6] [6]), var_7))))) ? ((max(((1 ? 0 : 32767)), 1))) : (min(var_4, (min(var_10, var_10)))))))));
                var_19 = var_6;
            }
            var_20 *= ((+(((!var_9) ? -var_7 : var_6))));
            var_21 = (min((arr_0 [i_14]), (((var_7 & (max(0, var_2)))))));
            arr_54 [i_13] [1] [i_14] = (min(((((max(var_6, (arr_28 [7])))) ? ((255 ? 255 : var_8)) : ((((var_5 != (arr_39 [i_13] [i_13]))))))), 0));
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_22 = var_7;
            var_23 ^= ((255 ? 683788039 : 7));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                var_24 = ((var_2 ? (arr_49 [i_13] [i_17] [i_18] [i_13]) : var_9));
                var_25 = (arr_5 [i_13]);

                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    var_26 ^= (arr_15 [i_13] [i_13] [i_13] [i_18] [i_18] [i_19]);
                    arr_63 [i_13] [i_13] [i_18] [4] = -var_6;
                }
            }
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_27 ^= min(20, (min((arr_18 [i_13]), (arr_18 [i_13]))));
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 7;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 7;i_22 += 1)
                    {
                        {
                            arr_72 [i_13] [i_17] [i_20] [i_20] [4] [i_22] [i_20] |= (var_8 / var_5);
                            var_28 *= 15;
                            arr_73 [i_13] [i_17] [1] [1] = (max(var_0, (((arr_44 [i_13] [i_17]) ? (arr_44 [i_13] [i_13]) : (arr_44 [0] [i_21])))));
                        }
                    }
                }
            }
            arr_74 [i_13] [i_17] = (!1);
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 10;i_24 += 1)
            {
                {
                    var_29 -= (max((max((arr_44 [i_13] [i_13]), 32767)), 108));
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 10;i_26 += 1)
                        {
                            {
                                var_30 = (min(var_30, 147));
                                var_31 = (max(var_31, (arr_70 [i_13] [5])));
                            }
                        }
                    }

                    for (int i_27 = 0; i_27 < 10;i_27 += 1) /* same iter space */
                    {
                        var_32 -= 1;
                        arr_89 [i_13] [i_23] [i_24] [i_23] = min((arr_26 [i_13]), ((max(-var_7, ((20 ? 255 : 0))))));
                        var_33 = ((((!((max(126, (arr_21 [i_13] [i_23] [i_27])))))) ? 0 : (((((var_4 ? (arr_52 [i_13] [i_23] [9] [i_27]) : 1))) ? var_3 : ((var_4 ? var_9 : var_6))))));
                    }
                    for (int i_28 = 0; i_28 < 10;i_28 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_29 = 0; i_29 < 10;i_29 += 1)
                        {
                            var_34 ^= (((!var_9) == (((arr_0 [i_13]) ? 126 : -333087492523908514))));
                            arr_94 [i_13] = (arr_28 [i_13]);
                        }
                        for (int i_30 = 3; i_30 < 9;i_30 += 1)
                        {
                            var_35 = ((1 ? (max(var_9, ((min(var_1, 1016955260))))) : ((var_4 ? 146 : ((var_0 ? var_8 : (arr_3 [6] [i_23] [i_13])))))));
                            var_36 = (max(3808260607, 1));
                            arr_97 [0] [i_23] [i_24] [i_24] [6] |= var_8;
                        }
                        arr_98 [i_13] [i_24] = (((((max(var_2, -4017467933432349405)) >= (arr_62 [i_13] [i_23] [i_24] [i_28] [i_23] [i_24]))) ? ((-1016955260 & ((1 ? var_3 : var_6)))) : ((max((arr_81 [i_13] [i_24] [1] [i_13]), (arr_30 [5] [i_13] [i_23] [i_13] [1]))))));
                        arr_99 [i_13] [i_13] = 0;
                        arr_100 [i_13] [i_13] [i_24] [i_13] = (((((-8 > (arr_91 [7] [i_13] [i_13] [3]))) ? 1 : var_10)));
                        var_37 = (min(var_37, -var_9));
                    }

                    for (int i_31 = 4; i_31 < 7;i_31 += 1)
                    {
                        arr_103 [i_13] [i_24] [i_23] [i_13] = ((((((arr_24 [i_23] [i_23] [i_13] [i_31 - 3]) ? (arr_77 [i_31 - 4] [9] [i_31 + 2]) : 30761))) >= (min((~4709595727724875510), 1))));
                        var_38 = 1;
                    }
                }
            }
        }
        arr_104 [i_13] = ((((max((min(255, var_6)), -var_9))) ? var_9 : ((-(min(var_10, var_1))))));
        var_39 = (arr_1 [i_13]);
        arr_105 [i_13] = var_10;
    }
    for (int i_32 = 0; i_32 < 13;i_32 += 1)
    {
        var_40 = ((((((((arr_4 [i_32] [i_32]) ? 0 : var_9))) ? var_6 : (1 / var_4))) | -95));
        arr_109 [i_32] = (arr_7 [i_32] [i_32] [i_32]);
    }
    #pragma endscop
}
