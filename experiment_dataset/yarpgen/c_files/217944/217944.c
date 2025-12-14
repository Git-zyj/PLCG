/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (((((arr_1 [i_0] [i_0]) ? 27455 : ((var_3 ? var_9 : var_4)))) << (27455 - 27438)));
                arr_6 [i_0] [i_1] = 126;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = (max(((max(27455, (!-127)))), -127));
                            var_13 *= (arr_4 [i_0]);
                            var_14 = ((-27442 ? 3161 : 1));
                            var_15 = (max(549755813880, (arr_3 [i_2] [i_2])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_16 = 549755813880;
                                var_17 = (((arr_1 [i_0] [i_1]) ? 27455 : 1233700003));
                            }
                        }
                    }
                }
                var_18 = (46552 >> 1);
            }
        }
    }
    var_19 ^= ((var_9 >> (var_4 + 155)));
    var_20 = var_1;
    var_21 = (max((!1), var_9));
    #pragma endscop
}
