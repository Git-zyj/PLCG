/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((-17404 - 17394), -76))) | -var_2));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 + 1] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = 252;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_0 + 1] [i_1] [i_2 - 2] [i_3 + 1] [i_2] [i_4] [i_4] = ((((var_0 ? (arr_0 [i_0]) : (arr_5 [9] [i_4]))) << (((var_0 || (arr_5 [i_2] [i_2]))))));
                            var_13 = (max(var_13, (((0 + (var_3 & var_1))))));
                            var_14 = (arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_4]);
                            var_15 = 151;
                        }
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] = ((4294967287 ? 100 : -17404));
                            var_16 ^= ((var_2 ? (arr_5 [i_3] [11]) : (61 < var_11)));
                            var_17 = (min(var_17, ((((arr_15 [i_5 + 1] [i_1] [i_2] [0] [i_3 + 2] [i_1] [i_0]) / var_4)))));
                            var_18 = ((var_9 ? (arr_12 [i_5] [4] [1] [i_1] [i_0 - 2] [i_0]) : var_3));
                            var_19 = ((((-5765 ? (arr_7 [3] [i_2]) : 2179346088)) >> (var_6 - 1573995187)));
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_20 [i_0] = -32761;
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_6] = (var_11 & 254);
                        }
                        var_20 = var_9;
                        arr_22 [i_3 + 1] [i_1] [i_2 - 1] [i_3] [i_3] = ((+((((arr_4 [13] [i_1] [i_2]) < (arr_6 [i_0] [i_1] [i_2]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_28 [i_7] [i_7 + 2] [i_7] = (146 + 109);
            var_21 = (((arr_23 [i_7 + 1] [i_8]) ? var_5 : var_1));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_9] = (arr_31 [i_7 - 1] [4]);
            var_22 = var_6;
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_23 = -20;
            var_24 -= ((+((((arr_31 [2] [i_10]) == var_5)))));
        }

        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_43 [i_7 + 2] [i_11] [i_11] [2] [i_12] [i_13] = (((arr_29 [i_7 - 1] [i_12 - 2]) ? (((var_1 ? (arr_41 [i_13] [i_11] [i_12] [12] [i_11]) : var_8))) : var_0));
                        var_25 = (max(var_25, (arr_25 [i_7] [11])));
                    }
                }
            }
            var_26 -= var_7;
            var_27 = (((arr_30 [i_7 + 1]) << (var_2 - 1104446444)));
            var_28 = (((((~(arr_34 [i_7])))) ? (arr_42 [i_7 + 1] [i_7 + 1] [i_7] [12] [i_11]) : (((arr_31 [i_7] [i_11]) ? (arr_37 [i_11] [i_11] [i_7]) : var_1))));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
        {
            var_29 -= ((-(((arr_39 [i_14] [i_14] [i_7 - 1] [i_7]) + var_4))));
            arr_46 [i_7] [i_7 + 2] [i_7] = ((65535 ? -17395 : var_9));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((var_7 ? ((36028797018963967 ? var_7 : var_9)) : (((4294967293 ? 51 : -83))))))));
                            var_31 = ((!(arr_30 [i_7 - 1])));
                            var_32 = (max(var_32, 4294967271));
                        }
                    }
                }
            }
        }
        var_33 = 4906;
        arr_54 [i_7] = arr_51 [i_7 + 2];
    }
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 17;i_18 += 1)
    {
        for (int i_19 = 4; i_19 < 16;i_19 += 1)
        {
            {
                var_34 = (max(((((max(var_3, 0))) + var_6)), ((((((arr_57 [i_18] [i_19 + 1]) / var_3))) ? (arr_57 [i_18 + 1] [14]) : ((min((arr_58 [i_19] [i_18] [i_18 - 1]), var_10)))))));
                var_35 ^= 57;
            }
        }
    }
    #pragma endscop
}
