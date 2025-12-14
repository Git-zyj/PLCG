/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min(((355926641 ? -1948972464 : -25140)), (((!(arr_4 [i_4] [i_4 - 1] [i_4] [i_2])))))))));
                                var_18 = ((24488 ? (min(var_13, (arr_13 [i_1] [i_1] [i_1 - 1] [i_3] [i_4 - 4] [i_0]))) : (((((41032 ? -1948972464 : var_15))) ? (min(1948972473, 1948972502)) : (-32767 - 1)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((~(arr_5 [i_1] [i_1])));
                                var_19 = ((-1948972448 ? 41064 : (max(41055, var_14))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [i_5] [i_6] = (((~-1948972437) ? (min(106, -1948972456)) : ((1 ? 32736 : -2034546728))));
                                var_20 *= (min((arr_15 [i_0] [i_1 - 1] [i_2] [i_5]), 1948972447));
                                var_21 = (min(var_21, (((+(((min((arr_8 [i_0] [i_1] [i_2] [i_5]), 32512)))))))));
                                arr_22 [i_1] [i_2] [i_5] [i_1] = min((max(((~(-2147483647 - 1))), ((var_2 ? var_1 : var_11)))), (~28897));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, 1));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((min((arr_27 [i_7]), 1948972486))) ? (arr_27 [i_9]) : 1948972502))));
                                arr_35 [i_10] [i_8] [i_8] [i_10] [i_11] = ((!(!24475)));
                                var_24 ^= ((!(((var_13 ? (arr_24 [i_7]) : (arr_24 [i_10]))))));
                            }
                        }
                    }
                }
                var_25 = (~var_0);
            }
        }
    }
    #pragma endscop
}
