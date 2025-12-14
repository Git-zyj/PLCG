/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(16128, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] &= 24;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((((min(3806590094, 1008357517602509693))) ? 4557 : (min(96, -1165494845903000466))));
                                arr_12 [i_4] [17] [i_2 - 4] [i_2] [i_1] [i_1] [i_0] = 69;
                            }
                        }
                    }
                }
                arr_13 [14] [14] = 1;
                arr_14 [i_1] = (!-16128);
                var_20 = ((max(-22941, 1008357517602509680)));
            }
        }
    }
    var_21 = (max(var_21, ((((((((min(1, -1421526864174374857))) ? ((min(345, 7))) : var_15))) ? 4182938813422040200 : (!var_4))))));
    #pragma endscop
}
