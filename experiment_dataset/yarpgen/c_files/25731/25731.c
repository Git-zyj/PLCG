/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (((((max((arr_6 [i_0] [i_0]), var_4))) ? -3579 : var_9)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [10] [i_1 - 4] [i_1] [10] [i_3] = 4205280020441415942;
                            arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] = ((+(((arr_2 [i_2 - 2]) ? 10289 : (arr_2 [i_2 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
