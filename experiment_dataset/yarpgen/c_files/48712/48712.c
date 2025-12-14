/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (max((((var_1 ? ((max(var_8, 1))) : var_1))), (((var_1 - var_1) + var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= ((var_2 ? (arr_2 [i_0] [i_0]) : ((((arr_2 [i_1] [i_0]) < (arr_0 [i_1]))))));
                var_11 = ((((((((~(arr_4 [i_0] [i_0] [i_1])))) + (((arr_1 [i_0]) ? var_5 : (arr_3 [i_0] [i_0])))))) ? (arr_0 [i_0]) : (((~9007199250546688) ? (((var_2 ? var_7 : var_8))) : ((1 ? (arr_0 [i_0]) : (arr_1 [2])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((max((arr_0 [i_0]), ((((((arr_0 [i_0]) | 27)) == 46410))))))));
                                var_13 = (((((~(arr_11 [i_3] [i_2] [20])))) | (((arr_9 [i_3] [i_3 + 2] [i_3 + 3]) ^ 65535))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        arr_15 [i_5] [i_5] = ((~((~((max(var_4, 1)))))));
        arr_16 [i_5] [i_5 - 3] |= 1;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            arr_27 [i_5 - 2] [i_6] [i_7] [8] [i_9 - 2] = ((((((arr_2 [i_5 - 2] [i_9 - 3]) % (arr_2 [i_5 - 2] [i_9 - 2])))) || (((~((1 ? 1 : (arr_8 [i_5] [i_6] [i_9 + 1]))))))));
                            var_14 ^= (+(((((arr_9 [i_8] [i_5 - 3] [i_5 - 3]) == (arr_21 [i_5] [i_6] [i_7]))) ? (((var_1 | (arr_23 [i_5] [0] [i_7] [1])))) : 1096933881456077944)));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_32 [i_5] [i_5] [i_5] [0] [i_5] = var_0;
                            arr_33 [i_5] [i_6] [i_7] [i_8] [i_6] = (((arr_7 [i_5 - 2] [i_5 - 2] [i_5 - 2]) == ((1096933881456077944 ? (arr_29 [i_10] [i_6] [i_7] [i_6] [i_5]) : var_9))));
                            var_15 &= (arr_30 [i_5 - 2] [i_5 - 2]);
                        }
                        arr_34 [i_8] = (arr_31 [0] [i_6] [i_7] [i_7] [i_8] [i_8] [i_8]);
                        arr_35 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 3] = var_0;
                        var_16 &= (((max((arr_13 [i_5] [i_5]), (arr_31 [5] [5] [i_5 - 3] [i_5 + 1] [i_5] [5] [5]))) && (arr_6 [i_5 - 2] [i_5 - 2])));
                        var_17 *= 1;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_18 = ((((max((arr_0 [23]), 65530)) < 20536)) ? ((((arr_30 [i_5 + 1] [i_5 + 1]) ? ((max(1, 1))) : ((min((arr_36 [i_5 - 2] [i_6] [i_7] [i_11]), 1)))))) : (arr_19 [i_5] [i_5]));
                        arr_38 [i_5] [i_6] [i_6] [i_11] [i_7] = ((((arr_6 [i_5 - 3] [i_5]) ? (arr_14 [i_5 - 1]) : (((arr_0 [i_5]) ? (arr_18 [i_5 - 3] [11]) : var_3)))) / var_8);
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_41 [i_12] = ((~(max(((46410 / (arr_2 [i_6] [i_12]))), (-20548 == 255)))));
                        var_19 = (((((max((min(235, 32767)), 6)))) ^ (((arr_6 [i_5 - 2] [i_5 - 3]) + ((((arr_14 [i_5]) >> (208 - 197))))))));
                    }
                    var_20 &= (((((arr_18 [i_5] [i_5]) & (((max(127, var_7)))))) == (((arr_28 [i_5] [9] [i_5 - 1] [i_5] [i_6] [i_5]) >> (((~var_1) + 58))))));
                    var_21 *= (((arr_18 [i_5 - 1] [i_6]) ? (((arr_18 [i_5] [i_6]) >> (((min((arr_21 [i_5 + 1] [i_5 + 1] [i_7]), (arr_40 [i_5] [10] [i_7]))) - 55903)))) : (arr_23 [i_5] [i_5] [i_5] [i_5 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
