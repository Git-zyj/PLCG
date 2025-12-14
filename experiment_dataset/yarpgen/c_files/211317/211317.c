/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((!((((24576 ? var_10 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_10));
                var_21 = ((max((arr_5 [i_1 - 1] [i_0]), var_5)));
                arr_6 [i_0] = ((-var_0 ? 32750 : -1501438590936294739));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(32743, -9988));
                                var_22 = (((min((arr_16 [i_0] [i_1 + 1]), -11671370428037241942)) <= 32750));
                                var_23 = ((-69 ? 0 : var_18));
                            }
                        }
                    }
                }
                arr_18 [i_0] = ((arr_10 [i_1 - 1] [i_1 + 2] [i_1 + 2] [17] [17]) + 232);
            }
        }
    }
    var_24 = (~var_12);
    var_25 |= var_2;
    #pragma endscop
}
