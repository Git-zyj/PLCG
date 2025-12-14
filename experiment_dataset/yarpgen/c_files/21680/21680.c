/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 ? ((-161 ? -1 : (var_9 - var_1))) : (((89 ? (1 + 209) : 57)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        var_11 = var_8;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = 198;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    {
                        var_12 += (((((204 ? var_8 : (arr_3 [i_1 + 1])))) ? (min((arr_7 [i_1 + 1] [i_4 - 1]), (arr_3 [i_1 - 2]))) : (arr_13 [i_4 - 2] [i_4] [i_4 - 2] [i_1 - 1])));
                        arr_14 [i_1] [i_2] [8] &= ((var_0 != (min((arr_9 [i_1] [8] [i_1]), ((15991617308442498313 ? -1 : 15991617308442498313))))));
                        var_13 = (max(var_1, (((+(((-32767 - 1) ? 79 : var_2)))))));
                        var_14 = (arr_13 [i_1] [i_1] [i_1] [14]);
                    }
                }
            }
            arr_15 [i_1 - 1] [i_1] [i_1] = (42 % 235);
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_1 - 2] [i_1] [13] = (((min(48, (arr_13 [i_5] [i_5] [i_5 + 2] [i_5])))));
            arr_20 [4] [i_5 + 2] = (((((arr_7 [i_1] [11]) ? 181 : ((min(var_4, var_4)))))));
        }
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_15 += var_4;
            arr_24 [i_6 - 1] = (arr_13 [11] [11] [11] [i_6 - 1]);
            var_16 *= (arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]);
        }

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_27 [9] = ((+((72057594037927935 ? (arr_17 [i_1 - 2] [i_1 - 1]) : (arr_17 [i_1 + 1] [i_1 - 2])))));
            var_17 = (((arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2]) / (arr_6 [10] [i_7])));
            arr_28 [i_1] [i_1 + 1] = 214;
            var_18 = ((((min(var_2, var_3)))));
        }
        arr_29 [i_1] [i_1 - 2] = (((var_0 ? ((max(166, 82)) : ((3 ? var_7 : 1779145749))))));
        var_19 = (((4493594066364877150 || 166) ? (arr_7 [i_1] [i_1]) : ((max((arr_12 [14] [i_1 - 1]), 221)))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_20 *= 206;
                    arr_37 [i_9] [i_10] = ((1935918916 ? 2455126765267053302 : 2701101330087335692));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_21 = 178;
            var_22 &= ((arr_33 [2] [3] [i_11]) << (1935918906 <= var_1));
            var_23 = (arr_35 [i_11]);
        }
    }
    #pragma endscop
}
