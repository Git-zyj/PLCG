/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 *= ((((min(var_15, var_4))) ? (max(1026542286479947634, 18)) : (arr_0 [i_0])));
        var_18 = var_6;
        arr_2 [i_0] = (min((arr_0 [i_0]), (min((((arr_1 [1] [i_0]) - -34)), (((-34 ? -124 : -19)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (max((arr_3 [i_1]), (min((arr_4 [i_1] [i_1]), var_3))));
        var_20 = (min(var_20, ((min((((var_6 ? var_4 : var_2))), var_11)))));
        var_21 -= (max((max((!233), ((var_11 ? (arr_3 [i_1]) : (arr_4 [2] [13]))))), var_13));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_2] [i_2] [1] = (((arr_7 [i_2] [i_2]) ? var_0 : (arr_7 [i_2] [i_2])));

            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                arr_15 [i_2] = ((var_7 ? var_5 : (arr_5 [i_4 - 1])));
                arr_16 [i_2] [i_2] [i_2] [i_3] = ((-(arr_13 [i_4 + 1] [i_4 - 1])));
            }
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                var_22 |= (((arr_19 [i_3]) / ((var_5 ? (arr_12 [i_5 + 1] [8] [i_5]) : 3909640095))));
                var_23 = (var_1 && var_12);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_24 [i_3] [i_3] [8] [0] [i_5] [i_3] = (~var_5);
                            var_24 -= (arr_3 [i_2]);
                            var_25 = (-7891496912149262203 + 13);
                            var_26 = ((var_12 ? var_0 : var_3));
                        }
                    }
                }
                var_27 = (((arr_21 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5]) ? (var_11 * var_14) : (arr_12 [i_2] [2] [8])));
            }
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                var_28 = ((((((arr_14 [i_2] [i_8]) ? (arr_19 [i_3]) : var_5))) ? var_0 : (arr_8 [i_2] [i_8])));
                var_29 = (max(var_29, ((((arr_12 [i_2] [i_8] [i_8 + 3]) ? ((442999770 ? 65535 : var_2)) : var_9)))));

                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_30 = (min(var_30, (((((((var_7 && (arr_6 [1] [i_2]))))) / (arr_26 [i_9] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                    arr_32 [i_9] [4] [5] [i_9] = (var_11 & var_9);
                    var_31 = ((arr_26 [i_3] [i_8 + 2] [i_9] [i_3]) ? (arr_26 [i_2] [i_8 + 2] [12] [i_8]) : 65517);

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_32 = ((1905071238 ? (arr_26 [i_8 + 2] [i_9 + 2] [i_10 + 1] [i_10 + 1]) : (arr_26 [i_8 - 1] [i_9 + 2] [i_10 + 1] [i_10 + 1])));
                        var_33 = (((arr_20 [i_10 + 1] [i_10 + 1] [i_10 + 1] [9] [i_10 + 1]) & (31727 && -5619035533608481285)));
                        arr_35 [i_10 + 1] [4] [i_10] [i_10] [6] [i_9] [i_10] = (!5639);
                    }
                    arr_36 [12] [i_2] [i_2] [0] [i_8 + 3] [i_9] |= ((+((var_10 ? (arr_9 [i_9 + 1] [i_8] [i_3]) : var_12))));
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_34 = 21;
                    var_35 -= (arr_29 [i_8 + 1] [i_8] [i_11 + 1] [i_11 + 1]);
                }
                var_36 = -14;
            }
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                arr_47 [i_13] [i_13] [i_13] = (-2147483647 - 1);
                var_37 += ((((!(arr_34 [i_2] [1] [i_12 + 2] [i_12 + 2] [i_2] [1])))));
            }
            var_38 = (var_2 << (((((arr_12 [1] [i_12] [i_12 - 1]) + 4842249839154121745)) - 23)));
            var_39 += ((16833640200197713618 << (110 - 106)));
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_40 = (arr_5 [i_2]);
            var_41 = ((15 ? 108 : 511));
        }
    }
    var_42 = var_13;
    #pragma endscop
}
