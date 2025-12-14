/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 += (((+(((arr_9 [i_0] [i_1 + 2] [i_1 + 4] [12] [6] [i_4]) - 1438736824)))));
                                var_21 = var_7;
                                var_22 = (min(var_22, var_7));
                                var_23 = arr_2 [i_2];
                            }
                        }
                    }
                    arr_12 [i_1] = var_19;
                }
            }
        }
    }
    var_24 += (~7);
    var_25 = 755387466416426210;
    #pragma endscop
}
