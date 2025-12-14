/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (((49152 ? 1 : 16384))))) >> (((!(var_10 | 264241152))))));
        var_16 ^= (min((max(-209, var_12)), (((!15178494343237393108) * ((4294967282 ? (arr_0 [4]) : var_5))))));
        var_17 = var_8;
        var_18 = (max(var_18, (((((((!(arr_1 [4]))))) + ((((min((arr_0 [8]), (arr_1 [1])))) ? 3268249730472158507 : ((-264241152 ? 12033545799166287039 : 1)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    var_19 = (((arr_6 [i_1] [i_1]) ^ var_6));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_20 -= (((1 | 1800112399) | (arr_15 [i_1] [i_1] [i_4 + 1])));
                                var_21 = ((arr_13 [i_3] [i_3 - 1] [i_2] [i_2]) ? (arr_16 [i_1] [i_2] [i_3 - 1] [i_4] [i_5] [i_5] [i_1]) : ((var_14 ? var_6 : (arr_11 [i_4] [i_4 + 2] [i_1] [i_4 + 2]))));
                                var_22 *= var_6;
                                var_23 = (!(arr_12 [i_3 + 2] [i_3] [i_3]));
                            }
                        }
                    }
                    arr_18 [i_1] = 2691349775813957022;
                    var_24 |= (((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3]) * (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3])));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] |= ((~((32740 & ((-(arr_11 [i_6] [i_6] [4] [i_6])))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                {
                    var_25 = ((-(-32767 - 1)));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_38 [i_6] [i_6] [i_7] = arr_24 [i_6] [i_7] [i_8];
                                arr_39 [i_8] |= (min(((-(arr_35 [i_9 + 1] [i_9 - 1] [i_9 + 1] [3] [3] [i_9 + 1]))), 16374));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((-(((arr_28 [i_6] [i_7 - 1] [i_8 + 1] [i_11]) ? (arr_28 [i_6] [i_6] [i_8 - 2] [i_11]) : -2691349775813957023)))))));
                                var_27 = (((arr_43 [i_6] [i_6] [i_7] [i_6]) != 255));
                            }
                        }
                    }
                    var_28 = (min(var_28, ((min((((((1 ? (arr_4 [i_6] [i_6]) : 184))) ? var_12 : (min(124, 2124619935816428236)))), -1)))));
                    var_29 = (((arr_40 [i_6] [i_6]) ? (arr_24 [i_7] [i_7] [i_6]) : (arr_46 [i_8 + 1] [i_8])));
                }
            }
        }
        arr_47 [i_6] = (arr_26 [i_6] [i_6]);
        arr_48 [7] |= (((((901225998 ? (arr_23 [i_6] [i_6] [i_6]) : (arr_36 [1] [i_6] [12] [i_6] [i_6] [i_6] [i_6])))) ? var_12 : ((((arr_12 [i_6] [i_6] [i_6]) != ((((arr_15 [i_6] [i_6] [i_6]) ? 0 : var_11))))))));
        var_30 = ((!(~var_1)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        var_31 = ((var_7 ? (arr_8 [i_13]) : var_4));
                        var_32 = (((34 ? 34678 : 8)));
                        arr_57 [i_13] = ((var_1 ? var_4 : var_3));
                        var_33 = 11103415461300997130;
                        arr_58 [i_13] [i_13] = ((!(arr_14 [i_16] [i_15] [i_14] [i_14] [i_13])));
                    }
                }
            }
        }
        var_34 = (((arr_28 [i_13] [i_13] [i_13] [i_13]) ? 0 : (arr_28 [i_13] [i_13] [i_13] [i_13])));
        /* LoopNest 3 */
        for (int i_17 = 2; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 17;i_19 += 1)
                {
                    {

                        for (int i_20 = 1; i_20 < 18;i_20 += 1)
                        {
                            var_35 = ((~((var_6 ? 3268249730472158508 : 0))));
                            var_36 = ((var_3 != (!32111)));
                        }
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            arr_71 [i_13] [i_13] [i_18] [19] [i_13] = ((37703 ? 32754 : -109));
                            var_37 = (((((1 ? var_8 : var_0))) ? (arr_29 [i_13] [i_21]) : (arr_9 [i_13] [i_13] [i_13])));
                        }
                        arr_72 [i_19 + 3] [i_19] [i_13] [i_17 + 2] [i_13] = var_8;
                        var_38 *= 157;
                    }
                }
            }
        }
        var_39 -= (arr_52 [i_13]);
    }
    var_40 = ((15178494343237393095 | (((((var_12 ? var_5 : var_9)) * ((99 ? var_7 : var_2)))))));
    var_41 = 249;
    #pragma endscop
}
