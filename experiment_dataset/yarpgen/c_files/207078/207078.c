/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 127;
    var_21 = (1 <= 127);
    var_22 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((min((arr_6 [5] [4] [i_1] [i_1 - 2]), ((1 ? var_12 : 703854183037961981)))))));
                                var_24 = (arr_12 [i_4] [i_0] [i_2] [0] [0] [i_0]);
                                var_25 = (max((((var_6 / (~var_6)))), (arr_3 [i_1 - 1] [i_1 - 1])));
                            }
                        }
                    }
                    var_26 = var_3;
                    var_27 = -var_18;
                }
            }
        }
    }
    #pragma endscop
}
