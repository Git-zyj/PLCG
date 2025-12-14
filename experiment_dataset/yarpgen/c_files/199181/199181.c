/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [22] = ((!((max((arr_4 [9] [i_2]), var_6)))));
                    arr_12 [i_0] [i_0] [i_2] = ((!(arr_6 [i_2] [i_1] [i_0])));
                    var_18 = ((((min(-430034359, (arr_1 [i_0 + 1])))) ? ((max((arr_7 [i_0] [i_1] [i_2]), (arr_9 [i_0] [i_1] [i_2] [16])))) : (((max(-430034368, 1578244747574278040))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [3] [i_0] [i_0 + 1] [i_0] [1] = ((!((max((max((arr_14 [i_0] [15] [15] [i_0 - 1] [i_0] [3]), (arr_14 [2] [i_1] [2] [i_3] [i_4] [i_4]))), var_0)))));
                                var_19 = (((min(-430034363, (min(var_2, (arr_2 [i_0]))))) >= -18792));
                                var_20 = (min((((!51965) && 0)), var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_9 ? (((~var_1) ? var_9 : 0)) : -3503067286587993616));
    var_22 = var_5;
    var_23 = ((var_17 && ((!(0 <= -20742)))));
    #pragma endscop
}
