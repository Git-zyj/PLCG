/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (((arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 1]) ? (((((var_6 ? (arr_0 [i_0 + 1] [i_1]) : (arr_1 [i_0])))))) : (1 / 15006750773603453570)));
                    var_21 += var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 1]) ^ (arr_2 [i_0 + 1] [i_0 - 1]))) < -31)))));
                                var_23 = (((((~(17924138145850206832 < 13090317858835840748)))) < (((arr_9 [i_4] [i_3] [15] [i_1] [i_0]) ? (min(var_1, (arr_1 [i_0]))) : (((-3437836601267025955 ? var_2 : 511)))))));
                                var_24 &= (((((var_12 == (((1 * (arr_4 [i_4]))))))) << (-1 == var_0)));
                                var_25 = (!(arr_8 [i_4] [i_3] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_14 [i_5] = var_13;
        var_26 = (9223372036854775807 / 1);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_27 = var_1;
                    arr_19 [i_5] [i_6] [i_6] = (arr_8 [i_5] [i_6] [i_6]);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_29 [i_10] [i_10] [i_10] [i_8] = ((((((arr_27 [i_10] [i_9 + 1] [i_8] [i_9]) + 4294967276)) + (((min((arr_26 [i_10] [i_10] [i_10]), 122)))))) / ((((!(!1))))));
                    var_28 = (min(var_28, (arr_21 [i_8])));
                }
            }
        }
        var_29 = ((-((var_17 % (max((arr_22 [i_8] [i_8]), (arr_27 [i_8] [i_8] [i_8] [i_8])))))));
        var_30 = 1;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_31 = ((var_11 ? (((((arr_33 [i_8]) ? (arr_25 [i_8] [i_8] [19]) : (arr_28 [i_8] [i_12] [i_11] [i_11]))) * (((!(arr_27 [i_11] [12] [i_12] [i_11])))))) : var_6));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_32 = (((~1) + ((~((1 / (arr_37 [i_8] [i_8] [i_12] [i_12] [i_14])))))));
                                var_33 *= (((((((((arr_27 [i_13] [i_12] [i_13] [i_14 - 1]) << (var_9 - 3403)))) ? 865921678528403651 : ((((arr_39 [i_8] [i_11] [i_12] [i_8]) * (arr_34 [i_14] [i_11] [i_11] [i_14] [i_14] [19]))))))) % ((~(min((arr_40 [i_8] [13] [1] [i_13]), (arr_26 [4] [i_13] [i_13])))))));
                                arr_41 [i_13] [i_13] [i_13] [i_11] [i_13] = 4294967282;
                                var_34 ^= ((!(((var_15 ? ((((arr_32 [i_14 + 1] [i_13] [i_11] [i_8]) ? var_17 : -8523073773708073029))) : ((~(arr_21 [7]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_35 = (max(var_35, 134));
                                var_36 = (arr_38 [i_15]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
