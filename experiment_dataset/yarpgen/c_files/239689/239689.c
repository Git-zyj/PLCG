/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (max(var_16, 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    var_17 += var_4;
                    var_18 *= 116;
                    var_19 -= var_6;
                    var_20 ^= (var_2 - var_6);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_21 *= (((!var_6) ? ((1 | ((min(var_12, var_7))))) : (((((min(140, 239812234))) != var_10)))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [11] [i_0] = (var_6 - var_1);
                                var_22 *= ((-((55 ? (~-1) : var_3))));
                            }
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_23 = ((57 ? (((((max(var_5, 28598))) ? 45043471 : (((var_6 ? 21651 : var_0)))))) : (((var_14 ? 218693935 : var_14)))));
                    arr_23 [18] [i_1] [i_6] = ((-(--769022649)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                var_24 = ((var_11 && ((max(var_12, -var_6)))));
                                arr_29 [14] [14] |= (((13856591935137599027 & 18446744073709551593) && (16601 || 140)));
                                arr_30 [i_7] [8] [0] |= (min((var_11 && var_12), 3831822761));
                                arr_31 [2] [i_1] [12] [16] [1] &= (max((~var_10), (1 && var_2)));
                            }
                        }
                    }
                    var_25 = ((((var_11 ? var_2 : (!-7258512008053020901))) < ((((min(var_13, var_12))) ? -var_5 : 140))));
                }
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    var_26 = (min(var_26, var_4));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_41 [i_11] [i_9] = ((max(((1 >> (var_13 - 1579698306))), var_10)));
                                var_27 = (((min((min(-7258512008053020901, 1)), 29329)) % (7258512008053020878 | 1)));
                                arr_42 [i_9] = ((-var_5 >> (149 - 125)));
                                var_28 &= (((15033396804802250580 < var_8) ? var_7 : (~var_7)));
                            }
                        }
                    }
                    arr_43 [i_0] [i_9] [8] = (((var_10 ? var_3 : -211647550)));
                    var_29 = ((~(var_0 * 12079)));
                    var_30 = (((max(-16, ((var_1 ? var_0 : 53439))))) || (((var_1 ? -6754 : var_5))));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_31 = (((min((65531 * 1), ((var_9 ? var_2 : -13145))))) ? 65531 : var_12);
                    var_32 = (min((((min(-12, 8923458966970481491)) + var_9)), ((max(var_9, var_13)))));
                    arr_46 [1] [15] [i_12] [i_12] = var_7;
                    arr_47 [1] [18] [5] [1] = ((var_1 ? (-23967 / 12088) : (!var_11)));
                }
            }
        }
    }
    var_33 = (min((min(1, (min(2155267697454899740, 240)))), ((((((var_13 ? var_12 : var_5))) ? (1 / 58945) : var_4)))));
    #pragma endscop
}
