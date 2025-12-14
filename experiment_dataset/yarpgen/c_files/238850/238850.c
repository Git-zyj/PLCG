/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_3;
    var_20 = (min((-127 - 1), 114));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = ((~(~var_8)));
                            arr_12 [i_1] [i_1] = var_9;
                            var_23 = ((((((var_9 / var_15) % var_8))) && (((var_18 ? (((arr_6 [i_1] [i_2] [i_3]) * (arr_1 [i_2]))) : (~251))))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = (max(((9223372036854775807 ? (arr_2 [i_3]) : 5)), (~var_16)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
