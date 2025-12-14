/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((-(((((!(arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))) && ((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) + (arr_4 [i_0] [i_1] [i_2] [i_3])))))))));
                                var_19 += (((((0 ^ (((arr_5 [i_1] [i_1] [i_2]) ^ (arr_10 [i_0] [i_0] [i_2] [i_3] [i_1] [i_4] [i_0])))))) ? (min((var_5 | 1), (((arr_6 [i_0] [i_3] [i_4]) ? var_15 : (arr_2 [i_0] [i_1] [i_2]))))) : 1));
                                var_20 -= (+-1);
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_21 = ((~(arr_3 [i_1] [i_3] [i_5])));
                                var_22 += (min((((((var_2 ? 1 : var_3))) ? (arr_8 [i_0] [i_2] [i_2]) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]))), (arr_0 [i_5])));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] = ((1 <= (arr_8 [i_5] [i_3] [i_1])));
                            }
                            var_23 |= 192;

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_24 = (!1);
                                var_25 = ((max((arr_8 [i_1] [i_1] [i_1]), (arr_0 [i_0]))));
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_26 *= 10;
                                var_27 ^= var_12;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10;i_8 += 1)
                            {
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_8] = (((((1 ? (arr_15 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_8]) : (arr_17 [i_0] [i_1] [i_2] [i_3] [i_8])))) ? 1 : (((arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_1 [i_0] [i_8]) : var_16))));
                                var_28 = (((1 ? 65520 : 1)));
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_8] = (((arr_5 [i_3] [i_1] [i_0]) / (((arr_17 [i_0] [i_1] [i_2] [i_3] [i_8]) / 131))));
                                var_29 = (arr_14 [i_1] [i_3] [i_3] [i_3] [i_2]);
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1)
                            {
                                var_30 = 45856;
                                var_31 = (max(241, 1));
                                arr_28 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_9] = var_5;
                                var_32 = (((((var_7 & (arr_22 [i_0] [i_1] [i_2] [i_3] [i_9] [i_3]))) < 31)));
                            }
                        }
                    }
                }
                var_33 -= (65524 > 59948);
                var_34 += ((((arr_7 [i_1] [i_1] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))));
                var_35 = (arr_26 [i_0] [i_0] [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
