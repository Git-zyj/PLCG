/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (arr_1 [i_3]);

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_14 [i_4] [i_2] [i_4] [i_4] [i_4] [i_4] = (arr_11 [i_2]);
                                var_15 ^= ((((max((((37896 ? 0 : (arr_13 [i_0] [6] [i_0] [0] [i_0])))), (3 / var_9)))) ? -var_12 : ((var_9 % ((var_6 ? var_2 : 47))))));
                                var_16 += 108;
                                arr_15 [i_4] [i_2] [i_2] [i_0] = (!((((arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (max(-665956883, (arr_0 [i_4] [i_0]))) : var_5))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_5] [i_2] &= ((((max(12253981694068312576, 67))) ? var_11 : (min(665956882, (-127 - 1)))));
                                var_17 = (min((((~((-7112 ? (arr_10 [i_2]) : -17821))))), (var_1 - var_11)));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                arr_22 [i_0] [i_2] [i_3] [i_6] = ((125 - ((-((max(var_4, 122)))))));
                                var_18 = ((((max((arr_11 [i_2]), var_4))) ? ((((arr_11 [i_2]) && (arr_13 [7] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (((arr_11 [i_2]) ? (arr_11 [i_2]) : var_8))));
                                arr_23 [i_0] [i_2 - 1] [1] [i_2] [i_2] [12] = (((((~var_2) == (((122 ? var_7 : var_5))))) ? (arr_20 [i_2 - 1] [i_2] [i_2 - 1]) : (((-665956909 | var_6) ? (arr_6 [i_2] [i_1] [1] [2]) : var_2))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_19 = 208;
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_2] [6] [i_3] = (((((-(arr_0 [i_1] [i_1])))) ? 1 : (var_5 == 1)));
                                var_20 = (max(var_20, (var_0 < var_1)));
                            }
                            var_21 = -31;
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_22 = (min((-108 || var_5), (arr_5 [i_8])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] [i_10] [i_10] = (~((0 ? 17820 : -1029914125)));
                                var_23 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
