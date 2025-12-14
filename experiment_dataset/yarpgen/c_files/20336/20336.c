/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((((arr_2 [i_0 - 1]) ? (((arr_2 [i_0]) ? var_4 : var_11)) : ((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : var_15)))))) ? ((((var_15 || (arr_1 [i_0 - 1]))))) : (((arr_2 [i_0]) + (((arr_0 [i_0]) - var_12))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 3] [i_1] = (((arr_0 [i_0 - 1]) % var_1));
                        arr_10 [i_1] [i_3] [1] [i_2] = (((arr_6 [i_1] [i_2 - 1] [i_2 + 2]) ? (arr_6 [i_1] [i_2 + 2] [13]) : (arr_4 [i_2 + 2] [i_1] [11])));
                    }
                    arr_11 [i_1] [10] [10] [i_1] = (arr_4 [i_0 - 1] [i_1] [i_0 - 1]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 22;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((((var_5 ? (arr_13 [i_4]) : var_9)) / var_9));
        arr_15 [i_4 - 2] [i_4 - 4] = var_9;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_17 = ((var_10 || (arr_22 [i_5])));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_18 = (((((var_9 ^ (arr_1 [i_5])))) ? var_0 : ((var_14 ? (arr_22 [i_5]) : (arr_12 [1])))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_8 ? (arr_18 [i_5] [7]) : (((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_19 [i_5] [6] [i_5]) : var_9))));
                            arr_32 [i_6] [i_5] = (arr_13 [i_6 - 1]);
                            var_19 = ((((((arr_20 [i_6] [i_9]) ? var_15 : var_6))) ? (arr_18 [i_7] [i_7]) : ((var_6 ^ (arr_19 [i_5] [i_5] [i_5])))));
                        }

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_5] [i_6] [i_7] [i_5] [i_6] [i_8] = var_9;
                            arr_37 [i_5] [i_6 + 1] [i_7] [i_5] [i_10] [i_5] = ((var_4 ? var_14 : (arr_24 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_5])));
                            var_20 = (max(var_20, ((((arr_24 [i_6 + 1] [i_6 + 1] [1] [i_10]) ? (((var_9 || (arr_22 [i_10])))) : ((var_11 ? (arr_26 [1] [1] [1] [i_10]) : (arr_21 [3] [i_6 - 1]))))))));
                            arr_38 [i_5] [i_6 - 1] [i_5] [i_8] [1] [i_5] [i_10] = ((var_0 ? (arr_21 [i_6 + 1] [i_6 + 1]) : (arr_21 [i_6 - 1] [i_6 - 1])));
                        }
                        var_21 = (max(var_21, (((var_8 ? (arr_19 [i_6] [i_6 + 1] [i_5]) : (arr_35 [i_7] [i_8] [i_8] [i_6 + 1] [i_6 + 1] [i_7]))))));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_41 [i_5] [i_6] [i_5] = var_8;
                arr_42 [i_5] [11] [11] [i_5] = (arr_34 [i_11] [i_11] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]);
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    arr_48 [i_6] [i_5] [i_13] = var_10;
                    var_22 = (((arr_46 [i_5]) ? ((((arr_43 [i_5] [4]) ? (arr_39 [i_5] [i_5]) : (arr_30 [i_13] [i_5] [i_6 - 1] [i_5] [i_5])))) : var_7));
                    var_23 &= (((((var_8 ? (arr_40 [i_5] [i_13]) : var_4))) ? var_0 : (((arr_2 [i_5]) ? (arr_6 [i_13] [i_6] [i_6 + 1]) : (arr_40 [i_5] [i_13])))));
                }
                for (int i_14 = 3; i_14 < 15;i_14 += 1)
                {
                    var_24 = (max(var_24, (arr_6 [1] [1] [1])));
                    var_25 = (((((var_11 ? (arr_18 [i_14 - 2] [3]) : (arr_21 [i_5] [i_6 - 1])))) ? ((((arr_7 [i_5] [i_6 - 1]) / var_6))) : (((arr_18 [i_12] [i_14]) ? (arr_51 [i_5] [i_5] [i_12] [i_14]) : (arr_44 [i_5] [i_6 + 1] [i_6] [i_6 - 1])))));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_26 = (((arr_2 [0]) ? (((((arr_16 [i_5]) > (arr_29 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (arr_50 [i_6 - 1] [i_6] [i_6 - 1] [i_15])));
                            var_27 |= ((((var_3 ? var_10 : var_6)) ^ (arr_45 [i_6 - 1] [i_6] [8])));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                arr_58 [i_5] [i_6 + 1] [i_17] = ((var_0 ? (((var_1 || (arr_40 [i_5] [i_5])))) : (arr_5 [i_5] [i_5])));
                arr_59 [i_5] [i_5] [i_5] = (((arr_18 [i_17] [i_6 - 1]) ? var_15 : (arr_7 [i_5] [i_17])));
                var_28 = (min(var_28, var_8));
                arr_60 [i_5] = var_10;
            }
        }
        for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
        {
            var_29 ^= ((var_0 ? (arr_49 [4] [i_18 + 1] [4]) : (arr_7 [1] [1])));
            arr_63 [i_5] [i_5] = ((((var_6 ? var_13 : var_5))) || var_1);
            arr_64 [i_5] [i_5] = var_13;
            arr_65 [i_5] [i_5] [1] |= (194 > 4205170480);
            arr_66 [i_5] [i_5] [i_5] = (arr_7 [i_5] [i_18 + 1]);
        }
        for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
        {
            arr_70 [i_5] [i_19 + 1] = 3803063338;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    {
                        var_30 = (arr_13 [i_21]);
                        arr_75 [i_5] [i_5] = ((arr_35 [i_5] [i_5] [i_19] [i_19 + 1] [i_5] [i_5]) ? (arr_21 [i_5] [i_5]) : ((var_9 ? var_11 : var_7)));
                    }
                }
            }
            arr_76 [i_5] [i_5] [i_19] = (((arr_49 [i_19 + 1] [i_19 + 1] [i_5]) ? var_4 : (arr_49 [i_5] [i_19 - 1] [i_5])));
        }
        arr_77 [i_5] [i_5] = var_14;
        arr_78 [i_5] = (arr_30 [i_5] [i_5] [3] [i_5] [i_5]);
    }
    var_31 ^= ((((min(var_3, var_11))) ? (((var_9 ? var_0 : ((var_15 ? var_15 : var_7))))) : (min(((min(var_4, var_2))), var_1))));
    #pragma endscop
}
