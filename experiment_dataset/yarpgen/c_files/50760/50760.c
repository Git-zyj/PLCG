/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = -1;
                    arr_9 [i_0] [i_1] [i_1] [3] = var_8;
                    arr_10 [17] [i_0] [20] = (((arr_7 [16] [i_0] [16] [i_2 + 1]) ? (var_3 | var_11) : (~var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = 3212247920118133827;
                                var_12 |= var_2;
                                var_13 = (min(var_13, (((15234496153591417782 ? 29389614 : 1)))));
                            }
                        }
                    }
                }
            }
        }
        var_14 = (!(arr_2 [i_0] [i_0]));
        var_15 = (~var_0);
    }

    /* vectorizable */
    for (int i_5 = 4; i_5 < 17;i_5 += 1)
    {
        var_16 -= var_2;
        var_17 = var_3;
        var_18 = (((arr_18 [i_5 - 1]) ? var_6 : var_1));
        var_19 = ((4294967276 ? 187 : 202));
    }
    var_20 = var_7;
    var_21 += ((var_7 == ((var_4 ? (min(var_7, var_3)) : var_9))));
    #pragma endscop
}
