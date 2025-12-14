/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (min(1207565896947715542, (0 != -512)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((~(max((max(var_9, var_19)), var_19))));
                var_22 = (min(var_22, (arr_0 [i_0])));
            }
        }
    }
    var_23 = (max((max((((var_19 + 9223372036854775807) >> 1)), (~var_9))), (var_0 % var_19)));
    #pragma endscop
}
