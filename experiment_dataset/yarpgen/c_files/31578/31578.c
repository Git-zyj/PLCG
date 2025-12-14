/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 16694866774633530897;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 += ((!(((((max(var_9, var_3))) ? (max((arr_1 [i_0]), 16694866774633530898)) : (((min(0, var_0)))))))));
                var_14 = 950709643;
            }
        }
    }
    #pragma endscop
}
