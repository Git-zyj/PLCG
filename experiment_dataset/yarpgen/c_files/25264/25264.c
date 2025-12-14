/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_1] = ((((((arr_3 [i_0]) >> (((arr_3 [i_0]) - 1338919311))))) ? (((2138677217 <= (arr_1 [i_1])))) : (arr_1 [i_0])));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] = -10;
                        arr_11 [8] [8] [i_2] [8] [8] [8] &= (min((arr_5 [14]), 2204412386));
                    }
                }
            }
        }
        var_11 = (((arr_5 [0]) >> (var_9 - 129852000)));
        var_12 = (var_0 + var_8);

        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_4] = -10;
            var_13 = (min(var_13, (((((((1215434854 ? var_1 : (arr_12 [15] [i_0])))) != 2330202014)) ? var_0 : var_0))));
            var_14 = (max(var_14, (min((arr_2 [0] [i_4 - 1]), (((~-1150084679) ? (arr_1 [i_4 + 1]) : (max(1380930370, -28))))))));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [15] [i_5 - 1] = (~var_2);
            var_15 = (min(var_15, ((+((var_2 ? (arr_3 [i_0]) : (arr_3 [i_5 - 1])))))));
            var_16 = var_6;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_22 [14] [i_5] [i_5] [14] = (max(((-(((arr_16 [i_0] [16]) | var_9)))), (min(((((arr_3 [i_0]) >= 1215434835))), (((arr_16 [i_0] [i_0]) + var_2))))));
                        arr_23 [i_7] [i_6] [2] [i_5] [i_0] |= (arr_9 [i_0] [i_0] [i_5] [i_6] [i_7]);
                        arr_24 [i_0] [i_5] [i_0] [i_5] = -1751672465;
                    }
                }
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_28 [20] [i_5 + 1] [i_5] = ((((!(arr_4 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_35 [i_5] [7] [7] [7] [i_5] = var_4;
                            arr_36 [i_8] [14] [i_8] [i_9] |= max(var_5, (arr_1 [i_9]));
                            var_17 &= ((-(((arr_0 [i_10]) - (arr_0 [5])))));
                            var_18 = var_1;
                        }
                    }
                }
                var_19 *= (arr_33 [i_0] [3] [i_8] [i_0] [i_0] [i_0] [i_0]);
                var_20 = -var_7;
            }
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_39 [i_0] = ((1042384063 ? (max(721253838, (arr_38 [13] [13] [i_0]))) : (arr_21 [i_0] [i_11] [i_0] [i_11])));
            var_21 = ((((arr_25 [6]) ? (((arr_19 [i_0] [i_0] [i_0]) ? 1233282739 : 1451731907)) : ((max((arr_0 [i_0]), var_2))))) ^ ((min(var_10, ((((arr_29 [i_0] [i_0] [12] [12] [6]) || var_7)))))));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            var_22 = 4147722033;
            var_23 = (((-2147483647 - 1) && 568812549));
            arr_43 [i_0] [i_0] = (arr_37 [i_0] [i_12] [i_12 + 2]);
            arr_44 [3] [3] = 1450753287;
            arr_45 [16] [16] = (((arr_21 [i_0] [i_0] [i_12 - 1] [i_0]) * (arr_1 [i_12 + 2])));
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        arr_50 [i_13] = ((var_9 ^ ((((((var_3 ? -1215434856 : 2016606474))) && ((((arr_4 [i_13] [i_13] [i_13]) ? (arr_33 [i_13] [i_13] [i_13] [i_13] [3] [i_13] [i_13]) : -1215434835))))))));
        var_24 |= ((((((arr_7 [i_13] [i_13] [i_13] [20]) != (arr_7 [i_13] [16] [i_13] [i_13])))) ^ (((((((arr_1 [i_13]) ? 518692210 : 1215434835))) && var_8)))));
        arr_51 [i_13] [i_13] = ((var_3 - -1622851534) * (max((arr_5 [2]), (((arr_41 [i_13] [i_13]) ? (arr_31 [16] [i_13] [16]) : -840131584)))));
        var_25 = min(((-1215434835 ? var_1 : (arr_8 [i_13] [i_13] [6] [i_13] [0] [6]))), (((((arr_48 [i_13]) % (arr_32 [i_13] [i_13]))) | 1814840074)));
        arr_52 [6] [i_13] = ((~((min(-1215434854, var_7)))));
    }
    var_26 = (max(var_26, (((((((var_7 ? var_5 : var_8)) ? -189390848 : -var_2)))))));
    var_27 = ((!((((max(2764234027, 903142553)) << (((max(1665145543, 817154908)) - 1665145530)))))));
    #pragma endscop
}
