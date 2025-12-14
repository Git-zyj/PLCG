/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((19 - var_0) * 65535)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_2] [i_3] = (~((248 ? var_6 : -1372699065)));
                        arr_15 [i_0] [i_1] [i_1] = var_7;
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = ((-(~var_11)));
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (arr_12 [i_4 - 2] [1] [i_4] [0] [i_4] [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 = (min(var_15, ((max(var_2, (arr_8 [10] [10] [10] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_16 = max(((((arr_6 [i_5] [i_8]) ? (max((arr_3 [i_4] [i_6] [i_7]), 1372699073)) : var_12))), (((arr_11 [i_6 + 1] [i_5] [i_6] [i_6 + 1] [i_4 - 1]) ? (arr_11 [i_6 - 1] [i_5] [i_7 + 1] [i_6] [i_4 - 4]) : (arr_11 [i_6 + 2] [i_5 + 2] [i_6] [i_8] [i_4 - 4]))));
                                var_17 = (((arr_8 [i_5] [6] [i_7] [i_5]) & 268995311));
                                var_18 = (((((((arr_27 [i_4] [i_4] [i_4] [i_4] [i_4]) ? -81 : (arr_26 [i_8] [i_7] [i_6] [i_4]))) == 0)) && (arr_28 [i_8] [i_7] [i_6] [i_6] [i_5] [i_4 - 1])));
                                arr_30 [i_8] [i_7] [i_5] [i_5] [i_5] [i_4] = ((((arr_5 [i_6 - 1] [i_6 - 1]) ? ((var_3 ? (arr_23 [i_4] [i_4] [i_6] [i_6]) : (arr_18 [i_8]))) : (arr_18 [i_8]))) - (arr_25 [i_4] [i_5 + 1] [i_7 - 3]));
                                arr_31 [i_4 - 1] [i_5 + 2] [3] [i_7] [i_8] = (max((1372699066 == -4294967278), (arr_26 [i_4 - 3] [i_6] [i_7] [i_8])));
                            }
                        }
                    }
                    var_19 = 112;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_20 = (min((((((var_7 ? 1622726349 : 1372699064))) ? var_8 : ((268995311 << (((-268995312 + 268995325) - 12)))))), (((arr_6 [i_10] [i_11]) ? (min(-1628708916, (arr_19 [i_9] [i_9]))) : var_6))));
                        var_21 = (min(var_21, ((((arr_36 [i_10] [i_10]) ? (min(((var_10 ? var_6 : var_0)), ((-(arr_5 [i_9] [i_10]))))) : ((268995331 >> (((arr_22 [i_12] [i_9] [i_10] [i_9]) + 29)))))))));
                        arr_46 [i_9] [i_10] [i_11] [i_12] [i_9] = (arr_38 [i_10] [i_10]);
                    }
                }
            }
        }
        var_22 = (max(-98, (((min((arr_17 [i_9]), (arr_19 [i_9] [i_9]))) & (-10218 / var_7)))));
    }
    var_23 = (max(var_23, (((((min(var_11, 1184876961))) & ((((var_7 + 2147483647) >> (-var_5 - 1968058752)))))))));
    #pragma endscop
}
