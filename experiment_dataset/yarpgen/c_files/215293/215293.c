/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~8447);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((var_5 ? (arr_7 [i_4] [i_4]) : var_5))))));
                                var_17 -= (((arr_3 [i_1]) <= var_13));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((var_10 ? (arr_6 [22]) : (arr_3 [i_0])))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_11 [i_1] [i_5] [i_5])));
                                var_20 = (arr_14 [i_0] [i_0] [i_5] [i_6]);
                                var_21 = (((arr_18 [i_1] [i_1] [i_1] [i_6]) ? (((!1) ? (arr_16 [i_0] [i_1] [21] [i_6] [17]) : (min(var_13, (arr_10 [8]))))) : (max(var_13, 56076))));
                                arr_21 [i_0] [2] [i_1] [i_0] [20] = ((((var_9 + (max((arr_15 [i_5] [i_7]), (arr_5 [i_0] [i_6] [17]))))) << (16306 - 16306)));
                            }
                        }
                    }
                    var_22 |= (max((~-3694073843797738754), (((var_9 <= (arr_11 [18] [i_1] [i_5]))))));
                    var_23 ^= ((~(((!(-3694073843797738765 / 6064))))));
                }
                var_24 = (max(var_7, (((!(var_4 - 74))))));
                var_25 = (max(var_25, var_6));
            }
        }
    }
    var_26 = 66584576;

    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_27 &= (((arr_3 [i_8]) ? (arr_11 [i_8 + 2] [i_8] [8]) : (4294967293 / var_4)));
        var_28 ^= (((arr_9 [i_8 + 1] [i_8] [i_8] [15]) ? 215 : (((arr_9 [i_8 + 1] [i_8] [i_8] [i_8]) ? (arr_9 [i_8 + 1] [i_8] [i_8] [i_8]) : var_9))));
        var_29 = ((-(var_14 == var_7)));
        var_30 ^= ((((((min((arr_22 [2]), var_14))) ? (arr_18 [i_8] [i_8] [i_8 + 1] [i_8 - 1]) : (arr_1 [16]))) + ((((((((arr_20 [i_8] [i_8 + 1] [i_8] [21] [i_8]) == 68))) <= var_13))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                {
                    var_31 |= (arr_27 [i_8 + 1] [12] [i_8]);
                    var_32 = (min(((13457 ? ((var_10 ? (arr_10 [i_8]) : 28)) : (~-21619))), 124));
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1)
    {
        var_33 |= (min((min((~var_0), (arr_6 [2]))), (((!((max(30529, (arr_8 [12] [18] [i_11 + 2] [i_11])))))))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                {
                    var_34 = var_6;
                    var_35 = ((var_2 ? (((arr_18 [i_11] [i_13 + 1] [i_13 - 1] [i_12 + 1]) ? (((13437 ? -3694073843797738755 : (arr_8 [8] [i_12] [i_12] [i_13 + 2])))) : (((arr_16 [i_11 + 2] [i_11] [19] [i_11] [i_13]) ? var_12 : var_11)))) : ((((((-(arr_34 [i_11 - 2]))) >= (arr_7 [i_12] [i_12 - 3])))))));
                    var_36 = 33865;
                    var_37 -= (((26525 + var_10) ? ((((((arr_3 [i_12]) ? (arr_10 [i_11 + 2]) : 1482430114))) ? (~-1170582369) : -1420159455)) : ((28465 ? 31501 : -26))));
                }
            }
        }
        var_38 = ((-(((!(arr_9 [i_11] [i_11] [i_11] [i_11 - 2]))))));
    }
    #pragma endscop
}
