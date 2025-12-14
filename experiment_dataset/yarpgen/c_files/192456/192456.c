/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [i_0] = (arr_5 [i_0] [i_3]);
                            arr_11 [i_2] = var_1;
                        }
                    }
                }
                var_10 = (arr_4 [i_1 - 1] [i_0]);
                var_11 = (min(var_11, 255));
            }
        }
    }
    var_12 = (max(var_12, 15569));
    #pragma endscop
}
