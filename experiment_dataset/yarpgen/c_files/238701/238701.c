/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((var_0 & var_8), (((var_5 ? var_2 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = (min((arr_2 [i_1] [i_1]), 1646983093));
                            var_12 = (arr_7 [i_0] [i_1] [i_2]);
                        }
                    }
                }
                var_13 = (max((((arr_2 [i_0] [i_1]) | 4529889684972589716)), (((~(arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_14 = (max(var_14, ((((65535 / -var_8) > var_2)))));
    #pragma endscop
}
