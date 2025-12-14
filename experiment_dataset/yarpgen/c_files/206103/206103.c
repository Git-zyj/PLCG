/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = 0;
                            arr_12 [i_0] [i_0] [i_1] [13] [i_3] [i_0] = 31252;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
