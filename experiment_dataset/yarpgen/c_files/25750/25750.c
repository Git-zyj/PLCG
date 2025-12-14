/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((~(!-13)));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [1] = var_15;
                            }
                        }
                    }
                }
                var_20 ^= ((((((arr_6 [i_0] [i_0] [i_1] [i_1]) ? (((max((arr_8 [i_1] [i_1] [i_0] [i_0]), -24)))) : (max(var_1, (arr_11 [i_0] [i_0] [i_0])))))) ? 1835383211 : ((((min((arr_1 [i_1] [i_0]), 1))) ? ((1835383211 ? 2020121450598525600 : var_13)) : (((1835383211 ? var_2 : (arr_14 [i_0] [i_0] [0] [i_0] [8] [i_0] [i_0]))))))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
