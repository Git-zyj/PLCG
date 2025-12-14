/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = var_5;
        arr_2 [i_0] = 1212635096;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_12 *= (((((3597 < 31778) ? (arr_0 [i_1]) : (arr_3 [7])))) && 123);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_13 = var_1;
                        arr_14 [i_3] = (~-1026926542);
                        var_14 = (((arr_8 [i_4 - 2] [i_2] [i_2] [i_2]) ? -123 : (arr_8 [i_4 - 2] [i_4 - 4] [i_4 - 2] [i_4 - 2])));
                    }
                    for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_17 [11] [i_3] [i_2] [i_1] = (((max(var_10, var_4)) <= -104));
                        var_15 = ((((((arr_11 [i_5] [i_5 - 2] [i_5 - 1] [i_5 - 3]) ? (arr_8 [i_5 - 4] [i_5 - 3] [i_5 - 4] [i_5 - 4]) : (arr_11 [10] [i_5 - 1] [i_5] [i_5 + 1])))) ? (~235689042) : (~6108868749767182633)));
                        var_16 = (((max(var_6, (((var_5 & (arr_0 [i_1]))))))) & (min(var_2, ((31794 ? var_0 : var_1)))));
                    }
                    arr_18 [i_1] [i_2] [i_3] = var_10;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] = ((((((((arr_23 [i_1] [i_2] [1] [i_6] [i_2]) ? var_1 : (arr_7 [i_7])))) && ((max(-109, var_6))))) ? (((-8 ? (arr_19 [i_2] [i_3] [i_6] [i_6]) : (arr_4 [i_3])))) : ((~(max(var_5, 9223372036854775803))))));
                                arr_25 [i_1] [i_2] [i_3] [3] [4] = (max(8014756177931182288, 228));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_17 |= -13999;
                                var_18 *= 48446;
                                arr_32 [i_1] [i_2] [i_3] [i_9] = ((((((max(-117, 412632834))) ? 18 : (!120))) << ((((min((arr_15 [i_9] [i_9] [i_9 + 1] [i_8] [i_8]), 237))) - 194))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (min(((min((var_7 || var_0), (min(var_10, 253))))), (max((((var_0 ? 3677199587 : 657778914))), ((var_1 ? var_0 : (arr_3 [i_1])))))));
        arr_33 [i_1] = (min(var_2, (((arr_30 [10] [i_1] [4] [i_1] [i_1]) ? (arr_30 [i_1] [1] [1] [i_1] [i_1]) : (arr_0 [i_1])))));
        var_20 = (min(var_20, ((124 ? (((((arr_3 [i_1]) + 2147483647)) << (((-121 + 150) - 29)))) : ((((arr_3 [i_1]) < (arr_3 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_21 |= ((!(arr_41 [4] [7] [i_12] [i_13])));
                        var_22 = (min(var_22, 8120955460584986481));
                        arr_43 [4] [i_10] [4] [i_10] = (~var_0);
                        arr_44 [i_12] [i_11] [i_11] [i_10] [i_10] [i_12] = ((var_4 - (arr_21 [i_10] [i_13])));
                        var_23 = (((var_9 ? var_6 : 42)));
                    }
                }
            }
        }
        var_24 = ((((!(arr_42 [i_10] [i_10])))));
        var_25 ^= ((!((var_4 < (arr_38 [i_10] [11])))));
        arr_45 [i_10] = (arr_3 [i_10]);
    }
    var_26 = (min((max(var_4, var_8)), (((!(!135))))));
    #pragma endscop
}
