/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (((((var_9 ? (arr_6 [i_0] [i_1]) : var_5))) ? (min(1, 8894127870543656726)) : (((var_15 ? ((max(1, (arr_4 [i_0] [i_1])))) : var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [20] [i_1] [i_2 - 2] [i_3] &= (((arr_11 [i_0] [1] [i_2] [i_2]) * ((((((arr_2 [i_0] [i_2]) ? -1776648025349242377 : (arr_0 [i_2]))) <= (~var_2))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4 + 2] = 5531;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = 2147483633;
                                arr_17 [i_4] [19] [i_0] [i_0] [i_1 + 3] [i_0] = (arr_10 [i_1 - 2] [i_2 - 1] [i_4 + 1]);
                                var_18 += ((!((((arr_2 [i_3] [i_3]) ? (arr_0 [i_2]) : var_13)))));
                            }
                            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2 + 1] [10] [i_5 + 2] [5] = (max(1, ((((min(48, 15360))) == (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_3] [i_0] [i_3]) : 14145))))));
                                arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5] = 40228;
                                arr_23 [i_0] [15] [i_0] [i_0] [i_0] = var_8;
                                var_19 ^= (arr_19 [i_5] [1] [i_2 - 1] [1] [1] [i_0]);
                            }
                            var_20 = (arr_14 [i_0]);
                        }
                    }
                }
                arr_24 [i_1] [i_0] = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_34 [i_7] [i_7] [i_6] &= (max((var_6 - 1), (arr_19 [i_6] [i_6] [1] [i_7] [15] [15])));
                    arr_35 [i_6] [i_6] [i_7] [i_6] = arr_3 [20] [i_6] [i_6];
                }
            }
        }
    }
    var_21 = (((!var_2) * ((min((!-316692979), var_15)))));
    #pragma endscop
}
