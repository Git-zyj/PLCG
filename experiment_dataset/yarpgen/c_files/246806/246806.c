/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = 69;
                    var_17 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 -= (arr_5 [12] [i_1] [i_1] [i_1]);
                                arr_15 [i_0] [12] [i_2 - 2] [0] [i_4] [4] [0] |= (arr_3 [i_4] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_19 = 5623616929864282769;
    }
    var_20 = (~var_11);
    var_21 = (((((max(12823127143845268847, var_6)))) ? (min(((var_13 ? var_12 : 63)), (!var_13))) : (1 >= 39062)));
    var_22 = (min(var_22, ((((min((!var_0), (!1))) ? (!var_6) : ((((min(var_5, 4285280864))) ? ((min(9631, var_4))) : (!var_11))))))));
    #pragma endscop
}
