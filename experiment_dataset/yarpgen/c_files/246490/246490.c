/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((0 != (!0)))))));
                                var_14 = (min((arr_0 [1]), ((10 ? ((65525 ? var_6 : (arr_9 [i_0 + 1] [4] [5] [i_1] [i_3] [i_3]))) : ((10 ? -56 : var_1))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
