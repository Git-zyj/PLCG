/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((4824193818542453772 - 255) ? var_6 : ((((!(((var_11 ? var_1 : var_17))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (arr_2 [i_1] [i_0]);
                arr_7 [i_0] [i_1] [i_1] = (max(((((((arr_1 [13]) ^ 87))) ? (((arr_4 [i_0] [i_1] [i_1]) ? (arr_1 [i_1]) : var_12)) : (!-9185879206017304960))), ((((arr_2 [i_1] [i_0 - 2]) < 2174856341329265941)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((-(arr_3 [i_1])));
                                var_22 = ((((((arr_10 [i_1] [i_1] [6] [6] [i_4] [i_4]) ? ((min(255, 0))) : (((arr_9 [i_1] [i_1] [i_3] [11]) ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_4]) : -81))))) ? ((+(((arr_8 [i_1] [i_0] [i_0]) ? (arr_3 [i_4]) : (arr_8 [i_1] [i_1] [i_4]))))) : ((((arr_10 [i_0] [i_1] [i_1] [i_0 + 1] [i_1] [i_4]) ? (arr_12 [12] [i_1] [i_2] [i_1] [i_0]) : ((54971 ? (arr_4 [i_1] [i_1] [i_4]) : 13789)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= var_10;
    #pragma endscop
}
