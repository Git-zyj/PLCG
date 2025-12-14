/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= ((var_17 + 9223372036854775807) >> (((((var_9 ? var_14 : var_4))) - 18319)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((var_9 / (((arr_9 [i_0] [i_2] [i_2] [i_3] [i_0] [i_0]) ? var_2 : (arr_5 [i_0] [i_1] [i_3]))))))));
                            var_21 = var_9;
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((var_6 != ((var_1 ? var_3 : var_18)))) ? ((min(var_9, var_8))) : ((((min(var_2, var_1))) ? var_13 : var_5))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_23 = ((-((var_16 & (arr_15 [i_4] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_8] &= (arr_13 [i_4] [i_5]);
                                var_24 = (((var_10 ? var_1 : (arr_13 [i_4] [i_5]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_28 [i_4] [i_6] [i_4] [i_4] [i_4] = (-var_17 / (arr_15 [i_5] [i_5]));
                                var_25 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
