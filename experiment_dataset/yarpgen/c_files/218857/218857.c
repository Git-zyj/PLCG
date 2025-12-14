/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_9 && (var_6 % var_8)))))));
    var_16 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = var_6;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_10 [i_2] = ((((((arr_5 [i_0 + 2] [i_0 - 1] [i_2 - 1]) & (arr_6 [i_0 + 2] [i_2])))) ? (var_0 || 3758096384) : (max((arr_5 [i_0 + 2] [i_0 - 1] [i_2 - 1]), 4129108817))));
                                var_18 = (max(var_18, ((max(1, (arr_5 [i_4] [i_3] [i_2 + 1]))))));
                                var_19 = ((~(~var_3)));
                            }
                        }
                    }
                }
                arr_11 [i_1] [i_1] &= ((~(!var_3)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((arr_18 [i_6 - 1] [i_6 + 3] [9] [i_6 + 1] [i_6 + 3]) ? (arr_18 [i_6] [i_6 + 4] [8] [i_6 + 1] [i_6 - 1]) : (arr_18 [i_6 + 3] [i_6 + 2] [1] [i_6 + 2] [i_6 - 1])))) ? (((arr_13 [i_0 + 2] [i_0 - 1] [i_0 - 1]) ? 4129108817 : (arr_15 [i_0 - 1] [i_0 + 2] [i_6 + 2] [i_6] [i_7] [i_7]))) : (((-((-1750701942 ? var_5 : 4129108822))))))))));
                                var_21 = (max(var_21, ((((var_1 ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) : 3758096379))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
