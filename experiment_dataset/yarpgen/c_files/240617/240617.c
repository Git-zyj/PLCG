/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 += (((((max(((-52 ? (-127 - 1) : var_0)), (arr_3 [i_0]))) + 2147483647)) >> (((arr_4 [i_0]) - 32))));
                arr_7 [i_0] [i_0] = (arr_4 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = -var_4;
                                var_17 = (min(var_17, -9223372036854775807));
                            }
                        }
                    }
                }
                var_18 = (arr_3 [i_0 - 3]);
            }
        }
    }
    var_19 = (min(var_12, var_4));
    #pragma endscop
}
