/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((8543813160874905868 ? (((var_11 < 6864905344201615805) ? (max(var_7, -4557648410293525589)) : 0)) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(209, ((9223372036854775807 ? 209 : 8626))));
                var_15 += 8947049891157115249;
            }
        }
    }
    #pragma endscop
}
