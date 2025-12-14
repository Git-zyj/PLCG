/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = var_5;
                var_14 = -18640;
            }
        }
    }
    var_15 = (min((((min(4404909877473734013, 18615)) & (min(var_3, -1)))), (min((min(21324, var_4)), (~-18640)))));
    var_16 = min(((-(-4223 + var_4))), ((min((min(-14362, -7960)), 8632))));
    #pragma endscop
}
