/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 == ((-var_7 ? var_8 : var_17))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((((!(((var_17 ? var_10 : var_12)))))) != ((((arr_0 [i_0] [i_0]) != (arr_0 [7] [i_0]))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_20 = (((((min(var_12, (arr_4 [i_3 - 4])))) ? (((233 ? 16217 : -16217))) : (max(var_11, (arr_11 [i_3] [6] [i_0] [i_3]))))));
                            arr_16 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_4] = max((max((max(var_15, (arr_1 [11]))), var_12)), ((((arr_15 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_2]) / var_1))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = var_6;
                        }
                    }
                }
            }
            arr_18 [i_1] [i_1] = ((((max(60412, 5110)))));
            arr_19 [i_1] [i_0] = ((((((arr_3 [i_0]) >> (var_1 - 275281584)))) >= ((var_17 ? -var_15 : (!var_4)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [i_0] = (((((var_10 ? var_9 : (arr_12 [i_0] [i_5] [i_0] [i_0] [i_0])))) ? ((max((arr_12 [18] [i_0] [18] [i_5] [i_0]), (arr_12 [i_0] [i_5] [i_0] [i_5] [i_5])))) : (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_12 [i_5] [i_5] [i_0] [i_0] [i_0]) + 2102))))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_21 = 5801737351022629913;
                        arr_28 [i_7] [i_5] [i_7] [9] = (((min((max((arr_20 [14] [14]), (arr_10 [i_5] [i_5] [i_7] [i_7]))), var_4)) | ((((var_7 <= var_9) * (~var_9))))));
                        var_22 = ((((((16204 ? 990983910694603707 : 251)))) ? (((-(arr_27 [i_0] [i_0] [10] [i_0])))) : (((((var_2 ? (arr_23 [i_7] [i_7]) : var_6))) ? ((((arr_26 [i_7]) << (((arr_10 [i_7] [i_7] [i_7] [i_0]) + 6760421282876625691))))) : ((var_12 | (arr_2 [i_7])))))));
                        arr_29 [i_7] [i_7] [i_7] [i_0] = 14065424854512780923;
                    }
                }
            }
        }
        arr_30 [i_0] = ((((((!(((var_17 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0])))))))) | ((max(var_2, var_7)))));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_23 = ((((((~var_5) * var_0))) ? (arr_26 [i_8]) : (((var_13 ? (arr_31 [i_0]) : var_15)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_24 &= (((((60390 || 5123) && ((((arr_31 [i_0]) ? var_2 : var_3)))))) < -var_4);
                        var_25 = ((((((arr_26 [i_8]) << (var_8 - 25928)))) / ((((max(var_13, (arr_6 [i_8] [i_8] [i_10])))) ? (max(var_13, (arr_39 [i_8]))) : ((var_11 >> (var_15 - 966344485707031761)))))));
                        arr_41 [i_10] [i_8] [i_8] [i_0] = ((((arr_2 [i_0]) && (!var_9))));
                        arr_42 [i_10] [i_8] [i_8] [i_0] = ((var_2 ? ((((var_14 ? var_15 : var_0)) & ((((!(arr_38 [i_8] [i_9] [10] [i_8] [i_8] [i_8]))))))) : ((((arr_3 [i_9]) ^ (arr_3 [i_9]))))));
                        arr_43 [i_0] [i_8] [i_9] [i_10] = ((~(~var_17)));
                    }
                }
            }
            var_26 -= (max((((~var_16) <= ((var_17 ? var_9 : var_15)))), ((!(arr_36 [i_0])))));
            var_27 = (((-(arr_39 [i_8]))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    arr_50 [i_0] [i_12] [i_12] [i_12] = ((max((arr_35 [i_0] [i_11] [i_12]), var_14)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_28 -= (!-17430988468573721);
                                var_29 ^= (max((((var_16 ? (var_12 / var_10) : ((max(60412, 69)))))), ((((var_0 ? var_16 : var_4)) * (((arr_26 [i_0]) * var_0))))));
                            }
                        }
                    }
                    var_30 = ((1916813913079657885 ? 1761698649 : (250 ^ 127)));
                }
            }
        }
    }
    #pragma endscop
}
