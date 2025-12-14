/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = (var_3 * -var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 += (((-(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                var_14 = var_9;
                            }
                        }
                    }
                }
            }
        }
        var_15 = (var_8 - var_5);
        var_16 = var_0;
    }
    var_17 = (((((max(var_7, var_0)) % (var_12 | var_7))) <= ((((var_2 + var_8) ? var_10 : (var_2 + var_5))))));
    #pragma endscop
}
