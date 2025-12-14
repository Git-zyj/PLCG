/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = var_9;
                                arr_15 [i_0] [5] [i_0] [i_0] [i_0] = ((((((((var_13 ? 104 : -105))) ? (((max(var_2, var_14)))) : 1435961543))) ? ((6335 ? -1 : ((var_16 ? 6545900932014503646 : -501009671)))) : (max(var_18, var_5))));
                                var_22 = (((1856280858726867077 ? 5505070549865749670 : var_5)));
                            }
                        }
                    }
                    arr_16 [i_0] = ((((max(96, 6330))) ? (max(var_12, 1320940927)) : ((var_11 ? var_6 : 2974026368))));
                }
            }
        }
    }
    #pragma endscop
}
