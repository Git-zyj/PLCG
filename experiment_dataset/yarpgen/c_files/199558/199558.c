/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_18;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_14 ? var_3 : (arr_2 [i_0])))) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : 127)) : 190));
        var_20 = (max(var_20, ((((((var_3 / 14) + ((min((arr_1 [i_0]), (arr_2 [i_0])))))) / (((((((arr_0 [i_0]) >> (var_0 - 49278)))) ? 1 : var_0))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] = (min((((arr_13 [i_4 - 1] [i_4] [i_4] [i_4 - 1]) + var_1)), ((-(arr_13 [i_4 + 1] [i_4] [i_4] [i_4])))));
                                var_21 = -1;
                                var_22 = (min(var_22, var_17));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] = (((15 ? (arr_19 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0]) : (arr_15 [13] [i_0] [i_1] [i_2] [i_2] [i_5] [i_0]))));
                                var_23 = (min(var_23, ((((((max(var_16, (arr_14 [i_0]))))) ? 3511 : ((218 ? 277889560800041935 : 1)))))));
                            }
                        }
                    }
                    var_24 *= ((62024 % ((((min((arr_22 [6] [i_1] [i_2]), 62024))) * ((var_13 ? 24383 : var_11))))));
                }
            }
        }
        arr_24 [i_0] = 3346247184;
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] |= ((!(((~(arr_28 [i_10]))))));
                                var_25 += (arr_29 [i_7 + 3] [i_7 + 1] [i_7] [i_9 + 1]);
                                arr_36 [i_0] [i_7] = ((((max((arr_8 [i_7 - 1] [i_9 + 1]), (arr_8 [i_7 + 2] [i_9 + 1])))) ? ((-12904 ? 25618 : 65409)) : (arr_8 [i_7 + 1] [i_9 + 1])));
                                arr_37 [i_7] [i_9] [i_8] [i_7] [i_7] = var_5;
                            }
                        }
                    }
                    var_26 -= 3686337036;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 = var_11;
                        var_28 = (min(var_28, (arr_38 [i_11] [i_0])));
                        arr_40 [i_7] [i_7] [i_8] = (min((!255), (((!2040) ? -725307224484836456 : ((((arr_26 [i_0]) ? 53 : 3511)))))));
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        arr_43 [8] [i_7] [i_8] [i_12] [i_0] [i_7] = ((220 % (arr_33 [i_12] [i_8] [i_7] [i_7] [i_0] [i_0] [i_0])));
                        arr_44 [i_0] [i_8] |= (((((arr_32 [i_7] [i_7] [i_7 - 1] [i_7] [i_7 + 3]) + (arr_19 [i_7] [i_7] [i_7 - 1] [i_8] [i_7 + 3] [i_7]))) + 24384));
                        var_29 = 114688;
                    }
                    var_30 ^= ((((((((arr_29 [i_0] [i_7] [i_8] [i_8]) && 246)) || ((max(200926665, var_10)))))) >> (((max(1303477887, 2)) - 1303477885))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_31 -= (arr_2 [i_13]);
        var_32 = (min(var_32, ((((var_8 ? var_0 : (arr_46 [i_13]))) == 0))));
        arr_47 [i_13] [i_13] = (((arr_42 [i_13]) ? var_16 : (((arr_11 [i_13] [2] [i_13] [i_13] [12]) * var_6))));
    }
    #pragma endscop
}
