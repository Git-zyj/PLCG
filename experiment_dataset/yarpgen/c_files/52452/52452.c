/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((var_5 + 2147483647) >> (100 - 99))))));
                var_13 = (max(var_13, -8515674884735101560));
            }
        }
    }
    var_14 = (((min(((1422476435 << (119 - 92))), (149 != var_7)))) ? ((((max(106, 2065615112990426217))) ? (~var_3) : var_9)) : (min(160, var_3)));
    var_15 = (max(var_15, var_8));
    #pragma endscop
}
