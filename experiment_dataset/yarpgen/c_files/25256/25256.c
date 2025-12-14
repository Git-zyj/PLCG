/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_14 = (--51);
            arr_6 [i_0] [i_0] = ((((!(arr_0 [i_0])))));
            arr_7 [i_0] [i_0] = (max((max((arr_2 [i_0]), (((77 ? (arr_4 [i_0]) : (arr_1 [9])))))), ((((~(arr_1 [i_1 - 1])))))));
            var_15 = ((((~var_5) & (((arr_1 [i_1]) << (var_7 + 2689918082950061120))))));
        }
        var_16 = ((((((-12 && 4294967295) ? 6514826034059174497 : (((max(-792, 64))))))) ? 6 : var_6));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_10 [i_0] = (((var_12 ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 1]))));
            var_17 = (((max((arr_9 [i_2 + 1] [i_0] [i_2 + 1]), (max(var_8, (arr_5 [i_0] [i_0]))))) ^ (arr_5 [i_0] [i_0])));
            var_18 = (((+((16777215 ? (arr_8 [i_0]) : var_11)))));
            arr_11 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_17 [i_0] = (min((((arr_8 [i_0]) ? var_3 : (arr_16 [i_0] [1] [i_0] [i_0]))), (((-(arr_15 [i_4 + 2] [i_4 - 3] [i_4 + 3] [1]))))));
                    var_19 = (((((-31923 ? 9223372036854775807 : 9223372036854775807))) ? -2660453410367983528 : 9223372036854775807));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_20 = (arr_2 [i_5]);
        arr_22 [i_5] = (max((arr_18 [i_5]), ((~((~(arr_20 [i_5])))))));
        arr_23 [i_5] = (arr_13 [0] [i_5] [12]);
        arr_24 [i_5] [i_5] = 1;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((~((var_12 ? (((((arr_5 [i_6] [i_6]) != (arr_15 [13] [13] [i_6] [i_6]))))) : (min(8745030720832532931, 11))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    var_21 = ((-((var_7 ? (((max(71, 254)))) : (arr_16 [i_6] [i_7] [1] [i_8])))));
                    var_22 = (9181172944656580628 | 8025582826417476961);
                    var_23 = (max((((-(arr_0 [2])))), (((arr_2 [2]) - (max((arr_8 [i_7]), 8))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = var_11;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_24 = ((-(arr_14 [i_10] [i_9] [i_10 + 1])));
                    arr_41 [i_9] [i_9] [8] = ((~(((arr_0 [i_9]) ? var_1 : (arr_3 [i_9])))));
                    var_25 = ((!((!(arr_14 [i_10 + 3] [i_9] [i_10 + 3])))));
                    arr_42 [i_9] [i_9] [i_9] [i_9] = ((((!(arr_37 [i_9]))) || ((max(var_9, (arr_37 [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_26 = ((var_9 & (max((max((arr_12 [i_9]), var_12)), (((0 ? (arr_3 [i_9]) : (arr_1 [i_11]))))))));
                                var_27 = var_11;
                                var_28 = (((arr_45 [i_9] [i_10] [i_13 + 1] [i_12] [i_13]) ? (arr_15 [i_9] [8] [8] [13]) : (arr_14 [i_9] [i_9] [i_9])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        {
                            var_29 = (arr_21 [i_16]);
                            var_30 = (!55);
                        }
                    }
                }
            }
            var_31 = (min(var_31, var_5));
            /* LoopNest 3 */
            for (int i_18 = 2; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_32 = ((~(((arr_55 [i_9] [i_18 + 2] [8] [i_19] [i_9]) ? ((max((arr_25 [i_9] [i_9]), (arr_37 [i_9])))) : ((var_8 ? (arr_0 [i_9]) : var_5))))));
                            var_33 = ((!(((~(var_8 | var_4))))));
                        }
                    }
                }
            }
            var_34 = (min(var_34, ((((max(var_5, (min(var_0, var_1)))) >> (var_9 + 41))))));
            var_35 = 24;
        }
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            arr_67 [i_9] [i_9] = ((-(((var_12 < var_7) ? (arr_51 [13] [i_9] [i_9] [13]) : (var_9 || var_5)))));
            arr_68 [i_9] [i_9] = (((~var_12) ? (~-69) : (((arr_33 [i_9] [i_21]) & ((((arr_66 [i_9] [i_21] [7]) ? (arr_19 [i_21]) : (arr_29 [7] [i_9] [13]))))))));
        }
        var_36 = (arr_16 [i_9] [i_9] [i_9] [i_9]);
        var_37 = (min(var_37, ((((min(46, (arr_9 [10] [2] [i_9]))))))));
    }
    var_38 = (((~((max(var_4, var_9))))));
    #pragma endscop
}
