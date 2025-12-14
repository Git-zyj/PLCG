/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max((arr_6 [i_1]), (max((arr_5 [i_1]), (arr_0 [i_1])))));
                var_21 = (arr_4 [i_0]);
            }
        }
    }
    var_22 = ((-(~15553)));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, ((((arr_1 [1]) ? (arr_10 [i_2] [i_3]) : (arr_6 [i_2]))))));
                    arr_17 [i_2] [i_2] [i_2] = ((-(arr_8 [i_2] [i_3])));
                    var_24 = -82;
                }
            }
        }
        arr_18 [i_2] = (arr_1 [i_2]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 = (((arr_9 [i_2] [i_2]) || (arr_10 [i_5 + 1] [i_5])));
                    var_26 = ((1 ? 6625704562946376145 : 6625704562946376145));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_27 = (min(var_27, ((((((arr_23 [i_9] [2] [i_7]) + 2147483647)) << (((arr_15 [i_9]) - 11293524725094491499)))))));
                        arr_30 [i_2] [i_7] [i_2] [i_7] = ((((arr_8 [i_2] [i_7]) - (arr_4 [8]))));
                        var_28 = (((arr_13 [i_2]) == (arr_1 [i_2])));
                    }
                }
            }
        }
        var_29 = 49177;
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_30 = ((49177 % (~255)));
                                var_31 = 16359;
                            }
                        }
                    }
                    var_32 = (((arr_35 [11]) | var_5));
                    arr_43 [i_12] [i_11] [i_10] = (((0 ? 1706689834 : (arr_40 [i_11 - 1] [i_11 - 2] [i_11 + 1] [i_11 - 1]))) / 16830);
                    var_33 = (arr_40 [4] [i_11] [i_12] [i_12]);
                }
            }
        }
        arr_44 [i_10] = (((arr_42 [i_10] [i_10]) >= ((-(arr_35 [i_10])))));
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
    {
        arr_49 [i_15] = max((((~(arr_35 [11])))), ((1 ? (arr_33 [i_15] [i_15]) : (arr_33 [i_15] [i_15]))));
        arr_50 [i_15] = 255;
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
    {

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_34 = (((-6625704562946376146 + 9223372036854775807) >> (49177 - 49134)));
            arr_56 [i_16] [i_17] [9] = ((~(min(((7683187179018950243 << (var_1 - 99))), 139))));
        }
        var_35 = (min(var_35, -6625704562946376145));
        var_36 = 139;

        for (int i_18 = 1; i_18 < 12;i_18 += 1)
        {
            arr_60 [i_18] = (min((88 >> 1), (0 - 6625704562946376145)));
            arr_61 [i_18] = (max((min(((0 ? (arr_53 [i_18 - 1] [i_16]) : 0)), (arr_35 [9]))), ((((-6625704562946376146 % 18446744073709551615) == 2914865505)))));
        }
    }
    #pragma endscop
}
