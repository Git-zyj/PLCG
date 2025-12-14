/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min((((arr_7 [i_0]) ? var_11 : (arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4]))), ((min(96, (arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_4]))))));
                                arr_15 [9] [6] [i_2] [i_0] [i_4] [i_0] [i_3] = (((~var_6) ? (((((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [4]) & (arr_6 [i_0] [i_1] [i_0]))) << (96 - 91))) : (((var_7 ? var_3 : (!var_5))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [1] [i_0] [i_1] [i_0] [11] = var_1;
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((142 ? (arr_10 [i_0 + 3] [i_1] [i_2] [i_5 - 1] [i_6 - 4] [i_0]) : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_5] [i_0]))));
                                var_14 = max(0, ((((104 ? (arr_7 [i_1]) : var_2)) ^ (arr_14 [i_0] [i_0] [i_2] [10] [i_6 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((789120241339585335 + (((min(15624092199846587001, var_6)) + var_12))));
    var_16 = ((((max(((var_5 ? 9 : var_0)), (-759349305 && var_6)))) ? ((max(247, 266338304))) : ((789120241339585331 >> (var_4 - 71)))));
    #pragma endscop
}
