/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_1 [i_0 + 1] [i_0 - 2])));
        var_21 = (max(var_21, var_14));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_11 [i_2] [8] [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = 3337059770382330074;
                            arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = 32640;
                            var_22 = (arr_6 [i_0] [i_0] [i_0] [i_0 - 1]);
                            var_23 ^= 3337059770382330066;
                        }
                    }
                }
            }
            arr_13 [i_0] = (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_24 *= (3337059770382330083 & 36784);
                        arr_22 [i_0] [i_0] [i_6] [4] = (~var_9);
                        var_25 = var_17;
                    }
                }
            }
            arr_23 [i_0] [i_5] = var_2;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    arr_32 [i_9] [i_8] [i_9] = (arr_0 [1]);
                    arr_33 [i_9] [i_0 - 1] [i_9] = 203;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_37 [i_10] = max(1632494921, ((((arr_16 [i_10] [i_10] [i_10]) > var_8))));
        arr_38 [9] [i_10] = arr_20 [i_10] [i_10] [i_10] [i_10];
    }

    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    {
                        var_26 = (max(var_26, (36783 != 1)));
                        arr_50 [i_11] [i_11] [i_14] [11] [i_11] [6] = ((13410 ? 12367 : (arr_42 [i_11])));
                        var_27 = (max(var_27, (!1)));
                    }
                }
            }
        }
        arr_51 [i_11] [1] = (arr_40 [i_11]);
        var_28 = (max(var_28, ((max(var_7, 2041365855)))));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        var_29 ^= -var_15;
        var_30 = (max((~var_17), (arr_52 [i_15])));
    }
    for (int i_16 = 3; i_16 < 9;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                {
                    arr_64 [i_16] [i_16] = (((arr_31 [i_16] [i_16] [11] [i_18]) ? (~-127) : (max((arr_9 [i_16] [i_17] [i_18] [i_16] [i_16 + 1]), (max(var_19, var_16))))));
                    var_31 ^= (max(-32746, (max(var_16, (arr_14 [9] [9] [i_18])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 8;i_20 += 1)
            {
                {
                    var_32 = (max(var_32, (!115)));
                    var_33 = (((((~((-(arr_29 [i_16 - 2] [1])))))) > ((((arr_46 [i_16] [i_16] [i_16]) ? (arr_10 [i_16] [i_16] [i_16] [i_16] [i_19] [i_16]) : (arr_5 [i_16] [i_19] [8] [i_20]))))));
                }
            }
        }
    }
    #pragma endscop
}
