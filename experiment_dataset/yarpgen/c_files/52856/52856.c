/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((15706623792774538254 ^ ((((min((arr_4 [i_3]), var_6))) ? (var_14 + 32148) : 15706623792774538273))));
                            arr_11 [i_3] [1] [i_2] [i_1] [i_2] [1] = var_8;
                        }
                    }
                }
                var_18 *= (min(((33387 % (arr_3 [i_0 - 3]))), (min(var_12, (arr_7 [i_0 + 2] [14] [i_0 - 3] [i_0])))));
            }
        }
    }
    var_19 = (min(((((max(-777284188, var_2))) ? var_8 : (0 - var_14))), ((max(1870570297, 609932348)))));
    #pragma endscop
}
