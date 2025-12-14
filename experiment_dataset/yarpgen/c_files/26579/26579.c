/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [10] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((10772 ? 1201878172 : (arr_4 [i_1])));
        arr_7 [i_1] = (!124);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_12 = 10794;
                    arr_15 [i_2] [i_4] = (((!var_2) ? (((43881 ? ((min(9723, var_0))) : (arr_8 [i_2] [i_2])))) : 2458605226));
                    arr_16 [i_4] [i_4] = (max(((~(arr_9 [i_2] [i_3]))), (arr_13 [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = (max(((var_1 ? (arr_17 [i_5 - 2] [i_5 + 2]) : (arr_22 [i_5 + 2] [i_3] [i_4] [i_5] [i_4]))), var_9));
                                arr_23 [i_6] [i_5 + 2] [i_4] [1] [i_4] [i_3] [i_2] = 54769;
                            }
                        }
                    }
                    var_14 = (max(var_14, ((((var_9 ? 942005194 : var_10))))));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_15 = (max(var_15, (((var_9 << (var_6 - 3473656296378897196))))));
            arr_27 [i_2] [i_7] = -59;
            arr_28 [i_7] [i_7] = (arr_13 [i_2]);
        }
        var_16 = var_7;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_17 = ((+(((arr_24 [i_8] [i_8] [i_8]) - (arr_13 [i_8])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_18 = (~(3372678827681650909 % 124));
                        var_19 = var_1;
                        arr_37 [i_11] [i_9] |= var_0;

                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            var_20 = ((var_9 || (((10796 ? (arr_22 [i_9] [i_9] [i_9] [i_9] [i_10]) : 1)))));
                            arr_42 [i_10] = (~3093089123);
                            arr_43 [i_10] [i_9] [i_10] [i_11] [i_12] = (arr_14 [9] [i_9] [i_9] [i_9]);
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_21 = ((var_0 ? 1 : 1));
                            var_22 ^= 1375287566;
                            arr_47 [i_10] [i_11] [i_8] [i_8] [i_10] = 58461;
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_52 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] |= (arr_12 [i_8]);
                            var_23 = var_4;
                            var_24 = (arr_26 [i_8] [i_9] [i_14]);
                            arr_53 [i_8] [i_8] [i_8] [i_10] [i_8] = (((1 ? 0 : (arr_36 [i_8] [i_9] [i_9] [i_8] [i_11] [i_14]))));
                            arr_54 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8] = 54776;
                        }
                        arr_55 [i_10] [i_10] [i_10] [i_11] = ((~(arr_30 [i_10])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    {
                        var_25 = var_7;
                        arr_64 [i_8] [i_15] [i_16] [i_8] [i_17] = ((1201878172 && (arr_25 [i_16 + 3] [i_16 + 2] [i_16 + 4])));
                        var_26 = (arr_33 [i_17] [i_15 - 1] [5]);
                    }
                }
            }
        }
    }
    var_27 = (((((var_1 >= 1) ? var_6 : ((var_0 ? var_7 : 18)))) % var_2));
    #pragma endscop
}
