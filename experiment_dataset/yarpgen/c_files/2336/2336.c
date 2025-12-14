/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_9));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [15] [15] [i_3] [i_3] = var_10;
                            var_14 = var_12;
                        }
                    }
                }
                var_15 *= (min((((~var_6) + 1354869626690630280)), ((1 / ((17091874447018921325 ? 17091874447018921336 : 18446744073709551596))))));
                var_16 = ((((max(17091874447018921356, 17091874447018921324))) ? var_5 : var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                var_17 *= 17091874447018921325;
                var_18 = (max(var_18, (!19521)));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
