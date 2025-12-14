/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_0 ? var_10 : var_0))) > (((1531315471913157167 > -121) ? var_2 : var_9))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [2] = ((1 ? (var_5 - var_2) : -var_6));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_12 [i_2] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_0] = ((((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : var_5))) ? ((var_2 / (arr_2 [i_0 - 1]))) : ((var_3 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))));
                                arr_19 [i_1 + 2] [i_2] [i_4] = (((((var_2 && var_7) >= var_1)) ? var_2 : ((((1 + 121) > var_0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_12 = (((((-(arr_24 [3] [i_1] [i_2] [i_5] [10])))) ? (((arr_15 [i_0] [i_0] [i_0] [i_5]) ? var_2 : (arr_15 [4] [4] [4] [i_6]))) : (((!(arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_25 [i_5] [i_5] [1] [i_5] [1] = (((((((((arr_0 [i_0]) ? (arr_14 [6] [6] [7] [i_0 - 2]) : var_4))) ? (((var_9 || (arr_16 [12] [i_1 + 2] [i_1 + 2] [i_5] [i_6])))) : ((var_7 ? 1 : (arr_5 [i_0] [i_1] [0])))))) ? ((((arr_15 [i_0] [i_1] [i_5] [8]) ? 179 : 1))) : (((((arr_7 [21] [21]) ? var_2 : var_7)) & ((((arr_23 [i_5] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2] [1]) ? 1 : var_6)))))));
                                var_13 = (arr_22 [18] [i_0 - 1] [1] [13] [i_0 - 3]);
                            }
                        }
                    }
                    arr_26 [i_1] [i_1 + 1] [i_1] [14] = ((~(max(var_9, (arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 2] [i_0 + 1])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = (((arr_7 [0] [i_7]) && (arr_7 [i_7] [i_7])));
        arr_30 [i_7] = (var_0 ? (arr_24 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_3);
        arr_31 [i_7] = (((var_10 <= (arr_7 [5] [i_7]))));
        arr_32 [i_7] = ((var_3 ? (((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]) << (var_8 - 443583979))) : (~var_0)));
    }
    var_14 = ((((((var_1 ? var_9 : var_10)))) ? var_10 : ((min(var_1, var_5)))));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_36 [i_8] = ((298755041643553240 ? 1 : -23420));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 6;i_10 += 1)
            {
                {
                    arr_41 [i_9] = 6667318698552879456;
                    arr_42 [i_10 + 4] [i_8] [i_9] [i_8] = (((!119) ? (arr_2 [i_8]) : var_5));
                    arr_43 [i_8] [i_9] [i_8] = var_8;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_15 = (arr_17 [i_8] [i_9] [9] [i_9]);
                                var_16 = (238 >> var_2);
                            }
                        }
                    }
                    arr_48 [i_10] [i_10] [6] [i_10 + 1] = ((1011178801535293921 | (2152887483 && var_1)));
                }
            }
        }
        arr_49 [i_8] = ((var_7 ? (arr_21 [16] [i_8] [16] [i_8] [5]) : (arr_21 [i_8] [i_8] [i_8] [3] [i_8])));
    }
    var_17 = var_5;
    #pragma endscop
}
