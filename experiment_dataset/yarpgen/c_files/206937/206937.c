/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0 + 2] = ((var_2 ? 157 : ((-(arr_0 [i_0] [i_0])))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_19 += (~var_6);
            arr_5 [3] = var_13;
        }
        arr_6 [i_0] |= ((~(arr_1 [i_0 + 1] [i_0 + 2])));
        arr_7 [2] = 146;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [16] = ((var_3 ^ ((~((3357741600 ? var_11 : 151))))));
        arr_11 [i_2] [i_2] = ((~(((arr_9 [i_2]) / (arr_9 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    {
                        var_20 = min((((!(((arr_21 [8] [i_5] [i_4] [8]) || var_1))))), (arr_18 [i_4 - 1] [i_5] [i_6 - 1]));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (min(var_21, (((((var_7 ? (arr_16 [i_5] [i_5]) : (arr_14 [i_4]))) >> (var_5 - 156))))));
                            arr_25 [i_6] [i_5] [i_3] = ((arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) ? (arr_20 [i_6 - 1] [12] [i_6] [i_6]) : 2424040664);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_22 -= arr_27 [13] [13] [i_5];
                            arr_28 [i_3] [i_3] [16] [9] = ((!(arr_23 [11] [i_6 - 1])));
                        }
                    }
                }
            }
        }
        arr_29 [i_3] = (((arr_14 [i_3]) != ((var_2 ? (!var_8) : var_17))));

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_23 += (1870926631 * 2424040664);
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        var_24 += ((arr_33 [i_11 + 2] [i_10 - 1]) * (((-(arr_33 [i_11 + 3] [i_10 + 1])))));

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            arr_43 [i_3] [18] [i_10] [i_9] [i_3] = var_15;
                            var_25 = (max(var_25, ((((133 < (arr_24 [i_9] [i_9] [i_10] [i_9] [i_3])))))));
                            arr_44 [i_12] |= ((((!(!var_4))) ? 4294967295 : (((((arr_22 [i_12] [i_12] [i_12] [i_10 + 2] [i_12] [i_10 + 2] [i_10 + 2]) && var_3))))));
                            arr_45 [i_9] = arr_26 [i_3] [i_9] [4] [i_10] [i_11] [i_12];
                            arr_46 [i_9] [i_9] [i_10] [i_11] [i_9] [i_12] = ((2174131985 ^ (max(var_9, (((-(arr_30 [i_9] [i_9] [i_10]))))))));
                        }
                    }
                }
            }
            var_26 *= ((var_15 ? 130 : 2844254141));
        }
        arr_47 [i_3] = (!131);
        arr_48 [1] &= var_12;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        var_27 -= ((var_8 ? (arr_12 [10]) : var_9));
                        arr_61 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_42 [i_16] [i_15] [i_15] [i_15] [i_14] [6] [i_13]);
                        arr_62 [i_16] = ((arr_57 [i_13] [i_14]) & (arr_12 [0]));
                    }
                }
            }
        }
        arr_63 [i_13] [16] = (((((var_0 + (arr_30 [12] [12] [12])))) ? (arr_19 [3] [i_13] [i_13]) : (arr_16 [12] [0])));
        var_28 -= (((arr_39 [11]) != (~var_5)));
    }
    var_29 &= var_12;
    var_30 -= (((-(max(var_3, var_7)))) << ((((((max(var_7, 2588215075))) ? (var_9 | var_12) : (((max(12, var_18)))))) - 466657511)));
    var_31 = (max(-var_18, ((((var_18 ? 2424040664 : 1528096963)) + var_14))));
    #pragma endscop
}
