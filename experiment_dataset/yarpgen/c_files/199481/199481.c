/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? var_2 : (((((var_4 ? var_2 : 0))) ? (((max(var_4, var_11)))) : (min(var_14, var_6))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (min(-18446744073709551609, var_13));
            var_17 *= var_10;
            arr_6 [i_0] = (arr_3 [0] [i_1] [i_0]);

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] = (arr_1 [i_0]);
                arr_10 [i_2] [i_0] [i_0] = (((min(var_4, (min(var_12, var_15))))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [i_1] = max(((((255 % 5) ? 4294967295 : (arr_12 [i_0] [i_0] [i_0])))), (((arr_12 [i_0] [i_0] [i_0]) ? var_14 : ((13510798882111488 ? var_11 : var_9)))));
                var_18 = var_12;
            }
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_0] [i_0] [1] = 2147483618;

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_4] [0] = (min((arr_15 [i_1] [i_1 + 2] [i_0] [i_1]), (arr_15 [i_1] [i_1 + 2] [i_0] [i_1 - 1])));
                    arr_22 [i_0] [i_0] = ((+((((((arr_17 [i_0] [16] [16] [16] [i_0] [16]) ? var_7 : (arr_17 [i_0] [i_0] [i_1 + 1] [i_4 - 1] [i_0] [i_5])))) ? ((max(var_1, (arr_4 [i_0] [i_1] [i_0])))) : (arr_2 [i_0] [i_4])))));
                    var_19 *= ((((((1 ? (arr_14 [i_1] [i_1] [i_1]) : 503316480)))) ? (((((4294967288 ? (arr_18 [i_5] [i_5] [i_0] [0] [i_0] [i_5]) : 0))) ? (min(var_6, (arr_14 [i_5] [i_1] [i_1]))) : -var_7)) : (arr_14 [i_0] [i_1 + 2] [i_0])));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_26 [i_0] [12] [i_1] [1] [i_4] [i_1] = min(6, (((((min(var_8, (arr_14 [i_0] [i_0] [9])))) || (arr_2 [i_0] [i_0])))));
                    arr_27 [i_0] [i_0] = (-1 > var_13);
                    arr_28 [i_0] [i_0] [i_4 - 2] [i_1] [i_1] [i_0] = (arr_14 [i_0] [i_0] [i_0]);
                    var_20 = (min(var_1, (arr_24 [i_4 + 1] [i_0] [i_0] [i_1 + 2])));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_21 *= (((arr_20 [i_7]) ? var_14 : ((max((arr_2 [i_7] [i_4]), (arr_24 [i_0] [i_7] [i_4] [i_7]))))));
                    var_22 = (max((((var_11 && (((~(arr_25 [i_0] [i_0] [i_4] [i_7]))))))), (min(var_1, (((!(arr_17 [i_0] [i_1] [i_1] [i_7] [i_0] [i_0]))))))));
                }

                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    arr_34 [i_0] [i_0] [i_4] [i_8 + 1] = ((max(((524287 ? -1 : 1)), 0)));
                    var_23 = ((-(max((arr_15 [11] [i_1] [i_0] [i_8]), var_3))));
                    var_24 = ((((((((0 ? var_2 : (arr_8 [i_0] [i_0] [10])))) ? (arr_2 [i_0] [i_1 + 2]) : var_4))) ? var_1 : (arr_4 [5] [i_1] [i_0])));
                    arr_35 [i_0] [i_0] [i_4] [i_8] = ((((min(-var_9, (var_9 || var_9)))) ? -18446744073709551613 : (arr_30 [i_0] [i_0])));
                }
                var_25 *= (arr_0 [i_0]);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                var_26 = (min(var_26, 0));
                arr_38 [i_0] [i_0] [i_1] [i_9] = ((((((arr_12 [i_9 + 3] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_9]) : (arr_33 [i_0] [i_0] [i_9] [i_1] [i_9] [i_0])))) ? ((255 ? 18446744073709551615 : (arr_37 [i_0] [i_0] [i_0] [2]))) : ((((arr_30 [i_0] [i_0]) ? 516096 : var_5)))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_27 *= (((arr_18 [6] [i_10] [14] [i_0] [i_0] [6]) ? (arr_31 [i_0] [i_0] [i_0] [i_10] [17] [i_10]) : 0));
            var_28 = ((0 ? (arr_30 [i_0] [i_0]) : ((var_5 ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (arr_39 [i_0] [i_0])))));
            arr_41 [i_0] [i_0] [i_10] = ((((var_12 ? var_7 : 2147483640)) - (arr_8 [15] [i_10] [i_10])));
            var_29 *= var_5;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_44 [i_0] [i_0] [i_0] = ((((min((((arr_12 [4] [i_11] [i_11]) ? var_12 : (arr_2 [i_0] [i_0]))), ((max(var_5, var_11)))))) ? (arr_31 [i_0] [i_0] [6] [i_0] [6] [i_0]) : (min(((var_10 ? 64 : var_0)), ((18446744073709551615 ? 9223371487098961920 : var_0))))));
            arr_45 [i_0] = (arr_32 [i_11] [i_11] [i_0] [i_0]);
            var_30 = (min(var_30, ((-(arr_42 [i_0] [4])))));
        }
        arr_46 [i_0] [i_0] = (arr_37 [i_0] [i_0] [i_0] [i_0]);
    }
    var_31 = var_14;
    #pragma endscop
}
