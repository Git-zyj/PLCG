/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_12 = (((arr_0 [i_0]) ? ((-((var_3 ? var_2 : 64892)))) : ((((((min((arr_1 [11]), var_1)))) + 3934636773)))));
            var_13 = (min(((((((!(arr_3 [i_1] [10]))))) - var_2)), (((((min((arr_2 [i_0]), 47410))) % ((((arr_1 [i_0]) && 2428882436170546702))))))));
            var_14 = (max(var_14, (((((((arr_2 [i_0]) == (((arr_4 [i_0] [i_1]) ? var_9 : (arr_3 [i_0] [i_0])))))) != (~1834236328))))));
            var_15 = (arr_0 [i_0]);
            var_16 = var_10;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = (arr_7 [i_0]);
            arr_9 [i_0] [i_2] = max(12048, 12059);
            var_17 = (32766 - 255);
            var_18 = ((-((max(233, 33358)))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_3] = ((4261412864 | (arr_7 [i_3 - 2])));
            arr_13 [i_3] = (!-996555461396429892);
            var_19 ^= 48;
            arr_14 [i_3] = (arr_0 [i_0 + 1]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_0] [i_0] [i_4] = 1;
            arr_18 [i_0] [i_0] [2] = ((-((((!(arr_4 [i_0] [i_4]))) ? 2662568602787908344 : -4176667329167581654))));
            arr_19 [i_0] = ((-((-((min(var_7, (arr_4 [i_0] [i_4]))))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_20 = ((-((min((arr_1 [i_0]), 398)))));
                        var_21 = (((((-(arr_27 [i_0 - 1])))) ? 233 : (((arr_27 [i_6]) ? (arr_2 [i_4]) : (arr_27 [i_4])))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_22 = (((max((arr_5 [i_0 - 1]), (arr_5 [i_0 - 1]))) >> (47409 - 47376)));
                var_23 = (min(var_23, (!1)));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                arr_32 [i_0] [i_4] [i_8] [i_8] = (max(47410, 8998403161718784));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_39 [i_0] [i_4] [i_8] [i_9] [16] [i_9] = (~var_7);
                            var_24 = (max(var_24, (arr_16 [i_4] [i_4])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_42 [i_0] [i_0] [i_4] [i_11] = (((arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_40 [i_0] [i_4] [i_11]) : (arr_37 [i_4] [10] [i_11] [i_4] [i_4])));
                arr_43 [i_0] [13] [i_4] [i_11] = (arr_30 [i_0] [i_0] [0]);
                arr_44 [i_0] = (var_9 / var_4);
            }
        }
        arr_45 [i_0] = ((-106 && (arr_22 [i_0])));
        arr_46 [i_0] |= ((-(arr_31 [i_0 - 2] [i_0 - 1] [i_0 - 2])));
        arr_47 [i_0] [i_0] = (max((((((-(arr_38 [6] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((var_8 / (arr_31 [i_0] [i_0] [i_0]))) : (arr_22 [i_0]))), var_8));
    }
    for (int i_12 = 2; i_12 < 16;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] [15] = ((!((((arr_11 [i_12 - 2]) ? (arr_11 [i_12 - 1]) : 15324305165485188811)))));
        arr_51 [i_12] = 144;
        arr_52 [i_12] = (arr_27 [i_12]);
    }
    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_25 = (--19267);
        var_26 = (((47410 ? (arr_55 [i_13]) : var_11)));
    }
    for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
    {
        arr_59 [i_14] [i_14] = var_8;
        arr_60 [i_14] = 996555461396429892;

        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_64 [i_14] [i_14] [i_14] = var_9;
            arr_65 [i_14] = (arr_55 [i_14]);
        }
        var_27 = (max(var_27, ((((!var_8) ? var_5 : (arr_62 [i_14] [i_14]))))));
    }
    var_28 = 31763;
    #pragma endscop
}
