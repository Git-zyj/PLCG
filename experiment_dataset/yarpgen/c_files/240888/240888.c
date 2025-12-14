/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((25562 + ((var_4 ? (arr_0 [i_0]) : 0))))) ? (((~(arr_2 [i_0])))) : ((((((arr_0 [i_0]) | 18446744073709551615))) ? 18446744073709551609 : (var_0 * var_3)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = min((max((arr_4 [i_0] [i_1]), (arr_1 [i_1]))), (min((~6), ((var_2 + (arr_2 [i_0]))))));
            var_15 = ((-((+(max((arr_0 [i_1]), 4))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                var_16 = arr_6 [i_0] [i_3];
                var_17 = (((arr_7 [i_2]) << (((arr_7 [i_0]) - 193))));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((arr_10 [i_6] [i_6] [i_5] [i_5 - 1]) + (arr_10 [i_6] [i_6] [i_6] [i_5 - 1]))))));
                            var_19 ^= (arr_17 [i_6] [4] [i_5 + 1] [4] [i_5 + 1]);
                            var_20 = 94;
                            arr_22 [i_5] [i_2] [i_4] [i_4] [i_6] = -27;
                            var_21 = (((arr_11 [i_2] [i_5 + 2] [i_5 - 1]) ? ((-1564724510741671461 ? 34357 : 18446744073709551596)) : ((var_2 | (arr_16 [0] [i_4])))));
                        }
                    }
                }
                var_22 = (min(var_22, var_1));
                var_23 &= (((((arr_19 [i_4]) < (arr_13 [i_0]))) ? var_4 : ((((18446744073709551609 > (arr_12 [i_0] [4] [i_4])))))));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_24 = (arr_7 [i_2]);
                var_25 = (((arr_16 [i_7] [i_2]) ? (arr_16 [i_2] [i_0]) : (arr_16 [i_2] [i_7])));
                arr_25 [i_0] [i_0] [i_0] [6] = (((arr_21 [i_0] [10] [6] [i_2] [i_2] [i_2] [i_7]) ? (arr_2 [i_7]) : (arr_21 [i_0] [i_2] [i_7] [i_7] [i_7] [i_2] [i_0])));
                var_26 = var_2;
            }
            var_27 = var_2;
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_28 += (arr_33 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1]);
                            var_29 = (((var_8 + (arr_20 [i_10]))));
                            var_30 ^= (((((!(arr_21 [i_0] [i_2] [i_8] [i_9] [i_10] [i_10] [i_2])))) <= (arr_31 [i_9] [i_2] [i_2] [i_9])));
                            arr_35 [i_0] [i_2] [i_8] [i_8] [3] = (((((18446744073709551607 ? (arr_6 [i_9] [i_10]) : 122))) != (((arr_33 [i_0] [6] [6] [i_9] [i_9] [i_10]) ? 7 : var_2))));
                            arr_36 [i_10] [i_8] [i_8] [i_0] = 2016;
                        }
                    }
                }
            }
            var_31 = (arr_33 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2]);
        }
        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            var_32 &= 67108863;
            var_33 = 31178;
            var_34 += ((((((34367 > (arr_0 [i_11 - 2]))))) % ((~(arr_0 [i_11 - 1])))));
            var_35 ^= (((((min((arr_15 [i_11 - 3] [i_11]), 1)))) / (min((arr_5 [2] [i_11 + 1] [i_11 - 3]), (arr_5 [i_11 - 4] [i_11 - 2] [i_11 - 2])))));
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        var_36 = ((((1653512529842017313 ? (arr_41 [i_12 + 1]) : (arr_40 [i_12]))) ^ ((7713 - (arr_39 [2] [i_12])))));
        var_37 = (min(var_37, var_9));
    }
    #pragma endscop
}
