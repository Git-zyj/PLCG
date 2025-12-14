/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(9007199254740992, 9007199254740988);
    var_12 = ((14462786533473121423 ? var_0 : -54));
    var_13 = (var_1 | var_4);
    var_14 = (max(var_14, var_2));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [i_0 - 3] [i_0] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 *= (((((max((arr_0 [i_0 + 1]), 3983957540236430188)))) < (~27)));
                            var_16 = (540988380 ? 1624077242732145320 : -17429);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
