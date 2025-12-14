/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_6, (((((max(var_5, var_6))) + 1949785620)))));
    var_18 ^= ((~(var_6 % -126)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_0));
                                arr_12 [i_4] [i_1] &= (((arr_8 [i_3] [i_2] [i_2] [i_3]) || 3282361266));
                            }
                        }
                    }
                    var_20 = var_2;
                }
            }
        }
        arr_13 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_21 &= ((var_3 ? 122 : -438025159));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_22 = (max(var_22, (((((((28 ? var_11 : (arr_8 [i_5] [i_5] [i_5] [16])))) && ((min((arr_2 [6]), (arr_4 [2] [2])))))) ? (max((((arr_8 [i_5] [i_5] [12] [0]) % var_14)), (arr_6 [2] [i_5] [10] [2]))) : (~var_13)))));
        var_23 = (((((min((arr_8 [2] [2] [i_5] [i_5]), -1433570532)) & ((~(arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])))))) - (min((((var_2 ? var_7 : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])))), (arr_1 [i_5]))));
        arr_16 [0] |= (arr_9 [i_5] [i_5] [16] [i_5] [i_5]);

        for (int i_6 = 4; i_6 < 6;i_6 += 1)
        {
            arr_20 [8] [i_5] [8] = (!-1949785621);
            arr_21 [i_5] = (min((arr_7 [i_5] [i_5] [i_6]), var_8));
            var_24 = var_14;
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_31 [i_5] [i_7] [4] [9] = (((arr_7 [i_5] [i_5] [i_9 - 3]) | (max((arr_19 [i_5] [i_5]), var_8))));
                        var_25 = (max(var_25, ((((arr_8 [i_8] [i_9 - 3] [i_9 - 2] [i_8]) / (arr_8 [i_8] [i_9 + 1] [i_9 - 3] [i_8]))))));
                    }
                }
            }
            var_26 = (min(var_26, (max((arr_18 [i_5] [i_5] [0]), ((((arr_5 [16] [2]) <= (arr_7 [i_7] [18] [i_5]))))))));
            var_27 = var_13;
            arr_32 [i_5] [4] [2] &= (arr_24 [i_5] [i_5] [0] [i_7]);
            arr_33 [i_5] [2] &= var_8;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    {
                        var_28 = (min(var_28, ((((arr_6 [6] [i_12 + 1] [i_12] [i_12]) ? (arr_19 [8] [i_12 - 1]) : (arr_6 [16] [i_12 - 1] [i_12] [i_12 - 1]))))));
                        var_29 = -var_9;
                    }
                }
            }
            var_30 = ((~(arr_6 [i_5] [19] [i_10] [i_10])));
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 24;i_15 += 1)
            {
                {
                    arr_50 [i_15] [19] [19] [19] = ((!(((0 << (var_9 + 1784562529))))));

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_31 = (max((min((arr_51 [i_13] [i_13] [i_13] [i_13]), 125)), (((arr_44 [i_15 - 1]) ? var_5 : var_16))));
                        var_32 -= var_1;

                        for (int i_17 = 2; i_17 < 21;i_17 += 1)
                        {
                            var_33 = (((max(var_11, (arr_52 [i_13] [i_13] [i_16] [i_16]))) - ((((min(39, var_9)))))));
                            arr_55 [i_17] [i_16] [i_16] [i_16] [23] [i_14] [i_13] = var_0;
                        }
                    }
                    arr_56 [i_14] [i_14] [i_13] = (((min((((arr_47 [6] [6]) | -6)), ((max(var_6, 127))))) >= var_15));
                }
            }
        }
    }
    #pragma endscop
}
