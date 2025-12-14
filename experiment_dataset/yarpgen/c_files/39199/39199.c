/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((1 ? ((((min(2454282240, -1914177087))) ? var_14 : var_15)) : var_11));
    var_18 |= (min((max((max(var_15, 59)), var_14)), (((max(var_15, var_7))))));
    var_19 = ((var_14 ? var_4 : var_15));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min(5557870203554098810, 17843347861717523919));
        var_21 = (min(var_21, ((((69 ? 1840685056 : 53))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 += var_9;
            arr_5 [i_0] [i_0] [i_1] = var_12;
        }
        var_23 &= var_10;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_24 = ((((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))));
        var_25 |= 4095;

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_26 = (max(111, var_10));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_27 = ((max(3118147431, (arr_13 [i_4] [i_2]))));

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    var_28 = (min(var_28, (((~(((((var_9 ? var_0 : var_10))) ? ((var_7 & (arr_8 [i_2] [i_2] [i_2]))) : var_1)))))));
                    var_29 = ((~(max((arr_14 [i_3 - 1] [i_2] [i_3 - 1] [i_5] [i_5 - 1] [i_4]), ((var_7 ? 1840685056 : var_15))))));
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    var_30 += (min((((arr_9 [i_2] [i_6 + 1] [i_3 + 1]) ? -1256101988 : (arr_9 [i_2] [i_6 + 1] [i_3 - 2]))), (((!(arr_9 [i_2] [i_6 + 1] [i_3 - 2]))))));
                    var_31 = ((-(min((~var_7), (((arr_7 [i_2] [i_3]) ? var_0 : 5557870203554098810))))));
                }
                var_32 = var_10;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_33 = 166;
                            arr_27 [i_7] [i_3] [i_4] [i_7 + 2] [i_8] = (arr_6 [i_2] [i_3]);
                            var_34 = (min(var_34, (((5557870203554098801 ? 3118147436 : 4294967266)))));
                            var_35 = (arr_23 [10] [i_7] [i_7] [i_4] [i_7] [8]);
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                arr_30 [1] [1] [i_9] = var_4;
                var_36 = ((min(((var_4 ? var_6 : var_7)), ((max(126, var_9))))));
                arr_31 [i_2] [12] [i_3 - 1] [i_3 - 1] = ((389711737 ? 1 : 1664334716704425905));
                var_37 = (((arr_13 [i_3] [i_9 + 2]) || ((!(arr_26 [i_3 + 1] [i_3 - 1] [i_3])))));
            }
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                var_38 |= ((((((arr_26 [i_2] [i_3] [i_3]) / 1664334716704425896))) ? -var_0 : (arr_26 [i_2] [i_3] [i_10])));
                var_39 = 59;
            }
        }
        arr_35 [i_2] [i_2] = ((((!((min(var_10, var_8))))) ? (arr_29 [i_2] [i_2]) : (((arr_23 [i_2] [i_2] [6] [i_2] [i_2] [i_2]) ^ var_16))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_40 = 12888873870155452802;
        arr_38 [i_11] = (max((((arr_2 [i_11]) ? var_11 : -var_7)), 11595));
        arr_39 [i_11] = ((((((arr_1 [i_11]) * var_0))) ? (((arr_36 [i_11] [i_11]) ? (arr_36 [i_11] [i_11]) : var_11)) : (((arr_36 [i_11] [i_11]) / (arr_36 [i_11] [i_11])))));
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_41 = (arr_40 [i_12] [i_12]);
        var_42 *= (min(1, (arr_32 [i_12])));
    }
    #pragma endscop
}
