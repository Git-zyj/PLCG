/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_3] [15] [i_4] [i_1] [i_1] = (min(-1, (max(-1, 38511))));
                                arr_17 [i_0] [i_3] [i_2] [i_0] [i_4] [i_3] [i_1] = (arr_6 [i_0] [i_0]);
                                var_11 = var_6;
                                arr_18 [i_1] [i_2 + 2] [i_3] = 107;
                                arr_19 [i_3] [i_1] [i_2] [i_3] [1] = (max(var_6, ((((~-23) && var_0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [7] [i_5 - 1] [5] [i_6] [i_2 + 1] = ((-(((arr_8 [i_0]) >> (arr_8 [i_2 + 2])))));
                                arr_26 [i_6] = (((arr_2 [i_0] [i_0]) ^ 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (max(var_12, ((max(-121, var_2)))));
    var_13 = (max(var_13, (((-(~var_9))))));
    #pragma endscop
}
