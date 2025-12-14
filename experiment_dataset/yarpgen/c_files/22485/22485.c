/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] = ((2147483647 ? 68 : 223));
                            arr_12 [i_0] [i_2] = ((1 ? 0 : (((!0) ? 185 : ((1 ? 4015814420 : var_7))))));
                        }
                    }
                }
                arr_13 [i_0] = ((1 ? 255 : 375527591312996425));
            }
        }
    }
    var_13 = (74 ^ 1);
    var_14 = var_3;
    var_15 = -68;
    var_16 = (255 < 1);
    #pragma endscop
}
