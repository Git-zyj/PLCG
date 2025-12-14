/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (arr_3 [i_0]);
                            arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (max((min((var_7 != var_8), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))), var_0));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_10 = (min(var_10, var_1));
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_4] = ((+((var_0 ? (arr_1 [i_2] [i_1 + 1]) : (max(var_9, var_6))))));
                                var_11 = arr_5 [i_2] [i_3] [i_4];
                                arr_16 [i_1] [18] [i_2 + 1] [i_0] [i_0] [i_1] = arr_8 [i_0] [i_2] [0] [i_1] [i_4] [i_0];
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_1] = ((var_9 / (min(2246751907903906510, ((var_1 ? (arr_9 [i_0] [i_1 - 1] [i_5] [0]) : (arr_6 [i_1] [i_1 + 1] [i_5] [i_6])))))));
                            var_12 = 9223372036854775807;
                        }
                    }
                }
            }
        }
    }
    var_13 = (((min(var_3, ((32083 ? 15377548991550463414 : -1668531734)))) - 4551));
    #pragma endscop
}
