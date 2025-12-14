/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 += -4611080752827007310;
                    var_19 = 3548719219234251541;
                    var_20 -= (min((((!(~207)))), (((((1317478168 ? 19730 : (arr_3 [i_1] [1] [i_1])))) ? ((16384 ? (arr_0 [1]) : var_17)) : (3277829309 & var_13)))));
                    var_21 *= ((~((~(arr_4 [i_2] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_22 = (!-2009386620);
                                var_23 &= (var_16 - (min((~var_15), ((max(var_0, (arr_16 [i_4] [i_6])))))));
                                arr_25 [i_3] [i_4] [i_5] [i_7] [i_7] = ((var_8 ? ((var_5 ? (48050 > 24485) : (0 ^ 27))) : var_2));
                                arr_26 [2] [i_4] [i_5] [i_4] [i_7] [i_7] [i_7] = (arr_17 [i_3] [i_4] [i_5] [i_6]);
                                arr_27 [i_3] [i_3] [i_5] [i_6] [i_3] = max((min(0, 2009386620)), (((((50 - (arr_17 [5] [i_4] [i_5] [i_6])))) ? (arr_11 [i_4] [i_4]) : (-16385 - var_5))));
                            }
                        }
                    }
                }
                var_24 = (~var_3);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_25 = (((min(-var_3, 3))) ? 27151 : ((((((var_16 / (arr_1 [i_8])))) && 1265334326))));
                            var_26 ^= ((!(var_2 ^ 54617)));
                            var_27 = (min(var_27, (((var_6 ? (((max(var_17, 2285580669)) / 3290216969)) : 68)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
