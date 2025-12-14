/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-var_3, ((-((2508716349 ? 2059042983 : 1))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (((max((-127 - 1), ((var_1 ? 0 : var_3)))) < var_3));
            var_13 = ((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_14 ^= var_5;
                            var_15 = (((arr_4 [i_4 - 3] [i_1]) - (((arr_4 [i_4 - 1] [i_1]) ? (arr_4 [i_4 - 1] [i_1]) : (arr_4 [i_4 - 4] [i_1])))));
                        }
                    }
                }
            }
            var_16 = -117;
        }
        arr_15 [i_0] [i_0] = (max((((-((max(var_10, -16591)))))), (max((((-(arr_3 [i_0 + 1])))), (max(16591, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [6])))))));
        arr_16 [i_0] = var_5;
        var_17 = (arr_7 [20] [20] [20] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [8] = ((-var_2 ? (arr_8 [2] [20]) : ((var_8 ? (arr_0 [i_5]) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_18 = ((!(!-65536)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_19 = 0;
        var_20 = 16590;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            var_21 = (((arr_14 [i_10 - 1] [1] [i_8 - 2]) ? var_7 : (arr_25 [i_8 + 1])));
                            var_22 = (arr_8 [i_10] [i_10]);
                        }
                        for (int i_11 = 4; i_11 < 10;i_11 += 1)
                        {
                            var_23 -= ((-40738 & ((24246 - (arr_10 [i_6] [i_7] [i_7] [i_7] [i_11] [i_11])))));
                            arr_36 [8] [i_7] [8] [i_7] [i_11 - 1] [i_11] &= 5500714621511243363;
                        }
                        var_24 = (arr_4 [i_6] [i_6]);
                        var_25 = ((-((var_0 ? var_1 : var_4))));
                        arr_37 [i_9] [i_8] [i_6] [i_7] [i_6] = ((((((arr_4 [i_6] [i_9]) ? (arr_35 [i_6] [i_6] [i_7] [i_8 - 1] [i_8] [4] [i_9]) : (arr_7 [i_8] [i_7] [i_8] [8])))) / var_1));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_26 = 0;
                                var_27 = arr_29 [i_6] [i_6] [i_6] [i_6];
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 9;i_15 += 1)
            {
                {
                    var_28 = (max(var_28, (arr_2 [i_6])));
                    var_29 = (((arr_22 [i_14 - 2] [i_14 - 1]) * ((124 + (arr_46 [i_6] [i_14] [i_6])))));
                    var_30 = (((arr_30 [i_6] [i_6] [i_14] [i_14]) / -109));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_31 = (-2147483647 - 1);

        for (int i_17 = 4; i_17 < 21;i_17 += 1)
        {
            var_32 = (min(var_32, (arr_56 [13] [i_16])));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    {
                        var_33 = (((((-(arr_6 [i_16] [i_16] [i_16] [i_17])))) ? (min(((((-2147483647 - 1) ? (arr_4 [i_17] [i_17]) : (arr_11 [i_16] [i_17] [i_18] [i_17] [i_17])))), (max(1752925520, (arr_53 [i_16]))))) : ((((((arr_13 [i_16]) && (arr_0 [i_16]))) ? (arr_58 [i_16] [i_17] [i_18] [10]) : ((var_0 ? 1 : 1561182864)))))));
                        var_34 = (min(956142813, -19380));
                    }
                }
            }
        }
    }
    var_35 = (((((min(-1924205852994011789, var_10)) ^ var_7)) & (((var_6 & (~114))))));
    #pragma endscop
}
