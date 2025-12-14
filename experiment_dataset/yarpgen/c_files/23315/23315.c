/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(1, (((var_3 * 65536) ? ((max(var_13, var_0))) : (var_10 != var_15)))));
    var_17 = (((max(var_2, (var_8 << var_0))) | var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_12;
        arr_4 [i_0] = (((!11567550445739662291) || 15956087405189386912));
        arr_5 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (min(var_18, var_3));
            var_19 = (~var_4);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            var_20 = ((-(arr_9 [i_3 - 2])));
            var_21 = ((var_3 ? 0 : var_3));
            var_22 = (((arr_1 [i_3 + 1] [i_3 + 1]) > var_9));
            var_23 = (((arr_6 [i_1] [i_1]) & var_4));
            arr_12 [i_3] = (~(arr_6 [i_1] [i_3 - 2]));
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_24 = ((-75 != (((arr_6 [i_1] [i_1]) ? var_1 : (arr_6 [i_4] [i_6])))));

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_25 |= ((((~((var_9 ? 117 : var_2)))) >= (arr_10 [i_7 - 1] [i_7] [i_7])));
                        arr_23 [i_1] [i_7] [10] [1] = ((arr_20 [i_7] [0] [i_7 - 1] [i_7] [i_7 + 2]) * ((max((arr_20 [i_7] [i_7] [i_7 - 1] [1] [i_7 + 1]), (arr_19 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [2])))));
                        var_26 = ((-(max((arr_10 [i_6] [i_7 + 1] [i_6]), var_4))));
                    }
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        var_27 = (var_2 + var_14);
                        var_28 = ((1 * ((((var_4 ? var_5 : 0))))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_9] = 0;
                        arr_32 [i_9] = ((~((3588511521 ? -116 : var_15))));
                        arr_33 [i_1] [i_9] [i_1] [9] [i_1] [i_1] [i_1] = var_2;
                        arr_34 [i_1] [i_4] [i_9] = var_14;
                        arr_35 [i_1] [i_9] [i_5] [i_1] [i_9] [i_9] = ((((((217 < var_0) || var_1))) + (((!(arr_9 [i_1]))))));
                    }
                    arr_36 [i_1] [i_1] [i_1] [7] = (((-27 ? (var_4 || var_8) : (!0))) + ((-(arr_28 [i_6] [i_5] [i_4] [i_1] [i_1]))));
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    var_29 = (31291 / var_12);

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_42 [i_11] [5] [i_5] [i_5] [i_4] [i_1] = (min(((var_11 ? 1 : var_14)), ((~(arr_6 [i_10] [i_11])))));
                        var_30 = ((((~(~var_1))) | (~var_1)));
                    }
                }
                var_31 *= (((((-((max(102, (arr_19 [i_1] [i_4] [i_4] [i_4] [i_5] [i_5]))))))) ? var_12 : (var_12 > var_15)));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_32 = ((((!((((arr_10 [15] [i_1] [i_1]) ? (arr_37 [i_1]) : var_9))))) ? (arr_6 [i_1] [i_1]) : (((!(arr_17 [i_1]))))));
                var_33 |= (min(((((((!(arr_15 [i_1] [i_4] [i_12]))))) * ((var_7 ? (-9223372036854775807 - 1) : var_7)))), (((-(var_9 + 0))))));
                arr_46 [i_1] [i_1] [i_1] = -var_3;
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_34 |= (arr_16 [i_1] [i_1]);
                var_35 = ((-(((min((arr_27 [i_1] [i_1] [i_1] [i_13] [i_1]), 4095))))));
            }
            var_36 = (max((((arr_16 [i_1] [i_4]) & 3588511510)), (var_4 & 9223372036854775802)));
            arr_50 [i_4] [i_4] [i_4] = ((((var_12 - (arr_39 [i_1] [i_4]))) * 1));
        }
        var_37 = (max(var_37, var_12));
    }
    #pragma endscop
}
