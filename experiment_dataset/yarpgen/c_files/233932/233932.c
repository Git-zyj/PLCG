/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((~((((min(2409506863466982809, var_10))) ? (!var_3) : var_0))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 + 1]) || (arr_2 [i_0 - 2])));
        var_12 = var_4;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] [i_2] = (21789439 || (((var_1 ? (arr_7 [i_0] [0] [i_2] [i_1]) : 20570))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_13 += ((-((var_8 ? var_4 : var_2))));
                        arr_13 [i_3] = 9834476689891269942;
                        var_14 = (((((arr_12 [i_0] [i_1] [i_2]) ? var_5 : var_5)) >= (!var_2)));
                        var_15 = ((1 ? (arr_11 [i_0 - 2] [i_1 - 1]) : var_0));
                        arr_14 [i_3] = var_5;
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_16 -= (((arr_1 [i_0 + 2]) * (arr_15 [i_4] [i_4 - 1] [i_4 + 3] [i_4] [i_4])));
                        var_17 ^= (124 + var_9);
                    }
                    var_18 = (((arr_5 [i_1 - 1] [i_1 - 4]) - -var_5));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5 - 2] = (((arr_5 [i_5] [i_5]) == (~var_7)));
        arr_20 [i_5] [i_5] = (((1457455106 != (arr_6 [12]))));
        var_19 = (arr_8 [i_5] [i_5] [1]);
        arr_21 [i_5] = var_7;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_26 [1] [i_6 - 1] [12] = (arr_0 [i_5 + 4]);
                    var_20 = ((~(arr_12 [5] [i_7 + 1] [i_7])));
                    arr_27 [i_7] [i_6 - 2] [i_6] [i_5 + 2] = ((1996100022 - (arr_15 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7])));
                    var_21 = ((~(arr_10 [i_7] [i_7] [i_5] [i_7] [i_5])));
                    var_22 = var_5;
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = 21789439;
        arr_31 [i_8 + 1] [i_8 + 1] |= (((((((((arr_0 [i_8]) != var_6))) >> (((((arr_18 [i_8]) ? 2512611453 : (arr_12 [i_8] [i_8] [i_8]))) - 2512611424))))) ? (var_3 + 4273177856) : 4294967278));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_23 = -9552;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_24 += ((max((max(16777215, 17162815371734921572)), (min((arr_33 [i_9] [i_11]), var_6)))));
                    var_25 = var_2;

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_26 = ((((2890164534 || var_7) < (40666 + var_8))));
                        var_27 = (max(var_27, var_10));
                        arr_41 [i_9] [i_9] [i_11] [i_12] = (((var_9 ? ((((arr_32 [i_9]) << (var_9 - 6165)))) : var_8)));
                        arr_42 [i_11] [i_10] = ((!(((-(~64))))));
                    }
                    var_28 = (min(var_28, 107));
                }
            }
        }
        var_29 = var_5;
    }
    #pragma endscop
}
