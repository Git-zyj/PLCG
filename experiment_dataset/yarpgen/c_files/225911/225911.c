/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(((min(1, var_7))), 14)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_0] = 1;
                        var_15 &= 311620767;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_1, 1));
                                var_17 = (arr_2 [i_0]);
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = -3210611689594246076;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_20 [i_6] |= (max((arr_17 [i_6]), var_6));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_26 [i_7] [i_7] = var_12;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_18 = var_2;
                        arr_29 [i_7] [5] [i_7] [i_7] = ((43 ? var_13 : (arr_23 [i_7] [i_7] [i_7] [i_9])));
                        var_19 = 16777216;
                        arr_30 [i_9] [i_7] [i_7] [i_6] = (arr_22 [i_7] [i_6]);
                    }
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {
                        var_20 = var_0;
                        var_21 = var_10;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_22 ^= var_7;
                            var_23 = var_9;
                            var_24 = (min((arr_25 [i_11]), var_9));
                            var_25 *= (arr_23 [i_6] [i_7] [i_7 + 1] [i_6]);
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_26 = arr_22 [i_6] [i_7];
                            arr_40 [i_6] [i_7] [i_13] [i_7] [i_13] [10] [i_6] = (max(var_9, -2634));
                            arr_41 [i_13] [i_7] [i_8] [i_7] [i_6] = arr_38 [i_13] [i_7] [11] [i_8] [i_7] [11];
                            arr_42 [1] [i_7] [i_8] [i_7] [1] [i_13] = ((3983346508 ? 1 : (arr_39 [i_6] [i_13])));
                        }
                        var_27 = (max(var_7, (arr_33 [i_8] [i_7] [i_8] [i_7] [i_7 + 1])));
                    }
                }
            }
        }
        arr_43 [i_6] = -2640;
        var_28 = (min(1, 1));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_29 = (min(((min((arr_44 [i_14]), var_13))), 2697825118));
        arr_47 [0] |= (max(1, (max((arr_45 [1] [1]), 1))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        arr_50 [i_15] [i_15] &= 223;
        arr_51 [i_15] [i_15] = ((((max((((2319005740603355279 ? (arr_44 [6]) : -32109))), (min(var_6, 122))))) ? var_9 : var_13));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {
                        arr_61 [i_17] = 197;

                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_30 = 4053836155;
                            arr_64 [i_19] [i_17] [i_19] = (arr_63 [i_20] [i_19] [i_18] [i_18] [i_17] [i_16]);
                            var_31 &= (arr_49 [i_16]);
                        }

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_32 -= (arr_59 [i_16] [i_18 + 1] [i_21] [i_16]);
                            var_33 ^= 48;
                        }
                        arr_67 [i_16] [i_16] [i_18] [i_17] = (arr_58 [i_19] [i_19] [i_17] [i_17] [i_16] [7]);
                    }
                }
            }
        }
        var_34 += (min((((arr_59 [4] [i_16] [0] [i_16]) ? 512 : var_6)), 1));
    }
    var_35 = 130816;
    #pragma endscop
}
