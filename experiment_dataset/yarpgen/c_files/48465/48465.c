/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1 + 1] = ((((min((arr_0 [i_1 + 1] [i_1 - 1]), (((arr_0 [i_0 + 2] [i_0]) ? var_1 : var_3))))) || ((((arr_4 [i_1] [i_2 + 1] [i_2 + 1]) ? (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_4 [i_1] [i_1] [i_2]))) : (arr_0 [i_0 - 2] [i_0 + 2]))))));
                    var_18 += (arr_3 [i_0] [i_1]);
                }
            }
        }
        var_19 = (((max((arr_2 [2]), ((-(arr_0 [i_0] [i_0]))))) / (~-var_4)));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_3 + 4] [i_4] [i_5] [i_6] = (((((arr_15 [i_6 - 1] [i_6 - 2]) != (arr_15 [i_6 - 2] [i_6 + 1]))) ? (arr_12 [i_3 - 3] [i_4 + 1] [i_5] [i_6 + 2]) : (max((arr_15 [i_4] [i_6 - 1]), var_9))));
                                var_20 = ((var_11 > (((!(arr_9 [i_6 + 1] [i_0 - 3] [i_3 + 4]))))));
                            }
                        }
                    }
                    var_21 = var_3;
                    arr_19 [i_0] [i_0] [i_4] = (min(((~(max((arr_12 [i_0 - 3] [i_3 + 4] [i_4] [i_4]), (arr_16 [i_4] [i_4 - 1] [i_3] [i_3] [i_4 + 1]))))), ((-(var_11 > var_12)))));
                    arr_20 [i_0] [i_0] [i_0] [i_0 + 1] = ((((max(var_16, (arr_10 [i_0] [i_0]))) ? (((arr_5 [i_4] [i_3 + 2]) * 134209536)) : ((((arr_7 [i_0] [i_0 + 2] [i_0]) / (arr_12 [i_3] [i_4 - 2] [i_3] [i_0])))))));
                    arr_21 [i_0] [i_0] [10] = -5166208001560253419;
                }
            }
        }
        arr_22 [i_0] = (((arr_9 [i_0 + 2] [i_0] [i_0 + 2]) ? 2080374784 : (~-32748)));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_26 [i_7] = var_4;
        arr_27 [i_7] [i_7] = (max(((var_5 ? (arr_1 [i_7]) : (arr_1 [i_7]))), (-32732 == var_6)));
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_22 = (min(var_22, var_0));
                            arr_39 [i_8] = (((arr_0 [i_7] [i_8 - 3]) ? var_4 : (arr_0 [i_7] [i_8 + 1])));
                        }

                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            var_23 = (min(var_23, ((((max((arr_5 [i_7] [i_7]), var_17)) - (((-((-(arr_4 [i_12] [i_8] [i_8])))))))))));
                            var_24 = (max(var_24, ((((((arr_38 [i_7] [i_8 - 1] [i_8 + 2] [i_10] [i_12 + 1]) || (arr_38 [i_7] [i_8 + 1] [i_9] [i_10] [i_12]))) ? (15300162247950310520 & 3146581825759241119) : (((((arr_38 [i_7] [i_8 + 1] [i_9 - 2] [i_10] [i_12 - 2]) < 0)))))))));
                            var_25 = ((((((arr_41 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8] [i_8]) ? (arr_25 [i_7]) : -56))) < (!var_13)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_53 [i_13] [i_13] [i_16] [7] = ((var_17 ? (var_9 != var_10) : var_15));
                                var_26 = (((arr_47 [i_13 + 1] [19] [i_17] [i_16]) ? (arr_47 [i_13 + 1] [i_14] [i_15 - 2] [i_16]) : (arr_47 [i_15] [i_15] [i_15] [i_15 - 2])));
                                var_27 *= (((arr_47 [i_15] [i_15] [i_15] [i_15 - 2]) >> (((arr_44 [i_13 + 1]) - 15355514569593864467))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((((arr_51 [i_19] [20] [i_19 + 1] [i_19 - 1] [i_19]) ? var_1 : (arr_51 [i_19] [i_19] [i_19 + 1] [i_19] [i_19 + 1]))))));
                                var_29 -= 2017906814880999599;
                                var_30 = (min(var_30, ((((arr_58 [i_19] [i_15] [i_19] [i_19 - 1] [i_15] [i_14]) ? (arr_44 [i_13 + 1]) : (arr_58 [i_19 + 1] [i_15] [i_19] [i_19 + 1] [i_15] [i_14]))))));
                                var_31 = ((~((~(arr_52 [i_13] [i_13] [i_13] [i_13 - 1] [i_13] [i_13])))));
                            }
                        }
                    }
                }
            }
        }
        var_32 = var_12;
        var_33 = (min(var_33, 0));
        arr_60 [i_13] = (var_15 != var_4);
    }
    var_34 = var_16;
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            {
                var_35 ^= ((((((arr_43 [i_20]) | (arr_42 [i_20] [i_21])))) ? (((((arr_43 [i_20]) <= (arr_42 [i_20] [i_21]))))) : (((var_13 + 9223372036854775807) << (var_16 - 583557759)))));
                arr_67 [i_21] = (((arr_42 [i_21] [i_20]) ? var_4 : var_9));
            }
        }
    }
    #pragma endscop
}
