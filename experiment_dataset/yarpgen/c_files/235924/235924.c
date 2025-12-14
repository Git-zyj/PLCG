/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~var_5) ? 4 : var_4))) || (((~(~var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((var_3 ? -1 : ((var_3 ? (arr_10 [i_3 - 1] [i_1] [i_3 - 1]) : (((arr_6 [i_2] [7]) ? var_2 : var_7))))));
                                var_14 = ((((max(var_9, 32747))) ? ((var_0 ? -7748125738602235933 : (arr_9 [i_0] [i_1 - 1] [i_2] [i_3 - 1] [i_4] [i_3]))) : (arr_9 [i_0] [i_1 + 1] [9] [i_3 - 1] [i_4] [i_0])));
                            }
                        }
                    }
                }
                var_15 |= 1;
            }
        }
    }
    #pragma endscop
}
