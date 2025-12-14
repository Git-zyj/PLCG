/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_14 = ((-1061122132 ? 255 : 4715249207120669407));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (arr_0 [i_1]);
        var_16 = (max(var_16, ((((((-(arr_3 [i_1] [i_1])))) ? -909481190 : var_12)))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_17 = var_8;
        var_18 = (((((arr_1 [i_2]) ? (max(7, var_1)) : 1)) ^ (arr_0 [i_2])));
        var_19 = ((((((arr_1 [i_2 - 2]) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 1])))) ? (((1301920568 ? (arr_6 [i_2]) : (arr_7 [13] [1])))) : var_8));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_20 = (min(var_20, (arr_3 [i_3] [5])));
        var_21 = (((((-(((!(arr_0 [i_3]))))))) ? (arr_6 [i_3 + 2]) : (arr_4 [i_3])));
        var_22 = (arr_0 [i_3]);
        var_23 = (arr_7 [i_3 - 1] [i_3 - 1]);
    }
    var_24 = (max(((var_5 * ((var_7 ? 6736873523258847884 : var_2)))), (((8796093022144 ? -9818 : 4294967274)))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 *= (((((var_1 ? (arr_16 [i_4] [i_5] [i_4 + 1]) : (arr_16 [i_4 + 3] [6] [i_4 - 2])))) ? ((-575747508 ? var_0 : (arr_13 [i_4 + 1] [14] [i_6 + 1]))) : (((var_6 && (arr_14 [i_6 + 2] [i_4 + 3] [i_6]))))));
                    var_26 = (arr_0 [i_5]);
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        var_27 = (((var_4 ? ((14 ? (arr_4 [i_7]) : (arr_1 [i_7]))) : (arr_18 [i_7] [i_7]))));
        var_28 = (arr_1 [i_7]);
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_29 = (((((+(min((arr_21 [i_8]), var_0))))) ? (arr_23 [17]) : (arr_1 [i_8 - 1])));
        var_30 *= var_6;
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_31 = 0;
        var_32 = arr_22 [i_9];

        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_33 = (((((var_9 >> (876345181 - 876345176)))) ? ((((arr_9 [i_10]) ? (arr_12 [i_10] [i_10] [i_9]) : 165))) : ((0 ? 2305843009213677568 : 91))));
            var_34 = (((arr_0 [i_9]) ? var_10 : (arr_21 [13])));

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_35 *= (((arr_27 [i_11] [i_10] [i_9]) ? (((arr_16 [i_10] [i_10] [i_11]) ? var_9 : var_9)) : (arr_8 [i_11])));
                var_36 = (arr_15 [i_9]);
            }
        }
    }
    #pragma endscop
}
