/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = (((arr_1 [i_0]) ? ((((arr_0 [i_0 - 2]) ? (arr_1 [i_0]) : var_4))) : (((arr_0 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : var_5))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (arr_2 [i_0 - 2]);
                        var_17 = (max((max((arr_8 [i_0 - 3]), var_7)), ((max(var_4, var_11)))));
                        arr_10 [i_2] [i_1] [i_0] = (max(var_8, (arr_5 [3] [i_2] [i_2])));
                        arr_11 [i_1] [1] [i_2] [i_3] = ((((var_10 && (((var_4 ? (arr_4 [4]) : 221))))) ? ((var_6 ? var_13 : (arr_5 [i_3] [i_2] [i_0]))) : (arr_4 [i_0 + 1])));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = 1185215923;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            var_18 = ((-(arr_7 [i_4 - 3] [i_0 + 1])));
            var_19 = (((arr_2 [i_0]) / ((66 ? -12280 : (arr_2 [i_4])))));
            arr_15 [i_0] = ((-(((arr_1 [i_0]) ? var_14 : 1185215909))));
            arr_16 [i_0] = (arr_14 [i_4 + 3] [i_0 - 2]);
            var_20 = (arr_14 [i_0 - 3] [i_4 + 1]);
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_21 = ((arr_3 [i_5]) ? var_9 : (((arr_2 [i_5 + 1]) ? var_12 : (arr_0 [i_5]))));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_22 -= (arr_7 [i_6] [i_5]);
                    arr_28 [i_5] [i_5] [i_5] [i_8] = (-6822853480076271054 ? -6846308271043727426 : 1185215916);
                    var_23 = (min(var_23, (arr_23 [i_5 + 1])));
                    var_24 -= ((-var_8 * (arr_4 [i_7 + 1])));
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    var_25 = var_14;
                    var_26 = (arr_26 [i_9 + 2] [6] [7] [6] [i_5]);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_27 = 0;
                    var_28 = 2168173607279361627;
                }
                var_29 = (arr_26 [9] [9] [11] [9] [i_6 - 1]);
                var_30 = 60502;
                arr_33 [i_5] &= ((!(arr_18 [i_7 + 1])));
            }
            for (int i_11 = 3; i_11 < 12;i_11 += 1)
            {
                arr_36 [i_5] [12] [i_11] = -1185215933;

                for (int i_12 = 2; i_12 < 12;i_12 += 1)
                {
                    var_31 = -6822853480076271046;
                    arr_39 [i_6 + 3] [i_11] [i_6 + 3] [i_5] = ((var_3 ? var_11 : var_1));
                    var_32 = (((arr_27 [i_12 + 1] [i_11 - 1] [i_6 + 2] [i_5 + 2]) >= 1185215930));
                }
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    var_33 -= (arr_6 [12] [i_6] [12]);
                    var_34 = var_11;
                    arr_42 [i_5] [9] [i_11 - 2] [i_13 - 1] = ((-(arr_9 [i_5] [i_6] [i_11 - 1] [i_5 + 1] [i_11 - 1] [i_5])));
                    var_35 -= (((arr_37 [i_5] [i_6 - 2] [10] [i_13] [i_6] [i_5]) > 1024));
                    arr_43 [i_13] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_5] [i_5] = var_5;
                }
                arr_44 [i_5] [1] = (arr_29 [10] [10] [0] [0]);
                arr_45 [i_5] = ((-32571 * (((arr_2 [1]) / var_12))));
            }
            arr_46 [i_5] = 18446744073709551600;
            arr_47 [i_6 + 1] [i_5] = (arr_22 [i_5] [i_6]);
        }
    }
    var_36 = (var_2 | var_0);
    var_37 = ((var_11 ? (((max(65535, var_3)) * (var_13 * 65527))) : (((var_13 ? var_4 : 1)))));
    #pragma endscop
}
