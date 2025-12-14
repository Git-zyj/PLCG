/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? (~46464) : ((((min(var_10, var_9))) - var_12))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] [i_0] [14] [i_0 + 1] = ((~(arr_1 [i_0 + 1])));
                                var_17 = (((((18 << 1) ? var_9 : (arr_9 [i_0] [13] [i_2 - 1] [i_3] [i_4]))) >> (((min(((1486419824 ? -12060286 : -350057295)), (!-12060286))) + 12060300))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = min(((var_10 * (arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]))), (arr_6 [13] [i_2 + 1] [i_2 + 1] [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
