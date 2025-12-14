/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0] [i_0]) && 63)) ? (((arr_2 [i_0] [i_0]) ? -120 : (max((arr_1 [6]), (arr_2 [i_0] [i_0]))))) : ((min((arr_2 [i_0] [i_0]), -var_8)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((((min(var_2, (arr_2 [i_1] [i_1 - 2])))) ? (((((min(63, 1))) ^ (((arr_1 [i_0]) ? 1 : (arr_0 [i_0])))))) : var_3));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [12] = (max((arr_0 [i_0]), (((arr_9 [i_2 - 1] [i_1 + 1] [i_2 - 1] [i_1 + 1]) ? 9919 : (arr_10 [i_2] [i_2] [i_2 - 1] [i_2])))));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_14 |= (((!(arr_9 [i_4] [i_2 - 1] [i_4] [i_2 - 1]))));
                            var_15 = 255;
                            arr_15 [13] [13] [i_2] [i_2] = (min(var_10, var_7));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_16 -= 255;
                            arr_20 [10] [i_2] [i_2] [9] [i_5] = (!15);
                            arr_21 [11] [11] [11] [i_2] [11] = (((arr_19 [i_1] [i_2 - 1] [i_1] [i_2 - 1] [i_2] [i_5 - 1]) ? (arr_1 [1]) : (((-(arr_2 [i_2] [i_2]))))));
                        }
                        arr_22 [i_2] [i_2] [i_3] = (max(69, (((((3002268977344922285 ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_0 [i_0])))) ? ((-37 ? (arr_17 [i_3]) : (arr_19 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))) : 1))));
                    }
                }
            }
        }
        var_17 = var_0;
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((!(var_2 - 1356394355)));
        var_18 = ((((min((((var_5 ? (arr_23 [i_6]) : 63))), ((var_0 ? (arr_25 [i_6] [i_6]) : var_6))))) ? ((min(((max(255, -1))), var_5))) : var_3));
        var_19 ^= (arr_24 [i_6 + 2] [i_6 - 1]);
        arr_28 [i_6] [i_6] = (min(-8, -1));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_20 = (arr_18 [i_7] [i_7 + 2] [i_7] [i_7 - 1] [i_7]);
        var_21 = (max(var_21, (min(((+((4092084887565511515 ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : 1238781969)))), 233))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_22 = (arr_38 [i_9]);
                        arr_42 [i_8 - 2] [i_8] [i_8 - 2] [i_8] = var_11;
                        var_23 = var_1;
                        var_24 = ((((arr_8 [i_9] [15] [i_9]) ? (arr_16 [i_8] [i_9] [i_10] [i_10 + 1] [i_9] [i_11]) : -16)));
                    }
                }
            }
            arr_43 [i_8 - 1] [i_9] = (arr_12 [i_8] [i_8 - 1] [i_9] [i_9] [14]);
            var_25 = -7;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_49 [i_13] [i_12] [i_12] [i_12] [i_9] [i_8] = (var_13 ? (arr_39 [i_9] [2] [i_9] [i_13 - 1]) : var_8);
                        arr_50 [i_12] [i_12] [i_12] = (((arr_13 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_12] [10]) ? -30 : 1));
                        var_26 = var_1;
                        arr_51 [i_8] [i_12] [i_8] = (((arr_40 [6] [6] [i_9] [i_8]) ? 1 : (arr_25 [i_13] [1])));
                    }
                }
            }
            arr_52 [3] = (((arr_24 [i_8 + 2] [i_8 - 1]) & var_13));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_27 = (arr_32 [i_14] [i_14]);
            var_28 = (min(var_28, (((arr_17 [i_14]) < (6355494736970877526 - var_13)))));
        }
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            var_29 ^= (((arr_18 [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 2]) ? 262 : (arr_33 [i_15 + 1])));
            var_30 = ((-(arr_29 [0])));
            arr_58 [i_8] [i_15] = ((((((arr_25 [i_8] [4]) << (4148 - 4133)))) ? (var_1 | 7771601636045039177) : (arr_54 [i_8] [1])));
        }
        var_31 *= (((arr_9 [i_8] [i_8] [6] [i_8]) < var_11));
    }
    var_32 = 2133410057;
    #pragma endscop
}
