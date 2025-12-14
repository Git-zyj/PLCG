/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 += (max((((((min((arr_12 [i_0]), var_6))) * -var_4))), ((-((0 ? -1 : 20))))));
                                arr_13 [i_4] [i_1] [i_2] = (arr_10 [i_3] [i_2] [i_1] [i_0]);
                                var_12 = (((max(var_2, ((var_7 ? (arr_9 [i_0] [i_3] [i_4]) : (arr_12 [i_0]))))) * (var_3 >= var_4)));
                                var_13 = (max(var_13, ((((((var_6 ? (arr_2 [i_0]) : 4294967295))) - ((var_1 ? -83 : (10 / -1))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] = ((-14 ? 25 : 18));
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_6] = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_14 -= (((((var_10 ? (arr_26 [i_0]) : var_3))) ? ((~(arr_26 [i_1]))) : (((arr_26 [i_8]) ? var_10 : (arr_26 [i_0])))));
                                var_15 = ((((max(var_6, var_8)))) ? (var_3 + -320460477) : ((((var_10 ? var_9 : var_2)) - -19)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_16 = ((((var_2 >= (arr_12 [i_10]))) || (((~((10 ? var_9 : (arr_24 [i_9] [i_10] [i_11 + 1] [20] [i_9]))))))));
                                arr_39 [i_9] = (((((arr_29 [i_10] [i_9] [i_13]) | (((-19 ? var_7 : 201))))) < ((-var_2 ? ((((arr_37 [i_9] [i_9] [i_9] [i_9] [i_9]) ? var_10 : (arr_23 [i_13] [i_12] [i_11 - 2] [i_9] [i_9])))) : (arr_26 [i_9])))));
                                arr_40 [i_12] [i_12] [4] [i_10] [4] [i_12] [i_12] &= ((-9223372036854775807 ? ((var_10 | (arr_35 [i_10] [i_11 + 1] [i_12 + 1]))) : (-13 || 1062409696)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_17 = ((~(arr_17 [i_9] [i_11] [i_9] [i_14] [i_15] [i_9] [i_9])));
                                arr_46 [i_9] [i_9] [i_9] [i_11] [1] &= 49;
                                var_18 &= ((var_1 << (min(var_4, (220 / 3731536674405526686)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_19 = (((11693507320545550990 + -18) ? ((~(arr_49 [i_10 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]))) : ((((!(arr_49 [i_10 - 2] [i_11 + 1] [0] [i_11 + 1])))))));
                                var_20 = ((815655313 ? (~var_4) : 25));
                                var_21 = (13979343320220929041 && 1);
                                arr_53 [i_9] = ((-((var_6 ? (arr_41 [i_10 - 2] [i_11 + 1] [i_17] [9]) : (arr_15 [i_10 + 2] [i_11 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
