/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = var_16;
        var_20 = 1;
    }

    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_21 = (max(var_21, (((max((arr_4 [i_1 + 1] [8]), -18896))))));
        arr_5 [i_1] = (arr_3 [i_1 + 4] [i_1]);
        var_22 = ((var_9 < (arr_3 [i_1 - 1] [i_1])));
        arr_6 [i_1] = (-(arr_4 [i_1 + 2] [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_23 = (max(var_23, ((((arr_3 [i_2] [6]) % (arr_8 [6] [6]))))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_2] = (~var_7);
            var_24 = (min(var_24, ((((arr_8 [14] [14]) ? (arr_8 [0] [i_3]) : -18896)))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_2] [i_2] = (((((arr_3 [16] [i_2]) - var_11)) | -18896));
            var_25 ^= (~var_2);
        }
        var_26 = 402653184;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_27 ^= var_2;

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_28 = ((var_13 ? (arr_17 [i_2] [i_5 + 3] [i_5 - 3]) : -var_7));
                            var_29 = (((var_14 >= var_15) >= 217));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_30 -= (arr_15 [i_2] [14] [14]);

                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        var_31 = (min(var_31, (((-8219074847360630366 ? 3927813649994762288 : 23)))));
                        var_32 = 51;
                    }
                    arr_37 [i_2] [i_2] = var_2;
                    arr_38 [i_2] [i_2] [i_2] = var_6;
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_42 [i_12] = (-(max((arr_25 [i_12]), var_5)));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_33 = (max(8219074847360630365, 2167102148));
                    var_34 = var_1;
                    var_35 += ((arr_4 [18] [18]) ? ((-(arr_21 [i_12] [i_13] [15] [i_12]))) : ((max((arr_4 [i_13] [8]), (arr_4 [i_12] [20])))));

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_36 = ((-(((8257536 || (arr_32 [18]))))));
                        arr_50 [i_12] [i_12] [i_14] [i_14] [i_14] &= (((arr_20 [i_12] [13] [i_14] [14]) / (arr_33 [i_12] [14] [i_14] [6])));
                    }
                    for (int i_16 = 4; i_16 < 9;i_16 += 1)
                    {
                        arr_55 [i_16] = (min(((32 ? 49152 : -18885)), -80));
                        var_37 = (max(var_37, ((((((237 ? var_14 : (arr_17 [0] [0] [0])))) || 8219074847360630383)))));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_60 [2] [0] &= (min((var_0 * var_9), ((((arr_32 [6]) ? (arr_32 [8]) : var_16)))));

                        for (int i_18 = 4; i_18 < 9;i_18 += 1)
                        {
                            var_38 = 255;
                            var_39 |= (arr_49 [i_12] [i_13] [i_13] [i_13] [i_18]);
                            var_40 = max(((min(((max(-80, (arr_17 [i_17] [i_18 - 1] [i_17])))), var_15))), (((((var_15 ? var_1 : var_14))) ? ((var_5 ? var_18 : 17614800562602520355)) : (((-42805329 ? 8219074847360630383 : 1))))));
                            arr_64 [i_12] [i_12] [i_12] [i_12] [i_17] = ((~(-9223372036854775807 - 1)));
                            arr_65 [i_17] [i_17] [i_17] = var_10;
                        }
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            arr_68 [i_12] [i_13] [i_12] [4] [i_17] = -0;
                            var_41 = (((arr_9 [i_17]) ? ((((!(arr_24 [i_19] [i_14] [i_14] [i_14] [i_13] [i_13] [i_12]))))) : (((arr_9 [i_17]) ? var_9 : 41091))));
                            var_42 += var_0;
                            var_43 = (max(var_43, (((1 ? 205 : 31)))));
                        }
                        arr_69 [0] [4] [i_17] [i_17] = (((-(min(16376, (arr_0 [i_17]))))));
                    }
                    var_44 = (min(var_44, (min(((~(arr_15 [i_12] [10] [10]))), (((arr_15 [i_12] [8] [i_12]) ? (arr_15 [i_12] [10] [i_12]) : 64))))));
                }
            }
        }
        arr_70 [i_12] = (max(1, -16395));
    }
    var_45 = var_15;
    var_46 = var_10;
    #pragma endscop
}
