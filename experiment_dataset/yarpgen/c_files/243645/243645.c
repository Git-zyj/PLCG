/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_4, (((var_0 && var_6) ? var_11 : var_4))));
    var_14 = (-var_7 | var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 &= (!var_6);
                                arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] = (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-29067 + ((((arr_7 [i_1] [i_1] [i_2 + 2] [i_1]) <= var_12))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = (min((max(var_11, (((arr_3 [i_2]) / var_0)))), (((arr_3 [i_2 + 2]) ? var_3 : var_5))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = ((~(arr_6 [i_0] [i_0] [i_5] [i_6])));
                            arr_18 [i_0] [i_0] [i_5] [i_0] &= ((!((min((19283 <= 15338), (min(0, 1)))))));
                            var_17 = (((var_7 == 0) ? ((~(arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 2]))) : (((-17674 == (89 - 14))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
