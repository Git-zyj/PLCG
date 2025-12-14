/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(var_9, -1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (min((((~((min(var_3, (arr_10 [i_0 + 1] [7] [i_1] [i_2] [16] [i_4]))))))), 3452255628));
                                arr_11 [i_2] [i_1] = max(var_1, var_9);
                                var_13 = (!127);
                            }
                        }
                    }
                    var_14 = (~-var_8);
                    var_15 = var_6;
                }
            }
        }
    }
    var_16 &= var_10;
    var_17 &= (!-var_4);
    #pragma endscop
}
