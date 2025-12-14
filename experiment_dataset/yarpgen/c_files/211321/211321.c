/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 1]))) << (((arr_4 [i_1 - 1]) - 2902683202))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = 173;
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = (arr_4 [i_3]);
                                arr_14 [i_0] [i_3] [5] [i_1] [i_0] = var_15;
                                var_19 = (((arr_1 [i_2]) ? var_6 : (((arr_10 [i_1 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4 - 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])))));
                                arr_15 [i_0] = (((arr_11 [i_0] [i_1 - 1]) ? (((var_12 ? (var_16 <= var_13) : (arr_3 [i_0])))) : ((~(((arr_4 [i_1 + 1]) | var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = (arr_17 [i_5]);
        var_20 = (((arr_17 [13]) ? (((((arr_17 [i_5]) < (min((arr_17 [i_5 - 1]), (arr_16 [i_5]))))))) : ((((min(var_17, (arr_16 [0])))) ? (arr_17 [i_5 + 1]) : (arr_16 [i_5 + 1])))));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_21 = (arr_16 [5]);
        arr_22 [i_6] = (arr_19 [i_6 - 1]);
        var_22 = ((~(((arr_16 [i_6]) ? (arr_19 [i_6 + 2]) : (arr_21 [i_6] [i_6 - 1])))));
        var_23 = (arr_21 [i_6] [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (arr_24 [i_7 + 1]);
        arr_26 [i_7] = (((arr_16 [i_7 - 1]) || var_6));
        arr_27 [i_7] = (!var_16);
        var_24 -= (arr_20 [i_7]);
        var_25 *= (arr_24 [i_7]);
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] [i_8] = (min(((((((arr_16 [i_8]) ? var_11 : var_4))) | (max(var_16, var_0)))), (((arr_20 [i_8]) ? (arr_28 [i_8] [12]) : (arr_19 [i_8 + 1])))));
        var_26 = (min(var_26, ((((((arr_19 [i_8 + 2]) ? (-24936 > var_7) : (max((arr_23 [0]), (arr_19 [i_8])))))) ? (max((arr_21 [i_8 + 1] [i_8 + 1]), (arr_28 [i_8] [i_8 + 2]))) : 24936))));
        var_27 = (max(var_27, ((!(arr_28 [i_8] [i_8])))));
    }
    #pragma endscop
}
