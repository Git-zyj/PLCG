/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((min(((min(var_13, var_10))), (min(var_11, var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((-4 ? 83 : 16));
                                arr_14 [3] [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((var_2 ? (((min(var_3, var_2)))) : (max(-22, var_7)))), ((max(38, -20)))));
                                var_17 = (max(var_17, (~15573441031270750171)));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
