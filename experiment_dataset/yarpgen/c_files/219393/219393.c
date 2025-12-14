/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [1] [i_0] [i_0] [1] = (((1970017030 >> -4294967294) * (19444 != 501789590)));
                    arr_9 [i_1] [i_0] = ((((0 ? var_0 : 0)) ^ 28971));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] = (~28971);
                                arr_16 [15] [i_1] [i_2] [i_4] [i_4 - 1] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = 7341;
    var_13 = ((~((var_10 ? var_2 : 6395))));
    var_14 = ((var_4 ? 65535 : var_8));
    #pragma endscop
}
