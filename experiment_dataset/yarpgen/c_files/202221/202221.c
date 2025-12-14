/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_18));
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_22 *= (arr_5 [12] [13] [i_3 - 1] [i_3]);
                            var_23 = ((-((max((arr_5 [i_3 - 3] [i_3 - 1] [i_2] [i_3 - 4]), var_0)))));
                        }
                    }
                }
                var_24 = (arr_7 [i_0] [i_1] [i_0]);
                var_25 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
