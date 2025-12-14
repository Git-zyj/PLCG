/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 -= ((~(((!var_9) * var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 1] [i_4] = (((((((((arr_6 [i_0]) ? (arr_3 [i_2] [i_4]) : -99)) > (((var_5 ? var_10 : 63))))))) * (-8158779804791039231 | 0)));
                                arr_13 [i_0 - 2] [i_0] [i_3] [i_0] [i_0] = (((((((15885 ? (arr_9 [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_2 - 1] [i_3] [i_0 - 3]) : 65533)) + (arr_6 [i_0 - 2])))) ? (-var_7 - var_7) : (2 == 79)));
                                arr_14 [i_3] = (((((arr_5 [i_0 - 3]) && var_0)) ? ((((arr_1 [i_0 - 1] [i_1 - 1]) << (1024 - 1019)))) : ((-(arr_3 [i_0 - 3] [i_1 - 1])))));
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0 - 2] = var_2;
                            }
                        }
                    }
                    arr_16 [i_1] = (~247);
                    arr_17 [i_1] |= (max(3206833699, 79));
                }
            }
        }
    }
    var_12 = ((var_3 ^ ((-(~var_2)))));
    #pragma endscop
}
