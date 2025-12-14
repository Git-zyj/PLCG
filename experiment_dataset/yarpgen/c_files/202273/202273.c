/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((!95) - var_6)))));
                var_17 = (max(var_17, (((95 >> (3319064125 - 3319064100))))));
                var_18 &= -6;
            }
        }
    }
    var_19 = ((((max(-12, 84))) ? 1192576487580060113 : ((6034826040331517923 ? 3410061191030691310 : 1022999319521714137))));
    #pragma endscop
}
