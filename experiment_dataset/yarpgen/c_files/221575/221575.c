/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    {
                        var_16 |= (max((arr_3 [i_0 + 3]), (((arr_3 [i_0 + 3]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 2])))));
                        var_17 = max((arr_4 [i_0] [i_0] [i_0]), (((-(arr_5 [i_0] [i_2])))));
                    }
                }
            }
            var_18 -= (((max((((arr_7 [5] [i_1] [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_7 [i_0] [i_1] [i_1]))), (min(var_5, -444958699155750082)))) & (arr_11 [0] [0] [i_1])));

            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                arr_15 [i_4 - 1] [i_4 - 1] [i_0] [0] = ((+(((1 <= 148) ? (min(-3611136573160910184, (arr_13 [i_4 + 1] [i_0] [i_0]))) : (max(var_3, -7121112804548929235))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = -1;
                            var_20 = (min(var_20, (~63)));
                        }
                    }
                }

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    arr_25 [i_0] [i_0] [i_4] [i_7] [i_1] [i_0] = (arr_1 [i_1 + 1]);
                    var_21 ^= ((((60 ? (arr_1 [i_0 + 1]) : (arr_9 [i_7 + 1] [i_4 - 2] [i_1 - 1] [i_0 + 3])))) ? (arr_23 [i_0] [i_0] [i_0]) : (((((min((arr_1 [i_0]), var_5))) ? ((max(var_3, (arr_16 [i_7 + 1] [i_4 - 1] [i_1 - 1] [i_0 + 3])))) : (max(-2055705294839238903, (arr_5 [2] [i_1])))))));
                    arr_26 [i_0] = (((var_1 || var_12) >= (min(((~(arr_23 [i_0] [i_0] [i_0]))), -106))));
                }
                var_22 = -32767;
                var_23 = (min((((arr_16 [i_0] [0] [i_0] [i_0 + 2]) ? (((!(arr_1 [i_0])))) : 1)), (((arr_14 [i_0 + 2] [i_0 + 2] [i_4 - 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 2])))));
            }

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_30 [i_0] [i_8] = 29;
                var_24 = (((!(arr_0 [i_0 - 1]))) ? ((max((arr_9 [i_0] [i_0] [i_0] [i_0]), var_8))) : 2213);
            }
            for (int i_9 = 1; i_9 < 7;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    arr_37 [i_0] [i_0] = arr_7 [i_9 + 2] [i_1] [6];
                    var_25 = ((((min(-106, 2218))) || (arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 2])));
                    var_26 &= var_3;
                    arr_38 [i_0] [i_1 - 1] = (arr_12 [0] [i_1 - 1] [i_9] [i_10]);
                    arr_39 [i_0] [i_9] [1] [i_0] = (((8596644143467962556 <= 63949) >> (((arr_19 [i_9 + 1] [i_9 + 3] [i_9 + 2] [8] [i_9]) % var_0))));
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_0 - 1] [i_11] [i_0] [i_0 + 1] [i_0] |= max((max(513213943, -var_14)), ((max(1, (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                        arr_46 [i_0] [i_1] [i_1] [i_12 + 1] = (((max((~1587), 1)) * ((min(98, 86)))));
                    }
                    for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
                    {
                        var_27 |= (arr_44 [i_0] [i_1]);
                        var_28 = min(var_9, ((((-(arr_6 [i_1]))) % (arr_21 [i_0] [i_1] [i_9 + 1]))));
                        var_29 = ((-(((var_0 && ((max((arr_6 [i_0]), -170258905))))))));
                        var_30 = (max(var_30, (arr_31 [0] [i_9 + 2] [0] [i_11])));
                        var_31 = ((!((!(arr_22 [i_13 - 1] [i_0])))));
                    }
                    arr_49 [1] [i_0] [i_9 + 3] [i_11] [i_0 + 3] = var_8;
                }
                arr_50 [i_0] [2] [i_0] [i_0] = ((-(((var_13 != (arr_3 [i_0 + 1]))))));
            }
        }
        for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
        {
            arr_54 [i_0] [i_0] = (((-(arr_13 [i_0] [i_0 - 1] [i_0 + 2]))));
            var_32 = (~72);
        }

        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 8;i_18 += 1)
                    {
                        {
                            var_33 = (((((var_6 ? 65535 : 48))) ? (((arr_17 [i_0] [i_15] [i_16] [i_17 + 1]) + (arr_64 [i_18 - 1] [i_16] [i_17] [i_16] [i_15 - 1] [i_0 + 2]))) : (1 - 1601)));
                            var_34 = 4;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 9;i_21 += 1)
                    {
                        {
                            var_35 -= (arr_42 [i_20] [i_20] [i_19]);
                            var_36 = (max(var_36, (arr_72 [9])));
                            var_37 = (arr_71 [i_21] [i_20] [1] [1]);
                        }
                    }
                }
            }
            var_38 |= (max(((0 ? 29 : 1)), -2213));
            arr_75 [i_0] [9] = (~-1665121256);
            var_39 = (max(((-(arr_33 [i_15] [i_15] [i_0] [i_0] [i_0 + 2]))), (arr_40 [i_0 - 1] [i_15])));
        }
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 7;i_22 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 10;i_23 += 1)
        {
            for (int i_24 = 2; i_24 < 8;i_24 += 1)
            {
                {
                    var_40 = ((((arr_41 [i_22 + 2] [i_22] [i_22] [i_22 + 2] [i_22]) ? (arr_32 [i_23] [i_23] [i_23]) : var_14)) << (2217 - 2215));
                    var_41 = (min(var_41, (((((arr_83 [i_24] [i_23]) || (arr_9 [i_22] [i_23] [i_24] [i_23]))) ? ((var_12 ? 1 : (arr_81 [i_24 + 2] [i_23]))) : (arr_33 [i_22] [3] [i_23] [i_23] [i_23])))));
                    var_42 |= ((262143 ? 1 : 6579162179563276993));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 10;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 10;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {
                        arr_94 [i_22 + 2] [i_22] [6] [i_22 + 2] [i_26] = (arr_81 [i_22 + 1] [i_22 + 3]);
                        var_43 |= (((arr_47 [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_25] [i_26]) * (arr_35 [i_22])));
                    }
                }
            }
        }
    }
    var_44 = (max((!var_1), (max(var_12, (max(var_8, 1))))));
    #pragma endscop
}
