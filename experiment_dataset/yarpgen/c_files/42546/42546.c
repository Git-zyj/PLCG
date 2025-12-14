/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (!var_9);
                        var_17 = ((!(arr_6 [i_2 - 1])));
                        var_18 -= (arr_2 [i_3 + 2]);
                    }
                }
            }
        }
        var_19 = (arr_1 [i_0] [i_0]);
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_20 = (min(var_20, 23));
            var_21 = 4415;
            var_22 = var_8;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_23 = (max((min((var_8 / var_8), var_4)), (arr_12 [i_6] [i_4])));
            var_24 ^= (max((((arr_3 [i_6]) ? (arr_3 [i_6]) : (arr_3 [i_4]))), ((-(arr_3 [i_6])))));
        }

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_23 [i_7] [i_7] [i_7] = (((((arr_19 [i_4]) ? (4294967284 ^ var_13) : (arr_17 [13] [i_7]))) << (((var_13 & 19062) ? var_4 : (arr_17 [7] [i_4])))));
            var_25 = (((max(10972888530771553823, (arr_19 [i_4])))) ? (arr_0 [i_4] [i_4]) : ((min(var_3, (arr_2 [i_7])))));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_26 *= (arr_11 [3]);
            var_27 = (~14007);
        }
        arr_28 [i_4] = -76;
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_39 [i_9] [1] [i_10] [i_12] [i_10] = (arr_30 [i_9] [5]);
                        var_28 = (((min((min(var_13, var_7)), ((max(var_5, var_15))))) | (((~(((arr_4 [i_9]) ? (arr_17 [11] [i_12]) : (arr_24 [i_11] [3] [12]))))))));
                        arr_40 [i_9] [11] [i_9] [i_12] [i_12] [i_12] = (+((((var_3 * 131) && (arr_5 [i_9])))));
                        var_29 = ((((((arr_12 [i_10] [i_12]) - var_5))) ? (min(var_8, 4294967291)) : (((2735942363 >> (3603049888 - 3603049866))))));

                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_30 = (arr_9 [i_9] [9] [i_11] [i_12] [i_13] [1]);
                            var_31 = (min(var_31, (((2735942386 ? 163 : 1559024885)))));
                            arr_43 [i_13] [i_12] [i_12] [8] [i_12] [i_9] = (max(var_9, (arr_41 [i_9] [i_10] [i_10] [i_12] [i_13])));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_32 -= (min((arr_12 [i_10] [i_14]), (arr_38 [i_9] [i_9] [i_11] [8] [2] [i_9])));
                            arr_46 [i_10] [i_10] [13] [i_12] = ((var_15 ? (arr_20 [i_9] [i_9] [9]) : (arr_44 [i_9] [i_10] [i_11] [i_12] [i_12] [i_12] [i_12])));
                            arr_47 [i_9] [i_12] [i_11] [i_12] = var_2;
                            var_33 = ((-((-(arr_36 [i_12] [i_10] [i_14] [i_12])))));
                            var_34 = (min(var_9, var_1));
                        }
                        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_12] [i_12] [i_12] [i_9] [i_9] = ((((((!((min((arr_18 [i_9] [4] [11]), 5949305533053753442))))))) * 1559024934));
                            var_35 = (min((min(2936437900658650753, (arr_30 [i_9] [i_9]))), ((((2 | 1) | ((max(-18921, (arr_0 [i_12] [i_9])))))))));
                            var_36 &= var_7;
                        }
                    }
                    arr_51 [i_9] [i_9] [i_11] = (arr_25 [i_10]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_60 [i_16] [0] [i_18] [i_18] = (!var_3);
                        var_37 |= (((min(8388607, 1559024928)) << (((arr_30 [i_9] [i_17]) ? (((((arr_25 [0]) || (arr_8 [i_18] [i_9] [i_16]))))) : 1559024904))));
                        var_38 -= ((min(var_0, (~var_4))) / (min(var_3, ((2945 ? (arr_45 [i_18] [i_18] [i_9] [i_9] [i_9] [i_9]) : (arr_11 [7]))))));
                        var_39 = ((1 << ((((min(var_2, (min(var_10, var_11))))) - 21035))));
                    }
                }
            }
        }
        arr_61 [i_9] [9] = ((!(((-(arr_29 [i_9]))))));
        arr_62 [i_9] = (((((((min((arr_6 [i_9]), var_15))) < ((0 ? -8848269830433848228 : 2735942386))))) / ((~(!var_14)))));
    }
    #pragma endscop
}
