/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((((((arr_0 [i_0] [i_1]) ? -8533080887117287827 : var_1))) ? ((((arr_1 [i_0]) ? var_9 : -1))) : (((arr_3 [i_0] [i_0] [i_0]) * 14368687240836477587)))) < (var_2 >= var_17)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = max((((max(var_0, 4078056832873074009)))), (((arr_6 [i_2] [i_3] [i_2] [i_0]) ? (min(36369, var_14)) : (var_18 <= var_17))));
                                var_21 = (((14368687240836477587 - var_0) || var_3));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_18 [18] [i_5] [i_1] [i_0] = (min((var_1 * var_5), (36369 | 1)));
                            var_22 = (max(861244355, ((((arr_4 [i_0] [i_1] [i_6]) || ((max(15856943831837719226, 127))))))));
                        }
                    }
                }
                var_23 = var_4;
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
