/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
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
                                var_18 = (~1779913180);
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_5 [12]);
                                var_19 = ((arr_12 [11] [11] [i_2] [i_0] [i_4]) | var_11);
                                var_20 = arr_9 [i_0];
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = var_14;
            }
        }
    }
    var_21 = (2515054145 > 2478615649);
    var_22 = var_13;
    var_23 -= (min(-1700905341, (((((var_0 ? var_2 : var_13)) >= var_4)))));
    #pragma endscop
}
