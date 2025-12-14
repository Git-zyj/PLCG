/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 += (max(((+(((arr_6 [11]) ? 13721 : var_14)))), var_5));
                    var_20 |= ((-(arr_2 [i_2] [i_1])));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        var_21 = (min(var_21, (((((((((arr_6 [i_1]) + 9223372036854775807)) << (((arr_8 [i_1] [i_1] [i_1] [i_0]) - 217))))) ? (arr_1 [i_2]) : (arr_4 [i_3] [i_2] [i_1] [i_0]))))));
                        arr_9 [i_3] [i_2] [i_0] [i_0] = 2147483647;
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_4] [i_4] = (max((arr_0 [i_2 + 3]), ((2147483647 / (-2147483647 - 1)))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((!(((-(-32749 || var_10))))));
                        var_22 = (arr_10 [i_0] [i_1] [i_2 - 1] [i_4 + 1]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_23 = var_15;
                        arr_18 [i_1] [i_5] [i_5] = (((-13722 ? (arr_8 [i_0] [i_2 + 1] [i_0] [i_0]) : (arr_12 [3] [i_2 + 1] [i_0]))));
                        var_24 -= (((((-(arr_6 [i_0])))) ? (((((arr_6 [i_5]) + 9223372036854775807)) << (var_0 - 18097))) : (((((max((arr_0 [i_5]), (arr_5 [i_0] [i_1] [i_5])))) ? (arr_0 [i_1]) : (127 % var_14))))));
                    }
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6 + 1] [i_6] = ((~((((arr_3 [i_6 + 1]) < (arr_3 [i_6]))))));
        var_25 &= arr_20 [i_6];
        arr_23 [4] [4] |= (max((!13721), (-9223372036854775807 - 1)));
        arr_24 [i_6] = arr_6 [0];
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_26 = (((arr_26 [i_7]) ? (arr_26 [i_7]) : -26604));
        var_27 = (min(var_27, 2147483642));
        var_28 = (((((-(arr_21 [i_7])))) ? 6 : 43418));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_34 [i_7] = (arr_29 [i_9] [i_9 + 1]);

                        for (int i_11 = 3; i_11 < 19;i_11 += 1)
                        {
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7] = ((((arr_5 [i_7] [5] [10]) ? var_2 : -124)));
                            var_29 = ((-13722 * (arr_20 [i_7 + 1])));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_30 -= arr_39 [i_12];
                            arr_42 [i_7] [i_8] [i_7] [7] = (((arr_10 [i_7] [i_7 - 1] [i_9 - 2] [i_10]) / (arr_10 [i_7 + 1] [i_8] [i_9 - 1] [i_10])));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_31 &= ((13702 ? (arr_39 [i_7 - 1]) : (arr_7 [i_7 + 1] [i_7] [i_7] [i_7 - 1])));
                            arr_46 [i_7] [i_8] [i_7] [i_10] [i_8] [i_9] = (((arr_4 [23] [i_9 - 2] [23] [23]) / (-9223372036854775807 - 1)));
                            arr_47 [i_7] [i_8] [i_8] [i_7] [i_9] [i_10] [i_7] = arr_5 [i_7] [i_8] [i_13];
                            arr_48 [i_7] [i_10] [i_10] [i_9] [i_8] [i_8] [i_7] = -34;
                            var_32 = ((!(arr_20 [13])));
                        }
                        var_33 -= (arr_41 [i_10] [i_7]);
                    }
                    var_34 = (((arr_2 [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7 - 1] [i_9]) : (arr_2 [i_7 - 1] [i_7 - 1])));
                    var_35 = (arr_2 [i_7 + 1] [i_9 + 1]);
                    var_36 = (max(var_36, (((!(arr_26 [18]))))));

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_52 [i_7] [i_7] [18] [i_14] [i_14] = (((arr_16 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7]) * (arr_16 [i_7] [i_7] [i_7] [i_7 + 1] [i_7])));

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_37 += var_8;
                            arr_55 [i_7] [i_8] [i_9] [i_14] [i_7] = (arr_19 [i_7 + 1] [i_9]);
                        }
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            arr_59 [i_7] [i_7] = (((arr_3 [i_14]) + (((arr_56 [2] [i_8] [2] [i_14] [i_16 - 1] [i_9 - 2]) ? var_9 : (arr_38 [i_7])))));
                            var_38 |= ((-(arr_44 [i_7 + 1])));
                        }
                        var_39 += (((arr_27 [i_9 - 2] [i_7 + 1]) ? (arr_58 [i_7 - 1] [i_9 + 1] [i_14] [i_14] [14]) : (arr_27 [i_9 + 1] [i_7 + 1])));
                        var_40 = (max(var_40, (arr_10 [i_7] [0] [i_8] [i_14])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
