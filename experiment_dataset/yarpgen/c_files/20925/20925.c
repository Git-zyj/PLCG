/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 |= (max((-var_2 / 9223372036854775807), ((~(-9223372036854775807 - 1)))));
                var_11 = (max(var_11, 902125020570286367));
            }
        }
    }
    var_12 |= ((var_9 ? (((min((max(1, var_0)), -32766)))) : (min(9223372036854775807, -32766))));
    #pragma endscop
}
