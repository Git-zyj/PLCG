/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((((min(50240, 1))) ? (min((~27638), var_2)) : (max(((min(var_16, var_15))), 4254906066))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 *= (!var_14);
                                var_21 = (((((-1 ? var_9 : (arr_7 [i_0] [i_0] [i_2] [i_2]))) >= (arr_11 [i_0] [i_1 + 2] [i_2 - 2] [i_2 - 1]))));
                                var_22 = (max(var_22, -7636003671126277518));
                            }
                        }
                    }
                    var_23 -= (!-var_15);
                }
            }
        }
    }
    var_24 -= var_13;
    #pragma endscop
}
