/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((~var_6), var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (224 ? (~0) : (((arr_6 [i_0] [i_0]) * (((((arr_2 [1] [i_1]) >= var_5)))))));
                var_14 = (max(var_14, (((~(arr_2 [i_0 + 1] [i_0 + 1]))))));
                arr_8 [i_1] = ((~(arr_3 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_15 *= ((var_8 ? (min((arr_1 [i_3]), (min((arr_12 [i_2] [i_2] [i_3]), 2632865176938154612)))) : var_10));
                arr_14 [i_2] [i_2] [i_2] = (~(arr_2 [i_2] [i_3 + 1]));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 ^= var_12;

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_17 = (max(var_17, (((((((arr_23 [i_6] [i_4] [i_4] [i_3 + 1] [i_2]) ? (-2632865176938154602 & 1) : (max(var_6, 806805450594653009))))) ? ((((max(2147483647, 0))))) : (min((arr_12 [i_3] [i_3] [i_3 + 1]), (min(var_7, -2632865176938154612)))))))));
                                var_18 = 2147483647;
                                var_19 = ((!(~726813834)));
                                var_20 += ((~((var_3 ? ((((arr_5 [i_2 + 1]) && (arr_11 [i_2 + 1] [i_5] [i_6])))) : (arr_13 [i_2] [i_2 + 1])))));
                                var_21 = ((2632865176938154612 ? ((((((arr_11 [i_2] [1] [i_2]) & 3741003106)) ^ ((((arr_20 [i_2] [i_3] [i_4] [i_3] [i_6]) ? var_5 : 2147483647)))))) : ((var_11 + (((var_3 ? var_0 : var_2)))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 0;i_7 += 1)
                            {
                                var_22 -= var_2;
                                var_23 = (~806805450594653009);
                            }
                            var_24 = (((-14103 && 806805450594653024) ? var_4 : (min(((~(arr_5 [i_4]))), var_2))));
                            var_25 = (((((~(arr_12 [i_2] [i_3] [i_3])))) ? (min(-2632865176938154630, 1)) : (arr_13 [i_4] [i_4])));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_26 = 2632865176938154629;
                                var_27 = (((arr_21 [i_3] [i_8] [i_8 + 1] [i_8] [i_8] [i_9]) ? (((arr_33 [i_2 + 1] [i_2 + 1] [i_10]) ? (~2632865176938154629) : (max(2632865176938154612, var_1)))) : (((~(arr_30 [i_2] [i_2] [i_2 + 1] [i_2]))))));
                            }
                        }
                    }
                    var_28 = (max((arr_0 [i_2]), (arr_6 [i_2] [i_2 + 1])));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 = (max(var_29, -7));
                    var_30 *= -2147483647;
                }
            }
        }
    }
    #pragma endscop
}
