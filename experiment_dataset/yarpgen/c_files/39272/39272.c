/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_18 *= (((16590001922178943116 >> 1) ? (((~64) ? (min(18428729675200069632, 1858825809266186875)) : (((min(-41, 222)))))) : ((73 ? (1858825809266186882 * 0) : (18014398509481983 <= -32754)))));
                arr_5 [i_0] [i_0] = ((((min(18428729675200069632, -32754))) || (((-127 - 1) < (!54849)))));
            }
        }
    }
    var_19 = var_17;
    #pragma endscop
}
