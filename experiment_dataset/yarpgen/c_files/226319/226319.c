/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (var_5 ? (((-(arr_1 [i_0])))) : 16618915291082496384);
                var_12 = (min(var_12, var_1));
                var_13 = -19587;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_14 = (((var_9 <= 10275705128288732221) / (~8171038945420819394)));
                    var_15 -= ((((0 * (var_0 >= var_4))) < var_8));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = var_5;
    #pragma endscop
}
