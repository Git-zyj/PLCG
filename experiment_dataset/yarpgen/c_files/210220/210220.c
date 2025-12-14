/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_11 = var_0;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [16] [10] [i_0] = (((-(arr_1 [i_0 + 3]))));
            var_12 = (max(((-(arr_0 [i_0]))), (1 & 249)));
            var_13 = -var_7;
        }
        arr_5 [i_0 - 4] = (((max((arr_2 [i_0 + 4] [i_0 - 1]), (var_8 / var_2))) <= (arr_3 [i_0] [i_0] [i_0 - 3])));
        arr_6 [i_0] = ((((max((arr_2 [i_0 + 3] [i_0 + 4]), (arr_0 [i_0 + 4])))) ? (((min((arr_0 [i_0 + 4]), 7)))) : ((249 ? 439383125960367454 : (arr_2 [i_0 - 3] [i_0 - 2])))));
        var_14 *= 1;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_15 = (max(var_15, (arr_7 [i_2])));
        var_16 = (min(var_16, var_1));
        var_17 *= ((((min(var_7, 7)) | (~0))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] = (arr_3 [9] [4] [i_3]);
        var_18 = 2741187392;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_19 [i_6] = var_8;
                    var_19 = ((-(arr_16 [i_4] [19])));
                    var_20 = (min(var_20, (((-var_0 * (arr_8 [i_5]))))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_22 [i_6] [i_7] = (arr_8 [i_4]);
                        arr_23 [i_6] [i_5] [i_6] [i_7] [5] = (((arr_15 [i_4]) + (arr_8 [i_5])));
                        var_21 = (((((-83 ? (arr_13 [i_4] [i_7]) : 6))) ? 4294967295 : var_3));
                        var_22 = ((-(arr_21 [i_4] [i_5] [i_6] [i_7] [i_6])));
                        var_23 = ((arr_7 [i_6]) > -879542193);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 ^= ((-((2147483647 ? 252 : 255))));
                        arr_26 [i_4] [i_6] [i_8] = ((-(arr_8 [1])));
                        var_25 -= (((6073864290306074602 != var_1) << (-24 + 27)));
                        var_26 += (((var_3 * var_1) && (var_9 || var_4)));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        arr_29 [i_4] [i_5] [19] [i_6] = (arr_13 [19] [i_6]);
                        var_27 = (arr_18 [i_6]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    arr_37 [10] [i_10] [2] = (-9223372036854775807 - 1);
                    var_28 = var_1;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_29 = ((arr_20 [i_10 + 3] [i_12] [i_13]) ? (8864734637773297185 <= var_6) : -1);
                                var_30 = (max(var_30, (arr_7 [i_4])));
                                var_31 = (((arr_15 [i_13 - 2]) > var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_50 [12] [i_14] [i_11] [i_10] [i_11] [i_4] [14] &= (arr_39 [7] [i_11] [3] [i_15]);
                                var_32 = (arr_45 [0] [i_11] [i_15]);
                            }
                        }
                    }
                }
            }
        }
        var_33 = (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
