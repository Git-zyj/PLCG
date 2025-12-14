/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -var_3;
    var_20 += var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 += (max((max(((max(var_0, var_9))), (-9223372036854775807 - 1))), ((max((arr_4 [i_0 - 2] [i_0 + 1]), 1)))));
                arr_5 [i_0] [i_0] [i_0] = (max(((min((arr_1 [i_1]), ((var_1 ? var_12 : 2096128))))), (min((min(var_3, 9223372036854775807)), (((!(arr_3 [i_0]))))))));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
