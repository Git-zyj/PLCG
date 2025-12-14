/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 += ((~((var_4 ? var_19 : var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = ((15097328334900720237 ? ((min((~var_1), var_9))) : -2140873009));
                                var_22 = max((~var_0), 1628193248);
                                var_23 = ((max(var_14, var_17)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_5] [i_6] = ((!(((-2 ? 1125899906842623 : 0)))));
                                arr_17 [i_0] [9] [i_2] [i_5] [i_6] [i_5] [0] = (min(31940, (-2147483647 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 19;i_7 += 1)
    {
        var_24 = min(((var_4 ? var_7 : ((var_5 ? var_5 : var_14)))), var_5);
        arr_22 [i_7] [19] = ((var_18 ? var_17 : var_10));
        arr_23 [i_7] [i_7] = (((-2147483647 - 1) ? (-2147483647 - 1) : 35624));
    }
    var_25 = var_7;
    #pragma endscop
}
