/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = (arr_5 [i_3 + 1] [i_2] [i_0] [i_0]);
                            var_17 = var_2;
                        }
                    }
                }
                var_18 = (((max((arr_2 [i_0 - 1] [6] [i_0]), var_7)) < (arr_5 [i_0] [i_1] [15] [i_1])));
                arr_11 [i_0] [i_0] = ((((((arr_7 [i_0 + 2] [i_0 + 2]) * (arr_4 [i_0 + 1] [i_0 - 1])))) && ((!(arr_7 [i_0 - 1] [i_0 + 2])))));
                arr_12 [i_0] = ((((20 ? -1447949488 : -var_8)) * (var_7 / -1447949488)));
            }
        }
    }
    var_19 = var_0;
    var_20 = ((((((var_4 <= ((var_0 ? var_9 : var_0)))))) != var_0));
    #pragma endscop
}
