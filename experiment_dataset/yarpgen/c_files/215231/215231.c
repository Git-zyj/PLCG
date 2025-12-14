/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((((min(-var_3, var_10))) ? (!var_5) : (min((~5682495848384564388), ((max(var_1, var_0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 |= (max(var_2, (min(16, (var_5 && var_5)))));
                                var_13 ^= ((8 ? -2 : 23870));
                                var_14 = ((((min(var_1, var_8))) << (((min((min(var_7, var_5)), (~4294967279))) - 7))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] |= (~225);
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_0] = var_6;
                }
            }
        }
    }
    var_15 |= (var_0 ? var_1 : (min(var_9, 4294967279)));
    #pragma endscop
}
