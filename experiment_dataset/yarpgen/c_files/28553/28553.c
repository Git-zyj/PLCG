/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((239 ? (arr_4 [i_1 + 1] [i_1 - 1] [i_0]) : 12176466503032197195));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-((60912 ? 12176466503032197195 : (~60))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_4] = (min(var_0, (((arr_12 [i_1 + 2]) ? (arr_13 [10] [i_0] [i_1 + 2] [i_3] [i_0] [9]) : -12176466503032197195))));
                                var_13 -= (!129);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
