/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (4294967295 != 2667679666791963919)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 *= 14277003373413207317;
                var_18 |= (((var_11 + 38) ? ((~(arr_0 [i_0] [9]))) : 0));
            }
        }
    }
    #pragma endscop
}
