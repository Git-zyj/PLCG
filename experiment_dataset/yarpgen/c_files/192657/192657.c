/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_20 = ((!((((arr_2 [i_0] [i_0]) ? -var_13 : ((min((arr_1 [i_0] [i_0]), 0))))))));
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? var_13 : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((((!(!28337))) || (arr_0 [i_1] [i_1])));
                    var_22 = var_17;
                }
            }
        }
        arr_8 [i_0] = 31137;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((((min(28337, ((var_11 ? (arr_9 [i_3] [i_3]) : (arr_1 [i_3] [i_3]))))) + 2147483647)) >> ((((((!(arr_2 [i_3] [i_3]))) ? (((arr_2 [i_3] [i_3]) | -28337)) : ((var_18 ? -28337 : var_17)))) + 28338)))))));
        var_24 = (((max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))) ? ((var_18 ? (arr_0 [i_3] [i_3]) : 0)) : (((!(arr_0 [21] [i_3])))));
        arr_11 [i_3] = ((((28337 | (arr_4 [i_3] [i_3] [i_3])))) ? ((min(32767, var_16))) : ((-((min(var_18, (arr_6 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_18 [i_5] [23] [i_3] = ((1 ? ((-(arr_10 [i_4]))) : (((((arr_13 [i_5]) + 2147483647)) >> (28337 - 28335)))));
                    var_25 = (min(var_25, (min(((31137 ^ ((min(28337, (arr_7 [i_5] [i_4] [i_4])))))), (arr_10 [i_4])))));
                    var_26 = var_7;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_27 = ((~-31138) ? var_16 : ((var_3 / (arr_13 [i_6]))));
        arr_21 [i_6] = (!(arr_17 [i_6] [i_6] [i_6]));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_28 = (((min(-var_12, (min((arr_0 [3] [i_7]), (arr_12 [i_7]))))) / (-526777353 / 31137)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_28 [i_7] [i_7] [i_9] [i_9] = ((1 && ((((((arr_25 [i_7] [i_8] [i_9]) | var_6)) % (((arr_23 [i_8]) ? 31137 : -997732786)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_35 [i_7] = (((((arr_16 [i_10 + 1]) >> (arr_27 [i_10 + 2] [i_7]))) >= (((!(~32767))))));
                                var_29 = (min(var_29, (((((arr_15 [i_7] [i_8] [i_9] [i_10]) ? -var_13 : (-28338 > 0)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_36 [i_7] = var_0;
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                arr_41 [14] = 14;
                var_30 = var_10;
                arr_42 [i_13] = (max((arr_39 [i_12] [i_12] [i_13]), (((!(arr_15 [i_12] [6] [i_13] [i_12]))))));
                arr_43 [i_13] [i_13] [i_12] = (((((arr_17 [i_12] [i_12] [i_13]) / (arr_17 [i_12] [i_12] [i_13]))) + 28336));
                arr_44 [16] [i_13] [i_13] = ((var_2 && ((min(((min(0, (arr_37 [i_13])))), (((arr_5 [i_13]) ? 13435 : var_8)))))));
            }
        }
    }
    var_31 = ((max(((-28338 ? var_1 : var_10)), (var_15 & 28919))));
    var_32 = var_6;
    #pragma endscop
}
