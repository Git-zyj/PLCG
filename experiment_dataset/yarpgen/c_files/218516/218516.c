/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_4 [i_0] [i_0]) ? var_2 : (((((var_5 ? var_17 : var_11)))))));
                var_20 = ((((~(((arr_3 [i_0]) & 0)))) ^ (~var_4)));
            }
        }
    }
    var_21 |= ((~((var_3 ? ((9223372036854775806 ? var_9 : var_16)) : var_19))));
    var_22 = (max(var_22, (((var_12 ? (((-32767 - 1) ? (var_14 / var_16) : var_16)) : var_8)))));
    var_23 = ((-(var_2 / -1192589928)));
    #pragma endscop
}
