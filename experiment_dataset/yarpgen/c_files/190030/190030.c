/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max(((1074242590 ? 42829 : 255)), (((-32767 - 1) ? 18446744073709551373 : 251))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_9));
                var_18 = (min(var_18, ((min(((~((var_8 ? var_14 : (arr_3 [i_0]))))), 157)))));
                var_19 = ((255 ? -25 : -1475794407));
            }
        }
    }
    #pragma endscop
}
