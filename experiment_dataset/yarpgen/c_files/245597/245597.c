/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_10 = var_3;
                        var_11 = ((-8388604 & ((var_0 ? var_2 : (arr_2 [i_0])))));
                        var_12 = ((!(!52379)));
                    }
                    var_13 = (~5468115173695071421);
                    arr_9 [i_2] [i_2] [i_2] = 5068;
                }
            }
        }
    }
    var_14 = ((~((((min(var_4, -5468115173695071421))) ? ((var_8 ? var_4 : var_7)) : (!var_1)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_15 = (~5468115173695071418);
                        arr_18 [i_7] [i_6] [i_6] [i_6] [i_4] = ((arr_8 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]) ? var_2 : (arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]));
                        arr_19 [i_4] [i_6] [i_6] = 10;

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_23 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] [i_6] = (((arr_13 [i_6 + 2] [i_6 + 1]) - (((arr_7 [i_4] [i_5] [i_7] [i_8]) ? var_5 : (arr_15 [i_6])))));
                            var_16 |= ((~((-(arr_14 [i_4] [i_4] [i_4])))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_6] [i_9] = -5468115173695071418;
                            var_17 = ((-(arr_14 [i_4] [i_5] [i_7 + 2])));
                        }
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_18 = var_4;
                        arr_32 [i_4] [i_5] [i_6] [i_6] = (!var_3);
                    }
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        arr_37 [i_4] [i_4] [i_6] [i_6] [i_11] = (~5468115173695071421);
                        var_19 = ((((max((arr_21 [i_11] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_5]), (min(var_5, 5468115173695071420))))) ? (((5468115173695071418 ^ (arr_33 [i_4] [i_5] [i_6 + 2] [i_6] [i_11])))) : (((min(84, (!-28149)))))));
                    }
                    var_20 ^= (max(-30422, var_8));
                    arr_38 [i_6] [i_5] [i_6] = (!253);
                    var_21 = -17732;
                    arr_39 [i_6] [i_6] [i_6] = ((-(((arr_7 [i_6] [i_6] [i_6 + 1] [i_6 - 1]) ? (arr_21 [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 + 2]) : (arr_7 [i_6] [i_6] [i_6 + 2] [i_6])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                var_22 -= (max((arr_7 [i_12] [i_13] [i_12] [i_13]), ((max((84 & var_2), ((~(arr_40 [i_12]))))))));

                for (int i_14 = 3; i_14 < 16;i_14 += 1)
                {
                    var_23 = ((~(arr_0 [i_12])));
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 14;i_16 += 1)
                        {
                            {
                                var_24 &= (arr_5 [i_16] [i_16 + 2] [i_15 + 1] [i_16 + 2]);
                                var_25 -= var_7;
                            }
                        }
                    }
                    arr_53 [i_12] [i_13] [i_12] |= max((((arr_42 [i_14 - 2]) / -30422)), (!var_2));
                    var_26 = ((-562449971 == (~5468115173695071405)));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    arr_57 [i_12] [i_12] [i_17] [i_17] = ((!(arr_54 [i_12] [i_12] [i_17])));
                    arr_58 [i_12] [i_17] [i_17] [i_17] = (var_3 * 565610022);
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_27 |= (arr_41 [i_12] [i_19]);
                                var_28 -= (((arr_42 [i_18 + 3]) == (arr_59 [i_18] [i_18] [i_13] [i_13])));
                                arr_65 [i_12] [i_13] [i_17] [i_18 + 1] [i_13] = (~16777216);
                            }
                        }
                    }
                    var_29 += (((arr_49 [i_12] [i_13] [i_12]) ? (arr_49 [i_12] [i_13] [i_12]) : (var_5 | -5468115173695071421)));
                }
            }
        }
    }
    #pragma endscop
}
