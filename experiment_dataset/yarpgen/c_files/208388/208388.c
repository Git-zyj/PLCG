/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [4] [i_0] [i_1] [i_2] [i_3] [i_3] = var_3;
                            arr_11 [1] [12] [4] [i_3] [i_3] [i_2] = (arr_3 [i_2] [i_1] [i_0]);
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (min((max(1126385236, ((var_14 ? var_4 : 1126385245)))), ((((3168582054 + (arr_4 [4]))) / var_14))));
            }
        }
    }
    var_19 = ((var_4 ? (var_5 - -162) : (-var_8 / var_1)));
    var_20 = (min((((((max(49152, 3168582056))) >= ((var_12 ? var_15 : 3168582059))))), ((var_6 + (max(var_12, var_14))))));
    #pragma endscop
}
