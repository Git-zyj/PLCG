/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (arr_0 [i_1]);

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [23] [23] [i_2] [i_3] [23] = 127;
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = 9223372036854775807;
                        arr_17 [i_0] [i_0] |= var_2;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [15] [i_1] = 1444479750;
                        var_17 *= 248;
                        var_18 = (-9223372036854775807 - 1);
                    }
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
