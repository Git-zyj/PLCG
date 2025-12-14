/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = var_3;
                var_18 = (min(var_18, (((!((max((224 <= 32), 169))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (--2706681299)));
                                var_20 *= (min(-var_4, var_7));
                                arr_20 [1] [2] [1] [6] [i_2] = ((((((((var_2 ? var_8 : var_7))) ? (min(var_6, var_6)) : var_12))) - (((~18) ? ((var_16 ? 68 : var_16)) : var_0))));
                                arr_21 [1] [i_3] [i_4] [i_2] [12] = ((((max(-69, var_9))) % ((var_5 ? ((min(var_9, var_4))) : var_1))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((243 ? var_8 : var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
