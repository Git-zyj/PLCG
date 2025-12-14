/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] = 0;
                                var_21 = ((+(min((min((arr_2 [i_0] [i_1]), 32767)), 1))));
                                var_22 = (min(var_22, 9223372036854775807));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((~(arr_1 [i_1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
