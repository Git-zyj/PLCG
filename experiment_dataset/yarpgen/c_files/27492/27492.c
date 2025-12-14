/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, var_9));
                                arr_12 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] = var_7;
                            }
                        }
                    }
                    arr_13 [i_1] = var_10;
                    arr_14 [10] &= var_8;
                    arr_15 [i_2] [8] [i_2] [i_1] = var_6;
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
